#include<stdio.h>
int main(void)
{
    int n, i, sum = 0;
    scanf("%d",&n);
    for(i = 0; i < 5 ; i++)
    {
        sum = sum + n;
        printf("%d ",sum);
    }
    
}
