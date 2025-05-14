//c program to implement timer
#include <stdio.h>
#include<conio.h>
#include<unistd.h>

int main()
{
    int h=3;
    int m=45;
    int s=0;
    while(1)
    {
        printf("\n\n\t\t %02d : %02d : %02d",h,m,s);
        sleep(1);
        system("clr");
        s=s+1;
        if(s==0)
        {
            m=m+1;
            s=0;
        }
        else if(m==60)
        {
            h=h+1;
            m=0;
            s=0;
        }
        else if(h==12)
        {
            h=0;
            m=02;
            s=0;
        }
    }

    return 0;
}
