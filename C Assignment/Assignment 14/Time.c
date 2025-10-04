struct Time{ int hour,min,sec; };

struct Time storeTime(struct Time t)
{
    printf("Time (h m s): "); scanf("%d %d %d",&t.hour,&t.min,&t.sec);
    return t;
}

void displayTime(struct Time *t)
{
    printf("Time: %02d:%02d:%02d\n",t->hour,t->min,t->sec);
}

int main()
{
    struct Time t1;
    t1 = storeTime(t1);
    displayTime(&t1);
    
}
