#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amountSI, amountCI;

    // Input values
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;
    amountSI = principal + simpleInterest;

    // Compound Interest
    amountCI = principal * pow((1 + rate / 100), time);
    compoundInterest = amountCI - principal;

    // Output results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nAmount (Simple Interest) = %.2f", amountSI);

    printf("\n\nCompound Interest = %.2f", compoundInterest);
    printf("\nAmount (Compound Interest) = %.2f", amountCI);

    return 0;
}
