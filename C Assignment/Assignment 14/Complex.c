struct Complex{ float real, imag; };

struct Complex storeComplex(struct Complex c)
{
    printf("Complex number (real imag): "); scanf("%f %f",&c.real,&c.imag);
    return c;
}

void displayComplex(struct Complex *c)
{
    printf("Complex: %.2f + %.2fi\n",c->real,c->imag);
}

int main()
{
    struct Complex c1;
    c1 = storeComplex(c1);
    displayComplex(&c1);
    
}
