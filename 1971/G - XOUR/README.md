<h2><a href="https://codeforces.com/contest/1971/problem/G" target="_blank" rel="noopener noreferrer">1971G — XOUR</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1971G](https://codeforces.com/contest/1971/problem/G) |

## Topics
`data structures` `dsu` `sortings`

---

## Problem Statement

<div class="header"><div class="title">G. XOUR</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ nonnegative integers. </p><p>You can swap the elements at positions $$$i$$$ and $$$j$$$ if $$$a_i~\mathsf{XOR}~a_j  \lt  4$$$, where $$$\mathsf{XOR}$$$ is the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>.</p><p>Find the lexicographically smallest array that can be made with any number of swaps.</p><p>An array $$$x$$$ is lexicographically smaller than an array $$$y$$$ if in the first position where $$$x$$$ and $$$y$$$ differ, $$$x_i  \lt  y_i$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 2\cdot10^5$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_i$$$ ($$$0 \leq a_i \leq 10^9$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ integers — the lexicographically smallest array that can be made with any number of swaps.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00865423572908878" id="id0013407427217303225" class="input-output-copier">Copy</div></div><pre id="id00865423572908878"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 0 3 2</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">2 7 1 5 6</div><div class="test-example-line test-example-line-odd test-example-line-3">8</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 1 2 1 2 1 2</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">16 4 1 64</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004411283019904002" id="id008193165005623702" class="input-output-copier">Copy</div></div><pre id="id004411283019904002">0 1 2 3 
1 5 2 6 7 
1 1 1 1 2 2 2 2 
16 4 1 64 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, you can swap any two elements, so we can produce the sorted array.</p><p>For the second test case, you can swap $$$2$$$ and $$$1$$$ (their $$$\mathsf{XOR}$$$ is $$$3$$$), $$$7$$$ and $$$5$$$ (their $$$\mathsf{XOR}$$$ is $$$2$$$), and $$$7$$$ and $$$6$$$ (their $$$\mathsf{XOR}$$$ is $$$1$$$) to get the lexicographically smallest array.</p></div>