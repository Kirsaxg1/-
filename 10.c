//#include <stdio.h>
//#define BIT_LEFT_SHIFT( a, b, c) (((a) << (b)) | ((a) >> (c - (b)))) // ������ ����� (c - (b)) � ������ ���������� ����� >> <<
//#define BIT_RIGHT_SHIFT( a, b, c) (((a) >> (b)) | ((a) << (c - (b))))
//
//// a  - ����� �����, ������� ����� ��������.
//// b - ���������� ���, �� ������� ����� ��������.
//// c - ����� ���������� ����� � �����(�����������).
//
//
//int main() {
//
//	int a, b, c;
//
//	printf("Enter number a:");
//	scanf("%d", &a);
//
//	printf("Enter shift");
//	scanf("%d", &b);
//
//	printf("Enter bit");
//	scanf("%d", &c);
//
//	int left_bit = BIT_LEFT_SHIFT(a, b, c), right_shift = BIT_RIGHT_SHIFT(a, b, c);
//	
//	printf("Left shifted: %d\n", left_bit);
//	printf("Right shifted: %d\n", right_shift);
//
//	return 0;
//}