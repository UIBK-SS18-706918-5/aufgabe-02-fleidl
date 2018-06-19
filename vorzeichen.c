#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){

	float a;

	a = atof(argv[1]);

	if (a < 0) {
		printf("\n Die Zahl %f ist negativ\n",a);
	}
	else if (a > 0){
		printf("\ndie Zahl %f ist positiv\n",a);
	}
	else {
		printf("\ndie Zahl ist 0\n");
	}
return 0;
}
