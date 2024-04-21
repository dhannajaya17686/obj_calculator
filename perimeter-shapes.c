#include "area-shapes.h"
#include <math.h>

float calculateSquarePerimeter(int *args, int numArgs){
  return 2*(args[0]+args[1]);
}

float calculateCirclePerimeter(int *args, int numArgs){
  return 2 * M_PI * args[0];
}

float calculateRombusPerimeter(int *args, int numArgs){
  return 4 * args[0];
}

float calculateCircularSectorPerimeter(int *args, int numArgs){
  return args[0] * (M_PI + 2);
}

float calculateHexagonPerimeter(int *args, int numArgs){
  return args[0]*6;
}

float calculateOctagonPerimeter(int *args, int numArgs){
  return args[0]*8;
}

float calculateTrianglePerimeter(int *args, int numArgs){
  return args[0]+args[1]+args[3];
}
