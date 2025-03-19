#include<stdio.h>
#if 0
void main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d,%d",&a,&b);
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;

        }
        else if(b>a){ b=b-a;}
    }
    printf("%d",a);
}
    
void main()
{
    
  if(0)
  {int a, b,rem;
    printf("enter the values of a and b \n");
    scanf("%d,%d",&a,&b);

  
    while(rem=a%b)
    {   
        a=b;
        b=rem;
        rem=a%b;
        
    }
    printf("%d",b);
  }
  int s=0,a;
  scanf("%d",&a);
  for(int i=1;i<a;s+=i)
  {
    i++;
  }
  printf("%d\n",s);
  for(int i=1;i<a;i++)
  {
    s+=i;
  }
  printf("%d",s);

}

#endif
int main()
{
  int n=3,k;
  int s=2*n-1;
  for(int i=0;i<=n;i++)
  {
    printf("%d",n);
    
    for (int j=0 ;j<=n;j++)
      { 
        if(i<j) printf("%d",n);
        else if (i==n) printf("%d",n);
        else if (i!=j) 
        {
          k=n-i;
          printf("%d",k);
        }
        
        
      }
    
    printf("\n");
    
  }
}