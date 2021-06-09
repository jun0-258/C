#include <stdio.h>
main( ) {
	int a, b;
	char str[4][7] = {' ',};
for(int a=0; a<=3; a++)
    for(int b = 3 - a; b<= 3 + a ; b++)
        str[a][b]='*';
	    
    for(int a=0; a<=3; a++){
	  for(b=0; b <= 6; b++)
	    printf(" %c", str[a][b]);
	 printf("\n");   
    }
}
