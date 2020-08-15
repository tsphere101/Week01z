#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932
//Multiple Sphere Volume Calculator

int main()
{
	int amount;
	printf("Calculating multiple amount of the spheres!\n");
	printf("Enter the amount of the sphere: ");
	scanf("%d", &amount);
	double radius[2000];
	printf("Enter the radius of each spheres :");
	for (int i = 0; i < amount; i++)
	{
		scanf("%lf", &radius[i]);
		if (radius[i] <= 0) 
		{
			printf("The Radius must be greather than 0!\n");
			i--;
		}
	}
	printf("\nRadius\tVolume\n");
	for (int i = 0; i < amount; i++)
	{
		printf("%.4lf\t",radius[i]);
		printf("%.4f\n", (4.0/3.0) * PI *pow(radius[i],3));
	}

	return 0;
}