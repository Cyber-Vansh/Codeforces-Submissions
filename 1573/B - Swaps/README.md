<h2><a href="https://codeforces.com/contest/1573/problem/B" target="_blank" rel="noopener noreferrer">1573B — Swaps</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1573B](https://codeforces.com/contest/1573/problem/B) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Swaps</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays $$$a$$$ and $$$b$$$ of length $$$n$$$. Array $$$a$$$ contains each <span class="tex-font-style-bf">odd</span> integer from $$$1$$$ to $$$2n$$$ in an arbitrary order, and array $$$b$$$ contains each <span class="tex-font-style-bf">even</span> integer from $$$1$$$ to $$$2n$$$ in an arbitrary order.</p><p>You can perform the following operation on those arrays: </p><ul> <li> choose one of the two arrays </li><li> pick an index $$$i$$$ from $$$1$$$ to $$$n-1$$$ </li><li> swap the $$$i$$$-th and the $$$(i+1)$$$-th elements of the chosen array </li></ul> Compute the minimum number of operations needed to make array $$$a$$$ lexicographically smaller than array $$$b$$$.<p>For two different arrays $$$x$$$ and $$$y$$$ of the same length $$$n$$$, we say that $$$x$$$ is lexicographically smaller than $$$y$$$ if in the first position where $$$x$$$ and $$$y$$$ differ, the array $$$x$$$ has a smaller element than the corresponding element in $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$).</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the length of the arrays.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 2n$$$, all $$$a_i$$$ are <span class="tex-font-style-bf">odd</span> and pairwise distinct) — array $$$a$$$.</p><p>The third line of each test case contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$1 \le b_i \le 2n$$$, all $$$b_i$$$ are <span class="tex-font-style-bf">even</span> and pairwise distinct) — array $$$b$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer: the minimum number of operations needed to make array $$$a$$$ lexicographically smaller than array $$$b$$$.</p><p>We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00030908548881562248" id="id0020359906597765165" class="input-output-copier">Copy</div></div><pre id="id00030908548881562248">3
2
3 1
4 2
3
5 3 1
2 4 6
5
7 5 9 1 3
2 4 6 10 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00018030736525127766" id="id0044891195084863955" class="input-output-copier">Copy</div></div><pre id="id00018030736525127766">0
2
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the array $$$a$$$ is already lexicographically smaller than array $$$b$$$, so no operations are required.</p><p>In the second example, we can swap $$$5$$$ and $$$3$$$ and then swap $$$2$$$ and $$$4$$$, which results in $$$[3, 5, 1]$$$ and $$$[4, 2, 6]$$$. Another correct way is to swap $$$3$$$ and $$$1$$$ and then swap $$$5$$$ and $$$1$$$, which results in $$$[1, 5, 3]$$$ and $$$[2, 4, 6]$$$. Yet another correct way is to swap $$$4$$$ and $$$6$$$ and then swap $$$2$$$ and $$$6$$$, which results in $$$[5, 3, 1]$$$ and $$$[6, 2, 4]$$$.</p></div>