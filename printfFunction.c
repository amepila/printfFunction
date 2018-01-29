
#include <stdio.h>
#include <stdint.h> //Library with data type

//Macro that start the list of arguments
#define va_start(v,l)	__builtin_va_start(v,l)
//Macro that close the list of arguments
#define va_end(v)	    __builtin_va_end(v)
//Macro that points to the next position of the list
#define va_arg(v,l)	    __builtin_va_arg(v,l)

//Data type to list of arguments
typedef __gnuc_va_list va_list;
//Prototype that adds n-numbers
uint32_t sum(uint8_t size_of_list, ...);

int main()
{
    //Variable that saves the total value
    uint32_t total;

    //Total saves the result of the addition
    total = sum(4, 1, 2, 3, 4);

    //Print the result
    printf("\nResult = %d\n", total);

    return 0;

}

//The function receives the number of the arguments
//  and the n-numbers to add
uint32_t sum(uint8_t size_of_list, ...)
{

    uint32_t counter_size;  //Counter to add the numbers
    uint32_t result;        //Saves the numbers
    uint32_t element_list;  //Point to the next number to add

    va_list arg;            //List of arguments

    result = 0;             //Clear the result

    va_start(arg, size_of_list);    //Point to the first argument

    //Loop that adds the numbers until the size of list
    for(counter_size = 0; counter_size < size_of_list; counter_size++)
    {
        //Show the next element or argument
        element_list = va_arg(arg, uint32_t);

        //Add the numbers
        result += printf("%*s",element_list,"");

    }

    //Close the list of arguments
    va_end(arg);

    //Return the sum total of the numbers
    return (result);

}
