void main() 
{
    int n, i, j, flag;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: ");
    for(i = 0; i < n; i++) 
	{
        if(arr[i] < 2)
            continue;

        flag = 1; // assume prime
        for(j = 2; j < arr[i]; j++) 
		{
            if(arr[i] % j == 0) 
			{
                flag = 0; // not prime
                break;
            }
        }

        if(flag)
            printf("%d ", arr[i]);
    }

  
}
