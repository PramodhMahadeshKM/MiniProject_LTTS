#include<stdio.h>
#include<math.h>
#include"inc\filter.h"

void display(void){
    printf("This is a project that will give you the parameters to design different active filters.\n");
    printf("Refer the below chart to choose your filter\n");
    printf("A - First order low pass filter\nB - First order high pass filter\nC - Second order low pass filter\n");
    printf("D - Second order high pass filter\nE - Bandpass filter\n");
    printf("Note : The operating frequency range is 0.3kHz to 250kHz and pass band gain is between 1 to 100 dB\n");
    printf("Enter the code of the filter of your choice\n");
}

condition choose_filter(char c){
    input_val params;
    int flag=0;
    
    if (c=='A' || c=='B' || c=='C' || c=='D'){
        printf("\nEnter the cutoff frequency in kHz: ");
        scanf("%f",&params.freq);
        printf("\nEnter the pass band gain in dB: ");
        scanf("%f",&params.Af);
        if (params.freq<0.3 || params.freq>250 || params.Af<1 || params.Af>100){
            printf("\nLimits violated.Check again");
            flag=-2;    
        }
        flag=0;
    }

    else if (c=='E')
    {
        printf("\nEnter the lower cutoff frequency in kHz: ");
        scanf("%f",&params.l_freq);
        printf("\nEnter the upper cutoff frequency in kHz: ");
        scanf("%f",&params.u_freq);
        printf("\nEnter the pass band gain in dB: ");
        scanf("%f",&params.Af);
        if (params.l_freq<0.3 || params.u_freq>250 || params.Af<1 || params.Af>100){
            printf("\nLimits violated.Check again");
            flag=-2;
            }
        flag=0;
        }

        else {
            printf("\nEnter the correct alphabet");
            flag=-1;
        }
    
      

    if (c=='A'){
        condition FLP(input_val *params);
    }
    else if (c=='B'){
        condition FHP(input_val *params);
    }
    else if (c=="C"){
        condition SLP(input_val *params);
    }
    else if (c=='D'){
        condition SHP(input_val *params);
    }
    else if(c=='E'){
        condition BPF(input_val *params);
    }
    else flag=-3;

    if (flag==0) return Success;
    else if (flag==-3) return code_error; 
    else return Failure;


}

condition FLP(input_val *params)
{
    output_val FLP_result;
    
}