#include <stdio.h>
int main()
{
  /* Nje program i thjeshte qe demonstron punen e funksionit 'printf()' dhe funksioneve tjera qe perdoren per
  bere input te shpejta manuale ne C. (A simple program that demonstrates the 'printf()' function and other
  functions that are used for quick manual inputs in C.)
  */
  
  //Begin with the first part of the formatting which is 'First Name:', then add '\n' at the end inside the quotations to create a space, which seperates the first printf from the next by one line. 
    printf("My First Name: \n");
  //Write the first name after the format, then add '\n' once again.
    printf("Noar \n");
  //Write the second part of the format, which is 'Last Name', then add '\n' once again.
    printf("My Last Name: \n");
  //Write the last name after the format, then add '\n' once again.
    printf("Sopi \n");
    

//A different method can be used by utilizing variables.

/*Begin by using the 'char' datatype, as there is no 'string' datatype in C. To create a string equivalent
in C, we simply declare a char variable as an array, since char can only hold a single-letter value and an
array will allow us to form full words with the same datatype. We don't have to modify the index, as the
program will do it for us automatically after we initialize the variable.
*/

//To initialize the char-array variable, we must write the data between double quotation marks. These can be modified later.
char FirstName[] = "Noar";
char LastName[] = "Sopi";

//Using printf(), we must first include a Format Specifier, and then the label of the variable we've created.
//The Format Specifier is used in printf() functions to declare the datatype inside the function and allow us to input the variable by adding the value of the variable in place of the Format Specifier.
//The Format Specifier is '%s'.

printf("My First Name is %s \n", FirstName);
printf("My Last Name is %s \n", LastName);

//%s will become the declared variable when inputted into the console.

printf("This repository has been modified!");


    
}
