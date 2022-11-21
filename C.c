#include <stdio.h>
int main()
{
    int n;
    float bill = 0.00;
    scanf("%d", &n);
    if (n <= 50)
    {
        bill = bill + n * 0.5;
        n = 0;
    }
    if (n > 50)
    {
        bill = bill + 50 * 0.5;
        n = n - 50;
    }
    if (n <= 100)
    {
        bill = bill + n * 0.75;
        n = 0;
    }
    if (n > 100)
    {
        bill = bill + 100 * 0.75;
        n = n - 100;
    }
    if (n <= 100)
    {
        bill = bill + n * 1.2;
        n = 0;
    }
    if (n > 100)
    {
        bill = bill + 100 * 1.2;
        n = n - 100;
    }
    bill = bill + n * 1.5;
    bill = bill + bill * 20 / 100;
    printf("%.2f", bill);
    return 0;
}