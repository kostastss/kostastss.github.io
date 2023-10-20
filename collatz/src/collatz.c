/* A program that estimates the length of the collatz sequence of a number N */
#include <stdio.h>
#include <stdlib.h>
int collatz(int unsigned long long number){
    int length = 1;    
    while ( number > 1 ) { 
       if (number % 2 == 0 ) { 
            number= (number / 2);    
    } else { number = (number * 3 + 1);} 
    length++;
    }    
    return length;
}
int main(int argc, char* argv[]){
    if (argc != 3)  {
    printf("Call the program as follows: ./prog min max\n");
    return 1;
    }    
    int min=atoi(argv[1]);
    int max=atoi(argv[2]);
    int length, max_length;
    int unsigned long long number;
    if ((min < -100000000) || (max > 100000000) || min > max) { 
       printf("Call the program as follows: ./prog min max\n");
       return 1;
    }   
    if (min <= 0 || max <= 0){ 
       printf ("0");
    } else {
       max_length = 0;  
       for (number = min; number <= max; number++){ 
           length = collatz(number);
           if (max_length < length) { 
                   max_length = length;
           }
    }   
    }   
 printf("%d\n",max_length);
    return 0;
}
