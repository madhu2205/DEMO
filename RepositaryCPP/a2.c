#include<stdio.h>
main()
{
    int arr[3][3];
    int i,j;
    printf("enter 2 d array..\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",& arr[i][j]);
        }
    }
    printf("\n original array\n");
    {
        for(j=0; j<3; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n transpose array..\n");
    for(j=0; j<3; j++)
    {
        printf("%d",arr[j][i]);
    }
    printf("\n");
}

