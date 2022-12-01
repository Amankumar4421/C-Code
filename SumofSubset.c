// Partially accepted
#include <stdio.h>  //Recursive or Backtracking Approach
int n, sum, count = 0;
void solve(int a[], int s, int i, int target)
{
    if (target == s)
    {
        count++;
        if (i < n)
            solve(a, s - a[i - 1], i, target);
    }
    else
    {
        for (int j = i; j < n; j++)
            solve(a, s + a[j], j + 1, target);
    }
}
int main()
{
    printf("Enter Size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Set : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter target Sum : ");
    scanf("%d", &sum);
    solve(a, 0, 0, sum);
    printf("Total Subset can be form : %d", count);
}