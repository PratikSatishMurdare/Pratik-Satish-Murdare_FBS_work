void main() 
{
    int arr[5], brr[5], crr[10], i, n1 = 5, n2 = 5;

    // Input first array
    printf("Enter 5 elements for first array: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    // Input second array
    printf("Enter 5 elements for second array: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    // Merge arrays
    for(i = 0; i < n1; i++)
        crr[i] = arr[i];
    for(i = 0; i < n2; i++)
        crr[n1 + i] = brr[i];

    // Print merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", crr[i]);

  
}
