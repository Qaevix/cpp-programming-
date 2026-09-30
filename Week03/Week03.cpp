#include <stdio.h> //or #include <cstdio>

int main () {

	printf("Hello");
	printf("\n\n");

int a = 7;

	printf("%i\n, a);

float m = 2.5;

	printf("%.1f\n", m);

	printf("%f\n", 3.74);

	printf("%i", (a + 7) * 4);

int b = 5;
int res = a + b;

	printf("%i + %i = %i", a, b, res);

int x;

	printf("Please, enter integer value: ");
	scanf_s("%i", &x);

res = x + 2;

	printf("Result is %i", res);

/*

int a, b, c;
float k;

cin >> a;
cin >> k;
cin >> b  >> c;

*/

int x1, x2;

	cout << "Enter 1st integer value: ";
	cin >> x1;
	cout << "Enter 2nd integer value: ";
	cin >> x2;

res = x1 * x2;

	cout << "Result is " << res << endl;

int a, b;



return 0;

}

