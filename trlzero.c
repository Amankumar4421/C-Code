#include <stdio.h>
#include <stdbool.h>

bool check(int p, int n)
{
    int temp = p, count = 0, f = 5;
    while (f <= temp)
    {
        count += temp / f;
        f = f * 5;
    }
    return (count >= n);
}

int findNum(int n)
{

    if (n == 1)
        return 5;

    int low = 0;
    int high = 5 * n;

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (check(mid, n))
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main()
{
    int n;
    printf("Enter No of Trailing Zero : ");
    scanf("%d", &n);
    printf("The Smallest number contains %d trailing zero is %d",n, findNum(n));
    return 0;
}