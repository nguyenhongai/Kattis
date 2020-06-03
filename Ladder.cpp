#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() 

{
    int h, v;

    scanf("%d %d", &h, &v);
    double rad = v*(PI/180.0);
    printf("%ld\n", (long int) ceil(h/sin(rad)));
    return 0;
}
