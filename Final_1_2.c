#include<stdio.h>

void main()
{
    long long int get[2],i,n,k,c,mul=1,temp,j;
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
        /////////////printf("nuse = %lli , ntemp = %lli \n",nuse,ntemp);
        seperateN[i]=nuse/ntemp;
        nuse=nuse%ntemp;
        ntemp=ntemp/10;
        i++;
    }
    i=0;
    while(ctemp)
    {
        ////////////////printf("cuse = %lli , ctemp = %lli \n",cuse,ctemp);
        seperateC[i]=cuse/ctemp;
        cuse=cuse%ctemp;
        ctemp=ctemp/10;
        i++;
    }
    long long int check=0,checkc=0;
    i=0,j=0;
    while(!check && !checkc)
    {
        for(j=0; seperateN[i] == seperateC[j] ;i++,j++)
        {
            if( j+1 > countc )
            {
                checkc=1;
                check=0;
                break;
            }
            if( i+1 > countn )
            {
                check=1;
                break;
            }
        }
        i++;
        j=0;
        if(i>countn)
        {
            check=1;
            break;
        }

    }









    if(check)
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
    printf("%lli",k);
    }
    else
        printf("%lli",n+1);

}
