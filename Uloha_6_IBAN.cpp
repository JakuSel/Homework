#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
	int val;
   	char IBAN[26],IBANF;
   	char bankcode[4];
   	char bankacc[10];
   	char prefix[6];
   	char controlnum[2];
   	
   	printf("Enter bank code (4 digits):");
   	scanf("%s",bankcode);
   	printf("\nEnter bank accout number (4-10 digits):");
   	scanf("%s",bankacc);
   	printf("\nEnter bank accout prefix (if non- enter 000000):");
   	scanf("%s",prefix);
   	
   	strcpy(IBAN, bankcode);
 	strcat(IBAN, prefix);
  	strcat(IBAN, bankacc);
  	strcat(IBAN, "282000");
  	
 /* 	IBANF[0]=S;
  	IBANF[1]=K;
  	strcat(IBANF, controlnum);
  	strcat(IBANF, "");
  	strcat(IBANF, bankcode);
  	strcat(IBANF, bankcode);
  	strcat(IBANF, prefix);
  	strcat(IBANF, bankcode);
  */	
  	
  	printf("IBAN is: %s",IBAN);
  	
  	int len=(int)strlen(IBAN),x,i,z,y;
  
  	printf("\nIBAN lenght is: %d",len);
  	
  	for(i=0;i<len;i++)
  	{
  		y=0;
  		y=(IBAN[i]-48);
  		x=((x*10)+y)%97;	
	}
	x=98-x;
	itoa(x,controlnum,10);
	printf("\nContorll number is: %s",controlnum);
	
	printf("\nIBAN: SK %s %s %s %s ",controlnum,bankcode,prefix,bankacc);
	
}
