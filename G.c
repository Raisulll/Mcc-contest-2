#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(A==B)
    {
        printf("%d",A);
    }
    else if(A==0 || B==0)
    {
        if(A>B)
        {
            printf("%d",A);
        }
        else
        {
            printf("%d",B);
        }
    }
    else if (A==7 || B==7)
    {
        printf("7");  
    }
    else if((A+B)<7 && A<B&& B%2!=0)
    {
        printf("%d",B);
    }
    else if ((A+B)<7 && B<A && A%2!=0)
    {
        printf("%d",A);
    }
    else if ((A==4 && B==5)||(A==5 && B==4))
    {
        printf("5");
    }
    else if ((A==1 && B==2)||(A==2 && B==1))
    {
        printf("3");
    }
    else if ((A+B)>=6 && A%2==0 && B%2==0)
    {
        printf("6");
    }
    else if ((A==1 && B==4) || (A==4 && B==1))
    {
        printf("5");
    }
    else
    {
        printf("7");
    }
    return 0;
}
