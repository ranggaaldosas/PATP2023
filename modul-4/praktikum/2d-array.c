#include <stdio.h>
#include <stdlib.h>

int is_odd(int n) {
    return n % 2;
}

int main()
{
	int r, c, i, j;
    
    scanf("%d %d", &r, &c);

	int** arr = (int**)malloc(r * sizeof(int*));
	for (i = 0; i < r; i++)
		arr[i] = (int*)malloc(c * sizeof(int));

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);

    int odd = 0, even = 0;
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (is_odd(arr[i][j]))
                odd++;
            else
                even++;
        }
        printf("Baris %d: %d ganjil, %d genap\n", i + 1, odd, even);
        odd = 0;
        even = 0;
    }
		
	for (int i = 0; i < r; i++)
		free(arr[i]);

	free(arr);

	return 0;
}
