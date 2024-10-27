//#include <stdio.h>
//
//int main() {
//
//	int len = 0;
//	unsigned int num;
//
//	puts("Print num:");
//	scanf("%u", &num);
//
//	unsigned int temp = num;
//	while (temp > 0) {
//		len++;
//		temp >>= 1;
//	}
//
//	int i_first = 3;
//	int j_last = (1 << (len - 3)) - 1;
//	
//	unsigned int result = num;
//
//	result >>= i_first;
//	result &= j_last;
//
//	printf("%u\n", result);
//
//	return 0;
//}