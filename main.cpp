#include <cstdio>
#include "util.h"

int main()
{
 int x;
 scanf("%d ",&x);
 printf("%d\n",pow(2,x));
 
 for(int i=0;i<x;i++)
    {
     for(int j=0;j<x-i;j++)
         printf("X");
     printf("\n");
    }
 
 return 0;
}
