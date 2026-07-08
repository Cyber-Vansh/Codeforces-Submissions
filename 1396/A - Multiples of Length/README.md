<h2><a href="https://codeforces.com/contest/1396/problem/A" target="_blank" rel="noopener noreferrer">1396A — Multiples of Length</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1396A](https://codeforces.com/contest/1396/problem/A) |

## Topics
`constructive algorithms` `greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Multiples of Length</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers.</p><p>You want to make all elements of $$$a$$$ equal to zero by doing the following operation <span class="tex-font-style-bf">exactly three</span> times:</p><ul> <li> Select a segment, for each number in this segment we can add a multiple of $$$len$$$ to it, where $$$len$$$ is the length of this segment (added integers can be different). </li></ul><p>It can be proven that it is always possible to make all elements of $$$a$$$ equal to zero.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 100\,000$$$): the number of elements of the array.</p><p>The second line contains $$$n$$$ elements of an array $$$a$$$ separated by spaces: $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>The output should contain six lines representing three operations.</p><p>For each operation, print two lines:</p><ul><p> </p><li> The first line contains two integers $$$l$$$, $$$r$$$ ($$$1 \le l \le r \le n$$$): the bounds of the selected segment.<p> </p></li><li> The second line contains $$$r-l+1$$$ integers $$$b_l, b_{l+1}, \dots, b_r$$$ ($$$-10^{18} \le b_i \le 10^{18}$$$): the numbers to add to $$$a_l, a_{l+1}, \ldots, a_r$$$, respectively; $$$b_i$$$ should be divisible by $$$r - l + 1$$$.</li></ul> </div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006075948827087597" id="id004816224488726344" class="input-output-copier">Copy</div></div><pre id="id006075948827087597">4
1 3 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005839169874591212" id="id009852718292045078" class="input-output-copier">Copy</div></div><pre id="id005839169874591212">1 1 
-1
3 4
4 2
2 4
-3 -6 -6</pre></div></div></div>