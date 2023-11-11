#include <stdio.h>
#include <stdlib.h>

int input(int[]);
int findmax(int[], int);

int main()
{
  int nilai[100];

  int jumlahdata = input(nilai);

  int max = findmax(nilai, jumlahdata);

  printf("Nilai terbesar: %d\n", max);

  return 0;
}

int input(int nilai[])
{
  int jumlahdata;
  
  printf("Masukkan jumlah data: ");
  scanf("%d", &jumlahdata);

  for (int i = 0; i < jumlahdata; i++)
  {
    printf("Masukkan data-%d: ", i + 1);
    scanf("%d", &nilai[i]);
  }

  return jumlahdata;
}

int findmax(int nilai[],int jumlahdata)
{
  int max = nilai[0];
  for (int i = 1; i < jumlahdata; i++)
  {
    if (nilai[i] > max)
    {
      max = nilai[i];
    }
  }
  return max;
}