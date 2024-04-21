#include "area-shapes.h"
#include <math.h>

float calculateCubeVolume(int *args , int numArgs){
  return args[0]*args[0]*args[0] ;
}

float calculateConeVolume(int *args,int numArgs){
  return (M_PI * args[0]*args[0]*args[1])/3;
}

float calculateCylinnderVolume(int *args,int numArgs) {
  return M_PI*args[0]*args[0]*args[1];
}

float calculateEllipsoidVolume(int *args,int numArgs){
  return (4*M_PI*args[0]*args[1]*args[2])/3;
}

float calculateSphereVolume(int *args,int numArgs){
  return (4*M_PI*args[0]*args[0]*args[0])/3;
}

float calculatePrismVolums(int *args,int numArgs){
  return (args[0]*args[1])*args[2];
}

float calculatePyramidVoulume(int *args,int numArgs){
  return (args[0]*args[1]*args[2])/3;
}

float calculateTetrahedron(int *args,int numArgs){
  return (sqrt(2)*args[0]*args[0]*args[0])/12;
}

float calculateCuboidVolume(int *args,int numArgs){
  return args[0]*args[1]*args[2];
}
