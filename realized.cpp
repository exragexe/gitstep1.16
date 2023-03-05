#include "header.h"

int mystrlen(const char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
char* mystrcpy(char* strl, const char* strl2) {
    int i = 0;
    while (strl2[i] != '\0') {
        strl[i] = strl2[i];
        i++;
    }
    strl[i] = '\0';
    return strl;
}
char* mystrcat(char* strl, const char* strl2){
    int i=0, j=0;
    while(strl[i]!='\0'){
        i++;
    }
    while(strl2[j]!='\0'){
        strl[i] = strl2[j];
        i++;
        j++;
    }
    strl[i]='\0';
    return strl;
}
char* mystrchr(char* strl, char* s) {
    while(*strl != '\0') {
        if(*strl == *s) {
            return strl;
        }
        strl++;
    }
    return NULL;
}
char* mystrstr(char* strl, char* strl2) {
    if (*strl2 == '\0') {
        return strl;
    }


    while (*strl != '\0') {
        char* strl_begin = strl;
        while (*strl != '\0' && *strl2 != '\0' && *strl == *strl2) {
            strl++;
            strl2++;
        }

        if (*strl2 == '\0') {
            return strl_begin;
        }

        strl = strl_begin + 1;
    }

    return nullptr;
}


