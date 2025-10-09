void main() 
{
    char str[100];
    int n, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter index to remove: ");
    scanf("%d", &n);

    for(i = n; str[i]; i++)
        str[i] = str[i+1];

    printf("Modified string: %s", str);

}
