void main() 
{
    char str[200];
    int i, count = 1;

    printf("Enter a string: ");
    gets(str);  

    for(i = 0; i < strlen(str); i++) 
	{
        if(str[i] == ' ')
            count++;
    }

    printf("Words = %d", count);

}
