/*#define SET_DEBUG*/
#define FORCED_CRASHED
#include "utils.h"

#include <stdbool.h>/* true, false, bool */
#include <stdio.h> /*Includes the standard I/O library for functions like `printf`.*/
#include <stdlib.h> /*Includes the standard library for functions like `malloc`, `free`, and `realloc`.*/
#include <string.h> /*Includes the string manipulation library for functions like `memcpy`.*/

static void test(void) {
  debug_printf(__FILE__, __LINE__, "debug_printf %d\n", 0);
}
int main(int argc, char **argv) {

  printf("argc: %d\n", argc);
  int i;
  for (i = 0; i < argc; i++) {
    printf("argv[%d]: %s\n", i, argv[i]);
    puts(__FILE__);
    printf("%d\n", __LINE__);
  }

  test();

  exit(0);

  return 0;
}
