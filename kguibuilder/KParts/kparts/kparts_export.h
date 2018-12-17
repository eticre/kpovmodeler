
#ifndef KPARTS_EXPORT_H
#define KPARTS_EXPORT_H

#ifdef KPARTS_STATIC_DEFINE
#  define KPARTS_EXPORT
#  define KPARTS_NO_EXPORT
#else
#  ifndef KPARTS_EXPORT
#    ifdef KF5Parts_EXPORTS
        /* We are building this library */
#      define KPARTS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KPARTS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KPARTS_NO_EXPORT
#    define KPARTS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KPARTS_DEPRECATED
#  define KPARTS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KPARTS_DEPRECATED_EXPORT
#  define KPARTS_DEPRECATED_EXPORT KPARTS_EXPORT KPARTS_DEPRECATED
#endif

#ifndef KPARTS_DEPRECATED_NO_EXPORT
#  define KPARTS_DEPRECATED_NO_EXPORT KPARTS_NO_EXPORT KPARTS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KPARTS_NO_DEPRECATED
#    define KPARTS_NO_DEPRECATED
#  endif
#endif

#endif
