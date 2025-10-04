struct Distance{ int feet; float inch; };

struct Distance storeDistance(struct Distance d)
{
    printf("Distance (feet inch): "); scanf("%d %f",&d.feet,&d.inch);
    return d;
}

void displayDistance(struct Distance *d)
{
    printf("Distance: %d feet %.2f inch\n",d->feet,d->inch);
}

int main()
{
    struct Distance d1;
    d1 = storeDistance(d1);
    displayDistance(&d1);
    
}
