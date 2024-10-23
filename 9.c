//#include <stdio.h>
//
//int main() {
//	int a,g;
//
//	printf("Enter a: \n");
//	scanf("%d", &a);
//
//	if (a == 0) {
//		printf("Error. a != 0.");
//		return 1;
//	}
//
//	while ( a != 0) {
//		g ^= a & 1;
//		a >>= 1;
//	}
//
//	printf(" exit = %d", g);
//
//	return 0;
//}