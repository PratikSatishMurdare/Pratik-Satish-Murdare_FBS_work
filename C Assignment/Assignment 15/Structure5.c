struct Movie 
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main() 
{
    struct Movie db[50];
    int n=0, i, choice;
    char search[50];

    do {
        printf("\n1.Add  2.Display  3.Search  4.Update  5.Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice==1) {
            printf("Title: "); scanf("%s", db[n].title);
            printf("Director: "); scanf("%s", db[n].director);
            printf("Year: "); scanf("%d", &db[n].year);
            printf("Genre: "); scanf("%s", db[n].genre);
            n++;
        }
        else if(choice==2) 
		{
            for(i=0;i<n;i++)
                printf("\n%s | %s | %d | %s", db[i].title, db[i].director, db[i].year, db[i].genre);
        }
        else if(choice==3) 
		{
            printf("Enter title: "); scanf("%s", search);
            for(i=0;i<n;i++)
                if(strcmp(db[i].title, search)==0)
                    printf("\nFound: %s | %s | %d | %s", db[i].title, db[i].director, db[i].year, db[i].genre);
        }
        else if(choice==4) 
		{
            printf("Enter title to update: "); scanf("%s", search);
            for(i=0;i<n;i++)
                if(strcmp(db[i].title, search)==0) 
				{
                    printf("New Director: "); scanf("%s", db[i].director);
                    printf("New Year: "); scanf("%d", &db[i].year);
                    printf("New Genre: "); scanf("%s", db[i].genre);
                }
        }
    }while(choice!=5);

}
