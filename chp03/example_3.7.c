
#include <stdio.h>
#include <math.h>

long SumOfPrime (int n);               /*��ƪ��n��*/
int IsPrime(int m);  			/*��ƪ��n��*/

void main( )
{
int n;
long s;
scanf("%d",&n);
s= SumOfPrime(n);
printf("%ld\n",s);
}
long SumOfPrime (int n)                   /*���SumOfPrime���w�q*/
{
int i;
long s=0;
for(i=1;i<=n;i++)
		if(IsPrime(i))
        	s=s+i;
return	s;
}
int  IsPrime(int m)                     /*���IsPrime���w�q*/
{
int i, k;
k=sqrt(m);
for(i=2;i<=k;i++)
    if(m%i==0)
    		return	0;
return	1;
}
