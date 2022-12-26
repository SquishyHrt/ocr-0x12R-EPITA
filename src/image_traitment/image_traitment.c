/*
 * =====================================================================================
 *
 *       Filename:  image_traitment.c
 *
 *    Description:  Perform the image traitment
 *
 *        Version:  1.0
 *        Created:  11/19/2022 16:15:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Paolo Wattebled
 *   Organization:  Ox12R
 *
 * =====================================================================================
 */
#include "include/image_traitment.h"

void image_traitment(Image *image)
{
    // Preprocess

    // Grayscale
    grayscale(image);

    // Blur
    gaussian_blur(image);

    // Binarization thechniques

    // Adaptive threshold
    adaptative_threshold(image);

    // Remove small blobs
    remove_small_blob(image);

    // Morphological operation
    erosion(image);

    // Find the corners of the grid
    Square corners = find_corners(image);

    // Resize, rotate and correct perspective
    homographic_transform(image, &corners, 756);
    save_image(image, "homographic_transform_");
}
