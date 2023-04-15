#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef enum a_bool{
    false  = 0,
    true = 1,
}t_bool;

#define FALSE false
#define TRUE true


#define EVEN(number) (number % 2 == 0)
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
#endif