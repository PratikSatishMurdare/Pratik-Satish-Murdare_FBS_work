void main()
 {
    int a;  

    printf("Enter a character: ");
    scanf("%c", &a);   

    if (a >= 'A' && a <= 'Z') 
	{
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
}