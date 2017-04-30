#include <stdio.h>

int main(void)
{
    printf("What would you like to convert from?\n For: Celcius --> Fahrenheit, type '1'\n For: Fahrenheit --> Celcius type '2'\n"); 
    int x;
	scanf("%d", &x);

	
	if (x == 1)
	{
        printf("Celcius --> Fahrenheit. Degrees: ");
        float Celcius;
		scanf("%f", &Celcius);
        float Fahrenheit = ((Celcius * 9) / 5) + 32;
        printf("Degrees Fahrenheit = %.2f\n", Fahrenheit);
	}
	
	if (x == 2)
	{
	    printf("Fahrenheit --> Celcius. Degrees: ");
        float F;
		scanf("%f", &F);
        float C = ((F - 32) * 5) / 9;
        printf("Degrees Celcius = %.2f\n", C);
	}
	
	if ((x < 1) || (x > 2))
    {
        printf("invalid input\n");
    }
    return 0;	
}