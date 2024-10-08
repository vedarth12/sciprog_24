#include<stdio.h>
#include<math.h>

int main(void)
{
	float a = 0;
	float b = M_PI/3;
	int N = 12;

	float sum = tan(a) + tan(b);
	printf("\nSum before the loop: %f\n",sum);

	for(int i = 5; i < 60; i = i + 5)
	{
		sum = sum + 2 * tan(i * (M_PI/180));
	}
	printf("\nSum after the loop: %f\n",sum);

	sum = sum * ((b-a)/(2*N));
	printf("\nFinal Sum after Multiplying: %f\n", sum);

	printf("\nThe value of log(2): %f\n", logf(2));

	float abs_diff = fabs(sum - logf(2));
	float rel_diff = fabs(1 - sum/logf(2));

	printf("\nAbsolute Difference = %f\n",abs_diff);
	printf("\nRelative Difference = %f\n",rel_diff);

	return 0;
}
