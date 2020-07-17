#include "libmx.h"

void mx_free(void *p)
{
    size_t *in = p;

    if (in)
    {
      --in;
      free(in);
    }
}
