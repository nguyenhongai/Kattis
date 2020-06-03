#include <stdio.h>
using namespace std;
int main()
{
    int n,i,m,a;

    scanf ("%d", &n);
    for (i=1; i<=n; ++i)
    {
        scanf("%d", &m);
        a = m/400;
        if (m%400!=0)
            printf("%d\n", a+1);
        else
            printf("%d\n",a);
    }
    return 0;
}
