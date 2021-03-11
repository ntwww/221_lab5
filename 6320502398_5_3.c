#include<stdio.h>
int main()
{
int n,i,j,x[3]={2,3,5},z,s=1;
scanf("%d",&n);
int q[n];
q[0]=1;
for(i=2;s<n;i++)
{
    z=i;
    for(j=0;j<3;)
    {
        if(z%x[j]==0)
        {
            z/=x[j];
        }
        else
        {
            j++;
        }

    }
    if(z==1)
        {
            q[s]=i;
            s++;
        }

}

printf("%d",q[n-1]);
}
