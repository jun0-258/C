#include <stdio.h>
main( ) {
	int k=10 ,t = 7;
	int hap;
	hap = k < t ? ++k : ++t;
	printf("k = %d, t = %d\n ", k, t);
	printf("hap= %d ", hap);
}
