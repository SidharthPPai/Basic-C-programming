///////////////////////////////////////////////////////////////////////
// C program to find records of the employees using struct and functions 
// g++ sixth.cpp -o sixth
// ./sixth employee.txt
//
//
//////////////////////////////////////////////////////////////////////

include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

struct person_record {

        char name[200];
        int age;
        float salary;


}data[MAX_RECORDS];

int count_records(char* str){

        char* pstr = str;

        while(*pstr != ':'){

                pstr++;

        }
        pstr++;
  
return atoi(pstr);
}


int num_records = -1;

int main(int argc , char **argv){

        if(argc!=2){
                printf("Command line Error ");
                return 1;
        }

        char filename[256];
        strcpy(filename,argv[1]);

        FILE *fp = fopen(filename,"rt");

        if(fp==0){
                printf("Error in opening");
                return -1;
        }

        char line_buffer[2000];
        fgets(line_buffer,2000,fp);

        num_records = count_records(line_buffer);
        printf("Number of records %i",num_records);
}





















  

        return atoi(pstr);
}
