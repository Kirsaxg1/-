//#include <stdio.h>
//
//int main() {
//    unsigned int a, i, j;
//
//    //Entering the numbers a, i and j
//    printf("Print number a: ");
//    scanf("%u", &a);
//
//    printf("print number bit i: ");
//    scanf("%u", &i);
//
//    printf("Print number bit j: ");
//    scanf("%u", &j);
//
//    //Checking that i and j are not out of range
//    if (i >= sizeof(a) * 8 || j >= sizeof(a) * 8) {
//        printf("Error: The entered bit numbers are out of range\n");
//        return 1;
//    }
//
//    // Invert the ith and jth bits
//    unsigned int mask_i = 1 << i;
//    unsigned int mask_j = 1 << j;
//
//    unsigned int bit_i = a & mask_i;
//    unsigned int bit_j = a & mask_j;
//
//    if (bit_i != 0) {
//        a |= mask_j;
//    }
//    else {
//        a &= ~mask_j;
//    }
//
//    if (bit_j != 0) {
//        a |= mask_i;
//    }
//    else {
//        a &= ~mask_i;
//    }
//
//    // result
//    printf("The number after the bit change: %u\n", a);
//
//    return 0;
//}