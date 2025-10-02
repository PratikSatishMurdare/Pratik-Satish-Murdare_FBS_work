struct Book 
{
    char bname[50];
    int id;
    char author[50];
    float price;
};

int main() 
{
    struct Book b;

    
    printf("Enter Book Name: ");
    scanf("%s", b.bname);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

   
    printf("\n--- Book Details ---\n");
    printf("Book Name : %s\n", b.bname);
    printf("Book ID   : %d\n", b.id);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);

 
}
