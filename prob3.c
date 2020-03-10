#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a,b and c values: \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && b>c)
printf("%d is the greatest \n",a);
else if(b>a && b>c)
printf("%d is the greatest \n",b);
else
printf("%d is the greatest \n",c);
}
