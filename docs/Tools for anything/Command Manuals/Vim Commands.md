## Vim常用命令
命令行输入：vimtutor 打开练习

### 移动
在Normal模式下使用以下命令进行光标移动：

- `h`：向左移动
- `l`：向右移动
- `j`：向下移动
- `k`：向上移动

### 退出
在命令行中输入以下命令退出Vim，不保存任何修改：

```
:q!
```

### 插入和追加
在Normal模式下使用以下命令进行插入和追加：

- `i`：在光标前插入字符
- `A`：在光标所在行的行尾追加文本

### 保存退出
在Normal模式下使用以下命令保存文件并退出Vim：

```
:wq
```

### 删除
在Normal模式下使用以下命令进行删除：

- `dd`：删除一整行
- `2dd`：删除两行（数字可替换为任意正整数）
- `dw`：从光标处删除一个单词
- `d$`：从光标处删除至行尾
- `d motion`：删除操作符（d）+ 操作对象（motion）

### 撤销
在Normal模式下使用以下命令进行撤销：

- `u`：撤销最后一次操作（恢复到上一次的状态）
- `U`：恢复到该行最初始的状态
- `CTRL+R`：撤销撤销命令（重做上一次撤销的操作）

### 粘贴
在Normal模式下使用以下命令进行粘贴：
用dd删除后，该行会保存在寄存器中  
取出粘贴，在谁的下面光标就在这谁的首
- `p`：将寄存器中的内容粘贴到光标所在行的下方

### 替换
在光标所在位置使用以下命令进行替换：

- 光标移动到要替换的单词
- 输入 `r` 和替换的词

### 更改
在Normal模式下使用以下命令进行更改：

- `ce`：改变文本直到一个单词的末尾（删除+插入）

### 更多使用c进行更改
在Normal模式下使用以下命令进行更多的更改：

- `c [number] motion`：从光标开始，根据给定的motion删除并插入文本
- `c$`：从光标到行尾删除并插入文本

