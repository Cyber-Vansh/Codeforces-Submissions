<h2><a href="https://codeforces.com/contest/1419/problem/D2" target="_blank" rel="noopener noreferrer">1419D2 — Sage's Birthday (hard version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1419D2](https://codeforces.com/contest/1419/problem/D2) |

## Topics
`binary search` `brute force` `constructive algorithms` `greedy` `sortings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D2. Sage's Birthday (hard version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is the hard version of the problem. The difference between the versions is that in the easy version all prices $$$a_i$$$ are different. You can make hacks if and only if you solved both versions of the problem.</span></p><p>Today is Sage's birthday, and she will go shopping to buy ice spheres. All $$$n$$$ ice spheres are placed in a row and they are numbered from $$$1$$$ to $$$n$$$ from left to right. Each ice sphere has a positive integer price. In this version, some prices can be equal.</p><p>An ice sphere is cheap if it costs strictly less than two neighboring ice spheres: the nearest to the left and the nearest to the right. The leftmost and the rightmost ice spheres are not cheap. Sage will choose all cheap ice spheres and then buy only them.</p><p>You can visit the shop before Sage and reorder the ice spheres as you wish. Find out the maximum number of ice spheres that Sage can buy, and show how the ice spheres should be reordered.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ $$$(1 \le n \le 10^5)$$$ — the number of ice spheres in the shop.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(1 \le a_i \le 10^9)$$$ — the prices of ice spheres.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print the maximum number of ice spheres that Sage can buy.</p><p>In the second line print the prices of ice spheres in the optimal order. If there are several correct answers, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006375230094300018" id="id009065719993013954" class="input-output-copier">Copy</div></div><pre id="id006375230094300018">7
1 3 2 2 4 5 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005692488055396766" id="id007312466504316014" class="input-output-copier">Copy</div></div><pre id="id005692488055396766">3
3 1 4 2 4 2 5 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the sample it's not possible to place the ice spheres in any order so that Sage would buy $$$4$$$ of them. If the spheres are placed in the order $$$(3, 1, 4, 2, 4, 2, 5)$$$, then Sage will buy one sphere for $$$1$$$ and two spheres for $$$2$$$ each.</p></div>