#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int, int);

int main()
{
    int *nums1 = NULL;
    int jumlah_string;
    printf("jumlah string:");
    scanf("%d", &jumlah_string);
    nums1 = (int *)malloc(jumlah_string * sizeof(int));
    for (int i = 0; i < jumlah_string; i++)
    {
        printf("masukkan angka-angka");
        scanf("%d", &nums1[i]);
    }

    int target1 = 26;
    int *result1 = twoSum(nums1, jumlah_string, target1);
    if (result1 != NULL)
    {
        printf("[%d, %d]\n", result1[0], result1[1]);
    }
    free(nums1); 
    return 0;
}

int *twoSum(int *nums, int jumlahString, int target)
{
    int *arr = malloc(2 * sizeof(int));
    for (int i = 0; i < jumlahString - 1; i++)
    {
        for (int j = i + 1; j < jumlahString; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}
