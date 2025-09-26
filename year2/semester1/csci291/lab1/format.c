   #include <stdio.h>		/* give access to the stdio.h library */
         int main(void)
	{
    printf("%d\n", 455);            /* %d i sused to print integer value ,prints 455 and moves to next line*/
    printf("%i\n", 455);            /*%d i sused to print integer value , same as d in print f and moves to next line*/
	printf("%d\n", +455);           /*%d i sused to print integer value ,prints 445 as positive number and moves to next line*/
	printf("%d\n\n\n", -455);       /*%d i sused to print integer value ,prints 445 as negative number and moves to next 3 lines*/
		
	printf("%e\n", 1234567.89);    /*%e is used to print scientefic value,prints 1.234568e+06 and moves to next line*/
	printf("%f\n\n\n", 1234567.89);  /*%f is used to print decimal,prints 1234567.890000,moves to next 3 lines*/

	printf("%c\n", 'A');  /*%c is for reading and writing single char,prints A and moves to next line*/
	printf("%s\n\n\n", "This is a string");  /*%s is for reading and writing string,prints This is a string and moves to next 3 lines*/

	printf("%4d\n" , 1);           /*%4d end on the 4th bit ,prints  _ _ _1 and moves to next line*/
	printf("%4d\n" , 12);          /*%4d end on the 4th bit ,prints  _ _12 and moves to next line*/
	printf("%4d\n\n\n" , 123);     /*%4d end on the 4th bit ,prints  _ 123 and moves to next 3 lines*/

    	printf("%4d\n" , -1);      /*%4d end on the 4th bit ,prints _ _ _-1 and moves to next line*/
	printf("%4d\n" , -12);         /*%4d end on the 4th bit ,prints _ _ -12 and moves to next line*/
	printf("%4d\n\n\n" , -123);    /*%4d end on the 4th bit ,prints _  -123 and moves to next 3 lines*/


	printf(" %.4d\n%.9d\n" , 873, 873); /*%.4d end on the 4th bit ,and empty bits will be 0,prints 0873 000000873 and moves to next line*/
     
 	printf(" %.3f\n%.6f\n\n\n\ ", 123.94536, 123.94536);/*%.3f is for 3 decimal points ,prints 123.945  then moves one line and prints 123.945360
     		                                                       and moves to next 3 line*/
      
    printf("%10s%10d%10c%10f\n\n" , "hello", 7, 'a' , 1.23);      /*%10s 10 black space string will be filled from left ,%10d ends on 4th bit from left    
    		,%10c 10 blank space for reading and writing single char from right,prints  _ _ _ _ _ _hello         7         a  1.230000  and moves to next 2 line*/
    		
    		
    	
	printf("%-10s%-10d%-10c%-10f\n\n\n" , "hello",7, 'a' , 1.23);/*%-10s 10 black space string will be filled from right ,%-10d ends on 4th bit from right,
        	%-10c 10 blank space for reading and writing single char from left ,prints  hello         7         a  1.230000  and moves to next 3 line*/


	printf("%d\n\t%d\n" , 786, -786); /*%d used to print integer ,the we move one line ,\t%d used to print integer with horizontal space
	                                          ,prints 786         
	                                                        -786 and moves to next line*/
    printf("%+d\n\t%+d\n" , 786, -786); /*%+d used to print integer and write + and negative sign ,the we move one line 
        	                                    ,\t%+d used to print integer with positive and negative sign  with horizontal space 
        	                                    ,prints +786         
	                                                         -786 and moves to next line*/

}
