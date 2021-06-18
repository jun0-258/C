#include <stdio.h> 
int main() {
int i;
int a, b, n;
scanf("%d %d", &a, &b);
for(i = 1; i <= a && i <= b; i++)
      if (a % i == 0 && b % i == 0)
printf("%d ", i);
printf("\n");
return 0;
}
