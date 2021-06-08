#include <stdio.h>
main( ) {
	char d[3][3];
	int a, b;
	 for(a=0; a <= 2; a++) {
	 	for(b=0; b <= 2; b++) {
	 		if(a != b) // (a == b), (a > b), (a>= b), (a < b), (a <= b)
	 		  d[a][b]='#';
	 		else
	 		  d[a][b]='*';
		 }
	 }
	 for(a=0; a <= 2; a++) {
	 	for(b=0; b <= 2; b++) {
	 		printf("%c", d[a][b]);
		 }
		 printf("\n");
	 }
	 
}
