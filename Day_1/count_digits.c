// WAP to count digits in a number
#include <stdio.h>
int main() {
    int num,count=0;
    printf("Enter a given number:");
    scanf("%d",&num);
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("number of digits is %d",count);
    return 0;
}
