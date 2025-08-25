void main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d\n", a + b);
    else if(op == '-')
        printf("Result = %d\n", a - b);
    else if(op == '*')
        printf("Result = %d\n", a * b);
    else if(op == '/')
        printf("Result = %d\n", a / b);
    else if(op == '%')
        printf("Result = %d\n", a % b);
    else
        printf("Invalid operator!\n");

   
}
