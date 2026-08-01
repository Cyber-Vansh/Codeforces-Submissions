<h2><a href="https://codeforces.com/contest/1859/problem/C" target="_blank" rel="noopener noreferrer">1859C — Another Permutation Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1859C](https://codeforces.com/contest/1859/problem/C) |

## Topics
`brute force` `dp` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Another Permutation Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Andrey is just starting to come up with problems, and it's difficult for him. That's why he came up with a strange problem about permutations$$$^{\dagger}$$$ and asks you to solve it. Can you do it?</p><p>Let's call the <span class="tex-font-style-it">cost</span> of a permutation $$$p$$$ of length $$$n$$$ the value of the expression:</p><center> <span>$$$(\sum_{i = 1}^{n} p_i \cdot i) - (\max_{j = 1}^{n} p_j \cdot j)$$$</span>. </center><p>Find the maximum cost among all permutations of length $$$n$$$.</p><p>$$$^{\dagger}$$$A permutation of length $$$n$$$ is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array).</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 30$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 250$$$) — the length of the permutation.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$500$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum cost among all permutations of length $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006959546275114636" id="id003481502745616577" class="input-output-copier">Copy</div></div><pre id="id006959546275114636"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">10</div><div class="test-example-line test-example-line-odd test-example-line-5">20</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008335165961933635" id="id002864399023953653" class="input-output-copier">Copy</div></div><pre id="id008335165961933635">2
17
7
303
2529
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the permutation with the maximum cost is $$$[2, 1]$$$. The cost is equal to $$$2 \cdot 1 + 1 \cdot 2 - \max (2 \cdot 1, 1 \cdot 2)= 2 + 2 - 2 = 2$$$.</p><p>In the second test case, the permutation with the maximum cost is $$$[1, 2, 4, 3]$$$. The cost is equal to $$$1 \cdot 1 + 2 \cdot 2 + 4 \cdot 3 + 3 \cdot 4 - 4 \cdot 3 = 17$$$.</p></div>