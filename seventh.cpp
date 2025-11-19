////////////////////////////////////////////////////////////////////////
// C program to convert a number from ascii to integer value
//g++ seventh.cpp -o seventh
//./seventh 5
//
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void printascii(int val)
{


        while(val > 0){

                int temp = val%10;
                putchar(48+temp);
                val = val / 10;

        }


}

int myatoi( char* str ){ // formal parameter

        //return atoi(str);
        char *pstr = str;
        int ret_val = 0;
        while(*pstr!=0){

                int c = *pstr - 48;
                ret_val = ret_val * 10 + c;
                pstr++;
        }
        return ret_val;

}


int main(int argc , char **argv){


        if(argc!=2){

                printf("Command line error");
                return 1;
        }


        int i = myatoi(argv[1]);

        printascii(i);


        return 0;



}



}
