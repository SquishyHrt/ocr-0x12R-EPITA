#ifndef IMAGE_TRAITMENT_H
#define IMAGE_TRAITMENT_H

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "preprocess.h"
#include "utilis_image.h"
#include "gaussian_filter.h"
#include "blob.h"
#include "homographic_transform.h"
#include "adaptative_threshold.h"
#include "segmentation.h"
#include "write_number.h"
#include "../../sudoku_solver/sudoku_solver.h"

void image_traitment(Image *image);

#endif
