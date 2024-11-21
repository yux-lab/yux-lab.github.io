# Angles
角度可以用度或弧度来测量（缩写为 rad）。一个圆为 360°，这等同于 $2\pi$ rad。

$$
\pi \text{rad}=180° \tag{1}
$$

$$
1 \text{rad}=\left(\frac{180}{\pi}\right)^\circ\approx57.3^\circ\quad1^\circ=\frac{\pi}{180} \text{rad}\approx0.017 \text{rad} \tag{2}
$$

> 圆弧的长度与角度的大小成正比是因为圆的周长与其半径之间的固定比例关系，以及角度在圆中所占的比例决定了相应圆弧的长度。这种关系只在角度以弧度为单位时成立。


图 1 展示了一个扇形，圆心角为 $\theta$，半径为 $r$，以及弧度 $a$。由于圆弧的长度与角度的大小成正比，并且由于整个圆的周长为 $2\pi r$，圆心角为 $2\pi$，所以有：

$$
\frac\theta{2\pi}=\frac a{2\pi r}
$$

![](images/Pasted%20image%2020241104123708.png)

所以有弧长公式：

$$
\theta=\frac{a}{r} \quad a=\frac{r}{\theta} \tag{3}
$$


# The Trigonometric Functions
![](images/Pasted%20image%2020241104124926.png)

对于锐角 $\theta$，六个三角函数定义为直角三角形边长的比值，如下所示

$$\begin{align*}
\sin\theta &= \frac{\mathrm{opp}}{\mathrm{hyp}} & \quad \csc\theta &= \frac{\mathrm{hyp}}{\mathrm{opp}} \\
\cos\theta &= \frac{\mathrm{adj}}{\mathrm{hyp}} & \quad \sec\theta &= \frac{\mathrm{hyp}}{\mathrm{adj}} \\
\tan\theta &= \frac{\mathrm{opp}}{\mathrm{adj}} & \quad \cot\theta &= \frac{\mathrm{adj}}{\mathrm{opp}}
\end{align*}$$

![](images/Pasted%20image%2020241104125414.png)

对于更普遍的角，比如负角度和钝角，如图 7。令 $P(x,y)$ 为 $\theta$ 的任意端点，$r$ 为 $|OP|$，也就是它们的长度，因此有：

$$\begin{align*}
\sin\theta=\frac{y}{r} \quad \csc\theta=\frac{r}{y}\\\cos\theta=\frac{x}{r} \quad  \sec\theta=\frac{r}{x}\\\tan\theta=\frac{y}{x}\quad  \cot\theta=\frac{x}{y}
\end{align*}$$

如果令 $r=1$，代入公式有 $\cos \theta=x,\quad\sin \theta=y$，也就是单位圆。当我们在单位圆上标记一个角度 $\theta$ 时，点 P 的坐标就是 $(\cos \theta,\sin \theta)$
![](images/Pasted%20image%2020241104130235.png)

如果 $\theta$ 是一个数字，约定是 $\sin\theta$ 表示角度的正弦，该角度的弧度测度是 $\theta$。例如，表达式 $\sin 3$ 意味着我们正在处理一个角度为3 rad的角度。得到：

$$
\sin3\approx0.14112
$$

如果我们想知道角度 $3°$ 的正弦，我们会写成 $\sin 3°$：

$$
\sin3°\approx0.05234
$$

# Trigonometric identities
三角恒等式是三角函数之间的关系。由三角函数的定义有：

$$
\begin{aligned}
\csc\theta &= \frac{1}{\sin\theta} & \quad \sec\theta &= \frac{1}{\cos\theta} & \quad \cot\theta &= \frac{1}{\tan\theta} \\
\tan\theta &= \frac{\sin\theta}{\cos\theta} & \cot\theta &= \frac{\cos\theta}{\sin\theta}
\end{aligned}
$$

倒数和反函数是两个不同的概念。从图像上来说，反函数与原函数关于 $y=x$ 对称。而前者的图像是原函数曲线的倒数形式。

