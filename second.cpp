//////////////////////////
// Program 2 - Add,Subtract,Multiply,Devide Two Numbers
// By sidharth P Pai
// 
// gcc second.cpp  -o second
// second 5 2
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){


	
	if(argc != 3){
	
		printf("Command line error");
		return 1;
	
	}


	float a = atof(argv[1]);
	float b = atof(argv[2]);

	printf("Sum = %.2f\n",a+b);
	printf("Difference = %.2f\n",a-b);
	printf("Product = %.2f\n",a*b);
	printf("Quotient = %.2f\n",a/b);
	
	return 0;


}