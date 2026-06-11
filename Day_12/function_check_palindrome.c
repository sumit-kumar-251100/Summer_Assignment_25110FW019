// WAP to write function for palindrome
#include <stdio.h>
int palindrome(int x){
    int rev=0,temp;
    temp=x;
    while(x>0){
        rev=rev*10;
        rev=rev+(x%10);
        x=x/10;
    }
    if(temp==rev){
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
    if(palindrome(n)){
        printf("Palindrome number\n");
    }
    else{
        printf("Not Palindrome number\n");
    }
    return 0;
}
