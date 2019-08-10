#include <stdio.h>

int main()
{

    int arr_len = 0;

    scanf("%d\n", &arr_len);    

    int arr[arr_len];

    for (int i = 0; i < arr_len; i++) scanf("%d ", &arr[i]);

    for (int i = arr_len - 1; i >= 0; i--) printf("%d ", arr[i]);

    return 0;

}
