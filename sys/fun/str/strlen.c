#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int len( char *s ) {
  int l = 0;

  while( *s ) {
    l++;
    s++;
  }
  
  return l;
}


int strcomp( char *str1 , char *str2 ) { //why pointers to?
  while( *str1 == *str2 && (*str1 && *str2) ) { //make sure both are still true so you dont go over str memory!
    str1++; //thats why pointers to 
    str2++;
  }
  
  return *str1 - *str2;
}

int strncomp( char *str1 , char *str2 , int n ) {
  int i = 0;
  while( *str1 == *str2 && (*str1 && *str2) &&  i < n) { 
    str1++; 
    str2++;
    i++;
  }

  return *str1 - *str2;
}

int main() {
  char s[] = "cat";
  char t[100] = "bear";
  char *u = "puppy";
  
  /*  
  printf("length of [%s]: %d\n" , s , len(s));
  printf("length of [%s]: %d\n" , t , len(t));
  printf("length of [%s]: %d\n" , u , len(u)); */


  //STRCMP()
  int e = strcmp("abcd","abcd");
  int f = strcmp("abcd","abdd");
  int g = strcmp("hello","world");
  int h = strcmp("nixon","aroo");
  printf( "%d\n" , e );
  printf( "%d\n" , f );
  printf( "%d\n" , g );
  printf( "%d\n" , h );

  //STRNCMP()
  e = strncmp("abcd","abcd",2);
  f = strncmp("abcd","abdd",4);
  g = strncmp("hello","world",3);
  h = strncmp("nixon","aroo",4);

  printf( "%d\n" , e );
  printf( "%d\n" , f );
  printf( "%d\n" , g ); 
  printf( "%d\n" , h ); 
  return 0;
}
B
