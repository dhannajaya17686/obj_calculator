#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>

struct InformationStructure{
  int year;
  int month;
  int date;
};

char *NIC_NUMBER;
u_int64_t NIC_NUMUBER_VAL;
const char HELP_CMD[] = "--help";

int main(int argc, char *argv[])

{
  // Argument VAlidation Layer
  if (argc > 2 || argc == 1) {
    printf("Error occuured unexpected arguments \n type --help for more "
           "info...  ");
    return EXIT_FAILURE;
  }
  if (argc == 2 && strcasecmp(argv[1], HELP_CMD) == 0) {
    printf("example   \t ./o<space><nic_number>\n");
    return EXIT_SUCCESS;
  }
  // Data Aggregation layer
  size_t nic_size = strlen(argv[1])+1;
  NIC_NUMBER = (char *)malloc(nic_size * sizeof(char));
  if (NIC_NUMBER == NULL) {
    printf("Memory Allocation Failed \n");
    return EXIT_FAILURE;
  }
  strncpy(NIC_NUMBER,argv[1], nic_size);
  // Data Validation Layer
  NIC_NUMUBER_VAL = atol(NIC_NUMBER);
  printf("%lu\n",NIC_NUMUBER_VAL);
  printf("%lu",sizeof(NIC_NUMUBER_VAL));
  // Data excecution Layer
  struct InformationStructure result;
  result.year = atoi(NIC_NUMBER);
  return EXIT_SUCCESS;
}
