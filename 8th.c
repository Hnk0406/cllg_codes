#include<stdio.h>
#include<math.h>

int pallindrome(int n)
{
    int r=0,x=n;
    while(n>0)
    {
        r = r*10 +(n%10);
        n=n/10;

    }
    if(r==x)
    {printf("number is a pallindrome");}
    else {printf("number is not a pallindrome");}

}
int* f5()
{
    int a =22;
    return &a;
}

int main()
{
    int n,x=100;
    scanf("%d",&n);
    pallindrome(n);
    int *p;
    p=f5();
    printf("x is %d and *p is %d\n",x,*p);
}
