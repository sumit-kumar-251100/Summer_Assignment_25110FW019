// WAP to write function for Armstrong
#include <stdio.h>
#include <math.h>
int armstrong(int x){
    int rem,temp,sum=0,digits=0;
    temp=x;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
    temp=x;
    while(x>0){
        rem=x%10;
        sum=sum+round(pow(rem, digits));
        x=x/10;
    }
    if(temp==sum){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n)){
        printf("Armstrong number\n");
    }
    else{
        printf("Not Armstrong number\n");
    }
    return 0;
}
