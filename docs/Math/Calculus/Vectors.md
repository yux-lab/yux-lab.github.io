向量：既有大小又有方向的量（位移、力、速度），由一个箭头或有向线段表示。比如一拳伸出去的路径。
长度为向量的大小，而端点为方向。用粗体 $\textbf{V}$ 或 $\vec{v}$ 表示一个向量。

![](images/Pasted%20image%2020240818201400.png)

## 向量相加
例： $\vec{v} + \vec{u}$
三角形法则：将 $\vec{v}$ 移动指向 $\vec{u}$ 的尾巴，再相连。

平行四边形法则：前者的变化，适用于两者的端点在同一个位置。

而减法是加法的逆运算：$\vec{v} - \vec{u} = \vec{v} + (\vec{-u})$

![](images/Pasted%20image%2020240818202220.png)

标量 $c$：一个实数，表示为大小，没有方向
$c \vec{v}$
标量相乘的几何意义是：放大/缩小该向量；若 $c < 0$ ，则改变向量方向。
![](images/Pasted%20image%2020240818202609.png)

## 分量
分量指的是将一个向量的尾巴放在坐标系的原点，终点的坐标则是这个向量的分量，注意括号是用来区分有序数对和向量的分量：
![](images/Pasted%20image%2020240818203239.png)


## 位置向量
用一个带箭头的线段表示，箭头指向物体，线段的长度表示物体到原点的距离，线段的方向表示物体相对于原点的方向。如图 13，$\textbf{a}$ 是点 $P$ 的位置向量。

![](images/Pasted%20image%2020240818204151.png)


## 位移向量
可以通过终点减去起点得到。为什么是终点减起点？假设有一个小球，初始位置为A点，经过一段时间后移动到了B点。OA向量表示小球在A点的位置，OB向量表示小球在B点的位置。那么 $\overrightarrow{AB} = \overrightarrow{OB} - \overrightarrow{OA}$ 。其实就是三角形法则，为什么是 $\overrightarrow{AB}$ 呢？因为它表示的是以 A 为起点 B 为终点。

$\text{Given the points }A (x_1, y_1, z_1)\mathrm{~and~}B (x_2, y_2, z_2),\text{ the vector a with representation }\mathrm{~and~}\overrightarrow{AB}\text{ is}$ 

$$
\mathbf{a}=\langle x_2-x_1,y_2-y_1,z_2-z_1\rangle 
$$


**The length of the two-dimensional vector** $\mathbf{a}=\langle a_1,a_2\rangle$ is
$$|\mathbf{a}|=\sqrt{a_1^2+a_2^2}$$

**The length of the three-dimensional vector** $\mathbf{a}=\langle a_1,a_2,a_3\rangle$ is
$$\begin{vmatrix}\mathbf{a}\end{vmatrix}=\sqrt{a_1^2+a_2^2+a_3^2}$$

代数上，如何添加向量？每个分量加上每个分量。
$$\mathrm{If~}\mathbf{a}=\langle a_1,a_2\rangle\mathrm{~and~}\mathbf{b}=\langle b_1,b_2\rangle,\mathrm{then}$$
$$\mathbf{a}+\mathbf{b}=\langle a_1+b_1,a_2+b_2\rangle\quad\mathbf{a}-\mathbf{b}=\langle a_1-b_1,a_2-b_2\rangle$$ 
$$c\mathbf{a}=\langle ca_1,ca_2\rangle $$

![](images/Pasted%20image%2020240818212620.png)


**Properties of Vectors:** If $\mathbf{a}$, $\mathbf{b}$, and $\mathbf{c}$ are vectors in $V_n$ and $c$ and $d$ are scalars, then
1. $\mathbf{a} + \mathbf{b} = \mathbf{b} + \mathbf{a}$ $\Leftrightarrow$ 平行四边形法则
2. $\mathbf{a} + (\mathbf{b} + \mathbf{c}) = (\mathbf{a} + \mathbf{b}) + \mathbf{c}$ $\Leftrightarrow$ 三角形法则
3. $\mathbf{a} + \mathbf{0} = \mathbf{a}$
4. $\mathbf{a} + (-\mathbf{a}) = \mathbf{0}$
5. $c(\mathbf{a} + \mathbf{b}) = c\mathbf{a} + c\mathbf{b}$
6. $(c+d)\mathbf{a} = c\mathbf{a} + d\mathbf{a}$
7. $(cd)\mathbf{a} = c(d\mathbf{a})$
8. $1 \cdot \mathbf{a} = \mathbf{a}$

## Standard basis vectors
length 1 and point in the directions of the positive x-, y-, and z-axes.
$$\mathbf{i}=\langle 1,0,0\rangle\quad\mathbf{j}=\langle 0,1,0\rangle\quad\mathbf{k}=\langle 0,0,1\rangle $$

![](images/Pasted%20image%2020240819205126.png)

一个向量 $\mathbf{a}=\langle a_1, a_2, a_3\rangle$ 可用分量表示为：
$$\begin{aligned}
&\mathbf{a} = \langle a_1, a_2, a_3 \rangle = \langle a_1,0,0 \rangle + \langle 0, a_2,0 \rangle + \langle 0,0, a_3 \rangle \\
&= a_1 \langle 1,0,0 \rangle + a_2 \langle 0,1,0 \rangle + a_3 \langle 0,0,1 \rangle \\
&\mathbf{a} = a_1 \mathbf{i} + a_2 \mathbf{j} + a_3 \mathbf{k}
\end{aligned}$$

比如 $\langle1,-2,6\rangle=\mathbf{i}-2\mathbf{j}+6\mathbf{k}$，二维同理。

基向量可称为单位向量，因为长度为 1，如同单位圆。单位向量主要关心的是方向而非大小。

In general, if $\mathbf{a}$ $\neq\mathbf{0}$, then the unit vector that has the same direction as $\mathbf{a}$ is

$$\mathbf{u}=\frac{1}{\mid\mathbf{a}\mid}\mathbf{a}=\frac{\mathbf{a}}{\mid\mathbf{a}\mid}$$

为什么是 $\frac{1}{\mid\mathbf{a}\mid}$，因为底下是模，上面的公式就是把向量 $\mathbf{a}$ 变到一个长度为 1 的向量。


