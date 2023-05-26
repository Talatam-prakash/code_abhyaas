#include<stdio.h>
int main()
{
    int n;
    printf("No of elements in a array ::");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the %d element ::",i);
        scanf("%d",&arr[i]);
    }
    int max_value=arr[0];
    for (int j=0;j<n;j++)
    {
        if(arr[j]>max_value)
        {
            max_value=arr[j];
        }
    }
    printf("\nthe maximum value in the array is %d",max_value);
}