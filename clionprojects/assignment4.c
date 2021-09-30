//
// Created by Daniel Majewski on 9/28/21.
//
#include "stdio.h"
void assignment4() {
        int numScores = 3;
        float testScores[numScores];
        float average = 0;
        for (int i = 0; i < numScores; i++) {
            printf("Please Enter a test score\n");
            scanf("%f", &testScores[i]);
        }
        for (int i = 0; i < sizeof(testScores) / sizeof(float); i++ ) {
            printf("%f\n", testScores[i]);
            average += testScores[i];
        }
        average /= numScores;
        printf("Average Score: %f", average);
        return;
};

