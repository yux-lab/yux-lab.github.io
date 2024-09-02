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

### 添加清华源
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



curl -H "Authorization: Bearer ya29.a0AcM612xO9G8alCpQELfs6UF047FBCzOluEupgh1WXrUgXXJ8SYBSTUjW3BOc7GujZ7fS-psBkriiubqJ5Oa4CANJdn5V_zckTDiERk77fneZz9Q-j8kPj5TEDtDc_Hytb-2ZiV53heRRJJPlFAkPS4apQNhzj5uW-jGWev3-aCgYKAcESARMSFQHGX2MiZ_-RsY7iNHg3A6uV-L0StQ0175" https://www.googleapis.com/drive/v3/files/1yKaz9_SjTUGOJ3rKSgttqOPF5ZUokQbY?alt=media -o data_2d_raw.sqf


