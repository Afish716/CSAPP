
#include <iostream>
#include "show_bytes.h"
#include <string.h>
int main() {
     const char* test="abcdef";
     show_bytes((byte_pointer)test,strlen(test));
}
