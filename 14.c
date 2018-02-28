#include<stdio.h>
void main()
{
    int i,n1,n2;
    scanf("%d %d",&n1,&n2);
    for(i = n1+1; i < n2; i++)
    {
        if((i % 2) != 0)
        {
            printf("%d ",i);
        }
    }
}
