
### 检查 python 版本
```bash
which python
python --version
```

### 压缩文件
```bash
# 需要压缩的路径并压缩到.zip文件 源路径
zip -r /mnt/data1/zip/jenny_ubuntu.zip /mnt/data/SGN_Dataset/kitti

zip -r /mnt/data2/data2.zip /mnt/data2/* -x /mnt/data2/lost+found/*
```


### 该终端最近输入过的50 条命令
```bash
history | tail -n 50
```

### `swapfile` 扩展到 20GB
```bash
#禁用正在使用的 swap 文件：
sudo swapoff /swapfile

#增加 Swap 文件大小到 20GB
sudo fallocate -l 200G /mnt/data1/swapfile

#设置文件权限
sudo chmod 600 /mnt/data1/swapfile

#重新创建 Swap 文件系统
sudo mkswap /mnt/data1/swapfile

#启用新的 Swap 文件
sudo swapon /mnt/data1/swapfile

free -h
```

### 图形化实时监控内存占用情况
```bash
sudo apt install htop

htop
```

### 实时查看 NVIDIA 显卡的显存使用情况
```bash
watch -n 1 nvidia-smi
```

### 用户的家目录
`~/.` 是一个表示用户主目录的符号。通常，这个符号用于引用用户主目录中的隐藏文件或目录。

### 重命名
```shell
mv old new
```

### 回到上一级目录
```shell
cd ../
```

### 返回刚才的目录
```shell
cd - 
```

### 回到根目录
```shell
cd /
```

### 回到家目录
```shell
cd ~
或者：
cd
```

### 显示你现在的位置
```shell
pwd
```

### 在当前位置新建文件夹 
```shell
mkdir 文件夹名
```

### 在指定目录位置，创建文件夹，并创建父文件夹 
```shell
mkdir -p /a/b/文件夹名
```

### 在当前目录下新建文件
```shell
touch 文件名
```

### 删除文件
```shell
rm 文件
```

### 删除文件夹
```shell
rm -r 文件夹
```

### 强制删除不询问
```shell
rm -rf 文件夹
```

### 移动源文件到目标文件夹中
```shell
mv 文件  文件夹
```

### 修改文件A的名字为文件B
```shell
mv 文件A 文件B
```

### 查看文件中的全部信息(适合查看小文档)
```shell
cat 文件名
```

### 创建副本
```shell
cp example.txt example_copy.txt
```

### 递归复制 sgn 目录下所有文件到另一个目录下
```
cp -r sgn/* pred/sgn-T/
```

### 文件名查找
```shell
find 搜索路径 -name "文件名关键词"

例子 
find / -name "passwd" find / -name "ifcfg-*"
```

### 文件内容查找

```shell
语法
grep -参数 要查找的目录范围 
参数
-n 显示查找结果所在行号 
-R 递归查找目录下的所有文件
例子 
grep aries /etc grep aries /etc/passwd
```

### 关机
```shell
poweroff
```

### 清屏
```shell
clear
```

### vim 打开/创建一个文件
```shell
vim threads.c
```

### linux查看磁盘使用情况命令
```shell
# 查看当前目录
df -h
```

### 给脚本添加执行权限
```shell
chmod +x image2depth.sh
```

### 改变目录 `/mnt/data1` 的权限，并且是递归`-R`应用到该目录下的所有子目录和文件
```shell
sudo chmod -R 777 /mnt/data1
```
- **`chmod`**：更改文件或目录的权限。
- **`777`**：表示给所有用户组（所有者、所在组用户、其他用户）分配最大权限，即读（r）、写（w）和执行（x）权限


###  CUDA_HOME environment variable is not set.
```bash
export CUDA_HOME=/usr/local/cuda-X.X

#X.X by nvcc --version
```

```bash
### 定位占用GPU显存的PID
fuser -v /dev/nvidia*

### 查看指定进程的信息
ps -f -p 285448

### 杀死指定进程，释放显存
kill -9 285448 285449 

###杀死所有正在运行的 Python 进程
pkill python

```

```
dmesg | grep -i "killed process"
```