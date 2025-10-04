struct Student 
{
    int rollNo;
    char name[30];
    float marks;
};


void store(struct Student s[], int n);
void display(struct Student s[], int n);
void showOne(struct Student *s);

void main() 
{
    struct Student st[3];   
    int n = 3;

    store(st, n);           
    display(st, n);         

    printf("\nDetails of one student (passed by address):\n");
    showOne(&st[0]);       
}

void store(struct Student s[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("Enter Roll No, Name, and Marks of student %d:\n", i + 1);
        scanf("%d %s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }
}


void display(struct Student s[], int n) 
{
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
}


void showOne(struct Student *s) 
{
    printf("Roll No: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}
