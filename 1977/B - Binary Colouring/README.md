<h2><a href="https://codeforces.com/contest/1977/problem/B" target="_blank" rel="noopener noreferrer">1977B — Binary Colouring</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1977B](https://codeforces.com/contest/1977/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Binary Colouring</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$x$$$. Find any array of integers $$$a_0, a_1, \ldots, a_{n-1}$$$ for which the following holds: </p><ul> <li> $$$1 \le n \le 32$$$, </li><li> $$$a_i$$$ is $$$1$$$, $$$0$$$, or $$$-1$$$ for all $$$0 \le i \le n - 1$$$, </li><li> $$$x = \displaystyle{\sum_{i=0}^{n - 1}{a_i \cdot 2^i}}$$$, </li><li> There does not exist an index $$$0 \le i \le n - 2$$$ such that both $$$a_{i} \neq 0$$$ and $$$a_{i + 1} \neq 0$$$. </li></ul><p>It can be proven that under the constraints of the problem, a valid array always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single positive integer $$$x$$$ ($$$1 \le x  \lt  2^{30}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two lines.</p><p>On the first line, output an integer $$$n$$$ ($$$1 \le n \le 32$$$) — the length of the array $$$a_0, a_1, \ldots, a_{n-1}$$$.</p><p>On the second line, output the array $$$a_0, a_1, \ldots, a_{n-1}$$$.</p><p>If there are multiple valid arrays, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045461021889816255" id="id009127867969708533" class="input-output-copier">Copy</div></div><pre id="id0045461021889816255"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">14</div><div class="test-example-line test-example-line-odd test-example-line-3">24</div><div class="test-example-line test-example-line-even test-example-line-4">15</div><div class="test-example-line test-example-line-odd test-example-line-5">27</div><div class="test-example-line test-example-line-even test-example-line-6">11</div><div class="test-example-line test-example-line-odd test-example-line-7">19</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004034980619329923" id="id0059618827188086" class="input-output-copier">Copy</div></div><pre id="id004034980619329923">1
1
5
0 -1 0 0 1
6
0 0 0 -1 0 1
5
-1 0 0 0 1
6
-1 0 -1 0 0 1
5
-1 0 -1 0 1
5
-1 0 1 0 1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one valid array is $$$[1]$$$, since $$$(1) \cdot 2^0 = 1$$$.</p><p>In the second test case, one possible valid array is $$$[0,-1,0,0,1]$$$, since $$$(0) \cdot 2^0 + (-1) \cdot 2^1 + (0) \cdot 2^2 + (0) \cdot 2^3 + (1) \cdot 2^4 = -2 + 16 = 14$$$.</p></div>