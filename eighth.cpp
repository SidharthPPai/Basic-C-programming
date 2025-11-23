/////////////////////////////////////////////////////////
// C program to search specific string in a target file
// g++ eighth.cpp -o eight
//./eight filename :
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc , char **argv)
{


        if(argc!=3){

                printf("Command line error");
                return 1;

        }

        char filename[256];
        strcpy(filename,argv[1]);
        char buffer[256];
        strcpy(buffer,argv[2]);

        FILE *fp = fopen(filename,"rt");

        if(fp==0){

                printf("Error in opening");
                return -1;
        }

        while(!feof(fp)){

                char linebuffer[2048];
                fgets(linebuffer,2000,fp);
                char* p = strstr(linebuffer,buffer);

                }

    }

}





        
