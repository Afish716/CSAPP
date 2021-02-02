//
// Created by Guoheng on 2021/1/18.
//
#include <stdio.h>
#include <stdlib.h>
#include "show_bytes.h"

void show_bytes(byte_pointer start,size_t len){
    for (int i = 0; i <len ; ++i) {
         printf("%.2x",start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float f){
    show_bytes((byte_pointer)&f,sizeof(float));
}

void show_pointer(void *pVoid){
    show_bytes((byte_pointer)&pVoid, sizeof(pVoid));
}

int is_little_endian(){
    unsigned int TestNum=0x00000001;
    //大端法
    byte_pointer Testcode=(byte_pointer)&TestNum;
    if (Testcode[0]='01'){
        return 0;//big_endlian
    } else{
        return 1;
    }
}

byte_pointer homework_2_29(byte_pointer x,int x_bytes_number,byte_pointer y,int y_bytes_number){
    unsigned char x_last=x[0];
    byte_pointer mask_code=(byte_pointer)malloc(x_bytes_number*8);
    for (int i = 0; i <x_bytes_number ; ++i) {
        if (i==0){
            mask_code[i]=0b00000000;//一个字节
        } else{
            mask_code[i]=0b11111111;
        }
    }
    for (int i = 0; i <y_bytes_number ; ++i) {
        y[i]=(y[i])&(mask_code[i]);
    }
    y[0]=y[0]+x_last;
    free(mask_code);
    return y;
}
