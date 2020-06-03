#include <stdio.h>

using namespace std;

int main() {

  int n, p, i;
  char c[256];

  scanf("%d %d", &n, &p);

  for (i=1; i<=n; ++i)
    scanf("%s", c);

  printf("%d", p);
  return 0;
}
