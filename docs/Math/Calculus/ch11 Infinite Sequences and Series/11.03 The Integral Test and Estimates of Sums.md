求和：
![](images/Pasted%20image%2020240920084519.png)
图像为：
![](images/Pasted%20image%2020240920084536.png)
排除第一个，计算剩下的和（反常积分 ch 7.8），有：
![](images/Pasted%20image%2020240920084619.png)

因此，部分和是有界的，由于所有的项都是正数，部分和是递增的（单调递增）。结合之前的结果，我们可以使用单调序列定理来证明部分和是收敛的，所以整个级数也是收敛的。
![](images/Pasted%20image%2020240920084816.png)

例 2
![](images/Pasted%20image%2020240920085204.png)
部分和越来越大
![](images/Pasted%20image%2020240920085211.png)

由于反常积分发散
![](images/Pasted%20image%2020240920085351.png)
所以整个级数发散。

![](images/Pasted%20image%2020240920085426.png)
此外，f 不必总是递减。重要的是 f 最终会减少，也就是说，当 x 大于某个数字 N 时，f 会减少。


![](images/Pasted%20image%2020240920090023.png)
当 p>1 时，随着 n 的增大，每一项 1/n^p 会以足够快的速度衰减至零，使得级数的部分和最终收敛到一个有限值。相反，当 p≤1 时，1/n^p 变得非常缓慢地下降，导致级数的部分和不会收敛到一个有限值，而是无限增加。
![](images/Pasted%20image%2020240920090018.png)

Note
我们不应该从积分测试中推断出级数之和等于积分的值。
![](images/Pasted%20image%2020240920090324.png)
![](images/Pasted%20image%2020240920090332.png)
积分测试只能告诉我们级数是否收敛或发散，而不能给出级数的确切和。积分的和在上确界和下确界中的面积，也就是积分的和是无限逼近，近似值，而不是确切的值。


## Estimating the Sum of a Series
当
![](images/Pasted%20image%2020240920172916.png)
部分和 Sn 是一个对 S （S 为级数的和）的精确值。
但，有多近似才是好的呢？为了找到这个近似，需要估计余数（除了 Sn 剩下的部分）的大小：
![](images/Pasted%20image%2020240920172835.png)
余数 Rn 是当 Sn（前 n 项之和）用作总和的近似值时产生的误差

例：Rn 指的是矩形面积相加的结果
![](images/Pasted%20image%2020240920173742.png)
![](images/Pasted%20image%2020240920173737.png)


![](images/Pasted%20image%2020240920173943.png)

![](images/Pasted%20image%2020240920173950.png)

![](images/Pasted%20image%2020240920174017.png)