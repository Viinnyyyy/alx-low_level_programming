#ifndef MAIN_H
#define MAIN_H
/**
 * main - header file
 * void prototype(void)
 * int prototype(int)
 * char prototype(char)
 */
#include <string.h>
#include <stddef.h>
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *s);
#endif /*MAIN_H*/
