//
// Created by Guoheng on 2021/1/21.
//
#include "cstring"
#include "answer2.h"

typedef unsigned char *byte_pointer;
int answer2_15(int x, int y) {
    if (!(x ^ y)) {
        return 1;
    }
    return 0;
}

int answer2_26(char *s, char *t) {
    return strlen(s) > strlen(t) ? 1 : 0;
    //尽量不要用unsigned来直接相减
    //当s的长度小于t的长度时会产生不正确的结果，因为小于0 而数据类型时unsigned
}

int uadd_ok(unsigned short x, unsigned short y) {
    unsigned short sum = x + y;
    if (sum < x || sum < y) {
        return 0;
    }
    return 1;
}

unsigned int print_uadd_ok(unsigned short x, unsigned short y) {
    unsigned short sum = x + y;
    return sum;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    if (x > 0 && y > 0) {
        if (sum <= 0) {
            return 0;
        }
    }
    if (x < 0 && y < 0) {
        if (sum >= 0) {
            return 0;
        }
    }
    return 1;
}

unsigned int replace(unsigned int x,int i,unsigned char b){
       unsigned int m=x;
       byte_pointer ptrToChar=(byte_pointer)&m;
       ptrToChar[4-i]=b;
       return m;
}

int homework2_61(int x) {
    return !~x;
}

int homework2_61_B(int x) {
    return !x;
}

int any_add_one(int x){
    int mask_code=0b01010101010101010101010101010101;
    if (mask_code&x==mask_code){
        return 1;
    }
    return 0;
}

int leftmost_one(unsigned int x){
    int count
}

