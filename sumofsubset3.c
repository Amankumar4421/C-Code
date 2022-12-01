#include <stdio.h>
#include <stdlib.h>
int s[20], a[20], n, m, k = -1;
void subset(int sum, int top, int mode, int i)
{
    i++;
    if (i != n)
    {
        if (mode == 1)
        {
            sum = sum + a[i];
            s[++top] = a[i];
        }
        if (sum == m)
        {
            for (int j = 0; j <= top; j++)
            {
                printf("%d ", s[j]);
            }
            printf("\n");
            k = 1;
        }
        else if (sum < m)
        {
            subset(sum, top, 1, i);
            subset(sum, top, 0, i);
        }
    }
}
void main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Solution :\n");
    subset(0, -1, 0, -1);
    subset(0, -1, 1, -1);
    if (k == -1)
    {
        printf("No Solution");
    }
}
