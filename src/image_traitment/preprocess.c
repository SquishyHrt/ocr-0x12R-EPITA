/*
 * =====================================================================================
 *
 *       Filename:  preprocess.c
 *
 *    Description: Increase contrast - normalize the lights
 *
 *        Version:  1.0
 *        Created:  10/28/2022 02:26:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Paolo Wattebled
 *   Organization:  Fach'OCR
 *
 * =====================================================================================
 */
#include "include/preprocess.h"

void grayscale(Image *image)
{
    Pixel **pixels = image->pixels;
    unsigned int w = image->width;
    unsigned int h = image->height;

    unsigned int r, g, b;
    for (unsigned int i = 0; i < h; ++i)
    {
        for (unsigned int j = 0; j < w; ++j)
        {
            r = pixels[i][j].r;
            g = pixels[i][j].g;
            b = pixels[i][j].b;
            unsigned int average = 0.3 * r + 0.59 * g + 0.11 * b;
            set_all_pixel(image, i, j, average);
        }
    }
}

