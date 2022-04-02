/**
 * @file calculator.h
 * @author your name NISHITHA DOKIPARTHI
 * @brief Interface for functions with float values and also check underflow and overflow
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #ifndef _CALCULATOR_H_
 #define _CALCULATOR_H_

#include <stdio.h>
#include <limits.h>

typedef enum funtion_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}funtion_status_t;

/**
 * @brief 
 * @brief Function to add 2 integer numbers
 * 
 * @param x[in] Operand 1 to be added
 * @param y[in] Operand 2 to be added
 * @param result[out] Result of add operation if success
 * @return funtion_status_t Result of the function execution
 */
 funtion_status_t addition(int x, int y, int* result);

#endif  /* _CALCULATOR_H_ */
