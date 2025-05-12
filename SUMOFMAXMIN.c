//C program to find and display the sum of max and min(12/05/2025)

#include<stdio.h>
int main(){

       int a,b,c,d,max,min,sum;
       printf("Enter the four numbers: \n");
      scanf("%d%d%d%d",&a,&b,&c,&d);
      max=a>b&&b>c&&c>d?a:(b>c&&c>d)?b:(c>d)?c:d;
      //finding max using terinary operators
      min=a<b&&b<c&&c<d?a:(b<c&&c<d)?b:(c<d)?c:d;
      //finding min using terinary operators
      sum=max+min;
     printf("The sum of max and min is : %d",sum);//display result

   return 0;
}
