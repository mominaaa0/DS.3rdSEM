// 15/09/25
#include <stdio.h>
int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
void my_strcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    printf("Length of str1 = %d\n", my_strlen(str1));
    my_strcpy(str3, str1);
    printf("After copy, str3 = %s\n", str3);
    printf("Compare str1 and str2 = %d\n", my_strcmp(str1, str2));
    printf("Compare str1 and str3 = %d\n", my_strcmp(str1, str3));
    my_strcat(str1, str2);
    printf("After concatenation, str1 = %s\n", str1);
    return 0;
}
