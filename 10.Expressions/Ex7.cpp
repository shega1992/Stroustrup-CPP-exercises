#include <iostream>

size_t strlen(const char *);
char * strcpy(char * , const char * );
int strcmp(const char *, const char *);

int main()
{
    // There can be driver

    return 0;
}

size_t strlen(const char * str)
{
    int len = 0;
    while(*str++ != '\0')
        len++;
    return len;
}

char * strcpy(char * dest, const char * src)
{
    char * temp = dest;
    while(*src != '\0')
         *temp++ = *src++;

    *temp = *src; // copy terminating '\0'
    return dest;
}

int strcmp(const char * s1, const char * s2)
{
    for(; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
        ;
    if(*s1 < *s2) return -1;
    else if(*s1 > *s2) return 1;
    else return 0;

}
