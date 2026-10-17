# include <stdio.h>
int main()
{
int n;
printf("enter the term");
scanf("%d",&n);

int a=0;
int b=1;
int c;
printf("%d%d",a,b);

for(int i=1 ;i<=n; i++)
{
c=a+b;
printf(" %d",c);
a=b;
b=c;}
return 0;

}