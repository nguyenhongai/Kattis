#include <stdio.h>

using namespace std;

int main()
{
    int h, m;
    scanf("%d", &h);
    scanf("%d", &m);

    if (m>=45)
        printf("%d %d", h, m-45);
    else
    {
        m = 60 + (m-45);
        if(h>0)
            h = h - 1;
        else
            h = 23;
        printf("%d % d", h, m);
    }
    return 0;
}
