//
// Created by Guoheng on 2021/1/19.
//

#include "mask_0ff_code.h"
#include "stdlib.h"
#include <stdio.h>
void mask_code_calculate_1(byte_pointer ptr,int size){
     byte_pointer mask_code=(byte_pointer)malloc(size);
     for (int i = 0; i <size ; ++i) {
         if (i!=size-1){
             mask_code[i]=0b00000000;
         } else{
             mask_code[i]=0b11111111;
         }
    }//掩码部分结束
    for (int i = 0; i <size ; ++i) {
        if (i==size-1){
            ptr[i]=ptr[i]|mask_code[i];
        } else {
            ptr[i] = ptr[i]^mask_code[i];
        }
    }
    for (int i = 0; i <size ; ++i) {
        printf("%.2x",ptr[i]);
    }
}