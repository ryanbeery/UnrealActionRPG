# Asset Store Content

This project uses content from various asset stores. The following folders are **not** tracked in Git and must be downloaded separately:

## Required Asset Store Content

After cloning this repository, you need to download and place the following content in the `Content/` folder:

- **BlackAlder** - Foliage pack from Fab store
- **Cinematics** - Cinematic assets
- **Fab** - Various Fab store content packs
- **ForestLandscape** - Forest landscape assets
- **LandscapePackOne** - Landscape pack #1
- **LandscapePackTwo** - Landscape pack #2
- **Light_Foliage** - Foliage lighting assets
- **MSPresets** - Material preset assets
- **OWD_Nanite_Base_Grass** - Nanite grass assets
- **RealisticDesertPack** - Desert environment pack
- **StarterContent** - Unreal Engine starter content (optional, but some levels may reference it)
- **WaterPlane** - Water plane assets

## What IS Tracked

The following folders **are** tracked in Git and will be available after cloning:

- **Landscape/** - Locally created landscape objects
- **Maps/** - Project maps/levels
- **StylizedNaturePack/** - Content from the Udemy course
- **__ExternalActors__/** - UE5 One File Per Actor data (required for levels)
- **__ExternalObjects__/** - UE5 One File Per Actor data (required for levels)

## Setup Instructions

1. Clone this repository
2. Download the asset store content listed above from their respective stores (Fab, Unreal Marketplace, etc.)
3. Place each content pack folder directly under `Content/` (e.g., `Content/BlackAlder/`, `Content/Fab/`, etc.)
4. Open the project in Unreal Engine - any missing references will show as broken until you install the content

## Notes

- Asset store content is excluded from Git to keep repository size manageable
- Each team member is responsible for obtaining the content from the asset stores
- If you're unsure where to get a specific pack, check with the project maintainer or the asset store where it was originally purchased
