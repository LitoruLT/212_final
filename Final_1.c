#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void main()
{
    long long int get[2],i,n,k,c,mul=1;
    for(i=0; i<2 ; i++)
        scanf("%lli",&get[i]);
    n=get[0];
    c=get[1];

    while(mul<c)
    {
        mul*10;
    }
    k=n;
    while(n>k)
    {
        k++;
        if(k%mul==c)
        {
            break;
        }
        else
        {
            continue;
        }


    }
    printf("%lli",k);
}
