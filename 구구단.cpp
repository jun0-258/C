#include <stdio.h>
main( ) {
	int j, k = 1;
	while(k <= 9){
		j = 1;
		while(j <= 9){
			printf("%d *%d = %2d\n", k, j, k*j);
			j++;
		}
		k++;
	}
}
