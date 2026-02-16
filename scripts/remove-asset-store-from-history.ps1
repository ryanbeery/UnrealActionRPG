# Remove asset store content from Git history using git filter-repo
# This will rewrite history to remove these paths from ALL commits, freeing LFS storage

# Paths to remove (everything in Content except Landscape, Maps, StylizedNaturePack, __ExternalActors__, __ExternalObjects__)
$pathsToRemove = @(
    "Content/BlackAlder",
    "Content/Cinematics",
    "Content/Fab",
    "Content/ForestLandscape",
    "Content/LandscapePackOne",
    "Content/LandscapePackTwo",
    "Content/Light_Foliage",
    "Content/MSPresets",
    "Content/OWD_Nanite_Base_Grass",
    "Content/RealisticDesertPack",
    "Content/StarterContent",
    "Content/WaterPlane"
)

# Build git filter-repo command
$pathArgs = $pathsToRemove | ForEach-Object { "--path $_" }
$command = "git filter-repo $($pathArgs -join ' ') --invert-paths --force"

Write-Host "This will rewrite Git history to remove asset store content from ALL commits." -ForegroundColor Yellow
Write-Host "This will:" -ForegroundColor Yellow
Write-Host "  1. Remove the specified paths from every commit in history" -ForegroundColor Yellow
Write-Host "  2. Remove the remote (origin) for safety" -ForegroundColor Yellow
Write-Host "  3. Require a force-push to update GitHub" -ForegroundColor Yellow
Write-Host ""
Write-Host "Paths to remove:" -ForegroundColor Cyan
$pathsToRemove | ForEach-Object { Write-Host "  - $_" }
Write-Host ""
$confirm = Read-Host "Type 'yes' to proceed with history rewrite"

if ($confirm -ne "yes") {
    Write-Host "Aborted." -ForegroundColor Red
    exit 1
}

Write-Host "`nRunning git filter-repo..." -ForegroundColor Green
Invoke-Expression $command

if ($LASTEXITCODE -eq 0) {
    Write-Host "`nHistory rewrite complete!" -ForegroundColor Green
    Write-Host "`nNext steps:" -ForegroundColor Cyan
    Write-Host "  1. Re-add origin: git remote add origin https://github.com/ryanbeery/UnrealActionRPG.git" -ForegroundColor White
    Write-Host "  2. Force-push: git push --force origin main" -ForegroundColor White
    Write-Host "`nWARNING: Force-push will overwrite GitHub history. Make sure you're ready!" -ForegroundColor Yellow
} else {
    Write-Host "`nError: git filter-repo failed. Check output above." -ForegroundColor Red
    exit 1
}
