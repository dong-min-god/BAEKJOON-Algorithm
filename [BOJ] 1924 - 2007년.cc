#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	char yoil[7][4] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int x, y;
	int sum = 0;
	scanf("%d%d", &x, &y);
	
	for (int i = 0; i < x - 1; i++) {
		sum += day[i];
	}
	sum += y;
	for (int i = 0; i < 3; i++) {
		printf("%c", yoil[sum % 7][i]);
	}
}