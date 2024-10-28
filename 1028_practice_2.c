#include <stdio.h>

int main() {
  int N, X;
  // int arr[10001];
  int a;
  scanf("%d %d", &N, &X);

  for (int i = 0; i < N; i++) {
    // scanf("%d", &arr[i]);
    scanf("%d", &a);
    if (a < X) printf("%d ", a);
  }
  // for (int i = 0; i < N; i++) {
  //   if (arr[i] < X) printf("%d ", arr[i]);
  // }
  printf("\n");
  return 0;
}