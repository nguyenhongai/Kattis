#include <stdio.h>

using namespace std;

int main()
{
    int x, n, i, me, s=0, o;

    scanf("%d\n", &x);
    scanf("%d\n", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%d", &me);
        s+=me;
    }
    o = ((x*n)+x)-s;
    printf("%d", o);

    return 0;
}
