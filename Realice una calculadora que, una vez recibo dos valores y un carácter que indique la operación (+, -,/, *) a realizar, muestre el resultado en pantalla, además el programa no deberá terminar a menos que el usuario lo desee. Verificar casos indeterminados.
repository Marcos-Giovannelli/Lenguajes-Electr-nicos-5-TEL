#include <stdio.h> 
int numero1;
int numero2;

int main(void) {
  int op;
  int res;
  int uso=0;
  printf("Bienvenido a la calculadora\n");

  do{ 
    printf("Ingrese un número: \n");
    scanf("%d", &numero1);
    printf("Ingrese otro número: \n");
    scanf("%d", &numero2);
    printf("Ingrese 1 para sumar, 2 para restar, 3 para   multiplicar y 4 para dividir.\n");
    scanf("%d", &op);

  switch(op){
    case 1: res = numero1 + numero2;
            printf("El resultado es: %d\n", res);
            break;
    case 2: res = numero1 - numero2;
            printf("El resultado es: %d\n", res);
            break;
    case 3: res = numero1 * numero2;
            printf("El resultado es: %d\n", res);
            break;
    case 4: 
           if (numero2==0) printf ("Ma ERROR\n");
             else {res = numero1 / numero2;
             printf("El resultado es: %d\n", res);
               }
            break;
    default: printf ("Ingrese una opción valida\n");
            break;
  }
    printf("Desea usar la calculadora otra vez? Ingrese 1 para continuar y un 0 para finalizar\n");
    scanf("%d", &uso);
  } while(uso==1);
  
  printf("Gracias por usar nuestra calculadora!");
  return 0;
}
