#define concat(x,y) x##y 

/* strcat -> get two strings and put the second after the first (s,t) = s+t */
void strcat(char *s, char *t){
  
  char newStr[] = concat(*s,*t);

  s = newStr;  
}

