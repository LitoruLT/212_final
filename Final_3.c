#include<stdio.h>

void main()
{
    int n[3],i,j,k;
    for(i=0; i<n ;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n");

    int first[n[0]][n[0]],sec[n[1]][n[1]],third[n[2]][n[2]];

    for(k=0; k<3 ;k++)
    {
        for(i=0; i<n[k] ;i++)
        {
            for(j=0; j<n[k] ;j++)
            {
                if(k==0)
                {
                    scanf("%d",&first[i][j]);
                }
                else if(k==1)
                {
                    scanf("%d",&sec[i][j]);
                }
                else
                {
                    scanf("%d",&third[i][j]);
                }
            }
        }
        printf("\n");
    }
    /////////////////////////////////////////////////////////////////////////////


    int sums1[(n[0]*2)+2];
    int sums2[(n[1]*2)+2];
    int sums3[(n[2]*2)+2];
    for(i<=0 ; (i<(n[0]*2)+2) ; i++)
    {
        sums1[i]=0;
    }
    for(i<=0 ; (i<(n[1]*2)+2) ; i++)
    {
        sums2[i]=0;
    }
    for(i<=0 ; (i<(n[2]*2)+2) ; i++)
    {
        sums3[i]=0;
    }


    for(k=0; k<3 ;k++)
    {
        for(i=0; i<n[k] ;i++)
        {
            for(j=0; j<n[k] ;j++)
            {
                if(k==0)
                {
                    sums=sums+first[i][j];
                }
                else if(k==1)
                {
                    scanf("%d",&sec[i][j]);
                }
                else
                {
                    scanf("%d",&third[i][j]);
                }
            }
        }
        printf("\n");
    }


}
