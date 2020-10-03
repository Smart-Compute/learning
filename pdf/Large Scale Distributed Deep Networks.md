# Large Scale Distributed Deep Networks

jkfjas
## Abstract

## 1. Introduction

DisBelief

Within this framework, we have designed and implemented two novel methods for large-scale distributed training:

- Downpour SGD, an asynchronous stochastic gradient descent procedure which leverages adaptive learning rates and supports a large number of model replicas
- Sandblaster L-BFGS, a distributed implementation of L-BFGS that uses both data and model parallelism. Both Downpour SGD and Sandblaster L-BFGS enjoy significant speed gains compared to more conventional implementations of SGD and L-BFGS.

Two findings:

- our distributed optimization approach can both greatly accelerate the training of modestly sized models
- it can also train models that are larger than could be contemplated otherwise

## 2. Previous work

- Data sets have grown at an unprecedented pace
![](https://gitee.com/wjupc/picture/raw/master/null/20201005161619.png)

## 3. Model parallelism

## 4. Distributed optimization algorithms

### 4.1 Downpour SGD

![](https://gitee.com/wjupc/picture/raw/master/null/20201005182718.png)
