#include<stdio.h>

int main()
{
    int id[100], n, i;
    char book[100][50];

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&id[i]);

        printf("Book Name: ");
        scanf("%s",book[i]);
    }

    printf("\n-----Library Records-----\n");

    for(i=0;i<n;i++)
    {
        printf("\nBook ID : %d",id[i]);
        printf("\nBook Name : %s\n",book[i]);
    }

    return 0;
}
