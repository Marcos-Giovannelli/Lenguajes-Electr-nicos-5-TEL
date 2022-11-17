#include <stdio.h>
float nota;

int main(void)
{
  int cantidad = 0;
  int n = 0;
  float sum;
  printf("Ingrese las notas para obetener el promedio y colocar -1 para obtener   el resultado \n \n");
  for (n=1; n<=100; n++)
    {
      printf("Ingrese la nota %d\n", n);
      scanf("%f", &nota);
      if (nota != -1)
        {
        sum=(sum+nota);
        cantidad++;
        }
      else
        { 
        printf("Cantidad de notas: %d\n", n-1);
        break;
        }
    }
  float promedio = (sum/cantidad);
  printf("El promedio es: %.2f \n", promedio);
  return 0;
}
