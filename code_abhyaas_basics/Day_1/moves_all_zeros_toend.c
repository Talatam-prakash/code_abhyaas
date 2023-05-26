 #include<stdio.h>
 int main()
 {
    int n;
    printf("No of elements in a array ::");
    scanf("%d",&n);
    int arr[n];
     int new_arr[n];
    int j=0;
    printf("enter array elements with must with zeros\n");
    for(int i=0;i<n;i++)
    {
        printf("enter the %d element ::",i);
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]!=0)
        {
            new_arr[j]=arr[k];
            j++;
        }
    }
       while(j!=n)
        {
            new_arr[j]=0;
            j++;
        }
    for (int i=0;i<n;i++)
    {
        printf("%d",new_arr[i]);
    }
}