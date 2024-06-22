#include <stdio.h>

void exercise1() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (i + 1); j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void exercise2(){
  for (int i=0; i<6; i++) {
    for (int j=1; j<(i+1); j++) {
      printf("%d",j);
    }
    printf("\n");
  }
  printf("\n");
}

void exercise3(){
  for (int i=5; i>0; i--) {
    for (int j=i; j>0; j--) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void exercise4(){
  for (int i=5;i>0;i--){
    for (int j=1; j<(i+1);j++) {
      printf("%d",j);
    }
    printf("\n");
  }
  printf("\n");
}

void exercise5(){
  int k=0;
  for (int i=1; i<6; i++) {
    for (int j=i; j<=6; j++) {
      printf(" ");
    }
    for (int k=0; k<(2*i-1); k++) {
      printf("*");
    }
    printf("\n");
  }
  
}

int main(int argc, char *argv[]) {
  exercise1();
  exercise2();
  exercise3();
  exercise4();
  exercise5();
}

