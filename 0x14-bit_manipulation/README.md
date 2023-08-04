0x14. C - Bit Manipulation
	Description
This project contains C functions that demonstrate bit manipulation techniques. The functions are designed to work with unsigned integers and perform various operations such as converting binary to decimal, setting, clearing, and getting bits, flipping bits, and determining the endianness of the machine.

	Functions
unsigned int binary_to_uint(const char *b): Converts a binary number represented as a string to an unsigned int.
void print_binary(unsigned long int n): Prints the binary representation of a decimal number.
int get_bit(unsigned long int n, unsigned int index): Gets the value of a bit at a specified index.
int set_bit(unsigned long int *n, unsigned int index): Sets the bit at a specified index to 1.
int clear_bit(unsigned long int *n, unsigned int index): Sets the bit at a specified index to 0.
unsigned int flip_bits(unsigned long int n, unsigned long int m): Counts the number of bits needed to be flipped to convert one number to another.
int _atoi(const char *s): A helper function for converting a string to an integer (Not part of the bit manipulation functions).
int _putchar(char c): A helper function to write a character to the standard output (Not part of the bit manipulation functions).
int get_endianness(void): Determines the endianness of the machine.
