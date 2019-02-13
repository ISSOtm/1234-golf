// Do note that this contains zero undefined behavior. Also, programs may fail to detect this as C.
a,b;main(){++a;b=a<<=a+a;b*=a+a+a;while(a--)putchar(++b);}
