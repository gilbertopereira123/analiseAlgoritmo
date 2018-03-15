#include <stdio.h>
#include <math.h>

/*Função para sortear um array usando o algorítmo insertion sort*/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

//Uma função para printar um array de tamanho n
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");

}
 
 
 
/*Programa principal para testar as funções criadas acima*/
int main()
{
    int arr[] = {12, 11, 13, 5, 6,100, 456, 8976, 435,6,234,566};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
