#include <stdio.h>
#include <stdlib.h>

double dec,pow,wpow,fac,wfac;
double wynik;
double k;
void power(double pow, double dec)
{
    int i;
    for(i=0; i<pow; ++i)
    {
        if(i==0)
        {
        wpow=dec;
        }
        else
        {
        wpow=wpow*dec;
        }
    }
}
void factorial(double fac)
{
    int i;
    for(i=0;i<fac;++i)
    {
        if(i==0)
        {
            wfac=1;
        }
        else
        {
            wfac*=i+1;
        }
    }
}
int main()
{
    //userin();
    double x,y, res=0;
    printf("Podaj x: ");
    scanf("%lf", &x);
    for(k=0; k<5; k++)
    {
        //x*=3.14159265359;
        if (k==0)
        {
        res = x;
        }
        else
        {
            power(k, -1);
            fac = 2*k+1;
            factorial(fac);
            y = wpow;
            printf("\nk = %.10lf",k);
            printf("\n(-1)^k = %.10lf", y);
            printf("\n(2k+1)! = %.10lf", wfac);
            power(fac, x);
            printf("\n(x)^(2k+1) = %.10lf", wpow);
            wynik=y*wpow;
            printf("\nwynik gora = %.10lf", wynik);
            wynik /=wfac;
            printf("\nwynik razem = %.10lf", wynik);
            res += wynik;
            printf("\nres = %.5lf\n", res);
        }
    }
    return 0;
}


/*
{
    double pi = 3.14159265;
    double a, b, m, n;
    printf("ae^(ib*pi)");
    scanf("Podaj a: %lf", &a);
    scanf("Podaj b: %lf", &b);

    b*=pi;
    m = a*sin(b);
    n = a*cos(b);

    printf("z = %lf + i%lf", n, m);
    return 0;
} */
