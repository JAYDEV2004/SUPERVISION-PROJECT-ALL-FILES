#include<stdio.h>
int main()
{
	int *j;
	char dta[1000];
	j = fopen("j.d..txt","r");
	
	if(j==0)
	{
		printf("file was not open successfully.....");
	}
	else
	{
		while(fgets(dta,2,j)!=0)
		{
			printf("%s",dta);
		}
	}
	fclose(j);
}