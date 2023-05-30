#include <stdio.h>
#include <string.h>

struct Calculator {
  float num1;
  float num2;
  float (*addition)(struct Calculator*);
  float (*subtraction)(struct Calculator*);
  float (*multiplication)(struct Calculator*);
  float (*division)(struct Calculator*);
};

float addition(struct Calculator* this) {
    return this->num1 + this->num2;
}

float subtraction(struct Calculator* this) {
    return this->num1 - this->num2;
}

float multiplication(struct Calculator* this) {
    return this->num1 * this->num2;
}

float division(struct Calculator* this) {
    return this->num1 / this->num2;
}

int main() {
    char command[100];
    float number1, number2;

    fgets(command, sizeof(command), stdin);
    scanf("%f", &number1);
    scanf("%f", &number2);

    command[strlen(command) - 1] = '\0';

    struct Calculator my_calculator;
    my_calculator.num1 = number1;
    my_calculator.num2 = number2;
    my_calculator.addition = addition;
    my_calculator.subtraction = subtraction;
    my_calculator.multiplication = multiplication;
    my_calculator.division = division;

    if(strcmp(command, "jumlah") == 0)
    {
        printf("%.1f\n", my_calculator.addition(&my_calculator));
    }
    else if (strcmp(command, "kurang") == 0)
    {
        printf("%.1f\n", my_calculator.subtraction(&my_calculator));
    }
    else if (strcmp(command, "kali") == 0)
    {
        printf("%.1f\n", my_calculator.multiplication(&my_calculator));
    } 
    else if (strcmp(command, "bagi") == 0)
    {
        printf("%.1f\n", my_calculator.division(&my_calculator));
    }
  
    return 0;
}