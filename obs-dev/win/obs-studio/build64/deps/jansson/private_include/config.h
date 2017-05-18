/* Reduced down to the defines that are actually used in the code */

/* Define to 1 if you have the <inttypes.h> (and friends) header file. */
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_SYS_TYPES_H 1

/* We must include this here, as in (eg) utf.h it will want to use
   the integer type, which in MSVC2010 will be in stdint.h
   (there is no inttypes.h in MSVC2010) */
#if defined(HAVE_STDINT_H)
#  include <stdint.h>
#elif defined(HAVE_INTTYPES_H)
#  include <inttypes.h>
#elif defined(HAVE_SYS_TYPES_H)
#  include <sys/types.h>
#endif

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the 'setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#define HAVE_INT32_T 1

#ifndef HAVE_INT32_T
#  define int32_t int32_t
#endif

/* #undef HAVE_SSIZE_T */

#ifndef HAVE_SSIZE_T
#  define ssize_t int
#endif

#define HAVE_SNPRINTF 1

#ifndef HAVE_SNPRINTF
#  define snprintf snprintf
#endif

/* #undef HAVE_VSNPRINTF */
