void main() 
{
    int n = 5;   

    for(int i = 1; i <= n; i++) 
	{
        // print spaces
        for(int j = 1; j <= n - i; j++) 
		{
            printf(" ");
        }
        // print stars
        for(int k = 1; k <= 2 * i - 1; k++) 
		{
            printf("*");
        }
        printf("\n");  
    }

    
}
