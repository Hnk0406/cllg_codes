#include<stdio.h>
#if 0
void main()
{
	int  a=5,b =12;
	printf("check %d\n",a>3);
	printf("1st %d\n",6!=6==6);
	printf("%d\n",(b>3) && (a<6) );
	printf("%d\n",(b<3) && (a<6) );
	printf("%d\n",(b<3) || (a>6) );
	printf("%d\n",(b>3) || (a>6) );
	printf("%d\n",(b>3) || (a<6) );
}


void main()
{
	int x=10,y=10;
	printf("x: %d\n",x++);
	printf("x: %d\n",++x);
	printf("x: %d\n",x--);
	printf("x: %d\n",--x);
	int a=5,b=-7,c=0,d;
	d=++a &&++b || ++c;
	printf("a: %d b:%d c:%d d:%d",a,b,c,d);


}

void main()
{
	int a =10;
	printf("%d \n ",a==10?100:200);
}
#endif
int main()
{
	int a,b,c,big;
	printf("enter the values of a b c ");
	scanf("%d%d%d",&a,&b,&c);
	big= 
}