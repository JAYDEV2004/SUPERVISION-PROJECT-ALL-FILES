#include<stdio.h>
int main()
{
	int *j;
	char dta[1000];
	j = fopen("j.d...txt","w");
	
	if(j==0)
	{
		printf("file was not open successfully.....");
	}
	else
	{
		printf("ENTER THE YOUR INPUT = ");
		gets(dta);
		fputs(dta,j);
		printf("your input add successfully into j.d...txt file....");
	}
	fclose(j);

}