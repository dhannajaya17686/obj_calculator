#include "area-shapes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ShapeFunction shapes[] = {
    {
        "Square",
        2, // Minimum area arguments
        2, // Minimum perimeter arguments
        0, // No volume arguments
        calculateSquareArea,
        calculateSquarePerimeter,
        NULL  // No volume function for a square
    },
    {
        "Circle",
        1, // Minimum area arguments
        1, // Minimum perimeter arguments
        0, // No volume arguments
        calculateCircleArea,
        calculateCirclePerimeter,
        NULL  // No volume function for a circle
    },
    {
        "Triangle",
        3, // Minimum area arguments for a generic triangle
        3, // Minimum perimeter arguments for a generic triangle
        0, // No volume arguments
        calculateTriangleArea,
        calculateTrianglePerimeter,
        NULL  // No volume function for a generic triangle
    },
    {
        "Rombus",
        2,
        2,
        0,
        calculateRombusArea,
        calculateRombusPerimeter,
        NULL  // No volume function for a rhombus
    },
    {
        "Parallelogram",
        2,
        2,
        0,
        calculateParallogramArea,
        NULL,
        NULL  // No volume function for a parallelogram
    },
    {
        "Trapezoid",
        3,
        3,
        0,
        calculateTrapazoidArea,
        NULL,
        NULL  // No volume function for a trapezoid
    },
    {
        "Hexagon",
        1,
        1,
        0,
        calculateHexagonArea,
        calculateHexagonPerimeter,
        NULL  // No volume function for a hexagon
    },
    {
        "Octagon",
        1,
        1,
        0,
        calculateOctagonArea,
        calculateOctagonPerimeter,
        NULL  // No volume function for an octagon
    },
    {
        "Ellipse",
        2,
        0,
        0,
        calculateEllipseArea,
        NULL,  // No perimeter function for an ellipse
        NULL  // No volume function for an ellipse
    },
    {
        "Circular Sector",
        2,
        2,
        0,
        calculateCircularSectorArea,
        calculateCircularSectorPerimeter,
        NULL  // No volume function for a circular sector
    },
    {
        "Cube",
        0, // No area arguments
        0, // No perimeter arguments
        1, // Minimum volume arguments
        NULL,  // No area function for a cube
        NULL,  // No perimeter function for a cube
        calculateCubeVolume
    },
    {
        "Cone",
        0,
        0,
        2,
        NULL,  // No area function for a cone
        NULL,  // No perimeter function for a cone
        calculateConeVolume
    },
    {
        "Cylinder",
        0,
        0,
        2,
        NULL,  // No area function for a cylinder
        NULL,  // No perimeter function for a cylinder
        calculateCylinnderVolume, 
    },
    {
        "Ellipsoid",
        0,
        0,
        3,
        NULL,  // No area function for an ellipsoid
        NULL,  // No perimeter function for an ellipsoid
        calculateEllipsoidVolume
    },
    {
        "Sphere",
        0,
        0,
        1,
        NULL,  // No area function for a sphere
        NULL,  // No perimeter function for a sphere
        calculateSphereVolume
    },
    {
        "Prism",
        0,
        0,
        3,
        NULL,  // No area function for a prism
        NULL,  // No perimeter function for a prism
        calculatePrismVolums
    },
    {
        "Pyramid",
        0,
        0,
        3,
        NULL,  // No area function for a pyramid
        NULL,  // No perimeter function for a pyramid
        calculatePyramidVoulume 
    },
    {
        "Tetrahedron",
        0,
        0,
        1,
        NULL,  // No area function for a tetrahedron
        NULL,  // No perimeter function for a tetrahedron
        calculateTetrahedron, 
    },
    {
        "Cuboid",
        0,
        0,
        3,
        NULL,  // No area function for a cuboid
        NULL,  // No perimeter function for a cuboid
        calculateCuboidVolume
    },
    {
        "Unknown",
        0,
        0,
        0,
        NULL,  // No area function for unknown shape
        NULL,  // No perimeter function for unknown shape
        NULL   // No volume function for unknown shape
    },
};

const int numShapes = sizeof(shapes) / sizeof(ShapeFunction);
