#include<stdio.h>
#include<string.h>

int main()
{
	int distance;
	char car_type[20];
	register int AcperKm, NonacperKm, servicetax;
	float carRent, totalrent;

	printf("How many kilometers? ");
	scanf("%d", &distance);

	printf("AC car or non AC ac/non? ");
	scanf("%s", car_type);

	AcperKm = 3;
	NonacperKm = 2;
	servicetax = 1;

	if (strcmp(car_type, "ac") == 0)
		carRent = distance * AcperKm;
	else
		carRent = distance * NonacperKm;

	totalrent = carRent + ((carRent * servicetax)/ 100);

	printf("The total rent for the car will be $ %.2f\n", totalrent);

	return (0);
}
