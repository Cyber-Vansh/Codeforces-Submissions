<h2><a href="https://codeforces.com/contest/1985/problem/G" target="_blank" rel="noopener noreferrer">1985G — D-Function</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1985G](https://codeforces.com/contest/1985/problem/G) |

## Topics
`combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">G. D-Function</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let $$$D(n)$$$ represent the sum of digits of $$$n$$$. For how many integers $$$n$$$ where $$$10^{l} \leq n  \lt  10^{r}$$$ satisfy $$$D(k \cdot n) = k \cdot D(n)$$$? Output the answer modulo $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) – the number of test cases. </p><p>Each test case contains three integers $$$l$$$, $$$r$$$, and $$$k$$$ ($$$0 \leq l  \lt  r \leq 10^9$$$, $$$1 \leq k \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output an integer, the answer, modulo $$$10^9 + 7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008952985041173289" id="id008461478851277698" class="input-output-copier">Copy</div></div><pre id="id008952985041173289"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">0 1 4</div><div class="test-example-line test-example-line-even test-example-line-2">0 2 7</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">582 74663 3</div><div class="test-example-line test-example-line-even test-example-line-6">0 3 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007144178491004116" id="id006158929895637502" class="input-output-copier">Copy</div></div><pre id="id0007144178491004116">2
3
90
12
974995667
999
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, the only values of $$$n$$$ that satisfy the condition are $$$1$$$ and $$$2$$$.</p><p>For the second test case, the only values of $$$n$$$ that satisfy the condition are $$$1$$$, $$$10$$$, and $$$11$$$.</p><p>For the third test case, all values of $$$n$$$ between $$$10$$$ inclusive and $$$100$$$ exclusive satisfy the condition.</p></div>