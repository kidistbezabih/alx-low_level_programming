#ifndef MAIN_H
#define MAIN_H

int _strlen(char *s);

/* 0 */
char *_strcat(char *dest, char *src);

/* 1 */
char *_strncat(char *dest, char *src, int n);

/* 2 */
char *_strncpy(char *dest, char *src, int n);

/* 3 */
int _strcmp(char *s1, char *s2);

/*  4 */
void reverse_array(int *a, int n);

/* 5 */
char *string_toupper(char *);

/* 6 */
char *cap_string(char *str);

/* 7 */
char *leet(char *ch);

/* 101 */
void print_number(int n);
#endif