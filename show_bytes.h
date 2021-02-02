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
int is_little_endian();
byte_pointer homework_2_29(byte_pointer x,int x_bytes_number,byte_pointer y,int y_bytes_number);
#endif //CSAPP_SHOW_BYTES_H
