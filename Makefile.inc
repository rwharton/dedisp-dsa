# The definitions in this file should be changed to match your system

CUDA_PATH =/usr/local/cuda
INSTALL_DIR = /usr/local

CUDA_DIR   ?= $(CUDA_PATH)
THRUST_DIR =/usr/local/thrust-1.7

LIB_ARCH   = lib64
GPU_ARCH   = -gencode=arch=compute_61,code=sm_61

GCC        = gcc
GXX        = g++
AR         = ar
NVCC       = $(CUDA_DIR)/bin/nvcc -lineinfo #-Xptxas -abi=no
DOXYGEN    = doxygen
RM         = rm
ECHO       = echo
MKFLAGS    = 

DEDISP_DEBUG = 0

#.SILENT :
