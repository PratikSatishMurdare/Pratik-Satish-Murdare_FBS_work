struct Product 
{
    char name[50];
    float price;
    int qty;
};

int main() 
{
    struct Product cart[10];
    int n, i;
    float total = 0;

    printf("Enter number of items to add to cart: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter details of item %d:\n", i+1);
        printf("Name: ");
        scanf("%s", cart[i].name);
        printf("Price: ");
        scanf("%f", &cart[i].price);
        printf("Quantity: ");
        scanf("%d", &cart[i].qty);

        total += cart[i].price * cart[i].qty;
    }

    printf("\n--- Cart Details ---\n");
    for(i=0; i<n; i++) {
        printf("%s - %.2f x %d = %.2f\n", cart[i].name, cart[i].price,
               cart[i].qty, cart[i].price * cart[i].qty);
    }

    printf("\nTotal Bill = %.2f\n", total);

}

