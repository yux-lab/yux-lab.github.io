## 实时查看显存情况
```powershell
while ($true) { nvidia-smi; Start-Sleep -Seconds 1 }
```
## 利用Windows PowerShell进行Linux远程连接
```powershell
#-p后面加端口号
ssh root@192.168.10.135 -p 
```

## 从Windows主机拷贝文件至Linux系统主机
```powershell
#不使用 -r 选项：适用于单个文件的传输。
#scp D:\aaa.txt（windows文件路径） root@192.168.10.135:/root（LInux目标路径）
scp -P 2222 .\data_3d_raw.sqf vipuser@ip:/mnt/data/SGN_Dataset_ZIP

# -l 8192 加上限速
scp -r -P 22 -l 8192 "D:\Yux\datasets\SemanticKITTI\" username@ip:/mnt/data/

#使用 `-r` 选项的情况：适用于文件夹，递归传输
#scp -r D:\aaa root@192.168.10.135:/root
scp -r -P 2222 .\data_3d_raw.sqf vipuser@ip/mnt/data/SGN_Dataset_ZIP

scp -r -P 22 "D:\Yux\datasets\SemanticKITTI\" username@ip:/mnt/data/Yux
```

## 从Linux系统主机拷贝文件到Windows主机
```powershell
#前者路径为源文件，后者为目标路径
scp -P 22 -r vipuser@ip:/mnt/MsDaNet/ D:\
```

## sftp 传文件
[Windows 10 - PowerShell - 使用 sftp 连接 CentOS 7，实现下载或上传文件\_powershell sftp-CSDN博客](https://blog.csdn.net/qq_29761395/article/details/119772435)