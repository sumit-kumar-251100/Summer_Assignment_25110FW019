// WAP to input and display array
#include <stdio.h>
int main() {
    int n,array[100],i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}
