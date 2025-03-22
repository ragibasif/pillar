#ifndef __UTILS_H__
#define __UTILS_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <ctype.h> /* size_t*/
#include <stdarg.h>
#include <stdbool.h> /* true, false, bool */
#include <stdio.h> /*Includes the standard I/O library for functions like `printf`.*/
#include <stdlib.h> /*Includes the standard library for functions like `malloc`, `free`, and `realloc`.*/
#include <string.h> /*Includes the string manipulation library for functions like `memcpy`.*/

/*ANSI color codes for printing colored text in C projects.*/

/*Macros defining color codes.*/
#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"

#define RESET "\x1b[0m"

/*Function that prints colored text.*/

extern void debug_printf(char *file, int line, const char *format, ...);

/*Example usage:*/
/*printf(RED "Warning!" RESET "\n");*/
/*printf(GREEN "Success!" RESET "\n");*/
/*debug_printf(__FILE__, __LINE__, RED, "Warning: %s!\n", "Disk almost full");*/
/*debug_printf(__FILE__, __LINE__, GREEN, "Success: %d files processed\n",
 * 42);*/
/*debug_printf(__FILE__, __LINE__, CYAN, "Normal cyan text\n");*/

#if !defined(CLEAR_DEBUG)
/* turns on the memory debugging system */
/*#define SET_DEBUG*/
#endif // !defined(CLEAR_DEBUG)

#if !defined(FORCED_CRASHED)
/* turns on the crash on exit */
/*#define FORCED_CRASHED */
#endif //! defined(FORCED_CRASHED)

#ifdef SET_DEBUG

#endif // SET_DEBUG

#ifdef FORCED_CRASHED

/* function guaranteed to crash (Writes to NULL).*/
extern void forced_crashed(unsigned int i);

#define exit(n) forced_crashed(n)
/* over writing exit(0)  with a function guaraneed to crash.*/

#endif // FORCED_CRASHED

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __UTILS_H__
