#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    long long a;
    double cv;

    scanf("%lld", &a);
    cv = (double)sqrt(a)*4;
    printf ("%.20g", cv);

    return 0;
}
