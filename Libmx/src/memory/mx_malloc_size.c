#include "libmx.h"

size_t mx_malloc_size(void *p)
{
    size_t * in = p;

    if (in)
    {
      --in;
      return *in;
    }

    return -1;
}
