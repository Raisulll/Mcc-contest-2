#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Weird");
    }
    else if(n%2==0 && n>=2 && n<=5)
    {
        printf("Not Weird");
    }
    else if(n%2==0 && n>=6 && n<=20)
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }
    return 0;
}
