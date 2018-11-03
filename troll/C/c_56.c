// By @KernelEquinox

// a=argc (1)
main(a)
{
    // b=1, c=4
    // Loop until a == 5
    for(int b=a,c=b+b<<b;a<=c;)

        // c-b<<c  ==  3<<4  ==  48 (ASCII '0')
        // Add a to print its ASCII value
        putchar(c-b<<c|a++);
}
