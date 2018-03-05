#include<stdio.h>

int power(int x,int y)
{
    int i, prd = 1;
    for(i = 0; i < y;i++)
    {
        prd = prd * x;
    }
    return prd;
}

int main() 
{
    int count = 0, r, n1, n2, sum = 0, temp1, temp2,j;
    scanf ("%d %d",&n1,&n2);
    for(j = n1+1 ; j < n2; j++ )
    {
        count = 0;
        sum = 0;
        temp1 = j;
        temp2 = j;
        while(temp1 > 0)
        {
            r = temp1 % 10;
            temp1 = temp1 / 10;
            count++;
        }
        while(temp2 > 0)
        {
            r = temp2 % 10;
            sum = sum + power(r,count);
            temp2 = temp2 / 10;
        }
        if(sum == j)
        {
            printf("%d",j);
        }
    }
}
