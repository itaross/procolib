
#ifndef procolib_EXPORT_H
#define procolib_EXPORT_H

#ifdef procolib_BUILT_AS_STATIC
#  define procolib_EXPORT
#  define PROCOLIB_NO_EXPORT
#else
#  ifndef procolib_EXPORT
#    ifdef procolib_EXPORTS
        /* We are building this library */
#      define procolib_EXPORT 
#    else
        /* We are using this library */
#      define procolib_EXPORT 
#    endif
#  endif

#  ifndef PROCOLIB_NO_EXPORT
#    define PROCOLIB_NO_EXPORT 
#  endif
#endif

#ifndef PROCOLIB_DEPRECATED
#  define PROCOLIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef PROCOLIB_DEPRECATED_EXPORT
#  define PROCOLIB_DEPRECATED_EXPORT procolib_EXPORT PROCOLIB_DEPRECATED
#endif

#ifndef PROCOLIB_DEPRECATED_NO_EXPORT
#  define PROCOLIB_DEPRECATED_NO_EXPORT PROCOLIB_NO_EXPORT PROCOLIB_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PROCOLIB_NO_DEPRECATED
#endif

#endif
