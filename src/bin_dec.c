#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// -------Convert a binary string into decimal format-------- ||

unsigned bin_to_decimal(const char *bin)
{
    int dec_val = 0;

    while (*bin != '\0')
        dec_val = 2 * dec_val + (*bin++ - '0');

    return dec_val;
}
