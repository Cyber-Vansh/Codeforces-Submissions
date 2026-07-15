<h2><a href="https://codeforces.com/contest/1916/problem/D" target="_blank" rel="noopener noreferrer">1916D — Mathematical Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1916D](https://codeforces.com/contest/1916/problem/D) |

## Topics
`brute force` `constructive algorithms` `geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Mathematical Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The mathematicians of the 31st lyceum were given the following task:</p><p>You are given an <span class="tex-font-style-bf">odd</span> number $$$n$$$, and you need to find $$$n$$$ different numbers that are squares of integers. But it's not that simple. Each number should have a length of $$$n$$$ (and should not have leading zeros), and the multiset of digits of all the numbers should be the same. For example, for $$$\mathtt{234}$$$ and $$$\mathtt{432}$$$, and $$$\mathtt{11223}$$$ and $$$\mathtt{32211}$$$, the multisets of digits are the same, but for $$$\mathtt{123}$$$ and $$$\mathtt{112233}$$$, they are not.</p><p>The mathematicians couldn't solve this problem. Can you?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>The following $$$t$$$ lines contain one <span class="tex-font-style-bf">odd</span> integer $$$n$$$ ($$$1 \leq n \leq 99$$$) — the number of numbers to be found and their length.</p><p>It is guaranteed that the solution exists within the given constraints.</p><p>It is guaranteed that the sum of $$$n^2$$$ does not exceed $$$10^5$$$.</p><p>The numbers can be output in any order.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, you need to output $$$n$$$ numbers of length $$$n$$$ — the answer to the problem.</p><p>If there are several answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004581820969773116" id="id00588849195260745" class="input-output-copier">Copy</div></div><pre id="id004581820969773116"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006908040118962707" id="id009920644286649457" class="input-output-copier">Copy</div></div><pre id="id006908040118962707">1
169
196
961
16384
31684
36481
38416
43681
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Below are the squares of the numbers that are the answers for the second test case:</p><p>$$$\mathtt{169}$$$ = $$$\mathtt{13}^2$$$</p><p>$$$\mathtt{196}$$$ = $$$\mathtt{14}^2$$$</p><p>$$$\mathtt{961}$$$ = $$$\mathtt{31}^2$$$</p><p>Below are the squares of the numbers that are the answers for the third test case:</p><p>$$$\mathtt{16384}$$$ = $$$\mathtt{128}^2$$$</p><p>$$$\mathtt{31684}$$$ = $$$\mathtt{178}^2$$$</p><p>$$$\mathtt{36481}$$$ = $$$\mathtt{191}^2$$$</p><p>$$$\mathtt{38416}$$$ = $$$\mathtt{196}^2$$$</p><p>$$$\mathtt{43681}$$$ = $$$\mathtt{209}^2$$$</p></div>