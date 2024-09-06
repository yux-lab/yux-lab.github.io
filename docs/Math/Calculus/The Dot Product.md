点积的结果是一个实数，通过标量乘对应的标量再相加得出，二维向量同理。
> 从代数角度看，先求两数字序列中每组对应元素的积，再求所有积之和，结果即为点积。从几何角度看，点积则是两向量的长度与它们夹角余弦的积。这两种定义在笛卡尔坐标系中等价。

$\boxed{1}$ Definition If a $=\langle a_1,a_2,a_3\rangle$ and $\mathbf{b}=\langle b_1,b_2,b_3\rangle$, then the dot product of a
and b is the number a $\cdot\mathbf{b}$ given by

$$
\mathbf{a}\cdot\mathbf{b}=a_1b_1+a_2b_2+a_3b_3
$$

<br>
> $V_{n}$ 表示一个 $n$ 维向量空间，其中每个向量有 $n$ 个分量。

$\boxed{2}$ Properties of the Dot Product If $\mathbf{a},\mathbf{b}$, and c are vectors in $V_{3}$ and $c$ is a scalar, then
$\mathbf{1.~a\cdot a=|a|^2}$

$\mathbf{2.~a} \cdot \mathbf{b} = \mathbf{b} \cdot \mathbf{a}$

$\mathbf{3.~a\cdot(b+c)=a\cdot b+a\cdot c}$

$\mathbf{4.~(c\mathbf{a})\cdot\mathbf{b}=c(\mathbf{a}\cdot\mathbf{b})=\mathbf{a}\cdot(c\mathbf{b})}$

$\mathbf{5.~0~\cdot a=0}$

#prove 
$\boxed{3}$ Theorem If $\theta$ is the angle between the vectors $\mathbf{a}$ and $\mathbf{b}$ ,then
 
$$
\mathbf{a}\cdot\mathbf{b}=|\mathbf{a}||\mathbf{b}|\cos\theta 
$$

![](images/Pasted%20image%2020240819231005.png)
<br>

因为 $\cos90°=0$。
$\boxed{7}\text{Two vectors a and b are orthogonal if and only if }\mathbf{a}\cdot\mathbf{b}=0.$

可以通过点积的正负值来判断角的大小
![](images/Pasted%20image%2020240820074127.png)

## Direction Angles and Direction Cosines
方向角指的是在对应正坐标轴上的 $\alpha、\beta、\gamma$，如图所示。

一个向量的三个方向余弦分别是这向量与三个坐标轴之间的角度的余弦
![](images/Pasted%20image%2020240820074455.png)

其中 $\alpha,\beta, \gamma$ 为基底向量，由点积的定义，将单位向量 $\mathbf{i}$ 替换 $\mathbf{b}$ 可得：

$$
\cos\alpha=\frac{\mathbf{a}\cdot\mathbf{i}}{\mid\mathbf{a}\mid\mid\mathbf{i}\mid}=\frac{a_1}{\mid\mathbf{a}\mid}
$$
同理可得：

$$
\cos\beta=\frac{a_2}{|\mathbf{a}|}\quad\cos\gamma=\frac{a_3}{|\mathbf{a}|}
$$

又因为向量模长公式为：$|v|=\sqrt{x^2+y^2+z^2}$，将 $\alpha,\beta, \gamma$ 替换上面的 $x, y, z$,，而单位向量的模长为 1，两边平方，所以有：

$$
\alpha ^{2}+\beta ^{2}+\gamma ^{2}=1
$$

由上式将模长和余弦角相乘可得向量的分量，同时把向量 $\mathbf{a}$ 用分量表示，可得：

$$
\begin{aligned}\mathbf{a}&=\langle a_1,a_2,a_3\rangle=\left\langle\left|\mathbf{a}\right|\cos\alpha,\left|\mathbf{a}\right|\cos\beta,\left|\mathbf{a}\right|\cos\gamma\right\rangle\\&=|\mathbf{a}|\langle\cos\alpha,\cos\beta,\cos\gamma\rangle\end{aligned}
$$

因此有：

$$
\frac1{|\mathbf{a}|}\mathbf{a}=\langle\cos\alpha,\cos\beta,\cos\gamma\rangle 
$$

这个公式指的是 $\mathbf{a}$ 的方向余弦是 $\mathbf{a}$ 方向上的单位向量的分量。

## Projections
一个向量的影子
$\overrightarrow{PS}\text{ is called the vector projection of }\mathbf{b}\text{ onto }\mathbf{a}\text{ and is denoted by }\mathrm{proj_a~b.}$
![](images/Pasted%20image%2020240825085529.png)

向量 ${\mathbf {b} }$ 在向量 ${\mathbf {a} }$ 上的标量投影是指 ${\mathbf {b} }$ 在 ${\mathbf {a} }$ 方向上的投影长度，表示为 $\mathrm{comp_a~b}$。

**Signed Magnitude**指的是带符号的大小，也就是这个角的正负值。这可以告诉我们投影有多长以及方向。而这个值是 ${|\mathbf {b} |\cos \theta }$。$\theta$ 是 ${\mathbf {a} }$ 和 ${\mathbf {b} }$ 的夹角。

${\mathbf {a} }$ 和 ${\mathbf {b} }$ 的点积可以表示为 ${\mathbf {a} }$ 的模长乘上 $\mathrm{comp_a~b}$。

$$
\mathbf{a}\cdot\mathbf{b}=\mid\mathbf{a}\mid\mid\mathbf{b}\mid\cos\theta=\mid\mathbf{a}\mid(\mid\mathbf{b}\mid\cos\theta)
$$
因此有：

$$
|\mathbf{b}|\cos\theta=\frac{\mathbf{a}\cdot\mathbf{b}}{|\mathbf{a}|}=\frac{\mathbf{a}}{|\mathbf{a}|}\cdot\mathbf{b}
$$

${\mathbf {b} }$ 沿 ${\mathbf {a} }$ 的分量可以通过取 ${\mathbf {b} }$ 的点积和沿 ${\mathbf {a} }$ 方向的单位向量来计算。
![](images/Pasted%20image%2020240825090819.png)

Scalar projection of $\mathbf{b}$ onto $\mathbf{a}$: $\mathrm{comp_a~b}$ = $\frac {a\cdot b}{| a| }$

Vector projection of $\mathbf{b}$ onto $\mathbf{a}$:$\mathrm{proj_a~b}=\left(\frac{\mathbf{a}\cdot\mathbf{b}}{|\mathbf{a}|}\right)\frac{\mathbf{a}}{|\mathbf{a}|}=\frac{\mathbf{a}\cdot\mathbf{b}}{|\mathbf{a}|^2}\mathbf{a}$