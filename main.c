#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
  int chars; 
 
  typedef struct{
    FILE **fpArr;
    int chars;
  }CC_FILES;

  CC_FILES instance;


 instance.fpArr = malloc(sizeof(FILE*) * argc);

if (instance.fpArr == NULL){
    printf("couldnt open file");
    return 1;
  }


  for (int i=0; i < argc-1; i++){
    instance.fpArr[i] = fopen(argv[i+1], "r");
    while ((chars = fgetc(instance.fpArr[i])) != EOF){
      char msg2 = chars;
      printf("%c", msg2);
    }
    fclose(instance.fpArr[i]);
  }
  // filepointer = fopen("1g.txt", "r");
  //filepointer = fopen(argv[1], "r");

  // implement multiple argv's 
  // implement multiple threads that divides the process
  

  return 0;
}
