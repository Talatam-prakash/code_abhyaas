#include<stdio.h>
int main()
{
    int arr[]={3,2,5,6,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    int new_arr[count];
    int i=0;
    // for(int k=0;k<n;k++)
    // {
    //     if(arr[k]%2!=0)
    //     {
    //         new_arr[i]=arr[k];
    //         i++;
    //     }
    // }
    // for(int i=0;i<count;i++)
    // {
    //     printf("%d",new_arr[i]);
    // }
    for(int j=0;j<n;j++){
   if(arr[j]%2==0)
      { arr[i++]=arr[j];}}
for(int j=0;j<i;j++)
 {   printf("%d",arr[j]);}
}