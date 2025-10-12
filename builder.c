#define NB_IMPLEMENTATION
#include "nb.h"

int main(int argc, char** argv){
  nb_rebuild(argc, argv);

  nb_arr cmd = {0};
  nb_append_da(&cmd, "gcc");
  nb_append_da(&cmd, "-o", "ccat");
  nb_append_da(&cmd, "main.c");
  nb_append_da(&cmd, "-static");
  nb_cmd(&cmd);
  
  nb_append_da(&cmd, "./ccat");
  nb_cmd(&cmd);
  return 0;
}
