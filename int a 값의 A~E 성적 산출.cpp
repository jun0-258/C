#include <stdio.h>
main( ) {
	int a;
	scanf("%d", &a);
	if(a <= 0 && a > 21){
		printf("E");
	}
	if(a > 20 && a < 41){
		printf("D");
	}
	if(a > 40 && a < 61){
		printf("C");
	}
	if(a > 60 && a < 81){
		printf("B");
	}
	if(a > 80 && a <= 100){
		printf("A");
	}
}
