#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct Textures {
    int id;
    char* path;
} Textures;

Textures* mainTextures() {
    int* size = 4;
    Textures* textures = (Textures*)malloc((*size) * sizeof(Textures));

    textures[0].id = 0;
    textures[0].path = strdup("./media/Terrain/Ground/Shadows.png");

    textures[0].id = 1;
    textures[0].path = strdup("./media/Terrain/Ground/Tilemap_Elevation.png");

    textures[0].id = 2;
    textures[0].path = strdup("./media/Terrain/Ground/Tilemap_Flat.png");

    textures[0].id = 3;
    textures[0].path = strdup("./media/Terrain/Bridge/Bridge_All.png");

    return textures;
}
