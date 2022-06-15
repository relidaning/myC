//
// Created by Administrator on 2022-6-15.
//
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigHandler(int sig) {
    printf("Signal %d catched!\n", sig);
    exit(sig);
}

int main(){
//    signal(SIGSEGV, sigHandler);    //发送kill -11信号给进程, 进程收到信号后会调用回调函数(或缺省操作)

    signal(SIGSEGV, SIG_IGN);       //忽略信号
    raise(SIGSEGV);                 //产生SIGSEGV信号


    char *s = "hello world";
    s[1] = 'H'; // 向只读内存写入数据，崩溃

    int *p = (int *)0xC0000fff;
    *p = 10; // 针对不属于进程的内核空间写入数据，崩溃

    int *a = NULL;
    *a = 1;     // 访问了不存在的内存

    printf("hello c!");
}
