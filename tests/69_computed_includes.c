#include <stdio.h>

#define MY_INCLUDE "69_computed_includes.h"
printf("defined MY_INCLUDE = '%s'\n", MY_INCLUDE);

printf("including MY_INCLUDE\n");
#include MY_INCLUDE
printf("done including MY_INCLUDE\n");

void main() {}

