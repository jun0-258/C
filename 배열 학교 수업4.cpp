#include <stdio.h>
main( ) {
	int a,b;
	int m[4][4]={ {10, 20, 30},{40, 50, 60},{70, 80, 90} };
	for(a=0; a <= 2; a++)
	  for(b=0; b <=2 ; b++) {
	  	m[a][3]=m[a][3]+m[a][b];
	  	m[3][b]=m[3][b]+m[a][b];
	  } 
	  for(a=0; a <= 3; a++) {
	  	for(b=0; b <= 3; b++)
	  	  printf("%5d", m[a][b]);
	printf("\n");
	  }
}
