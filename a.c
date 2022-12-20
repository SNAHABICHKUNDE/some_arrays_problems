/*25 numbers are entered from the keyboard into an array. Write a program to 
find how many of the are positive and how many are negative, how many are evenand how many are odd*/
#include<stdio.h>
int main ()
{
    int i, posi = 0, neg = 0, zero = 0, odd = 0, even = 0, *arr;
    arr = (int *) malloc(25* sizeof(int));

    for(i=0; i<=24; i++)
    {
        scanf("%d",&arr[i]);
    } 

    for (int j =0; j<=24; j++)
    {
        if(arr[j]%2==0)
        {
            even ++;
        }
        else{
            odd ++;
        }
    }

    for (int k=0; k<=25; k++)
    {
        if(arr[k]<0)
        {
            neg ++;
        }
        else if (arr[k]>0)
        {
            posi ++;
        }
        else
        {
            zero ++;
        }
    }
    printf("number of even numbers in the array is %d\n",even);
    printf("number of odd numbers in the array is %d\n",odd);
    printf("number of positive numbers in the array is %d\n",posi);
    printf("number of negative numbers in the array is %d\n",neg);
    free(arr);
    return 0;
}