#include <stdio.h>

#define T(A) #A

main()
{
  int a;
  
  for(a^=a;a<sizeof(int);a++)
    printf(T(%d) , a+ (a==a));
}
