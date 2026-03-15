#include <stdio.h>
#include <sys/cdefs.h>

void __attribute__((weak)) test1();

void __attribute__((weak)) test()
{
    printf("I am a weak function\r\n");
}

int main()
{
    printf("sizeof(int) = %ld\r\n", sizeof(int));
    printf("sizeof(short int) = %ld\r\n", sizeof(short int));
    printf("sizeof(long) = %ld\r\n", sizeof(long));
    test();
    if (test1)
        test1();
}