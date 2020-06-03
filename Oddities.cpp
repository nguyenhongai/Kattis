#include <stdio.h>

using namespace std;

int main()
{
    int x, n, i;

    scanf("%d", &n);

    if (n>=1 && n<=20)
    {
        for (i=1; i<=n; ++i)
        {
            scanf("%d\n", &x);
            if (x%2==0 && x<=10 && x>=-10)
                printf("%d is even\n", x);
            if (x%2!=0 && x<=10 && x>=-10)
                printf("%d is odd\n", x);
        }
    }
    return 0;
}
