#include<stdio.h>
#if 0
int main()
{
    int r,c,sum=0;
    scanf("%d\n%d",&r,&c);
    int ar[r][c];
    for (int i=0;i<r;i++)
    {
        printf("enter the elements of %d row",i);
        for(int j=0;j<c;j++)
        {scanf("%d",&ar[i][j]);}
    }
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {sum+=ar[i][j];}
        
    }
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {printf("%d  ",ar[i][j]);}
        printf("\n");
    }
    printf("the sum of the matrix is %d",sum);
}
    #endif
#if 0
int main()
{
    int r,c,r1,c1,sum=0;
    scanf("enter the size of matrices %d\n%d ",&r,&c);
    int a[r][c],b[r][c],c[r][c];
    printf("enter elements of a:")
    for (int i=0;i<r;i++)
    {
        printf("enter the elements of %d row",i);
        for(int j=0;j<c;j++)
        {scanf("%d",&a[i][j]);}
    }
    printf("enter elements of b:")
    for (int i=0;i<r1;i++)
    {
        printf("enter the elements of %d row",i);
        for(int j=0;j<c1;j++)
        {scanf("%d",&b[i][j]);}
    }
    for (int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {c[i][j]=a[i][j]+b[i][j];}
    }
    for (int i=0;i<r1;i++)
    {
        printf("the resultant elements are ");
        for(int j=0;j<c1;j++)
        {printf("%d",&c[i][j]);}
    }
}
#endif
#if 0
int main()
{
    int r,c,count=0;
    printf("enter the number of elements: ");
    scanf("%d",&r);
    int a[r],freq[r];
    for (int i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=0;
    }
    for (int i=0;i<r;i++)
    {
        c=a[i];
        for (int j=0;j<r;j++)
        {
        if(c==a[j]) 
            {   
                count++;
                if(count>1)
                {
                    a[j]=0;
                }
            }
        }
        freq[i]=count;
        count=0;    
    }
    for (int i=0;i<r;i++)
    {   
        if (a[i]==0) continue;
        printf("\nthe frequency of %d is %d",a[i],freq[i]);
    }

}
#endif

int max(int a,int b)
{
    return a>b?a:b ;

}
int min(int a,int b)
{
    return a<b?a:b ;
}
int main()
{
    int n1,n2;
    scanf("%d\n%d",&n1,&n2);
    int maxi=max(n1,n2);
    int mini=min(n1,n2);
    printf("the maximum value is %d\n",maxi);
    printf("the minimum value is %d\n",mini);

}

