struct Time 
{
    int hrs, min, sec;
};

int main() 
{
    struct Time t1, t2, sum;

   
    printf("Enter first time (h m s): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);
    printf("Enter second time (h m s): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + sum.sec / 60;
    sum.sec %= 60;
    sum.hrs = t1.hrs + t2.hrs + sum.min / 60;
    sum.min %= 60;

    
    printf("\nSum of Times: %02d:%02d:%02d\n", sum.hrs, sum.min, sum.sec);
    printf("First time in seconds : %d\n", t1.hrs*3600 + t1.min*60 + t1.sec);
    printf("Second time in seconds: %d\n", t2.hrs*3600 + t2.min*60 + t2.sec);
    printf("Sum time in seconds   : %d\n", sum.hrs*3600 + sum.min*60 + sum.sec);

  
}
