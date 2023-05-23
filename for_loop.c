#include <stdio.h>

int main()
{
	char l[] = "Wenn Sie das hier lesen, müssen Sie 100\% für die Abgabe geben";
	int länge = sizeof(l) / sizeof(l[0]);

	for (int i = 0; i < länge; i++)
	{
		printf("%l\n", l[i]);
	}

return 0;
}
