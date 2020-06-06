#include <stdio.h>

int main()
{
    int n, w, h, i, match;
    double m;

    scanf("%d %d %d", &n, &w, &h);
    m = w*w + h*h;
    for (i=1; i<=n; ++i)
    {
        scanf("%d", &match);
        if (match*match<=m)
            printf("DA\n");
        else
            printf ("NE\n");
    }
    return 0;
}
