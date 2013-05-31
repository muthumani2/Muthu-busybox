#include<stdio.h>
#include<stdlib.h>
#include "libbb.h"

#define size 230 
char line[230];

int pr_main(int argc,char *argv[])
{
	char m;
	int inc=1,i;
	FILE *fd;
	fd=fopen(argv[1],"r+");
	if(fd==0)
		printf("Error In Opening File\n");
	else{
		printf("\nFile Opened\n");
		printf("\n Line No	Data\n");
		printf("   %d \t\t",inc);
		while((m=fgetc(fd))!=EOF){
			if(m!='\n'){
				printf("%c",m);
				m++;
			}
			else{
				inc++;
				m++;
				if(m=fgetc(fd)!=EOF){
					printf("\n");
					printf("   %d \t\t",inc);
				}
			}
		}
		fclose(fd);
	}
	printf("\n");
	return 0;
}
