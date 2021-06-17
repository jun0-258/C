#include <stdio.h>
main( ){
	int a = 1;
	while (a < 30) {
		if(a % 3 == 0)
		   printf("%2d\n", a);
		   a++;
	}
	printf("a = %3d", a);
}
