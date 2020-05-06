/* gcc -o build  -DBUILD_DATA=\"`date '+%F'`\" build.c  */

#include "stdio.h"

int main()
{
  #ifdef BUILD_DATA
        printf("aaaaa%s \n",BUILD_DATA);
  #endif
        return 0;
}
