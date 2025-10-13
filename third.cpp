//////////////////////////
// Program 3 - Odd or Even
// By sidharth P Pai
// 
// gcc thrid.cpp -o third
// Third 15
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){



	if(argc != 2){

		printf("Command line error \n");
		return 1;
	}

	int n = atoi(argv[1]);
	printf("%d is %s\n",n,(n%2==0) ? "Even " : "Odd");
	return 0;



	




}