#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void open_file(char *file_name)
{
	char buf[250];
	int max = 1000;
	FILE *fp;

	fp = fopen(file_name, "r");
	printf("file opened!\n");

	while(!feof(fp))
	{
		fgets(buf, max, fp);
		printf("%s", buf);
	}
	printf("\n");
	fclose(fp);


}

int main(int argc, char *argv[])
{	
	if(argc < 2){
		perror("Not a valid argument. usage: ./simpless.c filename1.txt\n");
		exit(0);	
	}
	else
	{
		printf("Your file name is: %s\n", argv[1]);
		open_file(argv[1]);
	}
		
	return 0;
}