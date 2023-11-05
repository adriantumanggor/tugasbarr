#include <stdio.h>
#include <stdlib.h>

int nilai[100];  // Variabel global
int jumlahdata;

void input();
int findmax();

int main()
{
  input();

  int terbesar = findmax();

  printf("Nilai terbesar: %d\n", terbesar);

  return 0;
}

void input()
{
  printf("Masukkan jumlah data: ");
  scanf("%d", &jumlahdata);

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
