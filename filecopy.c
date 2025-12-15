#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("area.C","r");
	if(fs==NULL);
	{
		printf("file does not open");
		exit(0);
	}
	ft=fopen("break.C","w");
	if(ft==NULL)
	{
		printf("unable to create a file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file successfully copied");
	
}
