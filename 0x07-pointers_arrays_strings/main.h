#ifndef MAIN_H
#define MAIN_H
/**
 *main - header file
 *void prototype(void)
 *char protoype(char)
 *unsigned int prototype(int)
 */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[s]);
void print_diagsums(int *a, int size);
#endif /*MAIN_H*/
