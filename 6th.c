#include<stdio.h>
#if 0
void main()
{   if(0){
    char s[100];
    scanf("%[^\n]S",&s);
    printf("%s\n",s);
    char c,search;
    int count=0;
    search=getchar();
    getchar();
    while ((c=getchar())!='\n')
    {
        if (c==search)
        {
            count+=1;
        }
    }
    printf("no of times %c & %d",c,count);
}
char ch;
while((ch=getchar())!='\n')
{
    char c1;
    if (c1==ch) continue;
    else printf("%c",ch);
    c1=ch;
}
}

use eof macros to count chara in loop,no of white spaces and \n


void main()
{
    char ch;
    int nc =0,nw=0,nl=0;
    if(0){
    while ((ch=getchar())!=EOF)
    {
        nc++;
        
        if (ch=='\n') nl++;
        if (ch==' ') nw++;
        

    }
    printf("%d %d %d",nc,nw,nl);
    }
    int inword=0;
    while ((ch=getchar())!=EOF)
    {
        nc++;
        
        if (ch=='\n') nl++;
        if (inword && (ch='\n'||' '||'\t')) {nw++;inword=0;}
        else if (! (ch='\n'||' '||'\t')) inword=1;
        

    }
    printf("%d %d %d\n",nc,nw,nl);
    printf("%c",15+'b');
    
}
    

int main()
{
    int *p;
    int a=100;
    p=&a;
    printf("a+1=%d a=%d address a=%d address a+1: %d garbage=%d\n",*p+1,*p,p,p+1,*(p+2));
    int b=1000;
    int *q=&b;
    *p=*p+*q;
    *q= *p-*q;
    *p=*p-*q;
    printf("%d %d",*p,*q);

}
    #endif

    int main()
    { int a[]={232,4,565,2,342};
   /* if(0)
    {       
        int *p=&a[0];
        printf("values of p= %d\n",p[3]);

        for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        {
        printf("values of p= %d ,%d\n",(*p)++,p);//p[i] is same as *(p+i)
        }
    }*/
    int *p=a;
    int i;
    for(i=0;i<5;i++);
    {
        *p=i;
        printf("%d ",p[i]);
    }
    }