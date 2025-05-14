//c program to find lcm
#include<stdio.h>
int main(){
int n1, n2;
printf("Enter two numbers:");
scanf("%d%d",&n1,&n2);
int big=(n1>n2?n1:n2);
int step=big;
while (1){

if(big%n1==0&&big%n2==0)
break;
else
big=big+step;
}
printf("The 1cm of two numbers is: %d\n",big);
return 0;
}
