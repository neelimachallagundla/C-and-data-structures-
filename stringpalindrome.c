
//c program to check whether string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[20];
    printf("enter a string\n");
    scanf("%s",a);
    int length=strlen(a);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("not a palindrome");
            return a[i];
        }
    }
    printf("palindrome");
    return 0;
}
