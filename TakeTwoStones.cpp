#include <stdio.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if (n&1)
        printf("Alice");
    else
        printf("Bob");

    return 0;
}
