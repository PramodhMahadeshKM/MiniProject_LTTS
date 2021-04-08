/**
 * @file filter.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FILTER_H__
#define __FILTER_H__

typedef struct input_val{
    float freq;
    float Af;
    float l_freq;
    float u_freq;
}input_val;

typedef struct output_val{
    float R;
    float C;
    float R1;
    float R2;
    float R3;
    float R4;
    float C1;
    float C2;
}output_val;

typedef enum condition{
    Failure = -1,
    Limit_error=-2,
    code_error=-3,
    Success = 0
}condition;

void display(void);
condition choose_filter(char c);
condition FLP(input_val *params);
condition FHP(input_val *params);
condition SLP(input_val *params);
condition SHP(input_val *params);
condition BPF(input_val *params);














#endif





