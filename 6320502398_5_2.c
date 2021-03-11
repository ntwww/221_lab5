#include<Stdio.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    if(n%2==0)
    {
        n-=1;
        x=(n/2)-1;
    }
    else
    {
        x=n/2;
    }
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n/2)-1||j==(n/2)-1)
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");
    }
}
