//
// Created by Guoheng on 2021/1/18.
//

#ifndef CSAPP_SHOW_BYTES_H
#define CSAPP_SHOW_BYTES_H
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start,size_t len);
void show_int(int x);
void show_float(float f);
void show_pointer(void *pVoid);
#endif //CSAPP_SHOW_BYTES_H
