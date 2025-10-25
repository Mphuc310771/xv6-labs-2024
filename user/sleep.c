#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2){
    fprintf(2, "syntax error\n");
    exit(1);
  } else {
    for (int i = 0; argv[1][i] ; i++) {
      if (!(argv[1][i] >= '0' && argv[1][i] <= '9')) {
        fprintf(2, "invalid argument\n");
        exit(1);
      }
    }
    sleep(atoi(argv[1]));
    exit(0);
  }
}