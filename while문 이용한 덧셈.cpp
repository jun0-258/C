#include <stdio.h>
main( ) {
	int a, b, s;
	s = 0, a = 1, b = 10;
	while (b >= a) {
		s = s + a;
		a++;
	}
	printf("s = %2d", s);
}
