#include <stdio.h>



int main(int argc, char *argv[]){
  FILE *filepointer;
  int chars; 
  

  // filepointer = fopen("1g.txt", "r");
  filepointer = fopen(argv[1], "r");

  // implement multiple argv's 
  // implement multiple threads that divides the process

  if (filepointer == NULL){
    printf("couldnt open file");
    return 1;
  }
  
  while ((chars = fgetc(filepointer)) != EOF){
    char msg2 = chars;
    printf("%c", msg2);
  }

  fclose(filepointer);
  

  return 0;
}
