import pycuda.driver as cuda
import pycuda.autoinit

dm_gpu = cuda.mem_alloc(1_000_000_000)