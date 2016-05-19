#include <cstdio>
#include <cstdlib>
#include <cstring>

#if       _HAS_CSTDINT_
#include <cstdint>
#else  // _HAS_CSTDINT_
#include "compat_cstdint.h"
#endif // _HAS_CSTDINT_

#ifdef    _WIN32
#include <windows.h>
#else  // POSIX
#include <dlfcn.h>
#include <pthread.h>
#include <errno.h>
#include <sys/time.h>
#endif // _WIN32
