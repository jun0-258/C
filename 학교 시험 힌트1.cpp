#include <stdio.h>
main( ) {
	int num1=15;
	int num2=20;
	int k,a, b;
	  k= num1 >> 2;
	  a = num1 << 2;
	  b = num1 ^ num2;
	  printf(" k = %3d, a = %3d, b = %3d", k, a, b);
}
