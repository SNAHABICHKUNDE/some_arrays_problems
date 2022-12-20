// Sort anarray using the insertion algorithm
#include<stdio.h>
void insertion_sort(int *, int);
int main ()
{
    int arr[] = {44,33,55,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    insertion_sort(arr,n);
    
    for(int i=0; i<=n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void insertion_sort(int arr[], int n)
{
    for(int i=1;i<=n;i++)
    {
        int key = arr[i];
        int j= i-1;
        
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= key;
    }
    return;
}