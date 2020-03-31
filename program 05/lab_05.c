/*Program 05: 	An electricity board charges the following rates for the use of electricity: 

		for the first 200 units 80 paise per unit: 
		for the next 100 units 90 paise per unit: 
		beyond 300 units Rs 1 per unit. 
		All users are charged a minimum of Rs. 100 as meter charge. 
		If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.

		Write a program to read the name of the user, number of units consumed and print out the charges..
*/

#include <stdio.h>
int main()
{
	char name[10];
	float unit, metercharge=100;
	printf("Enter your name and unit Consumed:");
	scanf("%s %f",&name,&unit);
	if(unit<=200)
		metercharge= metercharge+(unit*.80);
	else if(unit>200 && unit<=300)
		metercharge= metercharge+(200*0.80)+((unit-200)*0.90);
	else if(unit>300)
		metercharge= metercharge+(200*0.80)+(300*0.90)+((unit-300)*1);
	if(metercharge>=400)
		metercharge=metercharge+(metercharge*0.15);
	printf("Name: %s\n Number of unit consumed: %f \n MeterCharge: %f",name,unit,metercharge);
	return 0;
}
