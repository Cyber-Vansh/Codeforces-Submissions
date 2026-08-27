<h2><a href="https://codeforces.com/contest/1554/problem/B" target="_blank" rel="noopener noreferrer">1554B — Cobb</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1554B](https://codeforces.com/contest/1554/problem/B) |

## Topics
`bitmasks` `brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Cobb</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ and an integer $$$k$$$. Find the maximum value of $$$i \cdot j - k \cdot (a_i | a_j)$$$ over all pairs $$$(i, j)$$$ of integers with $$$1 \le i  \lt  j \le n$$$. Here, $$$|$$$ is the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operator</a>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10\,000$$$)  — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ ($$$2 \le n \le 10^5$$$) and $$$k$$$ ($$$1 \le k \le \min(n, 100)$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le n$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer  — the maximum possible value of $$$i \cdot j - k \cdot (a_i | a_j)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004550764685836073" id="id006395267466017494" class="input-output-copier">Copy</div></div><pre id="id0004550764685836073">4
3 3
1 1 3
2 2
1 2
4 3
0 1 2 3
6 6
3 2 0 0 5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005335246363865731" id="id00707858199847968" class="input-output-copier">Copy</div></div><pre id="id005335246363865731">-1
-4
3
12
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let $$$f(i, j) = i \cdot j - k \cdot (a_i | a_j)$$$.</p><p>In the first test case, </p><ul> <li> $$$f(1, 2) = 1 \cdot 2 - k \cdot (a_1 | a_2) = 2 - 3 \cdot (1 | 1) = -1$$$. </li><li> $$$f(1, 3) = 1 \cdot 3 - k \cdot (a_1 | a_3) = 3 - 3 \cdot (1 | 3) = -6$$$. </li><li> $$$f(2, 3) = 2 \cdot 3 - k \cdot (a_2 | a_3) = 6 - 3 \cdot (1 | 3) = -3$$$. </li></ul><p>So the maximum is $$$f(1, 2) = -1$$$.</p><p>In the fourth test case, the maximum is $$$f(3, 4) = 12$$$.</p></div>