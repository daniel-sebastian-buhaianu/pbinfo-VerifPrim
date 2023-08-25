#include <stdio.h>

char este_prim(unsigned n)
{
	if (n < 2) return 0;

	if (n == 2) return 1;

	if (n % 2 == 0) return 0;

	unsigned d = 3;
	while (d*d <= n) {
		if (n % d == 0) return 0;

		d += 2;
	}

	return 1;
}
int main()
{
	unsigned n;

	scanf("%u", &n);

	este_prim(n) ? printf("DA") : printf("NU");

	return 0;
}

// scor 100
