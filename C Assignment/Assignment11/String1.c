void main() 
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);  

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ch) 
		{
            printf("Character '%c' found at position %d\n", ch, i + 1);
            found = 1;
            break;  
        }
    }

    if (!found) 
	{
        printf("Character '%c' not found in string.\n", ch);
    }
}
