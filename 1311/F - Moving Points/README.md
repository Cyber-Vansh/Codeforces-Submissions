<h2><a href="https://codeforces.com/contest/1311/problem/F" target="_blank" rel="noopener noreferrer">1311F — Moving Points</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1311F](https://codeforces.com/contest/1311/problem/F) |

## Topics
`data structures` `divide and conquer` `implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">F. Moving Points</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ points on a coordinate axis $$$OX$$$. The $$$i$$$-th point is located at the integer point $$$x_i$$$ and has a speed $$$v_i$$$. It is guaranteed that no two points occupy the same coordinate. All $$$n$$$ points move with the constant speed, the coordinate of the $$$i$$$-th point at the moment $$$t$$$ ($$$t$$$ <span class="tex-font-style-bf">can be non-integer</span>) is calculated as $$$x_i + t \cdot v_i$$$.</p><p>Consider two points $$$i$$$ and $$$j$$$. Let $$$d(i, j)$$$ be the minimum possible distance between these two points over any possible moments of time (even <span class="tex-font-style-bf">non-integer</span>). It means that if two points $$$i$$$ and $$$j$$$ coincide at some moment, the value $$$d(i, j)$$$ will be $$$0$$$.</p><p>Your task is to calculate the value $$$\sum\limits_{1 \le i  \lt  j \le n}$$$ $$$d(i, j)$$$ (the sum of minimum distances over all pairs of points).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of points.</p><p>The second line of the input contains $$$n$$$ integers $$$x_1, x_2, \dots, x_n$$$ ($$$1 \le x_i \le 10^8$$$), where $$$x_i$$$ is the initial coordinate of the $$$i$$$-th point. It is guaranteed that all $$$x_i$$$ are distinct.</p><p>The third line of the input contains $$$n$$$ integers $$$v_1, v_2, \dots, v_n$$$ ($$$-10^8 \le v_i \le 10^8$$$), where $$$v_i$$$ is the speed of the $$$i$$$-th point.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the value $$$\sum\limits_{1 \le i  \lt  j \le n}$$$ $$$d(i, j)$$$ (the sum of minimum distances over all pairs of points).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009970035605560887" id="id002618664003052309" class="input-output-copier">Copy</div></div><pre id="id009970035605560887">3
1 3 2
-100 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001975827607723577" id="id0047617772985069917" class="input-output-copier">Copy</div></div><pre id="id001975827607723577">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009519785255176246" id="id0016408969913702354" class="input-output-copier">Copy</div></div><pre id="id009519785255176246">5
2 1 4 3 5
2 2 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008808802116803817" id="id00507013983028154" class="input-output-copier">Copy</div></div><pre id="id008808802116803817">19
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00791945900578526" id="id005900435000518162" class="input-output-copier">Copy</div></div><pre id="id00791945900578526">2
2 1
-3 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006431893667009032" id="id006782610875582561" class="input-output-copier">Copy</div></div><pre id="id006431893667009032">0
</pre></div></div></div>