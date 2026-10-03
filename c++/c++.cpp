#include <stdio.h>
void main() {
	int bill amt;
	printf("enter amt/n");
	scanf_s(" % d,& amt");
	if (amt >= 2000)
	{

		final = amt - amt * 15 / 100;
		printf("final amt= %d,final with free delivery");
	}
	else if (amt >= 1000)
	{
		final = amt - amt * 10 / 100;
		printf("final amt = %d,final with free delivery");
	}
	else if (amt >= 500)
	{
		printf("free delivery,final amt = %d", amt);
	}
	else if (amt <= 500)
	{
		final = amt + 30;
		printf("final amt =%d", final);
	}
}
