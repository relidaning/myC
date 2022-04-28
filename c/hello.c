//
// Created by Administrator on 2022-4-1.
//
#include "stdio.h"
#include "hello.h"

enum Sex{
    MALE,
    FEMALE,
    SECRET
};

void hello(const char* name){

    enum Sex s = FEMALE;

    printf("hello my name is %s, I'm a %d\n", name, s);

    printf("length of char is:%d\n", sizeof(char));
    printf("length of int is:%d\n", sizeof(int));
    printf("length of float is:%d\n", sizeof(float));
    printf("length of long is:%d\n", sizeof(long));

    int age=20;
    printf("my age is:%d.", age);

}



