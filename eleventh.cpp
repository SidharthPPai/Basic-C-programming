/////////////////////////////////////////////
// C program to read a file delimit the file 
// dynamically parse the file and display the output 
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

struct PersonRecord {

        char name[200];
        int age;
        float salary;


};

int count_records(char* str){

        char* pstr = str;

        while(*pstr != ':'){

                pstr++;

        }
        pstr++;

        return atoi(pstr);
}

bool parse_record(char *line, PersonRecord *pdata) {
        if(line == NULL || pdata == NULL) {
                printf("Error: Input line or data pointer is null.\n");
                return false;
        }
        char temp_line[512];
        strncpy(temp_line, line, sizeof(temp_line)-1);
        temp_line[sizeof(temp_line)-1] = '\0';

        char *token;
        int index = 0;
        const char delimiter[] = ",";
        token = strtok(temp_line, delimiter);
        if(token != NULL) {
                strncpy(pdata -> name, token, sizeof(pdata->name)-1);
                pdata->name[sizeof(pdata->name)-1] = '\0';
                index++;
        } else {
                printf("Parsing Error: Missing Name Token. \n");
        }
        token = strtok(NULL, delimiter);
        if(token != NULL) {
                pdata->age = atoi(token);
                index++;
        } else {
                printf("Parsing Error: Missing Age Token. \n");
        }
        token = strtok(NULL, delimiter);
        if(token != NULL) {
                pdata->salary = atof(token);
                index++;
        } else {
                printf("Parsing Error: Missing Salary Token.\n");
        }
        return index == 3;
}

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
        int num_records = -1;

        num_records = count_records(line_buffer);
        printf("Number of records %i\n",num_records);

        struct PersonRecord *dynamic_data;
        dynamic_data = (struct PersonRecord *)malloc(num_records * sizeof(struct PersonRecord));

        for(int i = 0; i < num_records; i++) {
                fgets(line_buffer, 2000, fp);
                parse_record(line_buffer, &dynamic_data[i]);
        }
        for(int i = 0; i < num_records; i++) {
                PersonRecord current_data = dynamic_data[i];
                printf("%s | %d | %f \n", current_data.name, current_data.age, current_data.salary);
        }
        free(dynamic_data);
        return 0;
}
