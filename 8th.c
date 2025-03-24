#include<stdio.h>
#include<math.h>
#if 0
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
    #endif

#if 0
void read( int n;int a[][n],int m,int n);
void display(int [][100],int,int);
int main()
{
    int ar[100][100];
    int r,c;
    printf("eter the size of array:\n");
    scanf("%d\n%d",&r,&c);
    read(ar,r,c);
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    display(ar,r,c);
}
// forward declaration
void display(int n;int a[][n],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

//forward declaration 
void read(int n;int a[][n],int m,int n)
{ 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
}

#endif
// recursion
#if 0
int squ(int a ,int b)
{
    if (b==0) 
    {return 1;}
    else if (b%2) 
    {return a*squ(a*a,b/2);}
    else 
    {return squ(a*a,b/2);}
}
int main()
{ int a,b;
    scanf("%d,%d",&a,&b);
 
 printf("the square is :%d ",squ(a,b));
    
}
#endif
int fact_r(int);
int fact_i(int);
int bin(int n)
{
    if(n==0) 
    {return 0;}
    else
    {return (n%2)+10*(bin(n/2));}// 10=>(0+10*(5=>(1+10*(2=>(0+10*(1=>(1+10*(0=>(0)))))))))====>1010
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("the factorial using iterative is %d\n",fact_i(n));
    printf("the factorial using recursive is %d\n",fact_r(n));
printf("%d",bin(10));
}
int fact_r(int n)
{
    if(n<=1) 
    {return 1;}
    else
    {return n*(fact_r(n-1));}
}
int fact_i(int n)
{   
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
}