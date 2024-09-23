形如：
![](images/Pasted%20image%2020240919082428.png)
称之为级数，用符号表示：
![](images/Pasted%20image%2020240919082447.png)

例 1：随着 n 增大，累积和变得越来越大，无法找到有限的和。
![](images/Pasted%20image%2020240919083247.png)

例 2：随着添加更多项，部分和越来越接近 1。部分和指的是只计算前若干项的总和。例如，前两项的和为 1/2 + 1/4 = 3/4，前三项的和为 1/2 + 1/4 + 1/8 = 7/8，依此类推。可以看到，随着项数增加，部分和逐渐逼近 1。
![](images/Pasted%20image%2020240919083454.png)
![](images/Pasted%20image%2020240919083546.png)

部分和
![](images/Pasted%20image%2020240919083959.png)
![](images/Pasted%20image%2020240919084005.png)
当![](images/Pasted%20image%2020240919084026.png)
S 可能不存在，如果存在则称其为无穷级数的和。

![](images/Pasted%20image%2020240919083627.png)

因此, 级数的和是部分和序列的极限。
![](images/Pasted%20image%2020240919083829.png)
这意味着通过添加足够多的项，可以尽可能接近数字 S

例 3：等比级数
![](images/Pasted%20image%2020240919084235.png)
从第一项开始，后一项除以前一项的结果是一个公比 r。
如果 r=1，则级数和趋于无穷
如果 r≠1，有：
![](images/Pasted%20image%2020240919084632.png)
两边乘以 r
![](images/Pasted%20image%2020240919084640.png)
上式-下式：
![](images/Pasted%20image%2020240919084836.png)
则有：
![](images/Pasted%20image%2020240919084852.png)

![](images/Pasted%20image%2020240919084956.png)
使用绝对值符号 |r| 是为了涵盖所有可能的情况（可能是为了更好看吧./）
![](images/Pasted%20image%2020240919085048.png)
![](images/Pasted%20image%2020240919085244.png)

如果一个级数收敛，那么它的各项随着 n 的增大会趋近于 0。
![](images/Pasted%20image%2020240919091016.png)
![](images/Pasted%20image%2020240919091324.png)
Note 1：
对于任何级数 ∑an，我们都可以关联两个序列：部分和序列 {sn} 和各项序列 {an}。如果级数 ∑an 收敛，那么部分和序列 {sn} 的极限是级数的和 s，而各项序列 {an} 的极限是 0。

Note 2：
但调和级数是一个例外，所以这个定理并不通用。

Note 3：
如果![](images/Pasted%20image%2020240919091652.png)
则级数 ∑an 发散，
但
![](images/Pasted%20image%2020240919091716.png)
并不能证明级数 ∑an 收敛，它可能收敛也可能发散（Note 2）。

![](images/Pasted%20image%2020240919091810.png)

Note 4：
有限数量的项不会影响级数的整体收敛性或发散性。这意味着，如果我们能够证明一个级数是收敛的，那么加上或去掉有限数量的项并不会改变级数的收敛性。级数的收敛性取决于无穷多项的行为，而非有限数量的项。
![](images/Pasted%20image%2020240919092132.png)
![](images/Pasted%20image%2020240919092141.png)

![](images/Pasted%20image%2020240919092251.png)