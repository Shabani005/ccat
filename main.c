#include <stdio.h>
#include <stdlib.h>

 typedef struct{
    FILE **fpArr;
    int chars;
  }CC_FILES;

// implement multithreading that divides the process
int main(int argc, char **argv){
 
  CC_FILES instance;
  instance.fpArr = malloc(sizeof(FILE*) * argc);

  if (instance.fpArr == NULL){
    printf("couldnt open file");
    return 1;
  }

  int chars;
  for (int i=0; i < argc-1; i++){
    instance.fpArr[i] = fopen(argv[i+1], "r");
    while ((chars = fgetc(instance.fpArr[i])) != EOF){
      char msg2 = chars;
      printf("%c", msg2);
    }
    fclose(instance.fpArr[i]);
  }  

  return 0;
}
