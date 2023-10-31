#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ask(char txt[]){
    if(strlen(txt)) printf("\n%s", txt);
    printf("\n > ");
}

int askInt(char txt[]){
    int n;
    ask(txt);
    if(!scanf(" %d", &n)){
        printf("\nInput tidak valid!");
        while(getchar() != '\n');
        return askInt(txt);
    }
    return n;
}

char askChar(char txt[]){
    char c;
    ask(txt);
    if(!scanf(" %c", &c)){
        printf("\nInput tidak valid!");
        while(getchar() != '\n');
        return askChar(txt);
    }
    return c;
}

double askDouble(char txt[]){
    double d;
    ask(txt);
    if(!scanf(" %lf", &d)){
        printf("\nInput tidak valid!");
        while(getchar() != '\n');
        return askDouble(txt);
    }
    return d;
}

int yesNo(char txt[]){
    char res, ans, len = strlen(txt)+7, q[len];
    snprintf(q, len, "%s (Y/N)", txt);
    res = askChar(q);
    if(!((ans = res == 'Y' || res == 'y') || res == 'N' || res == 'n')){
        printf("\nInput tidak valid!");
        return yesNo(txt);
    }

return ans;
}