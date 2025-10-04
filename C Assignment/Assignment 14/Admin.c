struct Admin 
{
    int id;
    char name[20];
    float salary, allowance;
};

struct Admin store(struct Admin a)
{
    printf("ID: "); scanf("%d",&a.id);
    printf("Name: "); scanf("%s",a.name);
    printf("Salary: "); scanf("%f",&a.salary);
    printf("Allowance: "); scanf("%f",&a.allowance);
    return a;
}

void display(struct Admin *a)
{
    printf("ID:%d Name:%s Salary:%.2f Allowance:%.2f\n",a->id,a->name,a->salary,a->allowance);
}

int main()
{
    struct Admin a1;
    a1 = store(a1);      
    display(&a1);         
   
}
