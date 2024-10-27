//#include <stdio.h>
//
//int hignest_power_of_2(int n) {
//
//	if (n <= 0) {
//		return 0;
//	}
//
//	int i = 0;
//	while ((n & 1) == 0) {
//		i++;
//		n >>= 1;
//	}
//	return i;
//}
//int main() {
//
//	int n;
//
//	printf("Enter n: \n");
//	scanf("%d", &n);
//
//	int result = hignest_power_of_2(n);
//	printf("Max step = %d:%d\n",n, result);
//
//	return 0;
//}