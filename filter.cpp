#include <stdio.h>

int main(int argc, char *argv[])
{
    char input[255];
    char digits[255];
    char *p, *out;
    
    printf("input: ");
    scanf("%s", input);
    
    p = input;
    out = digits;
    while (*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
            *(out++) = *p;
        p++;
    }
    *out ='\0';
    
    printf("input: %s\noutput: %s\n", input, digits);
}
