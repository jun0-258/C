#include <stdio.h> 
main( ) {
	int a=1, b;
	scanf("%d", &b);
	while(a <= b){
		if(a % 2 == 0)
		   printf("%4d", a);
		   a++;
	}
}
