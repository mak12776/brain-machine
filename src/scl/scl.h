
#ifndef SCL_H
#define SCL_H 1

/*
*       Simple C Library
*/

/*
*   useful macros:
*       SCL_SAFE
*       SCL_CHECK_LIMITS
*       SCL_USE_UNSIGNED_CHAR
*
*       SCL_NO_BUFFER           do not include src/buffer.h
*       SCL_NO_SAFE_IO          do not include src/sio.h
*/

/* default macros */
#define SCL_NO_BUFFER
#define SCL_NO_SAFE_IO

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <time.h>

#ifndef SCL_SAFE
#define SCL_SAFE 1
#endif

#ifdef COMPILE_SCL
#define SCL_DLL_EXPORT __declspec(dllexport)
#else
#define SCL_DLL_EXPORT __declspec(dllimport)
#endif

#include "src/check_limits.h"
#include "src/size.h"
#include "src/exit_codes.h"
#include "src/printf.h"
#include "src/error.h"
#include "src/math.h"
#include "src/random.h"


#ifdef SCL_USE_UNSIGNED_CHAR
#define CHAR unsigned char
#else
#define CHAR char
#endif // SCL_USE_UNSIGNED_CHAR

#include "src/io.h"
#include "src/string.h"

#ifndef SCL_NO_BUFFER
#include "src/buffer.h"
#endif  // SCL_NO_BUFFER

#ifndef SCL_NO_SAFE_IO
#include "src/safe_io.h"
#endif  // SCL_NO_SAFE_IO

#undef CHAR


#undef SCL_DLL_EXPORT

#endif // SCL_H
