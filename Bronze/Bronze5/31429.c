//31429
#include <stdio.h>

int main()
{
    int arr1[11] = {12,11,11,10,9,9,9,8,7,6,6};
    int arr2[11] = {1600, 894, 1327, 1311, 1004,
                    1178, 1357, 837, 1055, 556, 773};
    int n; scanf("%d", &n);
    printf("%d %d", arr1[n - 1], arr2[n - 1]);
}
