```bash
#删除
conda remove -n name --all -y

#创建
conda create -n name python=3.8(optional) -y

#激活
conda activate name

#添加清华源
pip install xxxx -i https://pypi.tuna.tsinghua.edu.cn/simple

#永久换源
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple

#安装requirements.txt
#-r的意思是“从给定的文件中逐行读取并安装包”
pip install -r requirements.txt

#查看路径以及虚拟环境列表
conda env list

#退出虚拟环境
deactivate
```