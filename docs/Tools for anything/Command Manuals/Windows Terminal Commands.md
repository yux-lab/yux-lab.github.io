```bash
#删除当前行
Ctrl + c

#打印目录树
tree /F /A > directory_tree.txt

#软连接
#file
mklink "link file" "source file"

#dictionary /d目录
mklink /d "link file" "source file"
#mklink /d "D:\obsidian\Computer Science\How to eat course\.obsidian" "D:\obsidian\.obsidian"

#600s后关机
shutdown -s -t 600

# 用curl代替wegt
curl -O https://repo1.maven.org/maven2/com/madgag/bfg/1.13.0/bfg-1.13.0.jar
```