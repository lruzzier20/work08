int mystrlen( char *s ){
  int l=0;
  while (s[l]){
    l++;
  }
  return l;
}
char * mystrcpy( char *dest, char *source ){
  int m=0;
  while(source[m]){
    dest[m]=source[m];
    m++;
  }
  dest[m]='\0';
  return dest;
}
char * mystrncat( char *dest, char *source , int p ){
  int n=mystrlen(dest);
  int o=0;
  while(source[o]&&o<p){
    dest[n]=source[o];
    n++;
    o++;
  }
  dest[n]='\0';
  return dest;
}
int mystrcmp( char *s1, char *s2 ){
  int q=0;
  while(s1[q]){
    if(s1[q]>s2[q]){return 1;}
    if(s1[q]<s2[q]){return -1;}
  }
  return 0;
}
