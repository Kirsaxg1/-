//#include <stdio.h>
//
//int main() {
//
//	int a, b;
//	int c;
//	unsigned k;
//
//	printf("Enter the numbers (0 - 32): \n");
//	scanf("%u", &k);
//
//	printf("Enter the first bit (0 - 3): \n");
//	scanf("%d", &a);
//
//	printf("Enter the second bit (0 - 3): \n");
//	scanf("%d", &b);
//
//	if (k < 0) {
//		printf("Error. k - it cannot be equal to 0 ");
//		return 1;
//	}
//	if (a < 0 || a > 3 || b < 0 || b > 3) {
//		printf("Error. The bits cannot be less than 0 and more than 3");
//		return 1;
//	}
//	//  ак работают знаки после c и k и почему именно так
//	c = (k >> (a * 8) & 0xFF);
//	k &= ~(0xFF << (a * 8));
//	k |= (c << (b * 8));
//
//	c = (k >> (b * 8) & 0xFF);
//	k &= ~(0xFF << (b * 8));
//	k |= (c << (a * 8));
//
//	printf("The changed number: %u\n", k);
//
//	return 0;
//}