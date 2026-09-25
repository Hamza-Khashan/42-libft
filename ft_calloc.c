#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t bytes;
    size_t max = (size_t)-1;
    void *arr;

    if (size > max/nmemb)
        return (NULL);
    bytes = nmemb * size;
    arr = malloc(bytes);
    if (!arr)
        return (NULL);
    ft_bzero(arr,bytes);
    return (arr);
}