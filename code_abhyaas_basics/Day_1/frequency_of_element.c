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
    int val;
    printf("\nwhich element to find the frequency");
    scanf("%d",&val);
    int count=0;
    for(int k=0;k<n;k++)
    {
        if(arr[k]==val)
        {
            count++;
        }
    }
    printf("Frequency of %d is %d",val,count);
}