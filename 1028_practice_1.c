#include <stdio.h>

int main() {
  int N, v;
  int cnt=0;
  scanf("%d", &N);
  
  int arr[N];
  for (int i = 0; i < N; i++) {
    // scanf("%d", &arr[i]);
    scanf("%d", arr+i);
  }
  scanf("%d", &v);

  for (int i = 0; i < N; i++) {
    // if (arr[i] == v) cnt++;
    if (*(arr+i) == v) cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}