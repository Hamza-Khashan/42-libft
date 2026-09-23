#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t i = 0;
    size_t dst_len = 0;
    size_t src_len = 0;
    while (src[src_len] != '\0')
        src_len++;
    while (dst[dst_len] != '\0' && dst_len < dsize)
        dst_len++;
    if (dsize <= dst_len)
        return (dsize + src_len);
    while ((dst_len + i + 1) < dsize && src[i] != '\0')
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (src_len + dst_len);
}