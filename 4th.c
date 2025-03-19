#include<stdio.h>
#include<math.h>
#if 0
void main()
{
    int a, b,c;
    a=15;
    c=a<<5;
    b=a>>6;
    printf("the rightshift = %d \n the left shit =%d\n",b,c);
    /*
    x<<n = x*(2^n)
    x=number 
    n= number of shifts
    x>>n = x/(2^n)
    */ 
    printf("%f\n%f",10.9/0.0,0.0/0.0);
/*swapping of variables using bitwise*/
}
#endif
int main()
{
    char x;
    printf("enter the chara \n");
    scanf("%c",&x);
    switch(x){
        case 'a': printf("%d",'a');break;
        case 'e': printf("%d",'e');break;
        case 'i': printf("%d",'i');break;
        case 'o': printf("%d",'o');break;
        case 'u': printf("%d",'u');break;
        default: printf("not a vowel");
    } 
}