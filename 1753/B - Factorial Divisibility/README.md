<h2><a href="https://codeforces.com/contest/1753/problem/B" target="_blank" rel="noopener noreferrer">1753B — Factorial Divisibility</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1753B](https://codeforces.com/contest/1753/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Factorial Divisibility</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$x$$$ and an array of integers $$$a_1, a_2, \ldots, a_n$$$. You have to determine if the number $$$a_1! + a_2! + \ldots + a_n!$$$ is divisible by $$$x!$$$.</p><p>Here $$$k!$$$ is a factorial of $$$k$$$ — the product of all positive integers less than or equal to $$$k$$$. For example, $$$3! = 1 \cdot 2 \cdot 3 = 6$$$, and $$$5! = 1 \cdot 2 \cdot 3 \cdot 4 \cdot 5 = 120$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$x$$$ ($$$1 \le n \le 500\,000$$$, $$$1 \le x \le 500\,000$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le x$$$) — elements of given array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the only line print "<span class="tex-font-style-tt">Yes</span>" (without quotes) if $$$a_1! + a_2! + \ldots + a_n!$$$ is divisible by $$$x!$$$, and "<span class="tex-font-style-tt">No</span>" (without quotes) otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042072186644781984" id="id008795103429257036" class="input-output-copier">Copy</div></div><pre id="id0042072186644781984">6 4
3 2 2 2 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019110813991098352" id="id0014878544948071348" class="input-output-copier">Copy</div></div><pre id="id0019110813991098352">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00550322961222538" id="id00022072625281337244" class="input-output-copier">Copy</div></div><pre id="id00550322961222538">8 3
3 2 2 2 2 2 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00822929899336835" id="id0043433108651418917" class="input-output-copier">Copy</div></div><pre id="id00822929899336835">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007133425353264666" id="id0019162775827019463" class="input-output-copier">Copy</div></div><pre id="id007133425353264666">7 8
7 7 7 7 7 7 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008473440844630947" id="id001752489185905377" class="input-output-copier">Copy</div></div><pre id="id008473440844630947">No
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00599300356367711" id="id0034031419575207267" class="input-output-copier">Copy</div></div><pre id="id00599300356367711">10 5
4 3 2 1 4 3 2 4 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006523076211988454" id="id004042893862138158" class="input-output-copier">Copy</div></div><pre id="id0006523076211988454">No
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008883181217112135" id="id0029272182091226406" class="input-output-copier">Copy</div></div><pre id="id0008883181217112135">2 500000
499999 499999
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005938400100741836" id="id007572536456728381" class="input-output-copier">Copy</div></div><pre id="id0005938400100741836">No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example $$$3! + 2! + 2! + 2! + 3! + 3! = 6 + 2 + 2 + 2 + 6 + 6 = 24$$$. Number $$$24$$$ is divisible by $$$4! = 24$$$.</p><p>In the second example $$$3! + 2! + 2! + 2! + 2! + 2! + 1! + 1! = 18$$$, is divisible by $$$3! = 6$$$.</p><p>In the third example $$$7! + 7! + 7! + 7! + 7! + 7! + 7! = 7 \cdot 7!$$$. It is easy to prove that this number is not divisible by $$$8!$$$.</p></div>