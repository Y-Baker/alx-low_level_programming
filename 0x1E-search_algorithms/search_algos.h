#ifndef MAIN_H
#define MAIN_H
								/*HEADERS*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

								/*STRUCTURE*/

								/*DEFINATIONS*/

								/*PROTOTYPE*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
#endif /*MAIN_H*/
