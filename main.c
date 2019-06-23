#include <stdio.h>
#include "library.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main() {
    time_t t = time(NULL);
    struct tm tm;
    char type[10];
    char tresc[20];
    //do zrobienia - konstruktor+ algorytm przesuwania
    logSystem *log=malloc(sizeof(logSystem)+1);
    initWithDefault(log);
    char buf[50];
    for(int i=0;i<2000;i++){
        if(i%5==0) {
            strcpy(type, "info");
            strcpy(tresc, "podzielne przez 5");
            tm = *localtime(&t);
            sprintf(buf, " %d-%d-%d %d:%d:%d %s %s", tm.tm_year + 1900,
                    tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, type,tresc);
            saveLog(log,buf);
        }
         if(i%3==0){
             strcpy(type, "info");
             strcpy(tresc, "podzielne przez 3");
             tm = *localtime(&t);
             sprintf(buf, " %d-%d-%d %d:%d:%d %s %s", tm.tm_year + 1900,
                     tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, type,tresc);
             saveLog(log,buf);
         }
    }
    return 0;
}