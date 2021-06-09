#include <stdio.h>
main( ) {
	int a, b, sum = 0 ;
	int n[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(a=0; a <= 2; a++) {
	   for(b = 0; b <= 2; b++)
	    if (a > b) // (a < b),(a <= b),(a == b),(a != b)
	  sum = sum + n[a][b];
	}
	printf("%2d", sum);
}
