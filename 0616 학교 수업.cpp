#include <stdio.h>
main( ) {
	int num[3][3]={0,};
	int a, b, k=0, tmp;
	for(a = 0; a <= 2; a++)
	   for(b = 0; b <= 2; b++) {
	   	k = k + 1;
	   	num[a][b] = k;
	   }
	for(a = 0; a <= 1; a++)
	  for(b = 0; b <= 2; b++) {
	  	      tmp = num[a][b];
	  	num[a][b] = num[b][a];
	  	num[b][a] = tmp;
	  }
	for(a  = 0; a <= 2; a++){
	   for(b = 0; b <= 2; b++)
	     printf("%2d", num[a][b]);
	printf("\n");
	}
}
