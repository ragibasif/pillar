/*A preprocessor directive that disables debug features for this file*/
#define CLEAR_DEBUG
#include "utils.h"

void debug_printf(char *file, int line, const char *format, ...) {
  va_list args;
  va_start(args, format);
  printf("%sFile: %s ", MAGENTA, file); // Apply color to file name
  printf("%sLine: %d ", YELLOW, line);  // Apply color to line number
  printf("%s", CYAN);                   // Apply color to line number
  vprintf(format, args);                // Print the actual message
  printf(RESET);                        // Reset colors after
  va_end(args);
}

/*- Triggers a crash by dereferencing a null pointer.*/
void forced_crash(unsigned int i) {
  unsigned int *a = NULL;
  i = 0;
  a[0] = i;
}
