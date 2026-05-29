// WAP to print sum of digits of a number
#include <stdio.h>
int main() {
    int n,sum=0,lastdigit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
printf("sum of digits of this number is %d\n",sum);
    return 0;
}
