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
    int count = 0, r, n, sum = 0, temp1, temp2;
    scanf ("%d",&n);
    temp1 = n;
    temp2 = n;
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
    if(sum == n)
    {
        printf("yes");
    }
    else 
    {
        printf("No");
    }
}

