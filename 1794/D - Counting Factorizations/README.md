<h2><a href="https://codeforces.com/contest/1794/problem/D" target="_blank" rel="noopener noreferrer">1794D — Counting Factorizations</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1794D](https://codeforces.com/contest/1794/problem/D) |

## Topics
`combinatorics` `divide and conquer` `dp` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Counting Factorizations</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The prime factorization of a positive integer $$$m$$$ is the unique way to write it as $$$\displaystyle m=p_1^{e_1}\cdot p_2^{e_2}\cdot \ldots \cdot p_k^{e_k}$$$, where $$$p_1, p_2, \ldots, p_k$$$ are prime numbers, $$$p_1  \lt  p_2  \lt  \ldots  \lt  p_k$$$ and $$$e_1, e_2, \ldots, e_k$$$ are positive integers. </p><p>For each positive integer $$$m$$$, $$$f(m)$$$ is defined as the multiset of all numbers in its prime factorization, that is $$$f(m)=\{p_1,e_1,p_2,e_2,\ldots,p_k,e_k\}$$$. </p><p>For example, $$$f(24)=\{2,3,3,1\}$$$, $$$f(5)=\{1,5\}$$$ and $$$f(1)=\{\}$$$.</p><p>You are given a list consisting of $$$2n$$$ integers $$$a_1, a_2, \ldots, a_{2n}$$$. Count how many positive integers $$$m$$$ satisfy that $$$f(m)=\{a_1, a_2, \ldots, a_{2n}\}$$$. Since this value may be large, print it modulo $$$998\,244\,353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1\le n \le 2022$$$).</p><p>The second line contains $$$2n$$$ integers $$$a_1, a_2, \ldots, a_{2n}$$$ ($$$1\le a_i\le 10^6$$$)  — the given list.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer, the number of positive integers $$$m$$$ satisfying $$$f(m)=\{a_1, a_2, \ldots, a_{2n}\}$$$ modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042353951524763467" id="id006174126807616048" class="input-output-copier">Copy</div></div><pre id="id0042353951524763467">2
1 3 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009775588993157968" id="id004382775809639987" class="input-output-copier">Copy</div></div><pre id="id009775588993157968">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001829721938862393" id="id005724619769223097" class="input-output-copier">Copy</div></div><pre id="id001829721938862393">2
2 2 3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002505539672328694" id="id005576952507480336" class="input-output-copier">Copy</div></div><pre id="id002505539672328694">5
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002952301642786582" id="id006410311725516034" class="input-output-copier">Copy</div></div><pre id="id002952301642786582">1
1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0044655259391124713" id="id005278404431853957" class="input-output-copier">Copy</div></div><pre id="id0044655259391124713">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, the two values of $$$m$$$ such that $$$f(m)=\{1,2,3,3\}$$$ are $$$m=24$$$ and $$$m=54$$$. Their prime factorizations are $$$24=2^3\cdot 3^1$$$ and $$$54=2^1\cdot 3^3$$$.</p><p>In the second sample, the five values of $$$m$$$ such that $$$f(m)=\{2,2,3,5\}$$$ are $$$200, 225, 288, 500$$$ and $$$972$$$.</p><p>In the third sample, there is no value of $$$m$$$ such that $$$f(m)=\{1,4\}$$$. Neither $$$1^4$$$ nor $$$4^1$$$ are prime factorizations because $$$1$$$ and $$$4$$$ are <span class="tex-font-style-bf">not</span> primes.</p></div>