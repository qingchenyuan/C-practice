#include <stdio.h>
#include <limits.h>
 int main()
 { 
	 printf("The number of bits in a byte %d\n", CHAR_BIT); 
	 printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN); 
	 printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	 printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
	 printf("The minimum value of SHORT INT = %d\n", SHRT_MIN); 
	 printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 
	 printf("The minimum value of INT = %d\n", INT_MIN); 
	 printf("The maximum value of INT = %d\n", INT_MAX); 
	 printf("The minimum value of CHAR = %d\n", CHAR_MIN); 
	 printf("The maximum value of CHAR = %d\n", CHAR_MAX);
	 printf("The minimum value of LONG = %ld\n", LONG_MIN);
	 printf("The maximum value of LONG = %ld\n", LONG_MAX); 
	 return(0);
 }
 
 /*
The number of bits in a byte 8
The minimum value of SIGNED CHAR = -128
The maximum value of SIGNED CHAR = 127
The maximum value of UNSIGNED CHAR = 255
The minimum value of SHORT INT = -32768
The maximum value of SHORT INT = 32767
The minimum value of INT = -32768
The maximum value of INT = 32767
The minimum value of CHAR = -128
The maximum value of CHAR = 127
The minimum value of LONG = -2147483648
The maximum value of LONG = 2147483647

 */