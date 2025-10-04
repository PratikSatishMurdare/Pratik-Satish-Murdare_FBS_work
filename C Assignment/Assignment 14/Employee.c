struct Employee 
{
    int id;
    char name[20];
    float salary;
};


struct Employee storeEmployee(struct Employee e)
{
    printf("Employee ID: "); scanf("%d", &e.id);
    printf("Name: "); scanf("%s", e.name);
    printf("Salary: "); scanf("%f", &e.salary);
    return e;
}


void displayEmployee(struct Employee *e)
{
    printf("Employee: ID:%d Name:%s Salary:%.2f\n", e->id, e->name, e->salary);
}

int main()
{
    struct Employee emp1;
    emp1 = storeEmployee(emp1);   
    displayEmployee(&emp1);       
    
}
