#include <stdio.h>

using namespace std;

int main()
{
    int r1, r2, s;
    scanf("%d", &r1);
    scanf("%d", &s);

    if (r1>=-1000 && r1 <=1000 && s>=-1000 && s<=1000 )
    {
        r2=s*2-r1;
        printf("%d", r2);
    }
    return 0;
}
