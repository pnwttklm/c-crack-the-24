#include <stdio.h>
#include <time.h>
#define RE 24.0

void tetf(float i, float j, float k, float l, int *times);
void shorttetf(float i, float j, float k, float l, int *times);
int s(int t);
int rep(int a, int b, int c, int d);
int main(void) {
  char sin[2] = {'s'};
  int opt;
  float i, j, k, l;
  int times = 0;
  int input;
  printf(
      "Choose your option\n 0 - For one difit each type in one phrase.\n 1 - "
      "For two digits do not forget ' '\n");
  scanf("%d", &opt);
  if (opt == 0) {
    printf("Option 0: ");
    scanf("%d", &input);
    i = input % 10000 / 1000;
    j = input % 1000 / 100;
    k = input % 100 / 10;
    l = input % 10 / 1;
  } else if (opt == 1) {
    printf("Option 1: ");
    scanf("%f%f%f%f", &i, &j, &k, &l);
  }
  printf("%.0f %.0f %.0f %.0f\n", i, j, k, l);
  clock_t start = clock();
  shorttetf(i, j, k, l, &times);
  printf("Total Way%c: %d way%c\n", sin[s(times)], times/rep(i, j, k, l), sin[s(times)]);
  clock_t end = clock();
  double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Execution time: %f seconds\n", time_spent);
  printf("\nVersion: 3.0");
  return 0;
}
int rep(int a, int b, int c, int d){
  int indi = 0;
  if(a == b){
    indi++;
  }
  if(a == c){
    indi++;
  }
  if(a == d){
    indi++;
  }
  if(b == c){
    indi++;
  }
  if(b == d){
    indi++;
  }
  if(c == d){
    indi++;
  }
  if(indi == 6){//4
    return 24;
  }else if(indi == 3){//3
    return 6;
  }else if(indi == 1){//2
    return 2;
  }else if(indi == 2){//2 2
    return 4;
  }else{ // all differ
    return 1;
  }
}
int s(int t){
  if(t == 0 || t ==1){
    return 1;
  }else{
    return 0;
  }
}
void shorttetf(float i, float j, float k, float l, int *times) {
  tetf(i, j, k, l, times);
  tetf(i, j, l, k, times);
  tetf(i, k, j, l, times);
  tetf(i, k, l, j, times);
  tetf(i, l, j, k, times);
  tetf(i, l, k, j, times);
  tetf(j, i, k, l, times);
  tetf(j, i, l, k, times);
  tetf(j, k, i, l, times);
  tetf(j, k, l, i, times);
  tetf(j, l, i, k, times);
  tetf(j, l, k, i, times);
  tetf(k, i, j, l, times);
  tetf(k, i, l, j, times);
  tetf(k, j, i, l, times);
  tetf(k, j, l, i, times);
  tetf(k, l, i, j, times);
  tetf(k, l, j, i, times);
  tetf(l, i, j, k, times);
  tetf(l, i, k, j, times);
  tetf(l, j, i, k, times);
  tetf(l, j, k, i, times);
  tetf(l, k, i, j, times);
  tetf(l, k, j, i, times);
}
void tetf(float i, float j, float k, float l, int *times) {
  int ind = 0;
  if (i + j + k + l == RE) {
    printf(" %.0f + %.0f + %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j + k - l == RE) {
    printf(" %.0f + %.0f + %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j + k * l == RE) {
    printf(" %.0f + %.0f + %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j + k / l == RE) {
    printf(" %.0f + %.0f + %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j - k + l == RE) {
    printf(" %.0f + %.0f - %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j - k - l == RE) {
    printf(" %.0f + %.0f - %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j - k * l == RE) {
    printf(" %.0f + %.0f - %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j - k / l == RE) {
    printf(" %.0f + %.0f - %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j * k + l == RE) {
    printf(" %.0f + %.0f * %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j * k - l == RE) {
    printf(" %.0f + %.0f * %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j * k * l == RE) {
    printf(" %.0f + %.0f * %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j * k / l == RE) {
    printf(" %.0f + %.0f * %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j / k + l == RE) {
    printf(" %.0f + %.0f / %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j / k - l == RE) {
    printf(" %.0f + %.0f / %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j / k * l == RE) {
    printf(" %.0f + %.0f / %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i + j / k / l == RE) {
    printf(" %.0f + %.0f / %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j + k + l == RE) {
    printf(" %.0f - %.0f + %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j + k - l == RE) {
    printf(" %.0f - %.0f + %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j + k * l == RE) {
    printf(" %.0f - %.0f + %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j + k / l == RE) {
    printf(" %.0f - %.0f + %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j - k + l == RE) {
    printf(" %.0f - %.0f - %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j - k - l == RE) {
    printf(" %.0f - %.0f - %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j - k * l == RE) {
    printf(" %.0f - %.0f - %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j - k / l == RE) {
    printf(" %.0f - %.0f - %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j * k + l == RE) {
    printf(" %.0f - %.0f * %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j * k - l == RE) {
    printf(" %.0f - %.0f * %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j * k * l == RE) {
    printf(" %.0f - %.0f * %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j * k / l == RE) {
    printf(" %.0f - %.0f * %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j / k + l == RE) {
    printf(" %.0f - %.0f / %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j / k - l == RE) {
    printf(" %.0f - %.0f / %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j / k * l == RE) {
    printf(" %.0f - %.0f / %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i - j / k / l == RE) {
    printf(" %.0f - %.0f / %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j + k + l == RE) {
    printf(" %.0f * %.0f + %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j + k - l == RE) {
    printf(" %.0f * %.0f + %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j + k * l == RE) {
    printf(" %.0f * %.0f + %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j + k / l == RE) {
    printf(" %.0f * %.0f + %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j - k + l == RE) {
    printf(" %.0f * %.0f - %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j - k - l == RE) {
    printf(" %.0f * %.0f - %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j - k * l == RE) {
    printf(" %.0f * %.0f - %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j - k / l == RE) {
    printf(" %.0f * %.0f - %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j * k + l == RE) {
    printf(" %.0f * %.0f * %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j * k - l == RE) {
    printf(" %.0f * %.0f * %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j * k * l == RE) {
    printf(" %.0f * %.0f * %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j * k / l == RE) {
    printf(" %.0f * %.0f * %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j / k + l == RE) {
    printf(" %.0f * %.0f / %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j / k - l == RE) {
    printf(" %.0f * %.0f / %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j / k * l == RE) {
    printf(" %.0f * %.0f / %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i * j / k / l == RE) {
    printf(" %.0f * %.0f / %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j + k + l == RE) {
    printf(" %.0f / %.0f + %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j + k - l == RE) {
    printf(" %.0f / %.0f + %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j + k * l == RE) {
    printf(" %.0f / %.0f + %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j + k / l == RE) {
    printf(" %.0f / %.0f + %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j - k + l == RE) {
    printf(" %.0f / %.0f - %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j - k - l == RE) {
    printf(" %.0f / %.0f - %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j - k * l == RE) {
    printf(" %.0f / %.0f - %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j - k / l == RE) {
    printf(" %.0f / %.0f - %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j * k + l == RE) {
    printf(" %.0f / %.0f * %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j * k - l == RE) {
    printf(" %.0f / %.0f * %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j * k * l == RE) {
    printf(" %.0f / %.0f * %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j * k / l == RE) {
    printf(" %.0f / %.0f * %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j / k + l == RE) {
    printf(" %.0f / %.0f / %.0f + %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j / k - l == RE) {
    printf(" %.0f / %.0f / %.0f - %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j / k * l == RE) {
    printf(" %.0f / %.0f / %.0f * %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (i / j / k / l == RE) {
    printf(" %.0f / %.0f / %.0f / %.0f == %.0f \n", i, j, k, l, RE);
    *times = *times + 1;
    ind++;
  }
  if (ind == 0) {
    if ((((i + j) + k) + l) == RE) {
      printf(" (((%.0f + %.0f) + %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) + k) - l) == RE) {
      printf(" (((%.0f + %.0f) + %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) + k) * l) == RE) {
      printf(" (((%.0f + %.0f) + %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) + k) / l) == RE) {
      printf(" (((%.0f + %.0f) + %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) - k) + l) == RE) {
      printf(" (((%.0f + %.0f) - %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) - k) - l) == RE) {
      printf(" (((%.0f + %.0f) - %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) - k) * l) == RE) {
      printf(" (((%.0f + %.0f) - %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) - k) / l) == RE) {
      printf(" (((%.0f + %.0f) - %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) * k) + l) == RE) {
      printf(" (((%.0f + %.0f) * %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) * k) - l) == RE) {
      printf(" (((%.0f + %.0f) * %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) * k) * l) == RE) {
      printf(" (((%.0f + %.0f) * %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) * k) / l) == RE) {
      printf(" (((%.0f + %.0f) * %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) / k) + l) == RE) {
      printf(" (((%.0f + %.0f) / %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) / k) - l) == RE) {
      printf(" (((%.0f + %.0f) / %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) / k) * l) == RE) {
      printf(" (((%.0f + %.0f) / %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i + j) / k) / l) == RE) {
      printf(" (((%.0f + %.0f) / %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) + k) + l) == RE) {
      printf(" (((%.0f - %.0f) + %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) + k) - l) == RE) {
      printf(" (((%.0f - %.0f) + %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) + k) * l) == RE) {
      printf(" (((%.0f - %.0f) + %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) + k) / l) == RE) {
      printf(" (((%.0f - %.0f) + %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) - k) + l) == RE) {
      printf(" (((%.0f - %.0f) - %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) - k) - l) == RE) {
      printf(" (((%.0f - %.0f) - %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) - k) * l) == RE) {
      printf(" (((%.0f - %.0f) - %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) - k) / l) == RE) {
      printf(" (((%.0f - %.0f) - %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) * k) + l) == RE) {
      printf(" (((%.0f - %.0f) * %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) * k) - l) == RE) {
      printf(" (((%.0f - %.0f) * %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) * k) * l) == RE) {
      printf(" (((%.0f - %.0f) * %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) * k) / l) == RE) {
      printf(" (((%.0f - %.0f) * %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) / k) + l) == RE) {
      printf(" (((%.0f - %.0f) / %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) / k) - l) == RE) {
      printf(" (((%.0f - %.0f) / %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) / k) * l) == RE) {
      printf(" (((%.0f - %.0f) / %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i - j) / k) / l) == RE) {
      printf(" (((%.0f - %.0f) / %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) + k) + l) == RE) {
      printf(" (((%.0f * %.0f) + %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) + k) - l) == RE) {
      printf(" (((%.0f * %.0f) + %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) + k) * l) == RE) {
      printf(" (((%.0f * %.0f) + %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) + k) / l) == RE) {
      printf(" (((%.0f * %.0f) + %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) - k) + l) == RE) {
      printf(" (((%.0f * %.0f) - %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) - k) - l) == RE) {
      printf(" (((%.0f * %.0f) - %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) - k) * l) == RE) {
      printf(" (((%.0f * %.0f) - %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) - k) / l) == RE) {
      printf(" (((%.0f * %.0f) - %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) * k) + l) == RE) {
      printf(" (((%.0f * %.0f) * %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) * k) - l) == RE) {
      printf(" (((%.0f * %.0f) * %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) * k) * l) == RE) {
      printf(" (((%.0f * %.0f) * %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) * k) / l) == RE) {
      printf(" (((%.0f * %.0f) * %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) / k) + l) == RE) {
      printf(" (((%.0f * %.0f) / %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) / k) - l) == RE) {
      printf(" (((%.0f * %.0f) / %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) / k) * l) == RE) {
      printf(" (((%.0f * %.0f) / %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i * j) / k) / l) == RE) {
      printf(" (((%.0f * %.0f) / %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) + k) + l) == RE) {
      printf(" (((%.0f / %.0f) + %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) + k) - l) == RE) {
      printf(" (((%.0f / %.0f) + %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) + k) * l) == RE) {
      printf(" (((%.0f / %.0f) + %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) + k) / l) == RE) {
      printf(" (((%.0f / %.0f) + %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) - k) + l) == RE) {
      printf(" (((%.0f / %.0f) - %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) - k) - l) == RE) {
      printf(" (((%.0f / %.0f) - %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) - k) * l) == RE) {
      printf(" (((%.0f / %.0f) - %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) - k) / l) == RE) {
      printf(" (((%.0f / %.0f) - %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) * k) + l) == RE) {
      printf(" (((%.0f / %.0f) * %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) * k) - l) == RE) {
      printf(" (((%.0f / %.0f) * %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) * k) * l) == RE) {
      printf(" (((%.0f / %.0f) * %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) * k) / l) == RE) {
      printf(" (((%.0f / %.0f) * %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) / k) + l) == RE) {
      printf(" (((%.0f / %.0f) / %.0f) + %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) / k) - l) == RE) {
      printf(" (((%.0f / %.0f) / %.0f) - %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) / k) * l) == RE) {
      printf(" (((%.0f / %.0f) / %.0f) * %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
    if ((((i / j) / k) / l) == RE) {
      printf(" (((%.0f / %.0f) / %.0f) / %.0f) == %.0f \n", i, j, k, l, RE);
      *times = *times + 1;
    }
  }
  if(ind==0){
if((i + j) + (k + l)== RE){
printf(" (%.0f + %.0f) + (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) + (k - l)== RE){
printf(" (%.0f + %.0f) + (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) + (k * l)== RE){
printf(" (%.0f + %.0f) + (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) + (k / l)== RE){
printf(" (%.0f + %.0f) + (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) - (k + l)== RE){
printf(" (%.0f + %.0f) - (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) - (k - l)== RE){
printf(" (%.0f + %.0f) - (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) - (k * l)== RE){
printf(" (%.0f + %.0f) - (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) - (k / l)== RE){
printf(" (%.0f + %.0f) - (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) * (k + l)== RE){
printf(" (%.0f + %.0f) * (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) * (k - l)== RE){
printf(" (%.0f + %.0f) * (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) * (k * l)== RE){
printf(" (%.0f + %.0f) * (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) * (k / l)== RE){
printf(" (%.0f + %.0f) * (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) / (k + l)== RE){
printf(" (%.0f + %.0f) / (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) / (k - l)== RE){
printf(" (%.0f + %.0f) / (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) / (k * l)== RE){
printf(" (%.0f + %.0f) / (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i + j) / (k / l)== RE){
printf(" (%.0f + %.0f) / (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) + (k + l)== RE){
printf(" (%.0f - %.0f) + (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) + (k - l)== RE){
printf(" (%.0f - %.0f) + (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) + (k * l)== RE){
printf(" (%.0f - %.0f) + (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) + (k / l)== RE){
printf(" (%.0f - %.0f) + (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) - (k + l)== RE){
printf(" (%.0f - %.0f) - (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) - (k - l)== RE){
printf(" (%.0f - %.0f) - (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) - (k * l)== RE){
printf(" (%.0f - %.0f) - (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) - (k / l)== RE){
printf(" (%.0f - %.0f) - (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) * (k + l)== RE){
printf(" (%.0f - %.0f) * (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) * (k - l)== RE){
printf(" (%.0f - %.0f) * (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) * (k * l)== RE){
printf(" (%.0f - %.0f) * (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) * (k / l)== RE){
printf(" (%.0f - %.0f) * (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) / (k + l)== RE){
printf(" (%.0f - %.0f) / (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) / (k - l)== RE){
printf(" (%.0f - %.0f) / (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) / (k * l)== RE){
printf(" (%.0f - %.0f) / (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i - j) / (k / l)== RE){
printf(" (%.0f - %.0f) / (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) + (k + l)== RE){
printf(" (%.0f * %.0f) + (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) + (k - l)== RE){
printf(" (%.0f * %.0f) + (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) + (k * l)== RE){
printf(" (%.0f * %.0f) + (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) + (k / l)== RE){
printf(" (%.0f * %.0f) + (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) - (k + l)== RE){
printf(" (%.0f * %.0f) - (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) - (k - l)== RE){
printf(" (%.0f * %.0f) - (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) - (k * l)== RE){
printf(" (%.0f * %.0f) - (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) - (k / l)== RE){
printf(" (%.0f * %.0f) - (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) * (k + l)== RE){
printf(" (%.0f * %.0f) * (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) * (k - l)== RE){
printf(" (%.0f * %.0f) * (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) * (k * l)== RE){
printf(" (%.0f * %.0f) * (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) * (k / l)== RE){
printf(" (%.0f * %.0f) * (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) / (k + l)== RE){
printf(" (%.0f * %.0f) / (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) / (k - l)== RE){
printf(" (%.0f * %.0f) / (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) / (k * l)== RE){
printf(" (%.0f * %.0f) / (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i * j) / (k / l)== RE){
printf(" (%.0f * %.0f) / (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) + (k + l)== RE){
printf(" (%.0f / %.0f) + (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) + (k - l)== RE){
printf(" (%.0f / %.0f) + (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) + (k * l)== RE){
printf(" (%.0f / %.0f) + (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) + (k / l)== RE){
printf(" (%.0f / %.0f) + (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) - (k + l)== RE){
printf(" (%.0f / %.0f) - (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) - (k - l)== RE){
printf(" (%.0f / %.0f) - (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) - (k * l)== RE){
printf(" (%.0f / %.0f) - (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) - (k / l)== RE){
printf(" (%.0f / %.0f) - (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) * (k + l)== RE){
printf(" (%.0f / %.0f) * (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) * (k - l)== RE){
printf(" (%.0f / %.0f) * (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) * (k * l)== RE){
printf(" (%.0f / %.0f) * (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) * (k / l)== RE){
printf(" (%.0f / %.0f) * (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) / (k + l)== RE){
printf(" (%.0f / %.0f) / (%.0f + %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) / (k - l)== RE){
printf(" (%.0f / %.0f) / (%.0f - %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) / (k * l)== RE){
printf(" (%.0f / %.0f) / (%.0f * %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
if((i / j) / (k / l)== RE){
printf(" (%.0f / %.0f) / (%.0f / %.0f) == %.0f \n", i, j, k, l, RE);
*times = *times + 1;
ind++;
}
}
}
/*
//use the code below to generate function tetf;
#include <stdio.h>

int main(void) {
  char symbol[5] = {'+', '-', '*', '/'};
  char d[5] = {'%', '.', '0', 'f'};
  char n[3] = {92, 110};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        printf("if(i %c j %c k %c l== RE){\nprintf(\" %s %c %s %c %s %c %s "
               "== %s %s\", i, j, k, l, RE);\n*times = *times + 1;\nind++;\n}\n",
               symbol[i], symbol[j], symbol[k], d, symbol[i], d, symbol[j], d,
               symbol[k], d, d, n);
      }
    }
  }
  printf("if(ind==0){");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        printf("if((((i %c j) %c k) %c l)== RE){\nprintf(\" (((%s %c %s) %c %s) %c %s) "
               "== %s %s\", i, j, k, l, RE);\n*times = *times + 1;\n}\n",
               symbol[i], symbol[j], symbol[k], d, symbol[i], d, symbol[j], d,
               symbol[k], d, d, n);
      }
    }
  }
  printf("}");
  return 0;
}
*/
/*
//use the code below to generate function shorttetf;
#include <stdio.h>

int main(void) {
  char ijkl[] = {'i', 'j', 'k', 'l'};
  int t = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        for(int l = 0; l<4; l++){
          if(i!=j&&i!=k&&i!=l&& j!=i&&j!=k&&j!=l&& k!=i&&k!=j&&k!=l
&&l!=i&&l!=j&&l!=k){ t++; printf("tetf(%c, %c, %c, %c, &times);\n", ijkl[i],
ijkl[j], ijkl[k], ijkl[l]);
          }
        }
      }
    }
  }
  printf("%d", t);
  return 0;
*/
