char strcat(char s[],char t[]);

void main(void){
  
  char first[] = "aaa ";
  char second[] = "bla.";

  strcat(first,second);

}

/* strcat -> get two strings and put the second after the first (s,t) = s+t */
 char strcat(char *s, char *t){
  
  int i;

  char newStr[sizeof(s)+sizeof(t)-1];

  for(i=0; s[i] =! '\0'; i++){
    newStr[i] = s[i];
  }
  for(i=0; t[i] =! '\0'; i++){
    newStr[sizeof(s)+i] = t[i];
  }
  
  s = newStr;  
}