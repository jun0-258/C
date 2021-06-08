#include <stdio.h>
main( ) {
int k, m, a[6][6] = {0, };
//{1, 0, 0, 0}
//{1, 0, 0, 0}
//{1, 0, 0, 0}
//{1, 0, 0, 0}
for(k=0; k <= 5; k++) { // k=1,2,3,4
	a[k][0] = 1;  //
 }
for(k=1; k <= 5; k++) {
	for(m=1; m <= k; m++) {
		a[k][m]=a[k-1][m-1]+a[k-1][m];
	}
   }
  for(k=0; k <= 5; k++) {
  	for(m=0; m <= 5; m++) {
  		printf("%d", a[k][m]);
	  }
	  printf("\n");
  }   
}
