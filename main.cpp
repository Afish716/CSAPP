
#include <iostream>
#include "show_bytes.h"

int main() {
  int test1=0x89ABCDEF;
  int test2=0x76543210;
  byte_pointer x=(byte_pointer)&test1;
  byte_pointer y=(byte_pointer)&test2;
  byte_pointer result=homework_2_29(x,4,y,4);
  show_bytes(result,4);
}

