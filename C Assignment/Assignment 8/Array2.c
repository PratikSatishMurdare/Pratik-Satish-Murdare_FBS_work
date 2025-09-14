void main() 
{
    int arr[10], search, found = 0;

    // Input elements
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("Array elements are:");
    for(int i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the number to search
    printf("Enter number to search:");
    scanf("%d", &search);

    // Search in array
    for(int i = 0; i < 10; i++) 
	{
        if(arr[i] == search) 
		{
            found = 1;
            break;
        }
    }

    // Display result
    if(found) 
	{
        printf("%d is found in the array.\n", search);
    } else 
	{
        printf("%d is not found in the array.\n", search);
    }

 
}
