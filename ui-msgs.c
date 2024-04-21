#include "area-shapes.h"
const char MAIN_PRINT_TEXT[] = "Please type --help\n";
const char MAIN_HELP_TEXT[] =
    "Usage: [program_name] [shape_name] [operation] [values...]\n\n"
    "[program_name] is the name of the program.\n\n"
    "Supported shapes and operations:\n\n"
    "Area calculations:\n"
    "- Square: area (side_length)\n"
    "- Circle: area (radius)\n"
    "- Triangle: area (base_height, height)\n"
    "- Rombus: area (diagonal1, diagonal2)\n"
    "- Parallelogram: area (base, height)\n"
    "- Trapezoid: area (base1, base2, height)\n"
    "- Hexagon: area (side_length)\n"
    "- Octagon: area (side_length)\n"
    "- Ellipse: area (semi-major_axis, semi-minor_axis)\n"
    "- CircularSector: area (radius, angle_in_degrees)\n\n"
    "Perimeter calculations:\n"
    "- Square: perimeter (side_length)\n"
    "- Circle: perimeter (radius)\n"
    "- Rombus: perimeter (side_length)\n"
    "- CircularSector: perimeter (radius, angle_in_degrees)\n"
    "- Hexagon: perimeter (side_length)\n"
    "- Octagon: perimeter (side_length)\n"
    "- Triangle: perimeter (side1, side2, side3)\n\n"
    "Volume calculations:\n"
    "- Cube: volume (side_length)\n"
    "- Cone: volume (radius, height)\n"
    "- Cylinder: volume (radius, height)\n"
    "- Ellipsoid: volume (semi-major_axis, semi-minor_axis, height)\n"
    "- Sphere: volume (radius)\n"
    "- Prism: volume (base_area, height)\n"
    "- Pyramid: volume (base_area, height)\n"
    "- Tetrahedron: volume (side_length)\n"
    "- Cuboid: volume (length, width, height)\n\n"
;
