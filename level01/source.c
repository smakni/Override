#include <stdlib.h>
#include <strings.h>
#include <stdio.h>

char a_user_name[100];

int verify_user_name() {
    puts("verifying username....\n");
    return (strncmp(a_user_name, "dat_wil", 7));
}

int verify_user_pass(buf) {
    return (strncmp(buf, "admin", 5));
}

int main(int argc, char const *argv[])
{
    int ret;
    char buf[64];
    puts("********* ADMIN LOGIN PROMPT *********");
    printf("Enter Username: ");
    fgets(a_user_name, 256, stdin);
    ret = verify_user_name();
    if (ret != 0) {
        puts("nope, incorrect username...\n");
        return 1;
    }
    puts("Enter Password: ");
    fgets(buf, 100, stdin);
    ret = verify_user_pass(buf);
    puts("nope, incorrect password...\n");
    return (1);
}
