//
// Created by Jordan on 10/23/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "source.h"

char *stringReverse(char array[]){
    int length = my_strlen(array);

    for (int i = 0; i < length / 2; ++i) {
        char temp = array[length - i - 1];
        array[length - i - 1] = array[i];
        array[i] = temp;
    }
    return array;
}
char *stringReverse2(char *source){
    int length = my_strlen(source);
    for (int i = 0; i < length / 2; ++i) {

        char start = *source;
        char temp = '\0';

        for (int j = i; j < length - i - 1; ++j) {
            source++;
        }

        temp = *source;
        *source = start;

        for (int k = i; k < length - i - 1; ++k) {
            source--;
        }

        *source = temp;
        source++;
    }
    return source;
}
char *my_strcpy (char *destination, const char *source){
    int length = my_strlen(source);

    destination = malloc(sizeof(typeof(destination)) * (length - 2));

    for (int i = 0; i < length; i++) {
        *(destination + i) = *(source + i);
    }

    return destination;
}

char *my_strcat (char *destination, const char *source){
    int length1 = my_strlen(destination);
    int length2 = my_strlen(source);
    char *newStr = malloc(sizeof(typeof(destination)) * (length1 + length2));

    for (int i = 0; i < length1; ++i) {
        *(newStr + i) = *(destination + i);
    }

    for (int j = 0; j < length2; ++j) {
        *(newStr + j + length1) = *(source + j);
    }

    return newStr;
}

int my_strcmp (const char *s1, const char *s2){

    if(s1 == s2)return 0;
    int length = my_strlen(s1) > my_strlen(s2) ? my_strlen(s1) : my_strlen(s2);

    for (int i = 0; i < length; ++i) {
        char s1Temp = *(s1 + i);
        char s2Temp = *(s2 + i);

        s1Temp = (s1Temp) > 91 ? (char)(s1Temp - 32) : s1Temp;
        s2Temp = (s2Temp) > 91 ? (char)(s2Temp - 32) : s2Temp;

        if(s1Temp < s2Temp)return -1;
        if(s1Temp > s2Temp)return 1;
    }

    return 0;
}

int my_strlen (const char *s){

    int keepLooking = 1;
    int length = -1;

    while (keepLooking == 1){

        if(*s == '\0')keepLooking = 0;
        length++;
        ++s;
    }

    return length;
}