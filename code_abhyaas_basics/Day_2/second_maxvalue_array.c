#include<stdio.h>
int main()
{
    int arr[]={5,5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_value=0;
    int max_value2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_value)
        {
          //  max_value2=max_value;
            max_value=arr[i];
        }
        // else if(arr[i]>max_value2 && arr[i]<max_value)
        // {
        //     max_value2=arr[i];
        // }
    }
       for(int i=0;i<n;i++)
    {
        if(arr[i]>max_value2 && max_value!=arr[i])
        {
            max_value2=arr[i];
        }
    }
    printf("%d",max_value2);
    

}