#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF 0xffff

int main()
{
        char test[BUF];
        int word=0;
        scanf("%s",test);
        for(int i=0;i<strlen(test);i++)
        {
                for(word=(int)test[i];word>0;word--) printf("+");
                printf(".[-]\n");
        }
	printf("++++++++++.");
        return 0;
}
