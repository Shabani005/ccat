#include <stdio.h>
#define NB_IMPLEMENTATION
#include "nb.h"

int main(int argc, char **argv){
  if (argc < 2){
    printf("Usage %s <file>\n", argv[0]);
  } else {
    for (int i=0; i < argc; ++i){
    if (nb_does_file_exist(argv[i])){
      printf("%s\n", nb_read_file(argv[i]));
      }
    }
  }
  return 0;
}
