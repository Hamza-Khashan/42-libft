#include "libft.h"

size_t ft_strlen(char *ptr)
{
    char *p = ptr;
    while (*p != '\0')
    p++;

    return (size_t)(p - ptr);
}