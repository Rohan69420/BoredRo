#include <stdio.h>
struct test {
    char *p; //pointer 8 byte
    char a; //character
    int b; //integer 
    int d;
    int e;
    char c; //character 
} size; //dis how we do it??

/*Theoretically 
|8||1|pad3|4||4||4||1|pad7= 32 [correct!]
*/

struct optimized {
    char *p; //pointer 8 byte
    char a; //character
    char c; //character 
    int b; //integer 
    int d;
    int e;
    
} opti;

/*Theoretically 
|8||1||1|pad2|4||4||4|= 24 [correct!]
*/

int main(){
    printf("Size of structure:\t%d",sizeof(size));
    printf("\nSize of structure:\t%d",sizeof(opti));
    return 0;
}
