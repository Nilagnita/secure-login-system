#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char storedUser[50] = "admin";
    char storedPass[50] = "Admin@123";

    int attempts = 0;

    while(attempts < 3) {
        printf("Enter Username: ");
        scanf("%s", username);

        printf("Enter Password: ");
        scanf("%s", password);

        if(strcmp(username, storedUser) == 0 && strcmp(password, storedPass) == 0) {
            printf("Login Successful!\n");
            return 0;
        } else {
            printf("Invalid credentials!\n");
            attempts++;
        }
    }

    printf("Account Locked due to multiple failed attempts!\n");

    return 0;
}
