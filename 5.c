//#include <stdio.h>
//
//int main() {
//
//	int a, b, c, k;
//
//	printf("Enter a: \n");
//	scanf("%d", &a);
//
//	printf("Enter b bit: \n");
//	scanf("%d", &b);
//
//	printf("Enter c bit: \n");
//	scanf("%d", &c);
//
//	k = (a >> b) & 1;
//
//	a ^= (1 << b) | (1 << c);
//
//	a = (k) ? (a | (1 << b)) : (a & ~(1 << b));
//
//	printf("The number a after the bit permutation: %d\n", a);
//
//	return 0;
//
//}
//
//
