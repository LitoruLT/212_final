#include<stdio.h>

void main()
{
    long long int get[2],i,n,k,c,mul=1;
    for(i=0; i<2 ; i++)
        scanf("%lli",&get[i]);
    n=get[0];
    c=get[1];

    while(mul<=c)
    {
        mul=mul*10;
        //printf("mul = %lli\n",mul);
    }
    k=n;
    while(1)
    {
        k++;
        if(k%mul==c)
        {
            //printf("k=%lli\n",k);
            break;
        }
        else
        {
            //printf("At Con k=%lli\n",k);
            continue;
        }


    }
    printf("%lli",k);
}
