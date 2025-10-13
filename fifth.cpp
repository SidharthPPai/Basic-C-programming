//////////////////////////
// Program 4 - Check wether the number is a leap year
// By sidharth P Pai
// 
// gcc fifth.cpp -o fifth
// fifth 2024
//////////////////////////




#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    	if (argc != 2) {
       		 printf("Command line error\n");
        	 return 1;
       }



    	int y = atoi(argv[1]);
    	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        	printf("%d is a Leap Year\n", y);
    	else
        	printf("%d is not a Leap Year\n", y);
    	return 0;
}
