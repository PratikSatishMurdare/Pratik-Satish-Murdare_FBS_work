void main() 
{	
    int arr[5], i, temp, n = 5;

    printf("Enter 5 elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Reverse array
    for(i = 0; i < n/2; i++) 
	{
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

  
}
