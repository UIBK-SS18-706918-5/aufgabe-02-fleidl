#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	long a;
	long b;
	long c;

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

	printf ("Fakultaet der Zahl %li ist %li\n",a,c);
	long d=sizeof(c);
	printf("Anzahl der Bytes von zahl: %li\n", d);
	
	}
	// Wenn mehr als 1 parameter eingegeben wurde
	else {
	printf("Bitte geben sie genau einen Parameter ein!\n");	
	// printf("Value argc: %i",argc);
	}
	return 0;
}

//Die Maximale Fakultät die berechnet werden kann mit einem long ist 20!
// Die anzahl der Bytes geht von 4 auf 8.

