#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define G 6.67 * pow(10,-11)
#define PI 3.14159265
/*
	Alexander Rigney
	1/29/20
	Cpts 121 Sect 9
	PA 1
*/

int main(void)
{
	// 1.
	double accel = 0.0, mass = 0.0, force1 = 0.0;
	printf("Please give me the mass and accelaration\n");
	scanf("%lf %lf", &accel, &mass);
	force1 = accel * mass;
	printf("The force is %.2lf\n", force1);
	// 2.
	double radius = 0.0, height = 0.0, cy_vol = 0.0;
	printf("Please give me the radius and height\n");
	scanf("%lf %lf", &radius, &height);
	cy_vol = PI * pow(radius, 2) * height;
	printf("The volume of the cylinder is %.2lf\n", cy_vol);
	// 3.
	int offset = 0;
	char en_ch = 0, pl_ch = 0;
	printf("Please give me an offset and a letter\n");
	scanf("%d %c", &offset, &pl_ch);
	en_ch = offset + (pl_ch - 'a') + 'A';
	printf("Your new letter is %c\n", en_ch);
	// If the letter is lowercase it becomes a uppercase letter with 0 offset. If it is upper case it becomes a symbol.
	// 4.
	double mass1 = 0.0, mass2 = 0.0, dist1 = 0.0, force2 = 0.0;
	printf("Please give me two masses and a distance\n");
	scanf("%lf %lf %lf", &mass1, &mass2, &dist1);
	force2 = (G * mass1 * mass2) / (pow(dist1, 2));
	printf("The force is %.2e\n", force2);
	// 5.
	double vout = 0.0, vin = 0.0, res1 = 0.0, res2 = 0.0;
	printf("Please give me the voltage in, the first resistance, and the second resistance\n");
	scanf("%lf %lf %lf", &vin, &res1, &res2);
	vout = (res2 / (res1 + res2)) * vin;
	printf("The voltage out is %.2lf\n", vout);
	// 6.
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, dist2 = 0.0;
	printf("Please give me the first coordinate set and the second coordnate set\n");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	double c = x1 - x2; //Added extra variables to reduce confusion in final calculation
	double b = y1 - y2;
	dist2 = sqrt(pow(c, 2) + pow(b, 2));
	printf("The distance is %.2lf\n", dist2);
	// 7. 
	double z = 0.0, y = 0.0, x = 0.0;
	int a = 0;
	printf("Please give me a number for x,y, and z. Then give me a integer for a.\n");
	scanf("%lf %lf %lf %d", &x, &y, &z, &a);
	y = ((double)89 / 27) - z * x + a / (a % 2);
	printf("Y equals %.2lf\n", y);

	return 0;
}