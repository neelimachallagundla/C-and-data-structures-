//c program to check whether the chosen program is stroger
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int dig = 0, up = 0, low = 0, sp = 0, i;
    char pass[100];  // Allow longer passwords

    printf("ENTER YOUR PASSWORD: ");
    fgets(pass, sizeof(pass), stdin);

    // Remove newline character if present
    pass[strcspn(pass, "\n")] = 0;

    if (strlen(pass) > 7) {
        for (i = 0; i < strlen(pass); i++) {
            if (isupper(pass[i]))
                up++;
            else if (islower(pass[i]))
                low++;
            else if (isdigit(pass[i]))
                dig++;
            else
                sp++;
        }

        if (dig > 0 && up > 0 && low > 0 && sp > 0) {
            printf("STRONG PASSWORD\n");
        } else {
            printf("WEAK PASSWORD\n");
        }
    } else {
        printf("WEAK PASSWORD (Too short)\n");
    }

    return 0;
}
