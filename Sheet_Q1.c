#include <stdio.h>
int main()

{

  int n, h;
  
  scanf("%d %d", &n, &h);

  int arr[n];

  for(int i = 0; i < n;i++)

  scanf("%d ", &arr[i]);

  int min = 0;

  for (int i = 0; i < n; i++)

  {

      if (arr[i] > h)

        min = min + 2;

      else

        min = min + 1;

      printf("Item %d . Minimum width %d .\n", arr[i], min);

  }

  printf("%d ", min);

  return 0;

}
