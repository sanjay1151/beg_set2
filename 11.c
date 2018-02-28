#include <stdio.h>
int main()
{
    int i,n,p,num = 1;
    scanf("%d %d",&n,&p);
    for(i = 0 ; i < p; i++)
    {
        num = num * n;
    }
    printf("%d",num);
    
}
