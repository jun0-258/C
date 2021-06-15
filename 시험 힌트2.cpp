#include <stdio.h>
main( ) {
	int k=10, t = 7; // y=12; //
	int hap;
	hap = k++ + ++t; // ++k - t-- + ++y; //
	printf("k = %d, t = %d\n ", k, t); // t, y//
	printf("hap= %d ", hap);
} 
