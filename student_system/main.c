
#include <asm-generic/errno-base.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main(int argc, char *argv[]) {
  // CLI READ LAYER
  if (argc == 1 || argc > 7) {
    printf("Type --help to get more info\n");
    exit(1);
  }
  if (argc == 2 && strcasecmp("--help", argv[1]) == 0) {
    printf("Dude you typed help\n");
    exit(1);
  }
  if (argc == 2 && strcasecmp("student", argv[1]) == 0) {
    printf("Dude u are in the student section\n");
    exit(1);
  }
  if (argc == 2 && strcasecmp("teacher", argv[1]) == 0) {
    printf("Dude u are in the teacher section\n");
    exit(1);
  }
  if(argc==3 && strcasecmp("--help",argv[2])==0 && strcasecmp("student", argv[1])==0){
    printf("These are the operations suppored by the student \n");
    exit(1);
  }
  if(argc==3 && strcasecmp("--help",argv[2])==0 && strcasecmp("teacher", argv[1])==0){
    printf("These are the operations suppored by the Teacher \n");
    exit(1);
  }
  if (!(strcasecmp("student",argv[1])==0)) {
    printf("we are staring the validation process\n"); 
    exit(1);
  }  


  // COMMAND VALIDATION LAYER
  // COMMAND READ LAYER (THIS LAYER TAKES IN ANY ADDITION DATA VIA A PROMPT
  // COMMMAND EXECUTION LAYER (THIS LAYER TAKES EXECUTES THE COMMAND )
  // COMMAND RETURN LAYER (THIS LAYER GIVES THE STUFF LIKE A SUCESS MSG OR
  // ANYTHING LIKE THAT
}
