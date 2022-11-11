#include <stdio.h>
#define NOTAS 20

int vector [NOTAS];

int main(void) {
  int i=0;
  int suma=0;
  int aprobado=0;
  int desaprobado=0;
  float dividir;
  printf("Ingrese las calificaciones: \n");
  for(i=0;i<NOTAS;i++){
    scanf("%d", &vector[i]);
  }
  for(i=0;i<NOTAS;i++){
    suma=suma+vector[i];
  }
  for(i=0;i<NOTAS;i++){
    if (vector[i]>=7) aprobado++;
    else desaprobado++;
  }
  dividir = ((float)suma/NOTAS);
  printf("El promedio es de: %.2f\n", dividir);
  printf("La cantidad de aprobados son: %d\n", aprobado);
  printf("Los alumnos que deben recuperar son: %d\n", desaprobado);
  return 0;
}
