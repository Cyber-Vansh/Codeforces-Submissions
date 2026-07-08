<h2><a href="https://codeforces.com/contest/1499/problem/C" target="_blank" rel="noopener noreferrer">1499C — Minimum Grid Path</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1499C](https://codeforces.com/contest/1499/problem/C) |

## Topics
`brute force` `data structures` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Minimum Grid Path</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's say you are standing on the $$$XY$$$-plane at point $$$(0, 0)$$$ and you want to reach point $$$(n, n)$$$.</p><p>You can move only in two directions: </p><ul> <li> to the <span class="tex-font-style-it">right</span>, i. e. horizontally and in the direction that increase your $$$x$$$ coordinate, </li><li> or <span class="tex-font-style-it">up</span>, i. e. vertically and in the direction that increase your $$$y$$$ coordinate. </li></ul><p>In other words, your path will have the following structure: </p><ul> <li> initially, you choose to go to the right or up; </li><li> then you go some <span class="tex-font-style-bf">positive integer</span> distance in the chosen direction (distances can be chosen independently); </li><li> after that you change your direction (from right to up, or from up to right) and repeat the process. </li></ul><p>You don't like to change your direction too much, so you will make no more than $$$n - 1$$$ direction changes.</p><p>As a result, your path will be a polygonal chain from $$$(0, 0)$$$ to $$$(n, n)$$$, consisting of <span class="tex-font-style-bf">at most</span> $$$n$$$ line segments where each segment has positive integer length and vertical and horizontal segments alternate.</p><p>Not all paths are equal. You have $$$n$$$ integers $$$c_1, c_2, \dots, c_n$$$ where $$$c_i$$$ is the cost of the $$$i$$$-th segment.</p><p>Using these costs we can define the <span class="tex-font-style-it">cost of the path</span> as the sum of lengths of the segments of this path multiplied by their cost, i. e. if the path consists of $$$k$$$ segments ($$$k \le n$$$), then the cost of the path is equal to $$$\sum\limits_{i=1}^{k}{c_i \cdot length_i}$$$ (segments are numbered from $$$1$$$ to $$$k$$$ in the order they are in the path).</p><p>Find the path of the minimum cost and print its cost.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains the single integer $$$n$$$ ($$$2 \le n \le 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$c_1, c_2, \dots, c_n$$$ ($$$1 \le c_i \le 10^9$$$) — the costs of each segment.</p><p>It's guaranteed that the total sum of $$$n$$$ doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the minimum possible cost of the path from $$$(0, 0)$$$ to $$$(n, n)$$$ consisting of at most $$$n$$$ alternating segments.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0088385101931368" id="id0003864765604550191" class="input-output-copier">Copy</div></div><pre id="id0088385101931368">3
2
13 88
3
2 3 1
5
4 3 2 1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011522615229677369" id="id008903929463957279" class="input-output-copier">Copy</div></div><pre id="id0011522615229677369">202
13
19
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, to reach $$$(2, 2)$$$ you need to make at least one turn, so your path will consist of exactly $$$2$$$ segments: one horizontal of length $$$2$$$ and one vertical of length $$$2$$$. The cost of the path will be equal to $$$2 \cdot c_1 + 2 \cdot c_2 = 26 + 176 = 202$$$.</p><p>In the second test case, one of the optimal paths consists of $$$3$$$ segments: the first segment of length $$$1$$$, the second segment of length $$$3$$$ and the third segment of length $$$2$$$.</p><p>The cost of the path is $$$1 \cdot 2 + 3 \cdot 3 + 2 \cdot 1 = 13$$$.</p><p>In the third test case, one of the optimal paths consists of $$$4$$$ segments: the first segment of length $$$1$$$, the second one — $$$1$$$, the third one — $$$4$$$, the fourth one — $$$4$$$. The cost of the path is $$$1 \cdot 4 + 1 \cdot 3 + 4 \cdot 2 + 4 \cdot 1 = 19$$$.</p></div>