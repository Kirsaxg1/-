//#include <stdio.h>
//
//// Entry point
//
//int main() {
//
//	// The name of the variables
//
//	int a,b, Mbit;
//
//	// Entering the variable "a"
//
//	puts("Enter a number to determine the lowest bit:  \n");
//	scanf("%d", &a);
//
//	// Determining the lowest bit in the number "a"
//
//	Mbit = a & 1;
//
//	while (Mbit != 0) {
//		b &= (a >> ~1);
//	}
//
//	// Low-order bit output
//
//	printf("zeroed low bit: %d ", b);
//
//	return 0;
//
//}