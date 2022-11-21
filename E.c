#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int a;
    scanf("%lld",&a);
    if(a%3==0 || (a%3==1 && a%2!=0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
