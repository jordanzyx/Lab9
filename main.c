#include <stdio.h>
#include "source.h"

int main() {
    printf("%s\n",stringReverse("abcd"));
    printf("%s\n",stringReverse2("abcd"));
    printf("%s\n",my_strcpy("BOOM","HELLO?"));
    printf("%s\n",my_strcat("CAT"," DOG"));
    printf("%d\n",my_strcmp("Bad","Boo"));
    printf("%d\n",my_strlen("Hello"));

    return 0;
}