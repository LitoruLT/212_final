#include<stdio.h>

void main()
{
    int n[3],i,j,k;
    for(i=0; i<3 ;i++)
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
        if(k<2)
            printf("\n");
    }
/*                 For Check  Num
    printf("check Num\n");
    for(k=0; k<3 ;k++)
    {
        for(i=0; i<n[k] ;i++)
        {
            for(j=0; j<n[k] ;j++)
            {
                if(k==0)
                {
                    printf("%d ",first[i][j]);
                }
                else if(k==1)
                {
                    printf("%d",sec[i][j]);
                }
                else
                {
                    printf("%d",third[i][j]);
                }
            }
        }
        printf("\n");
    }
*/
    /////////////////////////////////////////////////////////////////////////////

    int sums1[(n[0]*2)+2];
    int sums2[(n[1]*2)+2];
    int sums3[(n[2]*2)+2];
    for(i=0 ; i<(n[0]*2)+2 ; i++)
    {
        sums1[i]=0;
    }
    for(i=0 ; i<(n[1]*2)+2 ; i++)
    {
        sums2[i]=0;
    }
    for(i=0 ; i<(n[2]*2)+2 ; i++)
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
                    sums1[i]=sums1[i]+first[i][j];
                }
                else if(k==1)
                {
                    sums2[i]=sums2[i]+sec[i][j];
                }
                else
                {
                    sums3[i]=sums3[i]+third[i][j];
                }
            }
        }
    }
    for(k=0; k<3 ;k++)
    {
        for(j=0; j<n[k] ;j++)
        {
            for(i=0; i<n[k] ;i++)
            {
                if(k==0)
                {
                    sums1[j+n[k]]=sums1[j+n[k]]+first[i][j];
                }
                else if(k==1)
                {
                    sums2[j+n[k]]=sums2[j+n[k]]+sec[i][j];
                }
                else
                {
                    sums3[j+n[k]]=sums3[j+n[k]]+third[i][j];
                }
            }
        }
    }

    for(k=0; k<3 ;k++)
    {
        for(j=0,i=0; j<n[k] ;j++,i++)
        {
                if(k==0)
                {
                    sums1[(n[k]*2)]=sums1[(n[k]*2)]+first[i][j];
                }
                else if(k==1)
                {
                    sums2[(n[k]*2)]=sums2[(n[k]*2)]+sec[i][j];
                }
                else
                {
                    sums3[(n[k]*2)]=sums3[(n[k]*2)]+third[i][j];
                }
        }
    }

    for(k=0; k<3 ;k++)
    {
        for(j=n[k],i=n[k]; j>=0 ;j++,i++)
        {
                if(k==0)
                {
                    sums1[(n[k]*2)+1]=sums1[(n[k]*2)+1]+first[i][j];
                }
                else if(k==1)
                {
                    sums2[(n[k]*2)+1]=sums2[(n[k]*2)+1]+sec[i][j];
                }
                else
                {
                    sums3[(n[k]*2)+1]=sums3[(n[k]*2)+1]+third[i][j];
                }
        }
    }

    printf("check SUM\n");
    for(k=0; k<3 ;k++)
    {
        for(i=0 ; i<(n[k]*2)+2 ; i++)
        {
           if(k==0)
            {
                printf("%d ",sums1[i]);
            }
            else if(k==1)
            {
                printf("%d ",sums2[i]);
            }
            else
            {
                printf("%d ",sums3[i]);
            }
        }
        printf("\n");

    }

    int check=0,for2;
    for(k=0; k<3 ;k++)
    {
        check=0;
        if(n[k]==2)
            for2=0
        else
            for2=2
        for(i=0 ; i<(n[k]*2)+for2 ; i++)
        {
           if(k==0 && i>0)
            {
                if( sums1[i]!=sums1[i-1] )
                {
                    check=1;
                    break;
                }
            }
            else if(k==1 && i>0)
            {
                if( sums2[i]!=sums2[i-1] )
                {
                    check=1;
                    break;
                }
            }
            else if(k==2 && i>0)
            {
                if( sums3[i]!=sums3[i-1] )
                {
                    check=1;
                    break;
                }
            }
        }
        if(check==1)
            printf("yes\n");
        else
            printf("no\n");

    }


}
