#include <stdio.h>

int main() {
  int largest = INT_MIN;
  int second_largest = INT_MIN;
  int number;

  for (int i = 0; i < 20; i++) {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > largest) {
      second_largest = largest;
      largest = number;
    } else if (number > second_largest && number < largest) {
      second_largest = number;
    }
  }

  printf("The largest number is %d\n", largest);
  printf("The second largest number is %d\n", second_largest);

  return 0;
}
