## Jetson nano常用命令

### 风扇命令
```shell
echo 30 | sudo tee /sys/devices/pwm-fan/target_pwm
```

### 监控NVIDIA Jetson的的运行状态和使用情况
```shell
sudo -H pip install -U jetson-stats

jtop
```