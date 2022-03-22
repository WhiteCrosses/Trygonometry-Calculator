#include <stdio.h>
#include <stdlib.h>

double k;
double power(double pow, double dec)
{
    double wpow;
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
    return wpow;
}
double factorial(double fac)
{
    double wfac;
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
    return wfac;
}


double sinus(double b)
{
    double wynik=0;
    double y=0, res=0;
    for(k=0; k<5; k++)
    {
        if (k==0)
        {
        res = b;
        }
        else
        {
            y = power(k, -1);
            wynik=y*power(factorial(2*k+1), b);
            wynik /=factorial(2*k+1);
            res += wynik;
        }
    }
    k=0;
    return res;
}

double cosinus(double b)
{
    double wynik=0;
    double y=0, res=0;
    for(k=0; k<5; k++)
    {
        if (k==0)
        {
        res = 1;
        }
        else
        {
            y = power(k, -1);
            wynik=y*power(factorial(2*k), b);
            wynik /=factorial(2*k);
            res += wynik;
        }
    }
    k=0;
    return res;
}

int main()
{

    printf("z = a*e^(b*j*pi)\n\n");
    double b,a,m,n,pi=3.141592654;
    printf("Podaj a: ");
    scanf("%lf", &a);
    printf("Podaj b: ");
    scanf("%lf", &b);
    b*=pi;
    m=a*sinus(b);
    n=a*cosinus(b);
    printf("z = %.5lf + i*%.5lf", n,m);
    return 0;
}

