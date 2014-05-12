#include<stdio.h>

int main()
{
	int input_choice=0;
	scanf("%d",&input_choice);
	switch(input_choice)
	{
		case 0:func1();
		case 1:func2();
		default:break;
	}
	return 0;
	
}

int func1()
{
	printf("This function is edited by BaoshengYu.");
	return 0;

}
int func2()
{
	#add some comment.
	printf("This is func2.Edit by Happy Every day.");
	return 0;
}
