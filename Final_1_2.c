#include<stdio.h>

void main()
{
    long long int get[2],i,n,k,c,mul=1,temp;
    for(i=0; i<2 ; i++)
        scanf("%lli",&get[i]);
    n=get[0];
    c=get[1];

    long long int nsave=n,csave=c,nuse=n,cuse=c,ntemp=1,ctemp=1,countn=0,countc=0;
    while(nuse)
    {
        nuse=nuse/10;
        ntemp=ntemp*10;
        countn++;
    }

    ntemp=ntemp/10;
    long long int seperateN[countn];
    while(cuse)
    {
        cuse=cuse/10;
        ctemp=ctemp*10;
        countc++;
    }
    ctemp=ctemp/10;
    long long int seperateC[countc];
    nuse=n;cuse=c;

    i=0;
    while(ntemp)
    {
        ////////////printf("nuse = %lli , ntemp = %lli \n",nuse,ntemp);
        seperateN[i]=nuse/ntemp;
        nuse=nuse/10;
        ntemp=ntemp/10;
        i++;
    }
    i=0;
    while(ctemp)
    {
        seperateC[i]=cuse/ctemp;
        cuse=cuse/10;
        ctemp=ctemp/10;
        i++;
    }
    countc=countc-1;
    countn=countn-1;
    long long int check=0;
    //while(!check)
    {

    }

    for(i=0; i<countc ;i++)
    {
        printf("%lli ",seperateC[i]);
    }








    if(0)
    {
    mul=1;
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
    }
    printf("%lli",k);
}
