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
    printf("n = %lli\n",n);
    printf("c = %lli\n",c);

    while(mul<c)
    {
        mul=mul*10;
        printf("mul = %lli\n",mul);
    }
    k=n;
    while(n>k)
    {
        k++;
        if(k%mul==c)
        {
            break;
            printf("k=%lli\n",k);
        }
        else
        {
            printf("At Con k=%lli\n",k);
            continue;
        }


    }
    printf("%lli",k);
}
