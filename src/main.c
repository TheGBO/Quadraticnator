#include <stdio.h>
#include <math.h>

float a;
float b;
float c;
float delta;
float x1;
float x2;

void askForInput(char** name, float* variable) {
    printf("input the value of %s: ", name);
    scanf("%f", variable);
}

void main (){
    askForInput("a", &a);
    askForInput("b", &b);
    askForInput("c", &c);

    delta = b * b -4*a*c;
    x1 = (-b + sqrt(delta))/2;
    x2 = (-b - sqrt(delta))/2;

    printf("Roots were found.\n x1:%g\nx2:%g\n", x1, x2);
}