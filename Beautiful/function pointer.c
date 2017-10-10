#include<stdio.h>
#include<stdlib.h>

void printHello(char *name){
printf("Hello %s\n",name);
}

int main(){

    void (*p)(char*);
    p=printHello;
    p("klevi");
}
