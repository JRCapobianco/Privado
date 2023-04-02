#include <stdio.h>
#include <stdlib.h>



double funcSoma(double num1, double num2)
{
    return num1+num2;
}

double funcSub(double num1, double num2)
{
    return num1-num2;
}

double funcMult(double num1, double num2)
{
    return num1*num2;
}

double funcDiv(double num1, double num2)
{
    return num1/num2;
}

void main()
{

    for (int i = 0; i<10; i++)
    {
        printf("\nMENU CALCULADORA\nESCOLHA DOIS NUMEROS E ESCOLHA UMA OPERACAO:\nSoma = 1   Sub = 2   Mult = 3     Div = 4 ");
        double num1;
        double num2;
        int operator;
        scanf("%lf%lf", &num1, &num2);
        printf("Escolha o Operador:  ");
        scanf("%d", &operator);

    
        switch (operator) 
        {
            case 1:
            {
                
                printf("%f\n", funcSoma(num1, num2));
                break;
                
            }

            case 2:
            {
               
                printf("%f\n", funcSub(num1, num2));
                break;
                
            }

            case 3:
            {
                
                printf("%f\n", funcMult(num1, num2));
                break;
                
            }

            case 4:
            {
                
                printf("%f\n", funcDiv(num1, num2));
                break;
                
                
            }
        

         }

    int rest;
    printf("Input 0 to restart");
    scanf("%d", &rest);
        if (rest == 0){
            system("cls");
        }  
    


    }


    


}

    





