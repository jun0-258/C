#include <stdio.h>
main( ) {
	int a, b, s;
	s = 0;
	a = 1; b = 10;
	while (b >= a) { 
		      s = s + a;  /* s = 0+1+2+3+4+5+6+7+8+9+10 */
			  a++;        /*a=a+1--> 2,3,4,5,6,7,8,9,10,11 */   
	}
	printf("%d", s);
}
