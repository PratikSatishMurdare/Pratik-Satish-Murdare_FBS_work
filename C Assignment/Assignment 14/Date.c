struct Date{ int date, month, year; };

struct Date storeDate(struct Date d)
{
    printf("Date (d m y): "); scanf("%d %d %d",&d.date,&d.month,&d.year);
    return d;
}

void displayDate(struct Date *d)
{
    printf("Date: %02d/%02d/%04d\n",d->date,d->month,d->year);
}

int main()
{
    struct Date d1;
    d1 = storeDate(d1);
    displayDate(&d1);
    
}
