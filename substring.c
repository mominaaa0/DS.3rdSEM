// 15/09/25
#include <stdio.h>
int isSubstring(char str[], char sub[]) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        j = 0;
        while (sub[j] != '\0' && str[i + j] != '\0' && str[i + j] == sub[j]) {
            j++;
        }
        if (sub[j] == '\0') {
            return 1;
        }
    }
    return 0; 
}
int main() {
    char str[100], sub[100];
    printf("Enter main string: ");
    gets(str); 
    printf("Enter substring: ");
    gets(sub);
    if (isSubstring(str, sub)) {
        printf("\"%s\" is a substring of \"%s\"\n", sub, str);
    } else {
        printf("\"%s\" is NOT a substring of \"%s\"\n", sub, str);
    }
    return 0;
}
