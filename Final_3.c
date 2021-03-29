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
                    scanf("%d",first[i][j])
                }
                else if(k==1)
                {
                    scanf("%d",sec[i][j])
                }
                else
                {
                    scanf("%d",third[i][j])
                }
            }
        }
        printf("\n");
    }

}
