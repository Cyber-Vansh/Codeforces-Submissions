<h2><a href="https://codeforces.com/contest/1996/problem/E" target="_blank" rel="noopener noreferrer">1996E — Decode</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1996E](https://codeforces.com/contest/1996/problem/E) |

## Topics
`combinatorics` `data structures` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">E. Decode</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">In a desperate attempt to obtain your <span class="tex-font-style-striked">waifu</span> favorite character, you have hacked into the source code of the game. After days of struggling, you finally find the binary string that encodes the gacha system of the game. In order to decode it, you must first solve the following problem.</span> </p><p>You are given a binary string $$$s$$$ of length $$$n$$$. For each pair of integers $$$(l, r)$$$ $$$(1 \leq l \leq r \leq n)$$$, count the number of pairs $$$(x, y)$$$ $$$(l \leq x \leq y \leq r)$$$ such that the amount of $$$\mathtt{0}$$$ equals the amount of $$$\mathtt{1}$$$ in the substring $$$s_xs_{x+1}...s_y$$$. </p><p>Output the sum of counts over all possible $$$(l, r)$$$ modulo $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>Each test case contains a binary string $$$s$$$ ($$$1 \leq |s| \leq 2 \cdot 10^5$$$). It is guaranteed $$$s$$$ only contains characters $$$\mathtt{0}$$$ and $$$\mathtt{1}$$$.</p><p>It is guaranteed the sum of $$$|s|$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output an integer, the answer modulo $$$10^9+7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009405633294495364" id="id0022976485014790937" class="input-output-copier">Copy</div></div><pre id="id009405633294495364"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">0000</div><div class="test-example-line test-example-line-even test-example-line-2">01010101</div><div class="test-example-line test-example-line-odd test-example-line-3">1100111001</div><div class="test-example-line test-example-line-even test-example-line-4">11000000111</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006418965835336283" id="id002356924930747617" class="input-output-copier">Copy</div></div><pre id="id006418965835336283">0
130
147
70
</pre></div></div></div>