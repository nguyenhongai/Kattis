#include <stdio.h>

using namespace std;

int main()
{
    int a, as, a1, a2, a3, b, b1, b2, b3, bs;

    scanf("%d %d", &a, &b);     

    if (a>=100 && a<=999)
    {
        a1=a/100;
        a2=(a/10)%10;
        a3=a%10;
        as=a3*100+a2*10+a1;
    }
      if (b>=100 && b<=999)
    {
        b1=b/100;
        b2=(b/10)%10;
        b3=b%10;
        bs=b3*100+b2*10+b1;
    }
    if (as>bs)
        printf("%d", as);
    else
        printf("%d", bs);
    return 0;
}
