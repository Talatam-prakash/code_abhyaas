 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char str[]="ahpyp";
    int indices[]={1,0,2,4,3};
    int len=strlen(str);
    char new_str[len+1];
    for (int j=0;j<len;j++)
    {
         new_str[indices[j]]=str[j];
    }
    new_str[len]="\0";
    printf("%s",new_str);

 }
