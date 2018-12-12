#include <stdio.h>

int n;

void BubbleSort(int array[])
{
  int i, j, temp;
  for(i = 0; i < n - 1; i++)
  {
    for(j = 0; j < n - 1; j++)
    {
      if(array[j] > array[j+1])
      {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }   
  }
}

void EntradaArreglo(int array[])
{
  int i;
  for(i = 0; i < n; i++)
  {
    printf("Elemento %d: ", i+1);
    scanf("%d",&array[i]);
  }
}

void ImprimeArreglo(int array[])
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}


int main()
{
  printf("Introduce la cantidad de elementos a ordenar: \n");
  scanf("%d", &n);
  int arreglo[n];
  printf("Introduce los elementos a ordenar: \n");
  EntradaArreglo(arreglo);
  printf("Arreglo Original:\n");
  ImprimeArreglo(arreglo);
  BubbleSort(arreglo);
  printf("Arreglo Ordenado:\n");
  ImprimeArreglo(arreglo);
}