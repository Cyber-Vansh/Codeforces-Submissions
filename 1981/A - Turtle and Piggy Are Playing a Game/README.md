<h2><a href="https://codeforces.com/contest/1981/problem/A" target="_blank" rel="noopener noreferrer">1981A — Turtle and Piggy Are Playing a Game</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1981A](https://codeforces.com/contest/1981/problem/A) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Turtle and Piggy Are Playing a Game</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Turtle and Piggy are playing a number game.</p><p>First, Turtle will choose an integer $$$x$$$, such that $$$l \le x \le r$$$, where $$$l, r$$$ are given. It's also guaranteed that $$$2l \le r$$$.</p><p>Then, Piggy will keep doing the following operation until $$$x$$$ becomes $$$1$$$:</p><ul> <li> Choose an integer $$$p$$$ such that $$$p \ge 2$$$ and $$$p \mid x$$$ (i.e. $$$x$$$ is a multiple of $$$p$$$). </li><li> Set $$$x$$$ to $$$\frac{x}{p}$$$, and the score will increase by $$$1$$$. </li></ul><p>The score is initially $$$0$$$. Both Turtle and Piggy want to maximize the score. Please help them to calculate the maximum score.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$l, r$$$ ($$$1 \le l \le r \le 10^9, 2l \le r$$$) — The range where Turtle can choose the integer from.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum score.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042828401660861126" id="id008812564492909928" class="input-output-copier">Copy</div></div><pre id="id0042828401660861126"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 4</div><div class="test-example-line test-example-line-even test-example-line-2">3 6</div><div class="test-example-line test-example-line-odd test-example-line-3">2 15</div><div class="test-example-line test-example-line-even test-example-line-4">6 22</div><div class="test-example-line test-example-line-odd test-example-line-5">114514 1919810</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002524216345734447" id="id00716375792047165" class="input-output-copier">Copy</div></div><pre id="id002524216345734447">2
2
3
4
20
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Turtle can choose an integer $$$x$$$, such that $$$2 \le x \le 4$$$. He can choose $$$x = 4$$$. Then Piggy can choose $$$p = 2$$$ for $$$2$$$ times. After that, $$$x$$$ will become $$$1$$$, and the score will be $$$2$$$, which is maximized.</p><p>In the second test case, Turtle can choose an integer $$$3 \le x \le 6$$$. He can choose $$$x = 6$$$. Then Piggy can choose $$$p = 2$$$, then choose $$$p = 3$$$. After that, $$$x$$$ will become $$$1$$$, and the score will be $$$2$$$, which is maximum.</p><p>In the third test case, Turtle can choose $$$x = 12$$$.</p><p>In the fourth test case, Turtle can choose $$$x = 16$$$.</p></div>