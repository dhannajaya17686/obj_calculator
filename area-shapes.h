#ifndef AREA_SHAPES_H
#define AREA_SHAPES_H
//Define function prototypes for area calculatioions 
float calculateSquareArea(int *args, int numArgs);
float calculateCircleArea(int *args, int numArgs);
float calculateTriangleArea(int *args, int numArgs);
float calculateRombusArea(int *args, int numArgs);
float calculateParallogramArea(int *args, int numArgs);
float calculateTrapazoidArea(int *args, int numArgs);
float calculateHexagonArea(int *args, int numArgs);
float calculateOctagonArea(int *args, int numArgs);
float calculateEllipseArea(int *args, int numArgs);
float calculateCircularSectorArea(int *args, int numArgs);
// Define function prototypes for perimerters calculations
float calculateSquarePerimeter(int *args, int numArgs);
float calculateCirclePerimeter(int *args, int numArgs);
float calculateRombusPerimeter(int *args, int numArgs);
float calculateCircularSectorPerimeter(int *args, int numArgs);
float calculateHexagonPerimeter(int *args, int numArgs);
float calculateOctagonPerimeter(int *args, int numArgs);
float calculateTrianglePerimeter(int *args, int numArgs);
// Define function prototypes for volume calculations
float calculateCubeVolume(int *args, int numArgs);
float calculateConeVolume(int *args, int numArgs);
float calculateCylinnderVolume(int *args, int numArgs);
float calculateEllipsoidVolume(int *args, int numArgs);
float calculateSphereVolume(int *args, int numArgs);
float calculatePrismVolums(int *args, int numArgs);
float calculatePyramidVoulume(int *args, int numArgs);
float calculateTetrahedron(int *args, int numArgs);
float calculateCuboidVolume(int *args,int numArgs);
// Enum representing the types of shapes
typedef enum {
    SHAPE_SQUARE,
    SHAPE_CIRCLE,
    SHAPE_TRIANGLE,
    SHAPE_ROMBUS,
    SHAPE_PARALLELOGRAM,
    SHAPE_TRAPAZOID,
    SHAPE_HEXAGON,
    SHAPE_OCTAGON,
    SHAPE_ELLIPSE,
    SHAPE_CIRCULAR_SECTOR,
    SHAPE_CUBE,
    SHAPE_CONE,
    SHAPE_CYLINDER,
    SHAPE_ELLIPSOID,
    SHAPE_SPHERE,
    SHAPE_PRISM,
    SHAPE_PYRAMID,
    SHAPE_TETRAHEDRON,
    SHAPE_CUBOID,
    SHAPE_UNKNOWN
} ShapeType;
// Typedef for function pointers
typedef float (*DimensionFunction)(int *, int);
// Structure representing the calculation functions and parameters for a shape
typedef struct {
    char shapebuf[20];
    int minAreaArgs;
    int minPerimeterArgs;
    int minVolumeArgs;
    DimensionFunction areaFunction;
    DimensionFunction perimeterFunction;
    DimensionFunction volumeFunction;
} ShapeFunction;
//Structure to take user input A simple structure 
typedef struct {
  char shapeName[20];
  char operation[20];
  int numVals;
  int *values;
  DimensionFunction calculationFunction;
} ShapeData;
// Declaration of shapes array
typedef enum {
  AREA =1,
  PERIMETER = 2,
  VOLUME =3 ,
}oprSet;
extern ShapeFunction shapes[];

// Declare the size of the shapes array
extern const int numShapes;
extern const char MAIN_PRINT_TEXT[];
extern const char MAIN_HELP_TEXT[]; 

#endif

