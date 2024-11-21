### 迁移环境的 python 指向问题
```shell
(crddc2022) wheeltec@wheeltec:~/archiconda3/envs/crddc2022$ pip list
-bash: /home/wheeltec/archiconda3/envs/crddc2022/bin/pip: /home/jetson/archiconda3/envs/crddc2022/bin/python3.8: bad interpreter: No such file or directory

#修改第一行为实际路径
vi /home/wheeltec/archiconda3/envs/crddc2022/bin/pip
```


### conda 创建虚拟环境时带有 base 环境的包
```bash
# 这两个命令的输出应该指向 Conda 虚拟环境的路径，而不是系统的全局路径。
which python
which pip

(base) jie@wqt:~$ which python /home/user/miniconda3/bin/python 
(base) jie@wqt:~$ which pip /home/user/.local/bin/pip
#从你的输出来看，你当前在 `base` 环境下。`python` 路径是指向 `Miniconda` 的，而 `pip` 却是指向你用户目录下的 `~/.local/bin`，这意味着你的 `pip` 可能是系统级的，而不是 `conda` 环境中的 `pip`。

conda install pip
which pip
#输出应该指向类似 `/home/jie/miniconda3/bin/pip` 的路径，而不是 `~/.local/bin/pip`。如果仍然不对，可以尝试使用以下命令清理 `~/.local/bin` 下的全局 `pip` 安装：
rm ~/.local/bin/pip

# 再次确认
which python
which pip

# 两者路径应该都在你的 Conda 环境下，比如 `/home/user/miniconda3/envs/myenv/bin/`。
```


### conda 安装包
```bash
conda install -c conda-forge pexpect
```

### conda list 和pip list
可以共用，注意是否有重叠的版本冲突

### 已经有 yml 文件如何快速配置虚拟环境
```bash
# 找到yml文件，直接创建，环境名根据文件内容来设置
# 据说不用修改 prefix  字段，待测试
conda env create -f environment.yml
```



### 安装 pytorch
[Fetching Title#g4ca](https://pytorch.org/get-started/previous-versions/)


当遇到 `error: command '/usr/lib/cuda/bin/nvcc' failed: No such file or directory`
```bash
# 找实际路径
which nvcc

# 设置环境变量
# CUDA environment variables 
export PATH=/usr/local/cuda-11.7/bin${PATH:+:${PATH}} 
export LD_LIBRARY_PATH=/usr/local/cuda-11.7/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
export CUDA_HOME=/usr/local/cuda-11.7
```

### 导出环境
```bash
conda env export > environment.yaml
```

### 删除
```bash
conda remove -n name --all -y
```

### 创建
```bash
conda create -n name python=3.8 -y
```

### 激活
```bash
conda activate name
```

### 安装包时使用清华源
```bash
pip install xxxx -i https://pypi.tuna.tsinghua.edu.cn/simple
```

### 永久换源
```bash
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple
```

### 安装requirements.txt
-r的意思是“从给定的文件中逐行读取并安装包”
```bash
pip install -r 

requirements.txt
```

### 查看路径以及虚拟环境列表
```bash
conda env list
```

### 退出虚拟环境
```bash
deactivate
```

### 将conda的虚拟环境添加到jupyter notebook的kernel中
```bash
#如果未安装kernel
conda install -c anaconda ipykernel

python -m ipykernel install --user --name=your_env
```

### linux 换 pip 源
```bash
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple
```


```bash
channels:
  - defaults
show_channel_urls: true
channel_alias: https://mirrors.tuna.tsinghua.edu.cn/anaconda
default_channels:
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/r
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/pro
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/msys2
custom_channels:
  conda-forge: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  msys2: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  bioconda: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  menpo: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  pytorch: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  simpleitk: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
```

### python安装好了某个包但是仍报错ImportError: No module named xxx的解决方法及思路
出现该问题的根本原因是，当前使用的python环境，和已经安装了包的python环境不是同一个。
也就是说，一个是用 pip 3 安装的，而却用 python 来运行，就会错误
[python安装好了某个包但是仍报错ImportError: No module named xxx的解决方法及思路\_python包安装了但import报错-CSDN博客](https://blog.csdn.net/weixin_44120025/article/details/129397395)






