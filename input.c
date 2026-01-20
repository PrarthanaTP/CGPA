/* input.c */
#include <stdio.h>
#include "input.h"

void get_subject_data(int credits[], char grades[][3], int n) {
    for (int i = 0; i < n; i++) {
        printf("Subject %d credits: ", i + 1);
        scanf("%d", &credits[i]);

        printf("Subject %d grade (O, A+, A, B+, B, C, F): ", i + 1);
        scanf("%s", grades[i]);
    }
}
