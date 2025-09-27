void main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for(i = 1; i < n; i++) 
	{
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);


}
