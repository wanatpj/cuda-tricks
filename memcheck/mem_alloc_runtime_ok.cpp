#include <cuda_runtime_api.h>
#include <cuda.h>
#include <cstdio>

#include "error.h"

int main(){
   int *dev_a;
   int N = 100'000'000;

  HANDLE_ERROR(cudaMalloc((void**)&dev_a, N * sizeof(int)));

  return 0;
}
