#include <stdio.h>

int main(int argc, char *argv[])
{
    char input[255] = "(612)567-9876";
    char digits[255];
    char *p, *out;
    
    p = input;
    out = digits;
    while (*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
            *(out++) = *p;
        p++;
    }
    *out ='\0';
    
    printf("%s\n%s\n", input, digits);
}
