### 删除当前行
```bash
Ctrl + c
```

### 打印目录树
```bash
#打印当前目录下所有文件夹
tree

#打印当前目录下所有文件夹和文件
tree /f

#将当前目录所有文件夹和文件打印并保存到txt文件中
tree /F /A > directory_tree.txt
```

```bash
#软连接
#file
mklink "link file" "source file"

#dictionary /d目录
mklink /d "link file" "source file"

mklink /d "D:\obsidian\Android\.obsidian" "D:\obsidian\.obsidian"

#600s后关机
shutdown -s -t 600

# 用curl代替wegt
curl -O https://repo1.maven.org/maven2/com/madgag/bfg/1.13.0/bfg-1.13.0.jar
```

## win强制删除文件夹（“你需要来自XXX的权限才能对此文件夹进行更改”的解决方法）
```shell
# 打开powershell 进入目录
cd D:

# 给要删除的文件/文件夹赋本机管理员Administrator权限
takeown /F '文件/文件夹' /r /d y

# 修改对文件/文件夹的访问权限（赋删除权限）
cacls '文件/文件夹' /t /e /g Administrators:F

# 强制删除文件
rd '文件/文件夹' -Recurse
# rd '文件/文件夹'
```