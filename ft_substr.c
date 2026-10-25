#include<stddef.h>
size_t ft_strlen(const char *str)
{
    size_t lenght;
    lenght = 0;
    while(str[lenght])
    {
        lenght++;
    }
    return(lenght);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int size;
    unsigned int i;
    char *p;
    size = ft_strlen(s);
    p = malloc(sizeof(char) * (size - start));
    if (!p) 
        return (NULL);
    i = start;
    while(i < size) 
    {
        p[i - start] = s[i];
        i++;
    }
    return (p);
}

// string
// ring
// start 1
// maximum_length 
// function for calculating the length of string => length

// size = length - start if size > maximum length => size = maximum length