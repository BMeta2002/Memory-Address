#include <stdio.h>
#include <iostream>
int main()
{
	// Defines 8-bit
	char sc8_arr[5] = { 0x41, 0x42, 0x59, 0x79, 0x7A };
	char* scPtr0, * scPtr1, * scPtr2, * scPtr3, * scPtr4;

	//Defines 16-Bit
	short sc16_arr[5] = { 0xA, 0xB, 0x12, 0x11, 0x00 };
	short* sc16Ptr0, * sc16Ptr1, * sc16Ptr2, * sc16Ptr3,* sc16Ptr4;

	//Defines 32-Bit 
	int sc32_arr[5] = { 0xA1, 0x23, 0xAB, 0x03, 0x04 };
	int* sc32Ptr0, * sc32Ptr1, * sc32Ptr2, * sc32Ptr3, *sc32Ptr4;



	int md[5], madd[5];
	int i; //Used as a index
	 
///// 8 BITS 
	// The address for each element in the array sc8_arr[5]
	scPtr0 = &sc8_arr[0];
	scPtr1 = &sc8_arr[1];
	scPtr2 = & sc8_arr[2];
	scPtr3 = & sc8_arr[3];
	scPtr4 = & sc8_arr[4];

	/* Display Hex Value, Decimal Value and char value
	for each of the elemtns of the char array */
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The value of each element of 8-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The value of element %d in an array is 0x%x(hex), %d(decimal), %c(character)\n",
			i, sc8_arr[i], sc8_arr[i], sc8_arr[i]);
	}

	//Display adress in hexdecimal for each element of char array
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The address of each element of 8-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%X (hexidecimal\n", i, scPtr0 + i);
	}
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array sc8_arr[5]
	printf("------------------The size information in bytes of an 8-bit array-----------\n");
	printf("The total numbers in bytes of an 8-bit array with 5 elements is %d bytes \n", sizeof(sc8_arr));

	//Find the number of bytes of each element of array
	for (i = 0; i < 5; i++)
	{
		md[i] = sizeof(sc8_arr[i]);
		madd[i] = sizeof(scPtr0 + i);
		printf("------------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, md[i]);
		printf("The size of the address of the element %d is %d bytes\n", i, madd[i]);
	}




	//// 16 BITS 
	// The address for each element in the array sc16_arr[5]
	sc16Ptr0 = &sc16_arr[0];
	sc16Ptr1 = &sc16_arr[1];
	sc16Ptr2 = &sc16_arr[2];
	sc16Ptr3 = &sc16_arr[3];
	sc16Ptr4 = &sc16_arr[4];

	/* Display Hex Value, Decimal Value and char value
	for each of the elemtns of the char array */
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The value of each element of 8-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The value of element %d in an array is 0x%x(hex), %d(decimal), %c(character)\n",
			i, sc16_arr[i], sc16_arr[i], sc16_arr[i]);
	}

	//Display adress in hexdecimal for each element of char array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The address of each element of 16-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%X (hexidecimal\n", i, sc16Ptr0 + i);
	}
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array sc16_arr[5]
	printf("------------------The size information in bytes of an 16-bit array-----------\n");
	printf("The total numbers in bytes of an 8-bit array with 5 elements is %d bytes \n", sizeof(sc16_arr));

	//Find the number of bytes of each element of array
	for (i = 0; i < 5; i++)
	{
		md[i] = sizeof(sc16_arr[i]);
		madd[i] = sizeof(sc16Ptr0 + i);
		printf("------------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, md[i]);
		printf("The size of the address of the element %d is %d bytes\n", i, madd[i]);
	}




	// 32 BITS
	// The address for each element in the array sc8_arr[5]
	sc32Ptr0 = &sc32_arr[0];
	sc32Ptr1 = &sc32_arr[1];
	sc32Ptr2 = &sc32_arr[2];
	sc32Ptr3 = &sc32_arr[3];
	sc32Ptr4 = &sc32_arr[4];

	/* Display Hex Value, Decimal Value and char value
	for each of the elemtns of the char array */
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The value of each element of 32-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The value of element %d in an array is 0x%x(hex), %d(decimal), %c(character)\n",
			i, sc32_arr[i], sc32_arr[i], sc32_arr[i]);
	}

	//Display adress in hexdecimal for each element of char array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------The address of each element of 32-bit array--------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%X (hexidecimal\n", i, scPtr0 + i);
	}
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array sc8_arr[5]
	printf("------------------The size information in bytes of an 8-bit array-----------\n");
	printf("The total numbers in bytes of an 32-bit array with 5 elements is %d bytes \n", sizeof(sc32_arr));

	//Find the number of bytes of each element of array
	for (i = 0; i < 5; i++)
	{
		md[i] = sizeof(sc32_arr[i]);
		madd[i] = sizeof(sc32Ptr0 + i);
		printf("------------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, md[i]);
		printf("The size of the address of the element %d is %d bytes\n", i, madd[i]);
	}


	system("pause");
	return 0;

}