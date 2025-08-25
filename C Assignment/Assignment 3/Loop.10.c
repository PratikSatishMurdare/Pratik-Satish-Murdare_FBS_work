void main()
{
    int no = 145;
    int temp = no;   
    int rem, fact, sum = 0;

    while(no > 0)
    {
        rem = no % 10;  

        // factorial code
        fact = 1;
        while(rem > 1)
        {
            fact = fact * rem;
            rem--;
        }

        sum = sum + fact;
        no = no / 10;  
    }

    if(sum == temp)
        printf("%d is a Strong number\n", temp);
    else
        printf("%d is not a Strong number\n", temp);
}
