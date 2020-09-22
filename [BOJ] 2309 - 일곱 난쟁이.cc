#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int i, j;
	int height[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		scanf(" %d", &height[i]);
		sum += height[i];
	}
	sort(height, height + 9);

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum - (height[i] + height[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j)
						printf("%d\n", height[k]);
				}
				return 0;
			}
		}
	}
}