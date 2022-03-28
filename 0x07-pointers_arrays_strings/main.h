#ifndef MAIN_H
#define MAIN_H
/* 0 */
char *_memset(char *s, char b, unsigned int n);

/* 1 */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2 */
char *_strchr(char *s, char c);

/* 3 */
unsigned int _strspn(char *s, char *accept);

/* 4 */
char *_strpbrk(char *s, char *accept);




/* 6 */
void print_chessboard(char (*a)[8]);
#endif