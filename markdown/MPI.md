# MPI(Message Passing Interface)

## references

- MPI https://computing.llnl.gov/tutorials/mpi/
- 并行计算 https://computing.llnl.gov/tutorials/parallel_comp/
- https://arxiv.org/pdf/1802.05799.pdf

## MPI Reduce and Allreduce

> https://mpitutorial.com/tutorials/mpi-reduce-and-allreduce/

Reduce is a classic concept from functional programming. Data reduction involves reducing a set of numbers into a smaller set of numbers via a function.

![](https://mpitutorial.com/tutorials/mpi-reduce-and-allreduce/mpi_reduce_2.png)

The results of Allreduce are distributed to all processes

![](https://mpitutorial.com/tutorials/mpi-reduce-and-allreduce/mpi_allreduce_1.png)

## MPI Scatter, Gather, and Allgather

> https://mpitutorial.com/tutorials/mpi-scatter-gather-and-allgather/zh_cn/

![](https://mpitutorial.com/tutorials/mpi-scatter-gather-and-allgather/broadcastvsscatter.png)

![](https://mpitutorial.com/tutorials/mpi-scatter-gather-and-allgather/gather.png)

![](https://mpitutorial.com/tutorials/mpi-scatter-gather-and-allgather/allgather.png)

## Video

- https://www.youtube.com/watch?v=RoQJNx5npF4 太长
- https://www.youtube.com/watch?v=a0V8KpLu7EY

## 安装

```bash
sudo apt install mpich
```

安装 mpi 及其依赖，但是显示的版本2.×，运行程序只有一个线程。需要下载源码进行安装。https://mpitutorial.com/tutorials/installing-mpich2/ ，但是Ubuntu 20 版本apt直接安装是可以的。

