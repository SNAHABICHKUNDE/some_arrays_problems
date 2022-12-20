// Initalize an array with 10 elements and then modify it by multyplaying each element by 3.

void inita_arr(int arr[])
{
    for(int i=0;i<=9;i++)
    {
        arr[i]= i+1;
    }
    return;
}

void modify(int arr[])
{
    for (int i=0; i<=9; i++)
    {
        arr[i]= arr[i]*3;
    }
    return;
}
int main ()
{
    int arr[10];
    inita_arr(&arr[0]);
    modify(&arr[0]);

    for(int i=0; i<=9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}