[Linux 如何保持 Nvidia 驱动稳定 - V2EX](https://www.v2ex.com/t/1087349#reply13)

## 解/压缩文件夹
```shell
sudo apt-get install zip unzip

#压缩
zip -r output.zip folder_name

#解压
unzip output.zip -d destination_folder
```



## 两台 ubuntu 传文件
```bash
# 确保接收端有文件夹的权限
#查看权限，输出结果则为哪个用户组拥有权限
ls -ld /mnt/data/
ls -l /mnt/data/

# 改变目录的所有者和权限：
sudo chown -R vipuser:vipuser /mnt/data/Yux/palm
sudo chmod -R 755 /mnt/data/Yux/palm

# 再次执行第一条检查

#发送端通过rsync断点传输
rsync -avz --progress --delete --rsh='ssh -p 22' /path/to/source folder/ username@ip:/path/to/destination folder/ 

# 挂后台（未解决密码问题。可以通过ssh密钥对；或者powershell）
nohup rsync -avz --progress --delete --rsh='ssh -p 22' /path/to/source folder/  username@ip:/path/to/destination folder/  > my_rsync.log 2>&1 &

#实时打印日志
tail -f my_rsync.log
```


### 查看发行版信息
```bash
lsb_release -a
```

### 当报错时打印日志
```bash
#显示最近的内核消息。诊断最近发生的系统问题或者检查新插入硬件的状态
dmesg | tail

# `/var/log/syslog` 文件通常包含系统的常规日志信息，包括应用程序和服务的日志。
cat /var/log/syslog | tail
```


### Linux所有命令失效解决办法
```bash
export PATH=/usr/bin:/usr/sbin:/bin:/sbin:/usr/X11R6/bin
```

### Directory not empty
```bash
# 找到该目录的隐藏文件
ls /mnt/data

lsof /mnt/data/.fuse_hidden00051d20000000b3 

# 找到对应进程号
sudo kill -9 439914

rm -rf data/
```

### 创建软连接
```bash
ln -s [SemanticKITTI root] ./kitti
```

### 解压文件
```bash
# rar
sudo apt-get install unrar

unrar x OriginalImages.rar Tongji/

# zip
sudo apt-get install unzip

unzip OriginalImages.zip

# -d 后是目标目录。
unzip labels.zip -d ./dataset/

# 7z
sudo apt-get install p7zip-full

7z x 'IITD Palmprint V1.7z' -o'/mnt/data/Yux/palm/dataset/IITD/IITD Palmprint V1'
```

### 安装 cuda
[CUDA Toolkit Archive | NVIDIA Developer](https://developer.nvidia.com/cuda-toolkit-archive)


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

### `swapfile` 扩展到 200GB
```bash
#禁用正在使用的 swap 文件：
sudo swapoff /swapfile

#增加 Swap 文件大小到 200GB
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

### vscode 远程ubuntu
```bash
# windows生成公钥，一路回车
ssh-keygen

# 将C:\Users\user/.ssh/id_rsa.pub中的内容复制到ubuntu的/home/user/.ssh/authorized_keys中，如没有则创建
cd ~
mkdir .ssh
cd .ssh
vi authorized_keys

# 添加权限
chmod 700 ~/.ssh
chmod 600 ~/.ssh/authorized_keys

# 重启ssh
sudo systemctl restart sshd
```

在配置 `config` 文件可添加多台主机

在vscode 下载 Remote 插件
[使用 SSH 和 Visual Studio Code 在远程机器上开发 - VSCode 中文](https://vscode.js.cn/docs/remote/ssh)
[Windows 下 VS Code 远程连接 Ubuntu 并配置免密登录\_vscode ubuntu免密登录-CSDN博客](https://blog.csdn.net/qq_42815188/article/details/128736694)


好的，让我们逐一解释 `CUDA Toolkit`、`nvidia-smi` 和 `nvcc --version` 的作用，以及它们的安装顺序。

### 1. CUDA Toolkit
**作用**：
- **CUDA Toolkit** 编写和编译 CUDA C/C++ 代码。包括编译器 (`nvcc`)、库（如 cuBLAS、cuFFT）、头文件、示例代码和文档。
- **主要用途**：用于开发和优化基于 GPU 的应用程序，特别是高性能计算和深度学习应用。

### 2. nvidia-smi
- **主要用途**：查看 GPU 的状态信息，如驱动版本、CUDA 版本、GPU 使用率、显存使用情况等。

### 3. nvcc --version
- **nvcc** 是 NVIDIA CUDA C/C++ 编译器，用于编译 CUDA C/C++ 代码。
- **nvcc --version** 命令用于显示当前安装的 CUDA 编译器的版本信息。

### 安装顺序
通常情况下，安装顺序如下：
1. **安装 NVIDIA 驱动程序**：
2. **安装 CUDA Toolkit**：
3. **验证安装**：
     ```bash
     nvidia-smi
     ```
     ```bash
     nvcc --version
     ```

### 总结
1. **安装 NVIDIA 驱动程序**：确保 GPU 能够正常工作。
2. **安装 CUDA Toolkit**：提供 CUDA 编程所需的工具和库。
3. **配置环境变量**：确保系统能够找到 CUDA 工具和库。
4. **验证安装**：使用 `nvidia-smi` 和 `nvcc --version` 命令验证安装是否成功。


### AttributeError: module ‘numpy‘ has no attribute ‘int‘.
某些库没有特定的方法
1. 改源码
2. 降级/升级版本

### Depends：xxx but it is not going to be installed
```shell
aptitude

sudo apt-get isntall libvtk5-dev

#如果安装不上，则用另一个包管理器
sudo apt-get install aptitude

sudo aptitude install libvtk5-dev

#如果出现第一个，则输入n，后面y
Accept this solution? [Y/n/q/?]n
```