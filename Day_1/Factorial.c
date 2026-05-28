// WAP to find factorial of a given number
#include <stdio.h>
int main(){
    int i,N,fact=1;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        fact=fact*i;
    }
    printf("factorial of given number is %d",fact);
    return 0;
}
