/*
 * verifyMIPSInstruction
 *
 * This function verifies that the string provided to it as a paramater
 * contains 32 characters representing binary digits (characters '0' and
 * '1'), followed by a null byte.  If the string contains the wrong
 * number of characters or contains invalid charaters (not '0' or '1'),
 * then the function prints an error message to stderr giving the line
 * number and an appropriate error message.
 *
 *   int verifyMIPSInstruction (int lineNum, char * instruction);
 *
 *	    Pre-condition:  instruction is a null-terminated string
 *	    Post-condition: the characters in "instruction" have not
 *			    been modified
 *	    Returns: 1 if instr contained 32 characters representing binary
 *			    digits ('0' and '1') followed by a null byte
 *		     0 if instr has the wrong number of characters or
 *		            contains invalid characters
 *	    Output: Prints an error message to stderr if necessary
 *
 * Implementation:
 * The verifyMIPSInstruction function should verify that the string provided 
 * to it is 32 characters long and that the characters in the string are all 
 * 0's or 1's (character '0' or character '1'). If the instruction is valid, 
 * verifyMIPSInstruction should return 1. Otherwise, it should print an error 
 * message indicating the error and the line on which it occurred before returning 0.
 *
 * Author: Jiazhen Liu
 * with assistance from: TAs，Dr.Brady
 *
 * Creation Date:  2018/4/13
 *
 */

#include "disUtil.h"

static const int INSTR_LENGTH = 32;

int verifyMIPSInstruction (int lineNum, char * instr)
  /*  returns 1 if instr contains INSTR_LENGTH characters representing binary
   *  digits ('0' and '1'); 0 otherwise
   */
{
    int   length;
    char *p;

  /* If the length of the string is not right, report the error.
  */
    length = strlen(instr);
    if (length != INSTR_LENGTH)
    {
        printError ("Error: line %d does not have %d chars.\n",
                    lineNum, INSTR_LENGTH);
        return 0;
    }
    /*If the string contains character which is neither 0 or i, report error.
    */
    else 
    {
      for (p=instr;*p!='\0';p++)
      {
        if (*p!='0'&&*p!='1')
        {
            printError ("Error: line %d has invalid character: %d\n",
                    lineNum,*p);
            return 0;
        }
      }
    /*Return 1 if it is okay.
    */
      return 1;


    }

}
