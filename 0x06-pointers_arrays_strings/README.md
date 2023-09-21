More pointers, arrays and strings Tasks strcat Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src); This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte Returns a pointer to the resulting string dest Solution: 0-strcat.c

$ amonkeyprogrammer@ubuntu:~/0x06$ cat 0-main.c #include "holberton.h" #include <stdio.h>

/**

main - check the code for Holberton School students.

Return: Always 0. */ int main(void) { char s1[98] = "Hello "; char s2[] = "World!\n"; char *p;

printf("%s\n", s1); printf("%s", s2); p = _strcat(s1, s2); printf("%s", s1); printf("%s", s2); printf("%s", p); return (0); } $ amonkeyprogrammer@ubuntu:/0x06$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat $ amonkeyprogrammer@ubuntu:/0x06$ ./0-strcat Hello World! Hello World! World! Hello World! $ amonkeyprogrammer@ubuntu:~/0x06$ strncat Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n); The _strncat function is similar to the _strcat function, except that it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes Return a pointer to the resulting string dest Solution: 1-strncat.c

$ amonkeyprogrammer@ubuntu:~/0x06$ cat 1-main.c #include "holberton.h" #include <stdio.h>

/**

main - check the code for Holberton School students.

Return: Always 0. */ int main(void) { char s1[98] = "Hello "; char s2[] = "World!\n"; char *p;

printf("%s\n", s1); printf("%s", s2); p = _strncat(s1, s2, 1); printf("%s\n", s1); printf("%s", s2); printf("%s\n", p); p = _strncat(s1, s2, 1024); printf("%s", s1); printf("%s", s2); printf("%s", p); return (0); } $ amonkeyprogrammer@ubuntu:/0x06$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat $ amonkeyprogrammer@ubuntu:/0x06$ ./1-strncat Hello World! Hello W World! Hello W Hello WWorld! World! Hello WWorld! $ amonkeyprogrammer@ubuntu:~/0x06$ strncpy Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n); Your function should work exactly like strncpy Solution: 2-strncpy.c

$ amonkeyprogrammer@ubuntu:~/0x06$ cat 2-main.c #include "holberton.h" #include <stdio.h>

/**

main - check the code for Holberton School stude
