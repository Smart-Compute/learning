## example/distributed_training

> However only a certain number of GPUs can be attached to one host (typically 8 or 16). To make the training even faster, we can use multiple GPUs attached to multiple hosts.

- train a model faster using multi-host distributed training

```python
python ~/wangjian/apache-mxnet-src-1.4.1-incubating/tools/launch.py -n 2 -s 2 -H hosts     --sync-dst-dir ~/wangjian/apache-mxnet-src-1.4.1-incubating/example/distributed_training     --launcher ssh     "python ~/wangjian/apache-mxnet-src-1.4.1-incubating/example/distributed_training/cifar10_dist.py"
```

训练步骤：
- 准备数据集
- 初始化神经网络
- train_batch
    * split_and_load(data/label,ctx) Split and load into mutiple GPUs
    * forward_backward(net, data, label)
        * resnet_18_v1
