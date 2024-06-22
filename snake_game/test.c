#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <termios.h>
#include <unistd.h>

enum validkeypresses  {
  forward = 'A',
  backward = 'D',
  left = 'C',
  right = 'B',
};

char getch() {
  char buf = 0;
  struct termios old = {0};
  if (tcgetattr(0, &old) < 0) {
    perror("tcsetattr()");
  }
  old.c_lflag &= ~ICANON;
  old.c_lflag &= ~ECHO;
  old.c_cc[VMIN] = 1;
  old.c_cc[VTIME] = 0;
  if (tcsetattr(0, TCSANOW, &old) < 0) {
    perror("tcsetattr ICANON");
  }
  if (read(0, &buf, 1) < 0) {
    perror("tcsetatttr ~ICANON");
  }
  return buf;
}

int start_welcome_screen() {
  FILE *file;
  char *filename = "front.ans"; // Replace with your actual .ans file name
  int ch;

  // Open the file in read mode
  file = fopen(filename, "r");
  if (file == NULL) {
    perror("Error opening file");
    return EXIT_FAILURE;
  }

  // Read and print each character until the end of the file
  while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
  }

  // Close the file
  fclose(file);
  printf("\n\t\t\t\033[1;31;5m   1) Play Game (press 1)\n");
  printf("\033[0m");
  printf("\n\t\t\t\033[1;31m   2) Hall of Fame (press 2)\n");
  printf("\n\t\t\t\033[1;31m   3) Credits (press 3)\n");
}

void start_main_game() {
  bool stopper = false;
  while (!stopper) {
    char ch;
    ch = getch();
    if (ch == 'A') {
      printf("u are going forward\n");
    }
    else if (ch == 'B') {
      printf("u are going backward\n");
    }
    else if ( ch == 'C') {
      printf("u are going right\n");
    }
    else if ( ch == 'D') {
      printf("u are going left\n");
   }
  }
}

void main_menu_operator() {
  char ch;
  ch = getch();
  if (ch == '1') {
    // Clear the screen and perform the action for "Play Game"
    printf("\033c");
    printf("\033[2J");
    printf("\033[H");
    start_main_game();
  } else if (ch == '2') {
    // Clear the screen and perform the action for "Hall of Fame"
    printf("\033c");
    printf("\033[2J");
    printf("\033[H");
    printf("Showing Hall of Fame...\n");
  } else if (ch == '3') {
    // Clear the screen and perform the action for "Credits"
    printf("\033c");
    printf("\033[2J");
    printf("\033[H");
    printf("Showing Credits...\n");
    // Add the Credits logic here
  } else {
    main_menu_operator();
  }
}
int main() {
  start_welcome_screen();
  main_menu_operator();
  return 0;
}
