#include<stdio.h>
int main()
{
	int *j;
	char dta[1000];
	j = fopen("@j.d...txt","a");
	
	if(j==0)
	{
		printf("file was not open successfully.....");
	}
	else
	{
		printf("ENTER THE YOUR INPUT = ");
		gets(dta);
		fputs("\n",j);
		fputs(dta,j);
		printf("\nyour input add successfully into @j.d...txt file....");
	}
	
	printf("\n\n--------Input Add -------\n\n");
	
	j = fopen("@j.d...txt","r");
	
	if(j==0)
	{
		printf("file was not open successfully.....");
	}
	else
	{
		while(fgets(dta,200,j)!=0)
		{
			printf("%s",dta);
		}
	}
	fclose(j);

}