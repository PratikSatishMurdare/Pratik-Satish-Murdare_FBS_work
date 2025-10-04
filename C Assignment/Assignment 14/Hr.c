struct HR { int id; char name[20]; float salary, commission; };

struct HR storeHR(struct HR h)
{
    printf("HR ID: "); scanf("%d",&h.id);
    printf("Name: "); scanf("%s",h.name);
    printf("Salary: "); scanf("%f",&h.salary);
    printf("Commission: "); scanf("%f",&h.commission);
    return h;
}

void displayHR(struct HR *h)
{
    printf("HR: ID:%d Name:%s Salary:%.2f Commission:%.2f\n", h->id,h->name,h->salary,h->commission);
}

int main()
{
    struct HR h1;
    h1 = storeHR(h1);
    displayHR(&h1);
    
}
