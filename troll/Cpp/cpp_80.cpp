#include <cstdio>
int main(int x, char**) {
  for(int a{}; a<sizeof(int); ++a)
    putchar(a+x);
}
