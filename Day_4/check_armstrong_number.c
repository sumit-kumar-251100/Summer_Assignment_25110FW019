// WAP to check armstrong number
#include <stdio.h>
int main() {
    int n,sum=0,temp,rem;
    printf("Enter a number: ");
    scanf(" %d", &n);
    temp=n;
    while(n!=0){
     rem=n%10;
     sum=sum+(rem*rem*rem);
     n=n/10;
    }
    if(sum==temp){
        printf("Armstrong number.\n");
    }
    else{
        printf("Not Arsmstrong number. \n");
    }
    return 0;
}
