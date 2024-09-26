[course](https://zhuanlan.zhihu.com/p/193140870)

 **Upload Repository**
```bash
# Create a new Git repository in this directory.
git init

# Upload the specific files
git add README.md

# '.' signifies all files. 'git add .' adds all untracked or modified files under Git's management.
git add .

# Commit the staged files to the repository. "first commit" is the commit message describing this change.
git commit -m "first commit"

# change branch
git branch -M main

# Inform Git of the remote repository where changes will be pushed.
git remote add origin git@github.com:Yux-lab/DevToolsCommands.git

# Push changes to the main branch of the remote repository forcefully.
git push -u origin main

```


**Push Changes**
```
git add -A

git commit -m "something new"

git push -u origin master/main -f
```

## 
```bash
# 合并远程的更改到本地分支
git pull origin main

git commit -m "Merge remote-tracking branch 'origin/main'"

git push -u origin main
```

```bash
git fetch --all

git branch -a

git checkout -b gh-pages origin/gh-pages

git checkout -b gh-pages

git push -u origin gh-pages
```

## 安装 git（ubuntu）
```bash
sudo apt update
sudo apt install git
```

## 配置Git
```bash
git config --global user.name "Your Name"
git config --global user.email "youremail@example.com"
```

## 生成SSH密钥
```bash
#如果还没有SSH密钥对，使用以下命令生成一个新的SSH密钥：
ssh-keygen -t rsa -b 4096 -C "youremail@example.com"

#跟随提示一路回车，将生成的SSH密钥添加到SSH代理：
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_rsa
```

## 查看生成秘钥
```bash
cat  ~/.ssh/id_rsa.pub
```

## 配置 SSH
![](images/Pasted%20image%2020240917235354.png)
将id_rsa.pub文件中的内容全部复制到key中，输入title，点击Add SSH key 即可。
![](images/Pasted%20image%2020240917235406.png)

## 克隆GitHub仓库

## 如何写脚本上传至仓库
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:yux-lab/c-programming-a-modern-approach.git
git push -u origin main