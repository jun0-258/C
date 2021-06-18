#include <stdio.h>
main( ){
    for(int i = 0; i < 2; i++){
	  for(int j = 0; j <= i; j++){
	  	printf("*");
	  }
	  printf("\n");
	}
	for(int i = 0; i < 3; i++){
	  for(int j = 0; j < 3-i; j++){
	  	printf("*");
	  }
	  printf("\n");
	}
}
