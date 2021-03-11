#include<Stdio.h>
int main()
{
    int n,i,j,q,x;
    scanf("%d",&n);
    int n1=n;
    if(n%2==0)
    {
        n--;
        q=1;
        x=((n+q)/2)-1;
    }
    else
    {
        q=0;
        x=n/2;
    }
    printf("%d",x);
    for(i=0;i<(n+q)/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n/2)-i||j==(n/2)+i)
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");
    }
    /*for(i=0;<x+1;i++)
    {
        for(j=0;j<=;j++)
        {

        }
    }*/
}
