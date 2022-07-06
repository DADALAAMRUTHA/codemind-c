#include<stdio.h>
int main()
{
    long int n,sqr,rev1=0,rev2=0,m,sount=0,cout=0;
    scanf("%ld",&n);
    sqr=n*n;
    while(n>0)
    {
        m=n%10;
        sount++;
        rev1=(rev1*10)+m;
        n/=10;
    }
    while(sqr>0)
    {
        m=sqr%10;
        cout++;
        rev2=(rev2*10)+m;
        if(sount==cout)
        {
            break;
        }
        sqr/=10;
    }
    if(rev1==rev2)
    {
        printf("Automorphic Number");
    }else{
        printf("Not an Automorphic Number");
    }
    return 0;
}