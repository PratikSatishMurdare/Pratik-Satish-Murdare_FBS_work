void main() 
{
    int arr[10], sum = 0;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) 
	{
    	
        scanf("%d", &arr[i]);
    }

    
    printf("Array elements are:\n");
    for(int i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
        sum += arr[i];  
    }

    printf("\nSum of array elements is: %d\n", sum);

}
