#include <stdio.h>

int main(int argc, char *argv[])
{
    char *input = "(612)567-9876";
    char *digits;
    
    while (*input >= '0' && *input <= '9')
        digits++ = input;
    
    printf("%s\n%s\n", input, digits);
}
