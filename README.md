// c program to find the GcD OF two numbers(12/05/2025)
#include <stdio.h>

int main() {
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
while(b != 0){
    //Here while loop is used when we dont know the number iterations
    int quotient=a/b;//'/',it is used to get the quotient of two numbers when divided
int remainder=a%b;//'%',it is used to get the remainder of two numbers
a=b;
b=remainder;
}
printf("\n");
printf("%d",a);//display result(GCD of two numbers)

    return 0;
}
