#include <stdio.h>

using namespace std;

int main()
{
    float x, n;
    scanf("%f", &x);
    n=x*1000*5280/4854;
    printf("%.0f", n);
    return 0;
}
