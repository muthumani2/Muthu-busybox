#include "libbb.h"


int newcmd_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;

int newcmd_main(int argc, char **argv)
{
  int i;

  printf("newcmd called:\n");

  for (i = 0 ; i < argc ; i++) {

    printf("arg[%d] = %s\n", i, argv[i]);

  }

  return 0;
}
