#if 0
#include<stdio.h>
int main()
{
	int age;
	float marks;
	char sec;
	char name[20];
	printf("enter the student details \n");
	scanf("%s",name);
	scanf("%d",&age);
	scanf("%f",&marks);
	scanf(" %c",&sec);//give space b4 %c so as to make sure the enter from previous is not taken as the input
	printf("the details are %s , %d ,%f , %c ",name,age,marks,sec);

}
	or we can use this function


#include<stdio.h>
int main()
{
	int age;
	float marks;
	char sec;
	char name[20];
	printf("enter the student details \n");
	scanf("%s %d %f  %c ",name,&age,&marks,&sec);
	printf("the details are %s , %d ,%f , %c ",name,age,marks,sec);
}


#include<stdio.h>
int main()
{
	char a,b,A,B;
	printf("enter the char:\n");
	scanf("%c%c%c%c",&a,&b,&A,&B);
	printf("a:%c ,b:%c,A:%c,B:%c \n",a,b,A,B);
	printf("a:%d ,b:%d,A:%d,B:%d",a,b,A,B);//%d is used it get ascii values of the alpahabets as %d only gets the integer values

}
#endif
// write program to take input of 4 subjects and calculate and output average of all 4 subs 

#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3,s4,avg;
	printf("enter the 4 marks :\n");
	scanf("%f %f %f %f",&s1,&s2,&s3,&s4);
	avg=(s1+s2+s3+s4)/4;
	printf("\nthe average marks is %f",avg);
}