#include "libmx.h"

void *mx_malloc(size_t n)
{
    size_t * result = malloc(n + sizeof(size_t));

    if (result)
    {
      *result = n;
      ++result;
      mx_memset(result,0,n);
    }

    return result;
}
