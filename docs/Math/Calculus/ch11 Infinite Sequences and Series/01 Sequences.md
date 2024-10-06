序列：排成一列的数字。比如数列

定义 1：一个序列 $a_n$ 有极限 $L$，写为：

$$
\lim_{n\to\infty}a_n=L\quad\mathrm{or}\quad a_n\to L \mathrm\quad{as} \quad n\to\infty 
$$

如果我们可以通过取足够大的 $n$ 使项 $a_n$ ​ 与 $L$ 尽可能接近，那么如果 $\lim_{n\to\infty}a_n$  存在，则序列收敛，否则发散。

![](images/Pasted%20image%2020240918084023.png)

定义 2，更精确，一个序列 $a_n$ 有极限 L 我们写作：

$$
\lim_{n\to\infty} a_n=L\quad\mathrm{or}\quad a_n\to L \quad\mathrm{as} \quad n\to\infty 
$$

如果对于每一个 $\varepsilon>0$ 都存在一个整数 N，有：

$$
\text{if}\quad n>N\quad\text{then}\quad\left|a_n-L\right|<\varepsilon 
$$

无论选择的这个 $(L-\varepsilon,L+\varepsilon)$ 区间多么小，总有一个 $N$，使得从 $a_n+1$ 开始的序列的所有项都必须位于该区间内。

![](images/Pasted%20image%2020240918084112.png)

$a_n$ 始终躺在两条绿色水平线的中间

![](images/Pasted%20image%2020240918084252.png)

定理 3：当 $N$ 是一个整数时，$\lim_{x\to\infty}f(x)=L\mathrm{~and~}f(n)=a_n$，则 $\lim_{n\to\infty}a_n=L$

![](images/Pasted%20image%2020240918084638.png)


from 3.4.4
定理 4：如果 $r>0$ 是一个有理数，则

$$
\lim_{x\to\infty}\frac1{x^r}=0
$$

如果 $r>0$ 是一个有理数使得对于所有 $x$，$x^r$ 都有定义，则

$$
\lim_{x\to-\infty}\frac1{x^r}=0
$$

![](images/Pasted%20image%2020240918085035.png)

第 4 回到序列

$$
\lim_{n\to\infty}\frac{1}{n^r}=0\quad\text{if} r>0
$$

定义 5：$\lim_{n\to\infty}a_{n}=\infty$ 一位置对于每一个正数 M，都存在一个整数 N 使得

$$
\text{if}\quad n>N\quad\text{then}\quad a_n>M
$$

序列的极限定律

$$\lim_{n\to\infty}\:(a_n\:+\:b_n)=\lim_{n\to\infty}\:a_n\:+\:\lim_{n\to\infty}\:b_n
$$

$$
\lim_{n\to\infty}\:(a_n-b_n)=\lim_{n\to\infty}\:a_n-\lim_{n\to\infty}\:b_n
$$

$$
\lim\limits_{n\to\infty}ca_n=c\lim\limits_{n\to\infty}a_n\quad\lim\limits_{n\to\infty}c=c
$$


$$
\lim_{n\to\infty}\left(a_{n}b_{n}\right)=\lim_{n\to\infty}a_{n}\cdot\lim_{n\to\infty}b_{n}
$$

$$
\lim_{n\to\infty}\frac{a_n}{b_n}=\frac{\lim_{n\to\infty}a_n}{\lim_{n\to\infty}b_n}\quad\text{if}\lim_{n\to\infty}b_n\neq0
$$

$$
\lim\limits_{n\to\infty}a_n^p=\begin{bmatrix}\lim\limits_{n\to\infty}a_n\end{bmatrix}^p\quad\text{if } p>0\text{ and } a_n>0
$$


三明治定理： $\mathrm{If~}a_n\leqslant b_n\leqslant c_n\mathrm{~for~}n\geqslant n_0\mathrm{~and}\lim_{n\to\infty}a_n=\lim_{n\to\infty}c_n=L,\mathrm{then}\lim_{n\to\infty}b_n=L$

![](images/Pasted%20image%2020240918085600.png)

定理 6

$$
\text{If}\lim\limits_{n\to\infty}\big|a_n\big|=0,\text{then}\lim\limits_{n\to\infty}a_n=0
$$


定理 6 的题型
![](images/Pasted%20image%2020240918090416.png)
![](images/Pasted%20image%2020240918090425.png)


定理 7：
如果将连续函数应用于收敛序列的项，则结果也是收敛的。

如果一个序列收敛到 $L$，且 $f$ 是在 $L$ 处连续的函数，那么应用 $f$ 得到的新序列也收敛，并且它的极限等于 $f(L)$。

$$
\lim_{n\to\infty}f(a_n)=f(L)
$$
> 可以先计算序列的极限，然后再应用函数，而不是直接求解复杂的函数应用之后的序列极限。
> ![](images/Pasted%20image%2020240918090954.png)


![](images/Pasted%20image%2020240918092636.png)
令 $b=r$，$n=x$

$$
\lim\limits_{n\to\infty}r^n=\begin{cases}\infty&\text{if } r>1\\0&\text{if } 0<r<1\end{cases}
$$

观察到：
$$
\lim\limits_{n\to\infty}1^n=1\quad\text{and}\quad\lim\limits_{n\to\infty}0^n=0
$$

如果 $-1< r < 0$，那么 $0 < |r| < 1$，所以：

$$
\lim\limits_{n\to\infty}\left|r^n\right|=\lim\limits_{n\to\infty}\left|r\right|^n=0
$$

![](images/Pasted%20image%2020240918092851.png)

总结以上：当 $-1 < r ≤ 1$ 时序列 $r^n$ 收敛，而对于 r 的其它值发散。

$$
\lim\limits_{n\to\infty}r^n=\begin{cases}0&\text{if} -1<r<1\\1&\text{if } r=1\end{cases}
$$

定义 10：单调性

![](images/Pasted%20image%2020240918092941.png)

定义 11：上确界和下确界

![](images/Pasted%20image%2020240918093753.png)

![](images/Pasted%20image%2020240918093808.png)

第 12：单调序列定理每个有界的单调序列都是收敛的
