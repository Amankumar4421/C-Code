#include <stdio.h>

int isSubsetSum(int set[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0 && sum != 0)
        return 0;

    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    return isSubsetSum(set, n - 1, sum) + isSubsetSum(set, n - 1, sum - set[n - 1]);

}
int main()
{
    int n, sum;
    printf("Enter Size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Set : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter target Sum : ");
    scanf("%d", &sum);
    printf("No of solution possible : %d", isSubsetSum(a, n, sum));
    return 0;
}