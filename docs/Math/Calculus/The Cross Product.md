叉积的结果是一个向量，一个与给定两个三维向量都垂直的向量。
$\boxed{4}\text{ Definition If }\mathbf{a}=\langle a_1,a_2,a_3\rangle\text{ and }\mathbf{b}=\langle b_1,b_2,b_3\rangle\text{, then the cross product of a and b is the vector}$
$$\mathbf{a}\times\mathbf{b}=\langle a_2b_3-a_3b_2,a_3b_1-a_1b_3,a_1b_2-a_2b_1\rangle $$

用行列式来表达：
$$\mathbf{a}\times\mathbf{b}=\begin{vmatrix}\mathbf{i}&\mathbf{j}&\mathbf{k}\\a_1&a_2&a_3\\b_1&b_2&b_3\end{vmatrix}$$
上式的单位向量各自取其它两列的标量来交叉相乘再相减，每个值对应每个单位向量，也就是：
$$\mathbf{a}\times\mathbf{b}=\left|\begin{array}{cc}a_2&a_3\\b_2&b_3\end{array}\right|\mathbf{i}-\left|\begin{array}{cc}a_1&a_3\\b_1&b_3\end{array}\right|\mathbf{j}+\left|\begin{array}{cc}a_1&a_2\\b_1&b_2\end{array}\right|\mathbf{k}$$
单位向量前面的系数表示该向量（与 $\mathbf{a}$ 和 $\mathbf{b}$ 都垂直）在相应坐标轴方向上的分量。通过分量可确定该向量的位置。

以 $\mathbf{a}$ 和 $\mathbf{b}$ 为边的平行四边形的面积等于与它们都垂直的向量的模长。

$\boxed{9}$ Theorem If $\theta$ is the angle between a and b (so $0\leqslant\theta\leqslant\pi)$, then
$$|\mathbf{a}\times\mathbf{b}|=|\mathbf{a}||\mathbf{b}|\sin\theta $$
![](images/Pasted%20image%2020240825163244.png)
