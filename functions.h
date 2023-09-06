#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>

#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"

typedef struct Data 
{
    
    int mod;
    double timesTable;

    double Xcenter;
    double Ycenter;

    double radius;

    int red, green, blue;

} Data;

typedef struct RoseData 
{
    int points;

    int n;    
    int d;    

    double Xcenter;
    double Ycenter;

    double radius;

    int red, green, blue;

} RoseData;

void renderModFunction(SDL_Renderer* renderer, Data* d);

void renderRoseFunction(SDL_Renderer* renderer, RoseData* d);

void hsvColoring(int* color, double h, double s, double v);

#endif
