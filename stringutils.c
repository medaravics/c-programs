/* The purpose of the function is to extract a first number occurence from a string.
   Arguments: Source String, Destination char[] to copy the resulting Number String
   Returns: Number of digits found 
    Author : RCS
 */
int extractFirstNumberOccurence(const char *str, char numberString[])
{
  int i=0;
  while( (*str != '\0') & !(*str >= '0' && *str <= '9'))  str++; //pass until a digit is found.
  //copy digits until a character is found. Goal is to extract first occurance of a number. 
  while( (*str != '\0') & (*str >= '0' && *str <= '9')) { 
      numberString[i++]=*str++;
      //str++;
  }
  numberString[i]='\0';
  return i;
}
