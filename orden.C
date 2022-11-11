#include <stdio.h>
#define VAL 10
int orden[VAL];

int main(void)
{
  char i = 0;
  char v = 0;
  char j;
  int antes = 0, pos_may;
  printf("Ingrese 10 valores a ordenar \n");
  for (v=0 ; v<VAL; v++) //input de los 10 valores numericos
    {
    printf("Ingrese el valor %d para ordenar: \n", v+1);
    scanf("%d", &orden[v]);
    }
    for (i=0 ; i<VAL; i++)
    {
      pos_may = i;
      for (j=0; j<VAL; j++)
      {
        if (orden[j]<orden[j+1])
        {
          antes=orden[j];
          orden[j]=orden[j+1];
          orden[j+1]=antes;
        }
      }
    }
  for(i=0;i<VAL;i++)printf("%d \t",orden[i]);
  return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
