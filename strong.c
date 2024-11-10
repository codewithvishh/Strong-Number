#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("enter num:");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        int r=m%10;
        int f=1;
        while(r>1)
        {
            f=f*r;
            r--;
        }
        sum=sum+f;
        m/=10;
        
    }
    {
        printf(n==sum?"strong number":"not");
    }
    
}