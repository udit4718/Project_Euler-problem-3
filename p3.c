#include<stdio.h>
#include<math.h>
void main()
{

    long i=0,a,j;
    long n;

    for(j=3; ; j++)
    {
        n=j;
        while(n%2==0)
        {
            n=n/2;
        }

        for(i=3; i<=sqrt(j); i+=2)
        {
            while(n%i==0)
            {
                n=n/i;
            }
        }
        if(n>2)
        {
            i++;
        }
        if(i==10000)
        {
            printf("%li",j);
            return;
        }
    }
}
