#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int input;
    puts("***********************************");
    puts("* \t     -Level00 -\t\t  *");
    puts("***********************************");
    printf("Password:");
    scanf("%d", &input);
    if (input == 5276) {
        system("/bin/sh");
    }
    puts("\nInvalid Password!");
    return(1);
}