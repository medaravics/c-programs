
#include <stdio.h>
#define __MyActiveCode

int main()
{
    #ifdef __MyActiveCode
        printf("Hello Active World\n");
    #else
        printf("Hello Legacy World\n");
    #endif

    return 0;
}
