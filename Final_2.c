#include<stdio.h>

void main()
{
    long long int n,i,get,j,k;
    scanf("%lli",n);
    long long int looblike[10000];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lli",get);
        looblike[get-1]++;
    }

    long long int max,maxsave[10000],maxcount=0;
    for(j=0 ; j<10000 ; j++)
        maxsave[j]=0;

    for(i=0 ; i<10000 ; i++)
    {
        if(looblike[i]>max)
        {
            for(j=0 ; j<maxcount ; j++)
                maxsave[j]=0;
            max=looblike[i]
            maxcount=0
            maxsave[maxcount]=looblike[i]
        }
        else if(looblike[i]==max)
        {
            maxcount++;
        }
    }


}
