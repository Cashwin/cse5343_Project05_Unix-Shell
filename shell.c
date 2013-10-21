//Ashwin Chandrasekhar
//Project 5- Unix Shell

#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <stdlib.h>

#define BUFFSIZE 1000

int main(int argc, char *argv[])
{

	while(true) {
		char *c1 = "type";
		char *c2 = "exit";
		char *c3 = "copy";
		char *c4 = "delete";
		if(strcmp(argv[1], c1) == 0) {
		FILE *fi = fopen(argv[2], "r");             // File Pointer	
    	char buffer[BUFFSIZE];
    	printf("Here's your file: ");
	    while(fgets(buffer,BUFFSIZE - 1,fi) != NULL) {
		printf(">", argv[2]);
        printf ("%s\n", buffer);
	       }
	    fclose(fi);
	    }

	    else if(strcmp(argv[1], c2) == 0) {
	    	break;
	    }

	    else if(strcmp(argv[1], c3) == 0) {
	    		char ch;
	    		printf("Copying content of first file to second...\n");
	    		FILE *file1 = fopen(argv[2],"r");
	    		FILE *file2 = fopen(argv[3],"w");

	    		while((ch = fgetc(file1)) != EOF) {
	    			fputc(ch, file2);
	    		}

	    		printf("File copied successfully\n");

	    		fclose(file1);
	    		fclose(file2);
	    	}

	break;
	}

  return 0;
 }