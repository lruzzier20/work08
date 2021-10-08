#include <stdio.h>
void main(){
  int mystrlen( char *s );
  char * mystrcpy( char *dest, char *source );
  char * mystrncat( char *dest, char *source , int p );
  int mystrcmp( char *s1, char *s2);
  char * mystrchr( char *s, char c );
  char s[100]="Hello";
  printf("%d\n",mystrlen(s));
  char t[100]="Goodbye";
  printf("%s\n",mystrcpy(s,t));
  printf("%s\n",mystrncat(s,t,1));
  char u[100]="GoodbyeG";
  printf("%d\n",mystrcmp(s,u));
  printf("%p\n",mystrchr(u,'o'));
}
