#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main() {
  FILE *fr
  FILE *fw;
  fr = fopen("sif.txt", "r");
  fw = fopen("des.txt", "w");
  if(fr==NULL)
	{
		printf("File error");
		return 1;
	}
	else
	{
		if(fw==NULL)
		{
			fclose(fr);
			printf("File error");
			return 1;
		}
		else{}
	}
  char c;
  while ((c = fgetc(fr)) != EOF) 
  {
    if (c == '%') {
      c = ' ';
      fputc(c, fw);
    }
    else if (isalpha(c)) 
	{
      c = c -1;
      if (c == '@') {
        c = 'Z';
      }
    	else if (c == 96) {
        c = 'z';
        fputc(c, fw);
      }     
		else if (c == 'I') {
          c = 'I';
          fputc(c, fw);
        }
    	else if (c == 'Y') {
          c = 'Y';
          fputc(c, fw);
        }
    	else if (c == 'i') {
          c = 'i';
          fputc(c, fw);
        }
    	else if (c == 'y') {
          c = 'y';
          fputc(c, fw);
    }
	}
  fclose(fr);
  fclose(fw);
}
