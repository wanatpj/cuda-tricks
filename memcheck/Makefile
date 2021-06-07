py_install:
	pip3 install -r requirements.txt

test_device_ok:
	nvcc -lcuda -o mem_alloc_device_ok mem_alloc_device_ok.cpp
	cuda-memcheck --leak-check full ./mem_alloc_device_ok
	rm mem_alloc_device_ok

test_device_fail:
	nvcc -lcuda -o mem_alloc_device_fail mem_alloc_device_fail.cpp
	cuda-memcheck --leak-check full ./mem_alloc_device_fail
	rm mem_alloc_device_fail

test_runtime_ok:
	nvcc -o mem_alloc_runtime_ok mem_alloc_runtime_ok.cpp
	cuda-memcheck --leak-check full ./mem_alloc_runtime_ok
	rm mem_alloc_runtime_ok

# test_python_fail:
# 	cuda-memcheck --leak-check full python3 mem_alloc_device_fail.py