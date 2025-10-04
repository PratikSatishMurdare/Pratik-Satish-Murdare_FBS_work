struct SalesManager{ int id; char name[20]; float salary, incentive; int target; };

struct SalesManager storeSales(struct SalesManager s)
{
    printf("SalesManager ID: "); scanf("%d",&s.id);
    printf("Name: "); scanf("%s",s.name);
    printf("Salary: "); scanf("%f",&s.salary);
    printf("Incentive: "); scanf("%f",&s.incentive);
    printf("Target: "); scanf("%d",&s.target);
    return s;
}

void displaySales(struct SalesManager *s)
{
    printf("SalesManager: ID:%d Name:%s Salary:%.2f Incentive:%.2f Target:%d\n", s->id,s->name,s->salary,s->incentive,s->target);
}

int main()
{
    struct SalesManager s1;
    s1 = storeSales(s1);
    displaySales(&s1);
    
}
