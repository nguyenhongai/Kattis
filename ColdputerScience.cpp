#include <stdio.h>

using namespace std;

int main()
{
    int n, t, i, a=0;

    scanf("%d", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%d", &t);
        if (t<0)
            a=++a;
    }
    printf("%d", a);

    return 0;
}
