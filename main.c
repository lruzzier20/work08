#include <stdio.h>
void main(){
  int mystrlen( char *s );
  char * mystrcpy( char *dest, char *source );
  char * mystrncat( char *dest, char *source , int p );
  char s[100]="Hello";
  printf("%d\n",mystrlen(s));
  char t[100]="Goodbye";
  printf("%s\n",mystrcpy(s,t));
  printf("%s\n",mystrncat(s,t,1));
}
