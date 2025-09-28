void main() 
{
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for(i = 0; i < len/2; i++)
        if(str[i] != str[len-1-i])
            break;

    if(i == len/2)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

