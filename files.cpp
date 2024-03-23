#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <typeinfo.h>
#include <ctype.h>


int main() {
	
	//damn pointers for the files
	FILE *fptr, *fptr2, *fptr3;
	//declaration of the hardcoded values , no need to be large
	char value1[10],value2[10] ;

	//Write dem files , sum stays open until the end , to write in it
	fptr = fopen("1.txt", "w");
	fptr2 = fopen("2.txt", "w");
	fptr3 = fopen("sum.txt", "w");
	
	
	//use the values hardcoded, another option is to scanf
	fprintf(fptr, "7");
	fprintf(fptr2, "8");
	//Close the GodDamn files 
 	fclose(fptr);
 	fclose(fptr2);
 	
 	
 	//Read dem files
 	fptr = fopen("1.txt", "r");
	fptr2 = fopen("2.txt", "r");
	
	fgets(value1, 10, fptr);
	fgets(value2, 10, fptr2);
	
	//Print for check
	printf("%s\n", value1);
	printf("%s\n", value2);

	//Convert alphanumeric to integer and sum them (ugly)
	int intValue1 = atoi(value1);
	int intValue2 = atoi(value2);
	int sum = intValue1 + intValue2;
	
	//print in cmd for check
	printf("%d\n", sum);
	
	//print in file (value, format, variable(where if comming from)
	fprintf(fptr3, "%d", sum);
	
	//Close the GodDamn files 
 	fclose(fptr);
 	fclose(fptr2);
 	fclose(fptr3);
 	
 	
 	
	system("PAUSE");
	return 0;
}

