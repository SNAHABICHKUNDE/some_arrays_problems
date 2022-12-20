// Write a program to find out the smallest element of the array of 25 elements
#include<stdio.h>
int main()
{
    int temp, arr[25];

    for(int i=0; i<=24; i++)
    {
        scanf("%d",&arr[i]);
    }

    temp = arr[0];

    for(int i=0; i<=24; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    printf("the smallest element of the array is %d\n",temp);

    return 0;
}
