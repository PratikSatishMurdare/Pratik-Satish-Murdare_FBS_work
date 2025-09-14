void main() 
{
	
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements: ");
    for(i = 0; i < n; i = i + 2)
        printf("%d ", arr[i]);

   
}
