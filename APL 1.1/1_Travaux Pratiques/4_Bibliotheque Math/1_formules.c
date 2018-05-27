#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	float 	res;

	res = sqrtf((float) abs((int) log(0.5f))); 
  	printf("%5.2f\n", res);
  	res = sinf(M_PI/6.0f);
  	printf("%5.2f\n", res);
  	res = powf(expf(-1.0f), 4.0f);
  	printf("%5.2f\n", res);
  	res = logf(-3.0f);
  	printf("%5.2f\n", res);
  	res = powf(sqrtf(2.0f), 2.0f);
  	printf("%5.2f\n", res);
  	return EXIT_SUCCESS;
}