根据先前的图 7 有 $x^{2}+y^{2}=r^{2}$ （勾股定理），因此：

$$
\begin{aligned} 
\sin^2\theta + \cos^2\theta &= \frac{y^2}{r^2} + \frac{x^2}{r^2} = \frac{x^2 + y^2}{r^2} = \frac{r^2}{r^2} = 1 \\ \sin^2\theta + \cos^2\theta &= 1 
\end{aligned} \tag{7}
$$

如果对（7）两边同时除以 $\cos^2\theta$，则有：

$$
\tan^2\theta+1=\sec^2\theta \tag{8}
$$

同样，对（7）两边同时除以 $\sin^2\theta$，则有：

$$
1+\cot^2\theta=\csc^2\theta \tag{9}
$$

这两恒等式显示正弦是一个奇函数，余弦是一个偶函数
$$\begin{array}{c} \\
\sin(-\theta)=-\sin\theta\\\\\cos(-\theta)=\cos\theta \\
\end{array}\tag{10}
$$ 

由于角度 $\theta$ 和 $\theta + 2π$ 具有相同的终边，也就是说，正弦和余弦函数是以周期2π为周期的周期函数。

$$
sin(\theta + 2\pi)=\sin\theta\quad\cos(\theta + 2\pi)=\cos\theta \tag{11}
$$

其余的三角恒等式都是两个基本恒等式的推论。


这两个基本恒等式被称为加法定理：
$$
\begin{array}{c} \\
\sin(x + y) = \sin x \cos y + \cos x \sin y\\\\\cos(x + y) = \cos x \cos y - \sin x \sin y \\
\end{array} \tag{12}
$$

减法定理是由（12）和（10）得到的：
$$
\begin{array}{c} \\
\sin(x - y) = \sin x \cos y - \cos x \sin y\\\\\cos(x - y) = \cos x \cos y + \sin x \sin y \\
\end{array} \tag{13}
$$

这个公式是从正弦和余弦的和差公式推导出来的，用 $\tan(x+y)={\sin(x+y)} / {\cos(x+y)}$ 代入：

$$
\begin{array}{c} \\
\tan(x+y)=\frac{\tan x+\tan y}{1-\tan x\tan y} \\\\
\tan(x-y)=\frac{\tan x-\tan y}{1+\tan x\tan y}\\
\end{array} \tag{14}
$$

如果令 $y=x$，代入（12）有 2 倍角公式：

$$
\begin{array}{c} \\
\sin2x=2\sin x\cos x\\\\\cos2x=\cos^2x-\sin^2x \\
\end{array} \tag{15}
$$

通过（7）的恒等式，则有对于 $\cos 2x$ 的另一种表达形式：

$$
\begin{array}{c} \\
\cos2x=2 \cos^2x - 1\\\\\cos2x=1 - 2 \sin^2x \\
\end{array} \tag{16}
$$

如果要解出 $\cos^2x$ 和 $\sin^2x$，则有：

$$
\begin{aligned}
\cos^2x&=\frac{1 + \cos2x}{2}\\[2ex]\sin^2x&=\frac{1 - \cos2x}{2}
\end{aligned} \tag{17}
$$

最后，我们说明乘积公式，这些公式可以从方程式12和13推导出来：

$$
\begin{aligned}
\sin x \cos y=\frac{1}{2}[\sin(x + y) + \sin(x - y)]\\\cos x \cos y=\frac{1}{2}[\cos(x + y) + \cos(x - y)]\\\sin x \sin y=\frac{1}{2}[\cos(x-y) - \cos(x + y)]
\end{aligned} \tag{18}
$$

13-18 均可从 12 推出。


# Graphs of the Trigonometric Functions



$5\pi/6=150°$，它与 $x$ 的负半轴形成的夹角是 $180°-150°=30°$，所以算它的三角函数都是基于这个角。

![](images/Pasted%20image%2020241104150729.png)