//////////////////////////
// Program 4 - Largest of three numbers
// By sidharth P Pai
// 
// gcc fourth.cpp -o fourth
// fourth 4 7 2
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    	if (argc != 4) {
       		 printf("Command line error");
        	return 1;
    }


    	int a = atoi(argv[1]);
	int b = atoi(argv[2]); 
	int c = atoi(argv[3]);

    	if (a >= b && a >= c) printf("%d is largest\n", a);
    	else if (b >= a && b >= c) printf("%d is largest\n", b);
    	else printf("%d is largest\n", c);
    	return 0;
}
