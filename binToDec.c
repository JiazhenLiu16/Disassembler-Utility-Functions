/*
 * binToDec
 *
 * This function converts the binary digits from string[begin] to
 * string[end] to a decimal integer.
 *
 * int binToDec(char string[], int begin, int end)
 *   Pre-condition:  begin and end are valid indices in array string;
 *   		     every character from string[begin] to string[end]
 *		     (including those two) has a character value '0' or '1'
 *   Returns: the decimal equivalent of the binary number represented by
 *	      the characters in string[begin] - string[end].
 *            (If begin > end, this function arbitrarily returns 0.)
 *
 * For example, assume A is a character array that contains the
 *    following characters:
 *            '1'  '0'  '1'  '1'  '0'  '1'  '0'  '0'  '1'
 *    The call binToDec(A, 2, 5) converts the binary number 1101
 *    (represented by the substring A[2] - A[5]) to the decimal integer
 *    13 and returns it.
 * 
 * Note: The decimal value returned may appear to be negative if the
 * string being converted is long enough (end - begin + 1 == 32)
 * and if the first character is '1'.
 *
 * Implementation:
 * The binToDec function should interpret a substring of characters 
 * in an array as a binary number, convert it to an integer in decimal
 * format, and return the integer. The first parameter is the array 
 * of characters; the second and third parameters are the beginning
 * index and ending index of the substring.
 * 
 *
 * Author: Jiazhen Liu
 *	with assistance from: TAs，Dr. Brady
 *
 * Creation Date: 2018/4/13
 *
 */

int binToDec(char string[], int begin, int end)
{   
	int decimal = 0;

    for ( ; begin<=end ; begin++ )
	{
		decimal+=(string[begin]-'0') <<(end-begin);
	}
	return decimal;
}
