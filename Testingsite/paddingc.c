#include <stdio.h>
struct test {
    char *p; //pointer 8 byte
    char a; //character
    int b; //integer 
    char c; //character 
} size; //dis how we do it??

/*Theoretically 8+1+pad7+4+pad4+1+pad7 = 8x4 = 32 bytes

|8||1|pad3|4||1|pad7
*/

int main(){
    printf("Size of structure:\t%d",sizeof(size));
    return 0;
}