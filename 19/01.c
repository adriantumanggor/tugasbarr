#include <stdio.h>
#include <stdlib.h>

int *nilai = NULL;  // Variabel global
int jumlahdata;

void input();
int findmax();

int main()
{
  input();

  int terbesar = findmax();

  printf("Nilai terbesar: %d\n", terbesar);

  free(nilai);

  return 0;
}

void input()
{
  printf("Masukkan jumlah data: ");
  scanf("%d", &jumlahdata);
  
  nilai = (int *)malloc(jumlahdata * sizeof(int));

  for (int i = 0; i < jumlahdata; i++)
  {
    printf("Masukkan data-%d: ", i + 1);
    scanf("%d", &nilai[i]);
  }
}

int findmax()
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
