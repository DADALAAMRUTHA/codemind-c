#include<stdio.h>
int main()
{
    int num,loop;
    int sum;
    scanf("%d",&num);
    sum=0;
    for(loop = 1; loop < num; loop++){
        if(num % loop == 0)
        sum += loop;
    }
    if(sum == num)
    printf("True");
    else
    printf("False");
    return 0;
}