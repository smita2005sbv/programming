#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter nos");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0){
            sum = sum+i;
        }
        else{
            sum =sum-i;
        }
       printf("sum = % d",sum);     
        
    }
    printf("code added another person")
    printf("the sum is %d",sum);
    return 0;
}