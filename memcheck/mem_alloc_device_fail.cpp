#include <cuda.h>
#include <cstdio>

int main(){
  CUdevice cuDevice;
  CUcontext cuContext;
  CUdeviceptr d_ptr;

  cuInit(0);
  cuDeviceGet(&cuDevice, 0);
  cuCtxCreate(&cuContext, 0, cuDevice);

  int N = 100'000'000;

  cuMemAlloc(&d_ptr, N * sizeof(int));

  cuCtxDestroy(cuContext);

  return 0;
}
