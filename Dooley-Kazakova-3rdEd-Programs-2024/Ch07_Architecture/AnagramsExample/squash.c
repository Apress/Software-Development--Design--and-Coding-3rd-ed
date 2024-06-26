/* Copyright (C) 1999 Lucent Technologies */
/* From 'Programming Pearls' by Jon Bentley */

/*
 * squash.c -- print anagram classes on a single line
 * The input lines "opst pots" and "opst stop" go to "pots stop"
 * modified by jfdooley 10-12-2005
 *
 * should be at the tail end of a sign <dict | sort | squash pipe.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORDMAX 100

int main() {  
	char word[WORDMAX], sig[WORDMAX], oldsig[WORDMAX];

    int linenum = 0;
    strcpy(oldsig, "");

    printf("\n");
    while (scanf("%s %s", sig, word) != EOF) {
        if (strcmp(oldsig, sig) != 0 && linenum > 0) {
            printf("\n");
        }
        strcpy(oldsig, sig);
        linenum++;
        printf("%s ", word);
    }

    printf("\n");
    return 0;
}
