<h2><a href="https://codeforces.com/contest/1344/problem/A" target="_blank" rel="noopener noreferrer">1344A — Hilbert's Hotel</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1344A](https://codeforces.com/contest/1344/problem/A) |

## Topics
`math` `number theory` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Hilbert's Hotel</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Hilbert's Hotel is a very unusual hotel since the number of rooms is infinite! In fact, there is exactly one room for every integer, <span class="tex-font-style-bf">including zero and negative integers</span>. Even stranger, the hotel is currently at full capacity, meaning there is exactly one guest in every room. The hotel's manager, David Hilbert himself, decides he wants to shuffle the guests around because he thinks this will create a vacancy (a room without a guest).</p><p>For any integer $$$k$$$ and positive integer $$$n$$$, let $$$k\bmod n$$$ denote the remainder when $$$k$$$ is divided by $$$n$$$. More formally, $$$r=k\bmod n$$$ is the smallest non-negative integer such that $$$k-r$$$ is divisible by $$$n$$$. It always holds that $$$0\le k\bmod n\le n-1$$$. For example, $$$100\bmod 12=4$$$ and $$$(-1337)\bmod 3=1$$$.</p><p>Then the shuffling works as follows. There is an array of $$$n$$$ integers $$$a_0,a_1,\ldots,a_{n-1}$$$. Then for each integer $$$k$$$, the guest in room $$$k$$$ is moved to room number $$$k+a_{k\bmod n}$$$.</p><p>After this shuffling process, determine if there is still exactly one guest assigned to each room. That is, there are no vacancies or rooms with multiple guests.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$) — the number of test cases. Next $$$2t$$$ lines contain descriptions of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 2\cdot 10^5$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_0,a_1,\ldots,a_{n-1}$$$ ($$$-10^9\le a_i\le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single line containing "<span class="tex-font-style-tt">YES</span>" if there is exactly one guest assigned to each room after the shuffling process, or "<span class="tex-font-style-tt">NO</span>" otherwise. You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007768436796463625" id="id005756165502081001" class="input-output-copier">Copy</div></div><pre id="id007768436796463625">6
1
14
2
1 -1
4
5 5 5 1
3
3 2 1
2
0 1
5
-239 -2 -100 -3 -11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005710066209233494" id="id0009195137339752191" class="input-output-copier">Copy</div></div><pre id="id005710066209233494">YES
YES
YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, every guest is shifted by $$$14$$$ rooms, so the assignment is still unique.</p><p>In the second test case, even guests move to the right by $$$1$$$ room, and odd guests move to the left by $$$1$$$ room. We can show that the assignment is still unique.</p><p>In the third test case, every fourth guest moves to the right by $$$1$$$ room, and the other guests move to the right by $$$5$$$ rooms. We can show that the assignment is still unique.</p><p>In the fourth test case, guests $$$0$$$ and $$$1$$$ are both assigned to room $$$3$$$.</p><p>In the fifth test case, guests $$$1$$$ and $$$2$$$ are both assigned to room $$$2$$$.</p></div>