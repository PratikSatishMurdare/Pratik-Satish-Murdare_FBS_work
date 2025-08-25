void main()
{
    int no = 7;
    int i;
    int isPrime=1;
    for(i=2;i < no;i++)
    {
        if(no % i == 0)
        {
            isPrime=0;
            break;
           
        }
    
    }
    if(isPrime)
    printf("prime");
    else
    printf("not prime");
   
}
