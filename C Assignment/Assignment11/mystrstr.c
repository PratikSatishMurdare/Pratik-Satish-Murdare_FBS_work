#include <stdio.h>

void mystrstr(char *str, char *sub) {
    char *s1, *s2;

    while (*str != '\0') 
	{
        s1 = str;
        s2 = sub;

        // Check if substring matches
        while (*s1 && *s2 && (*s1 == *s2)) 
		{
            s1++;
            s2++;
        }
        if (*s2 == '\0') 
		{
            printf("Substring found: %s\n", str);
            return;
        }
        str++;
    }

    printf("Substring not found.\n");
}

void main() {
    char str[] = "hey Pratik Murdare";
    char sub[] = "Pratik";

    mystrstr(str, sub);
}
