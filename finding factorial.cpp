/* Mazhar Hussain    Registration number:20Mdele098
20Mdele098@uetmardan.edu.pk   */
/* program to find factorial of a number*/

#include<iostream>//pre processor directives and library contains codes that will be used//
#include<conio.h>//pre processor directives and library contains codes that will be used//

int main()
{
	int factorial=1;//declaring and intializing factorial equals to one//
	
	printf("enter any positve integer:\n");//asking user to enter any positve number//
	
	int variable;//declaring variable//
	scanf("%d",&variable);//saving variable//
	if (variable>=0){//when condition is true or enter number is greater than equal to 0//
	
	for(double i=variable;i>0;i--){//using loop to find factorial//
		factorial=factorial*i;}//new factorial equals to old factorial multily by variable i//
		printf("%d ",factorial);//displaying factorial//
	}
	else//when condition is false and does not statisfy//
	printf("factorial of a negative number can not be calculated");//displaying result//
	return 0;
}
