#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void decrypt(int value) {
    char crypted[] = "Q}|u`sfg~sf{}|a3";
    int len = strlen(crypted);
    for (int i = 0; i < len; i++) {
        crypted[i] = crypted[i] ^ value;
    }
    if (!strncmp(crypted, "Congratulations!", 11)) {
        system("/bin/sh");
    } else {
        puts("\nInvalid Password");
    }
}

void test(int nb, int user_pass) {
    int result = nb - user_pass;
    if ((unsigned int)result <= 0x15) {
        decrypt(result);
    }
    return;
}

int main(int argc, char const *argv[])
{
    int user_pass;
    srand(time(NULL));
    puts("***********************************");
    puts("*\t\tlevel03\t\t**");
    puts("***********************************");
    printf("Password:");
    scanf("%d", &user_pass);
    test(0x1337d00d, user_pass);
    return 0;
}
