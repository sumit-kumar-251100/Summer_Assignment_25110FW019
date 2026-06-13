// WAP to linear search
#include <stdio.h>
int main() {
    int n,i,arr[30],item,found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==arr[i]){
            printf("Element is found at position: %d ",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element is not found: ");
    }
    return 0;
}
