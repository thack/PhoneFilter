#include <stdio.h>

int main(int argc, char *argv[])
{
    char *input = "(612)567-9876";
    char digits[255];
    
    while (*input != '\0')
    {
        if (*input >= '0' && *input <= '9')
            *digits = *input;
        input++;
    }
    *digits ='\0';
    
    printf("%s\n%s\n", input, digits);
}
