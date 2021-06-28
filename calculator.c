#include <stdio.h>


// This is the addition function
int addition(int a, int b) {
    int c = a+b;
    return c;
}

// This is the subtraction function
int subtract(int a, int b) {
    int c = a-b;
    return c;
}

// This is the multiplication function
int multiply(int a, int b) {
    int c = a*b;
    return c;
}

// This is the division function
float divide(float a, float b) {
    float c = a/b;
    return c;
}

// This function is responsible for getting user to choose the right option 
void choice(void) {

    int option = 0, a, b, result;

    printf("\nChoose your poison: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        
        printf("\nI see that you've choosen to add some numbers today. It better not be 2+2 or I'm gonna judge you super hard!");

        printf("\n\nInput a: ");
        scanf("%d", &a);

        printf("Input b: ");
        scanf("%d", &b);

        result = addition(a,b);
        printf("%d + %d = %d", a, b, result);

        break;
    
    case 2:
        
        printf("\nI see that you've choosen to subtract some numbers today. It better not be 5-2 or I'm gonna judge you super hard!");

        printf("\n\nInput a: ");
        scanf("%d", &a);

        printf("Input b: ");
        scanf("%d", &b);

        result = subtract(a,b);
        printf("%d - %d = %d", a, b, result);

        break;
    
    case 3:
        
        printf("\nI see that you've choosen to multiply some numbers today. I can understand that but it better not be 2*2.");

        printf("\n\nInput a: ");
        scanf("%d", &a);

        printf("Input b: ");
        scanf("%d", &b);

        result = multiply(a,b);
        printf("%d * %d = %d", a, b, result);

        break;

    case 4:

        printf("\nI see that you've choosen to divide some numbers today. I can understand that but it better not be 10/2.");

        printf("\n\nInput a: ");
        scanf("%d", &a);

        printf("Input b: ");
        scanf("%d", &b);

        float d=a,e=b, result1;
        result1 = divide(d,e);
        printf("%f / %f = %f", d, e, result1);

        break;

    default:

        printf("Looks like you're a noob and can't even type right.\n");
        printf("Invalid option. Try again.");

        choice();
        break;
    }

}


int main() {

    printf("Welcome to Basic Calculator. An app that can be precisely categorised as: 'A Basic Calculator'.\n");
    printf("Since we're basic, we have no GUI.\n");
    printf("So, which operation do you want to perform?\n");
    printf("Here are the supported operations... \n\n");

    printf("Addition:\t1 \n");
    printf("Subtraction:\t2 \n");
    printf("Multiplication:\t3 \n");
    printf("Divide:\t4 \n");

    choice();

    }