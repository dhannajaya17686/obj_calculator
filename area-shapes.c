#include "area-shapes.h"
#include <math.h>

float calculateSquareArea(int *args, int numArgs) {
    return args[0] * args[1];
}

float calculateCircleArea(int *args, int numArgs) {
    return M_PI * args[0] * args[0];
}

float calculateTriangleArea(int *args, int numArgs) {
    return 0.5 * args[0] * args[1];
}

float calculateRombusArea(int *args, int numArgs) {
    return 0.5 * args[0] * args[1];
}

float calculateParallogramArea(int *args, int numArgs) {
    return args[0] * args[1];
}

float calculateTrapazoidArea(int *args, int numArgs) {
    return 0.5 * (args[0] + args[1]) * args[2];
}

float calculateHexagonArea(int *args, int numArgs) {
    return (3 * sqrtf(3) * args[0] * args[0]) / 2;
}

float calculateOctagonArea(int *args, int numArgs) {
    return 2 * (1 + sqrtf(2)) * args[0] * args[0];
}

float calculateEllipseArea(int *args, int numArgs) {
    return M_PI * args[0] * args[1];
}

float calculateCircularSectorArea(int *args, int numArgs) {
    return (args[1] * args[0] * args[0]) / 2;
}

