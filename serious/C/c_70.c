main(c,v){
    v=(c=!!c)<<c|c;
    v=v<<(c=c<<c<<c)|!!c;
    while(c--)putchar(v++);
}
