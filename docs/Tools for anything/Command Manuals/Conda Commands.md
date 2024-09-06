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






