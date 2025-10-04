struct Product{ int id; char name[20]; int quantity; float price; };

struct Product storeProduct(struct Product p)
{
    printf("Product ID: "); scanf("%d",&p.id);
    printf("Name: "); scanf("%s",p.name);
    printf("Quantity: "); scanf("%d",&p.quantity);
    printf("Price: "); scanf("%f",&p.price);
    return p;
}

void displayProduct(struct Product *p)
{
    printf("Product: ID:%d Name:%s Quantity:%d Price:%.2f\n",p->id,p->name,p->quantity,p->price);
}

int main()
{
    struct Product p1;
    p1 = storeProduct(p1);
    displayProduct(&p1);
 
}
