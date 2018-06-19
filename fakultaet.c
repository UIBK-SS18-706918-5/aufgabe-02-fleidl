#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a;
	int b;
	int c;

	// Einlesen der Seitenlängen
	a = atof(argv[1]);

	// Ueberprüfen ob a = 0
	if (a==0){
	printf("Bitte geben sie eine Natuerliche Zahl außer Null ein!\n");
	}
	//ueberprüfen ob genau ein Parameter eingegeben wurde
	else if (argc == 2){
	
	
	for (b=1, c=1; b<=a; b++)
	c *= b;

	printf ("Fakultaet der Zahl %i ist %i\n",a,c);
	}
	// Wenn mehr als 1 parameter eingegeben wurde
	else {
	printf("Bitte geben sie genau einen Parameter ein!\n");	
	// printf("Value argc: %i",argc);
	}
	return 0;
}

