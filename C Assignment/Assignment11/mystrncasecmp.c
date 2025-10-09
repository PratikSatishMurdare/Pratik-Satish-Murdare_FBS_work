#include <stdio.h>

int mystrcasecmp(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        char c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1; 
        char c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;  

        if (c1 != c2)
            return c1 - c2;

        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main() 
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int result = mystrcasecmp(str1, str2);

    if (result == 0)
        printf("Strings are equal (case-insensitive)\n");
    else if (result > 0)
        printf("First string is greater (case-insensitive)\n");
    else
        printf("Second string is greater (case-insensitive)\n");

    return 0;
}
