#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);

    for (int i = 0; i < argc; i++)
    {
        printf("The value at index %d is %s\n",i, argv[i]);
    }
    
    return 0;
}

//.\68_0_command_line_argument.exe jhjjh jhj jv vc sfr