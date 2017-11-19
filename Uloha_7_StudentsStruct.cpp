#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
   char city[20];
   int pc;
}address_detail;

typedef struct{
   char name[20];
   float age;
   float salary;
   address_detail address;
} person;

int main()
{
	int i=0,j=0,p=0,nk=0,old=0,ln=0,asc[20],temp=0;
	float avg=0,aa=0,sat=0;
	
   srand(time(NULL));
    
   person student[20];
   strcpy(student[0].name,"Sebastian"); student[0].age=35; student[0].salary=1452; 
   strcpy(student[0].address.city,"Kosice"); student[0].address.pc=92512;
   strcpy(student[1].name,"David"); student[1].age=45; student[1].salary=1471; 
   strcpy(student[1].address.city,"Kosice"); student[1].address.pc=04001;
   strcpy(student[2].name,"Filip"); student[2].age=30; student[2].salary=987; 
   strcpy(student[2].address.city,"Bardejov"); student[2].address.pc=82356;
   strcpy(student[3].name,"Janka"); student[3].age=19; student[3].salary=1203; 
   strcpy(student[3].address.city,"Levoca"); student[3].address.pc=14780;
   strcpy(student[4].name,"Denisa"); student[4].age=35; student[4].salary=859; 
   strcpy(student[4].address.city,"Kosice"); student[4].address.pc=90845;

   strcpy(student[5].name,"Dominik"); student[5].age=28; student[5].salary=1452; 
   strcpy(student[5].address.city,"Kosice"); student[5].address.pc=84652;
   strcpy(student[6].name,"Jan"); student[6].age=31; student[6].salary=1020; 
   strcpy(student[6].address.city,"Senica"); student[6].address.pc=71254;
   strcpy(student[7].name,"Tobias"); student[7].age=32; student[7].salary=456; 
   strcpy(student[7].address.city,"Senec"); student[7].address.pc=12387;
   strcpy(student[8].name,"Tereza"); student[8].age=41; student[8].salary=785; 
   strcpy(student[8].address.city,"Poprad"); student[8].address.pc=12874;
   strcpy(student[9].name,"Slavka"); student[9].age=20; student[9].salary=1025; 
   strcpy(student[9].address.city,"Kosice"); student[9].address.pc=68787;
   
   strcpy(student[10].name,"Samuel"); student[10].age=24; student[10].salary=1332; 
   strcpy(student[10].address.city,"Kosice"); student[10].address.pc=87458;
   strcpy(student[11].name,"Xenia"); student[11].age=22; student[11].salary=800; 
   strcpy(student[11].address.city,"Presov"); student[11].address.pc=8001;
   strcpy(student[12].name,"Daniel"); student[12].age=44; student[12].salary=1701; 
   strcpy(student[12].address.city,"Michalovce"); student[12].address.pc=07101;
   strcpy(student[13].name,"Branislav"); student[13].age=25; student[13].salary=1101; 
   strcpy(student[13].address.city,"Martin"); student[13].address.pc=41444;
   strcpy(student[14].name,"Simona"); student[14].age=32; student[14].salary=1045; 
   strcpy(student[14].address.city,"Kosice"); student[14].address.pc=04022;
   
   strcpy(student[15].name,"Dusan"); student[15].age=18; student[15].salary=697; 
   strcpy(student[15].address.city,"Michalovce"); student[15].address.pc=55654;
   strcpy(student[16].name,"Kamil"); student[16].age=28; student[16].salary=1500; 
   strcpy(student[16].address.city,"Kosice"); student[16].address.pc=04011;
   strcpy(student[17].name,"Michaela"); student[17].age=27; student[17].salary=1300; 
   strcpy(student[17].address.city,"Senec"); student[17].address.pc=92545;
   strcpy(student[18].name,"Roman"); student[18].age=18; student[18].salary=1005; 
   strcpy(student[18].address.city,"Presov"); student[18].address.pc=04001;
   strcpy(student[19].name,"Oliver"); student[19].age=30; student[19].salary=1206; 
   strcpy(student[19].address.city,"Kosice"); student[19].address.pc=04012;
   
   // TO DO
   
   // 1. write down name and city of all students
   
   // 2. write down the name and salary of student with highest salary
   
   // 3. write down all students from Kosice or Presov
   
   // 4. write down all student that thei salary is between 1000 and 1300
   
   // 5. calculate average age of all students
   
   // 6. calculate average salary of student that are under 30 years old
   
   // 7. count number of students not from Kosice
   
   // 8. find and write down the oldest student
   
   // 9. write down number of student that their name is longer than 7 characters
   
   // 10. sort students by salary ascending and write down the list 
   printf("1.-2.- Name and city of all students, Student with highest salary");
   for(i=0;i<20;i++)
   {   	
	  avg=avg+student[i].salary;
	  aa=aa+student[i].age; 
	  if(student[i].age<30)
	  {
	  	sat=sat+student[i].salary;  
	  	p++;
	  }
	  if(strcmp(student[i].address.city,"Kosice")!=0)
	  {
	  	nk++;
	  }	 
	  if(strlen(student[i].name)>=7)
	  {
	  	ln++;
	  }	     
	      
   }
   avg=avg/20;
   aa=aa/20;
   sat=sat/p;
   
   for(i=0;i<20;i++)
   {
      printf("\n %s  %s",student[i].name,student[i].address.city);
	  	if(avg<=student[i].salary)
   		{
   		 	printf(" %.2f",student[i].salary);	    		
		}	      
   }
   printf("\n\n3.- Students from KE or PO: \n");
   
   for(i=0;i<20;i++)
   {
   		if(strcmp(student[i].address.city,"Kosice")==0 || strcmp(student[i].address.city,"Presov")==0)
   		printf("%s, ",student[i].name);   		
   }
   
   printf("\n\n4.- Salary between 1000 and 1300:\n ");
   for(i=0;i<20;i++)
   	{
   		if(student[i].salary>1000 && 1300<student[i].salary)
   		printf("%s, ",student[i].name);
	} 
	printf("\n\n5.- Average age of all students: %.2f",aa);
	printf("\n\n6.- Average salary of students under 30 years old: %.2f",sat);
	printf("\n\n7.- Number of students not from Kosice: %d",nk);
	  

   for(i=0;i<20;i++)
   	{
   		if(student[old].age<student[i].age)
		{
		old=i;
		}   
	}      
   printf("\n8.- Oldest student: %s",student[old].name);
   printf("\n9.-Number of student with name longer than 7 char: %d",ln);
   
   for(i=0;i<20;i++)
   {
   	asc[i]=i;
   }
	for(i=0;i<20;i++)
	{
		for(j=0;j<20-i-1;j++)
		{
			if(student[asc[j]].salary>student[asc[j+1]].salary)
			{
			temp=asc[j];
			asc[j]=asc[j+1];
			asc[j+1]=temp;
			}	
		}
	}
	printf("\n\n10.- Students by salary ascending : ");
	for(i=0;i<20;i++)
	{
		printf("\n\t%s %2.f",student[asc[i]].name,student[asc[i]].salary);
	}


}
