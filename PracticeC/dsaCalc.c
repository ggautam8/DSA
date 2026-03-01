#include<stdio.h>

int main() {

    float totTime = 35170;
    double compMin, compSec;

    printf("Kitna hua dekh ke? : ");
    scanf("%lf %lf", &compMin, &compSec);

    double totComp = ( compMin * 60 ) + compSec;

    double dsaPerc = (totComp / totTime) * 100;

    printf("%.2lf%% hogaya ab tak", dsaPerc);
}