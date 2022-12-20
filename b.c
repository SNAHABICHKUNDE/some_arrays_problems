/*If an array contain n elements , then write a program to check 
if arr[0]=arr[n-1], arr[1]=arr[n-2] and so on*/

#include<stdio.h>
int main()
{
    int n, *arr;
    printf("the size of the array: ");
    scanf("%d",&n);
    arr = (int *) malloc(n * sizeof(int));
    for(int i=0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<=(n/2-1); j++)
    {
        if(arr[j]==arr[n-1-j])
        {
            printf("%d and %d elements of the array are equal\n",j,n-j-1);
        }
    }
    free (arr);
    return 0;
}