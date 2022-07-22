#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char buffer[42];
    char user_name[100];
    char user_pass[100];
    
    fp = fopen("/home/users/level03/.pass", "r");
    if (fp == NULL) {
        fwrite("ERROR: failed to open password file\n", 1, 36, stderr);
        exit(1);
    }
    fread(buffer, 41, 1, fp);
    buffer[strcspn(buffer, "\n")] = '\0';
    if (fp == NULL) {
        fwrite("ERROR: failed to open password file\n", 1, 36, stderr);
        fwrite("ERROR: failed to open password file\n", 1, 36, stderr);
        exit(1);
    }
    fclose(fp);
    puts("===== [ Secure Access System v1.0 ] =====");
    puts("/***************************************\\");
    puts("| You must login to access this system. |");
    puts("\\**************************************/");
    printf("--[ Username: ");
    fgets(user_name, 100, stdin);
    user_name[strcspn(buffer, "\n")] = '\0';
    printf("--[ Password: ");
    fgets(user_pass, 100, stdin);
    user_pass[strcspn(buffer, "\n")] = '\0';
    puts("*****************************************");
    if (!strncmp(buffer, user_pass, 41)) {
        printf("Greetings, %s!\n", user_name);
        system("/bin/sh");
    }
    printf(user_name);
    puts(" does not have access!");
    exit(1);
}
