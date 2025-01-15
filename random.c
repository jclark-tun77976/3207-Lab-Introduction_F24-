#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    char chararr[] = "ABCDEFGHIJKLMNOPQRSTUVWYXZ";
    int length = sizeof(chararr) - 1;

    int ran = rand() % length;
    return chararr[ran];

}

