#include "area-shapes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int *allocateValuesArray(int numVals) {
  int *arr = (int *)malloc(numVals * sizeof(int));
  if (arr == NULL) {
    fprintf(stderr, "Memeory Allocation Failed \n");
    exit(1);
  }
  return arr;
}

const char HELP_CMD[] = "--help";
int main(int argc, char *argv[]) {
  // INPUT AGGRAGATION LAYER START //
  // Checks if the argument count is correct
  oprSet selected_operation;
  ShapeData inputData;
  if (argc == 1 || argc == 3 || argc > 6) {
    printf("%s", MAIN_PRINT_TEXT);
    return 0;
  }
  // Check if the comment count is correct
  if (argc == 2 && strcpy(argv[1], HELP_CMD)) {
    printf("%s", MAIN_HELP_TEXT);
    return 0;
  }

  if (argc == 4 || argc <= 6) {
    strncpy(inputData.shapeName, argv[1], sizeof(inputData.shapeName));
    strncpy(inputData.operation, argv[2], sizeof(inputData.operation));
    if (strcasecmp(inputData.operation, "Area") == 0) {
      selected_operation = AREA;
    } else if (strcasecmp(inputData.operation, "Perimeter") == 0) {
      selected_operation = PERIMETER;
    } else if (strcasecmp(inputData.operation, "Volume") == 0) {
      selected_operation = VOLUME;
    };
    int numVals = argc - 3;
    inputData.numVals = numVals;
    inputData.values = allocateValuesArray(inputData.numVals);
    for (int i = 0; i < inputData.numVals; i++) {
      inputData.values[i] = atoi(argv[i + 3]);
    }
  }
  // INPUT AGGRAGATION LAYER STOPS //

  // DATA AUTHENTICAIOTN LAYER START//
  int shapefoundSIGNAL = 0;
  for (int i = 0; i < numShapes; i++) {
    if (strcasecmp(inputData.shapeName, shapes[i].shapebuf) == 0) {
      shapefoundSIGNAL = 1;
      switch (selected_operation) {
      case AREA:
        if (shapes[i].areaFunction != NULL) {
          inputData.calculationFunction = shapes[i].areaFunction;
        } else {
          printf("This shape does not support this operation \n");
          exit(1);
        }

        if (inputData.numVals != shapes[i].minAreaArgs) {
          printf("Incorrect number of arguments type --help\n");
        }
        break;
      case PERIMETER:
        if (shapes[i].perimeterFunction != NULL) {
          inputData.calculationFunction = shapes[i].perimeterFunction;
        } else {
          printf("This shape does not support this operation \n");
          exit(1);
        }

        if (inputData.numVals != shapes[i].minPerimeterArgs) {
          printf("Incorrect number of arguments type --help\n");
        }
        break;
      case VOLUME:
        if (shapes[i].volumeFunction != NULL) {
          inputData.calculationFunction = shapes[i].volumeFunction;
        } else {
          printf("This shape does not support this operation \n");
          exit(1);
        }
        if (inputData.numVals != shapes[i].minVolumeArgs) {
          printf("Incorrect number of arguments type --help\n");
        }
        break;
      default:
        printf("Incorrect Arugument type --help\n");
        exit(1);
      }
    }
    if (shapefoundSIGNAL == 1) {
      break;
    }
  }
  if (shapefoundSIGNAL == 0) {
    printf("The reqesed shape not found please type --help \n");
  }
  // DATA AUTHENTICATION LAYER ENDS//

  // CALCULATION LAYTER STARTS//
  printf("%f\n",
         inputData.calculationFunction(inputData.values, inputData.numVals));
  // CALCULATION LAYER ENDS//

  free(inputData.values);
  return 0;
}
