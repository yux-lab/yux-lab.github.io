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
conda create -n name python=3.8(optional) -y
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
pip install -r requirements.txt
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






