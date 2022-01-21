#include<stdio.h>
int main()
{
    int l,b,w,c,f_area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w||b<=2*w)
    printf("Impossible");
    else
    {
        f_area=(l*b)-((l-2*w)*(b-2*w));
        printf("%d",f_area*c);
    }
}