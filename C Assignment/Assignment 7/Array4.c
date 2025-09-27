void main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Print even numbers
    printf("Even numbers: ");
    for(int i = 0; i < n; i++) 
	{
        if(arr[i] % 2 == 0) 
		{
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    // Print odd numbers
    printf("Odd numbers: ");
    for(int i = 0; i < n; i++) 
	{
        if(arr[i] % 2 != 0) 
		{
            printf("%d ", arr[i]);
        }
    }

   
}
