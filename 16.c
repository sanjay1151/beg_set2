#include<stdio.h>
void main()
{
    int i = 0,n1 = 0,n2 = 0,j = 0,flag = 0;
    scanf("%d %d",&n1,&n2);
    for(j = n1+1; j < n2; j++)
    {
        flag = 0;
        for(i = 2 ;i <= j/2 ; i++ )
        {
            if((j % i) == 0)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            printf("%d ",j);
        }
    }
}
