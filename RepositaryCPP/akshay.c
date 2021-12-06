#include<stdio.h>
main()
{
    int arr[5];
    int i,max1=0,max2=0;

    printf("enter array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5; i++)
    {
        if(arr[1]>max1)
        {
            max1=arr[i];
        }
    }

    for(i=0; i<5; i++)
    {
        if(arr[i]>=max2&&arr[i]!=max1)
        {
            max2=arr[i];
        }
    }

    printf("first max number:%d",max1);
    printf("\nsecond max number:%d",max2);
}
