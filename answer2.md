###2.5
将所给数字0x87654321用大端法写出：0x87654321
                  用小端法写出：0x21436587
注：大端法小端法是字节间关系比如一个int是4个字节大小端法指的是4个字节间的关系

###2.6
0x00359141的二进制表示：00000000001*101011001000101000001*
3510593.0的二进制表示：   010010100*101011001000101000001*00

###2.7
616263646566(都是16进制)

###2.8
~a：10010110  

###2.9
~黑：111 ~蓝色：110 ~绿101 ~蓝绿色100 ~红011
~红紫色010 ~黄001 ~白000
蓝|绿：110|101=111
黄色&蓝绿色：110&011=010
红色^红紫色：100^101=001

###2.10


###2.11
A.first=last=10
B.最后first=last时传入的两个地址时同一个地址
C.当first=last时不进行处理

###2.12
见文件mask_Off_code


###2.13
此题不会日后再思考

###2.14
x=0x66 y=0x39
x=Ob01100110 ~x=Ob10011001
y=Ob00111001 ~y=Ob11000110 !y=Ox00 !x=Ox00

x&y=00100000 ~x|~Y=11011111
x|y=01111111 x&!y=Ox00

x&&y=Ox01 X||y=Ox01  !x||!y=Ox00
x&&~y=Ox00

两个符号和！是短路运算或逻辑运算 单个符号运算时求位运算（~为求逆和!区别）

###2.15
见answer2_15文件

###2.16
Oxc3=Ob11000011<<3=00011000(Ox18)逻辑右移两位00000110算数右移两位11110000
Ox75=Ob01110101<<3=10101000(OxA8)逻辑右移两位00101010算数右移两位00101010
Ox87=Ob10000111<<3=00111000(OX38)逻辑右移两位00001110算数右移两位11100001
Ox66=Ob01100110<<3=00110000(OX30)逻辑右移两位00001100算数右移两位00001100
对于无符号数右移必须是逻辑的 几乎所有的编译器和机器都对有符号数使用算数右移
java里x>>k是算术右移k位置 x>>>k是逻辑右移k位 补码比原码多表示最后一个负数 原码表示范围是对称的，补码的负数比正数多一个
|Tmin|=|Tmax|+1
###2.17
      二进制      B2U            B2T
OxE    1110     8+4+2=14       -8+4+2=-2
Ox0    0000     0+0+0=0         0
Ox5    0011     1+2=3          1+2=3
Ox8    1000     8              -8
OxD    1101     8+4+1=13       -8+4+1=-3
OxF    1111     8+4+2+1=15     -8+4+2+1=-1

###2.18
略

###2.19
-8 补码11111000 T2U  248

###2.30
见int tadd_ok(int x,int y);