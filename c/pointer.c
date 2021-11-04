#include <stdio.h>

int main(){
  int var=20;
  int* ip;
  ip=&var;
  printf("variable var value:%d\n", var);
  printf("variable var address:%d\n", &var);
  printf("pointer p value:%d\n", ip);
  printf("pointer p address:%d\n", &ip);
  printf("pointer p is:%d\n", *ip);

  var=30;
  printf("variable var value:%d\n", var);
  printf("variable var address:%d\n", &var);
  printf("pointer p value:%d\n", ip);
  printf("pointer p address:%d\n", &ip);
  printf("pointer p is:%d\n", *ip);

  return 0;
}