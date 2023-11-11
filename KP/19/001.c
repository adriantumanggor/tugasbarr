#include <stdio.h>
#include <stdlib.h>

void input(int **nilai, int *jumlahdata);
int findmax(int *nilai, int jumlahdata);

int main()
{
  int *nilai = NULL;
  int jumlahdata;

  input(&nilai, &jumlahdata);

  int terbesar = findmax(nilai, jumlahdata);

  printf("Nilai terbesar: %d\n", terbesar);

  free(nilai); // Free the dynamically allocated memory

  return 0;
}

void input(int **nilai, int *jumlahdata)
{
  printf("Masukkan jumlah data: ");
  scanf("%d", jumlahdata);

  *nilai = (int *)malloc(*jumlahdata * sizeof(int));

  for (int i = 0; i < *jumlahdata; i++)
  {
    printf("Masukkan data-%d: ", i + 1);
    scanf("%d", &(*nilai)[i]);
  }
}

int findmax(int *nilai, int jumlahdata)
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