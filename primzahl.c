#include<stdio.h>
#include<stdlib.h>
int main(int argc, char ** argv){
int a,b;

a = atof(argv[1]);

for(b = 2 ; b*b <= a ; b++ ) 
  if( a % b == 0 ) 
  { 
    printf("Zahl %i ist durch %i teilbar und somit keine Primzahl!\n",a,b);
    return 0;
  }

printf("Zahl %i ist eine Primzahl!\n",a);
return 0;
}
