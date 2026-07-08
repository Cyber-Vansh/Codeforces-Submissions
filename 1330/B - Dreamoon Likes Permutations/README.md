<h2><a href="https://codeforces.com/contest/1330/problem/B" target="_blank" rel="noopener noreferrer">1330B — Dreamoon Likes Permutations</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1330B](https://codeforces.com/contest/1330/problem/B) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Dreamoon Likes Permutations</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The sequence of $$$m$$$ integers is called the <span class="tex-font-style-it">permutation</span> if it contains all integers from $$$1$$$ to $$$m$$$ exactly once. The number $$$m$$$ is called the length of the permutation.</p><p>Dreamoon has two permutations $$$p_1$$$ and $$$p_2$$$ of non-zero lengths $$$l_1$$$ and $$$l_2$$$.</p><p>Now Dreamoon concatenates these two permutations into another sequence $$$a$$$ of length $$$l_1 + l_2$$$. First $$$l_1$$$ elements of $$$a$$$ is the permutation $$$p_1$$$ and next $$$l_2$$$ elements of $$$a$$$ is the permutation $$$p_2$$$. </p><p>You are given the sequence $$$a$$$, and you need to find two permutations $$$p_1$$$ and $$$p_2$$$. If there are several possible ways to restore them, you should find all of them. (Note that it is also possible that there will be no ways.)</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10\,000$$$) denoting the number of test cases in the input.</p><p>Each test case contains two lines. The first line contains one integer $$$n$$$ ($$$2 \leq n \leq 200\,000$$$): the length of $$$a$$$. The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq n-1$$$).</p><p>The total sum of $$$n$$$ is less than $$$200\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, the first line of output should contain one integer $$$k$$$: the number of ways to divide $$$a$$$ into permutations $$$p_1$$$ and $$$p_2$$$.</p><p>Each of the next $$$k$$$ lines should contain two integers $$$l_1$$$ and $$$l_2$$$ ($$$1 \leq l_1, l_2 \leq n, l_1 + l_2 = n$$$), denoting, that it is possible to divide $$$a$$$ into two permutations of length $$$l_1$$$ and $$$l_2$$$ ($$$p_1$$$ is the first $$$l_1$$$ elements of $$$a$$$, and $$$p_2$$$ is the last $$$l_2$$$ elements of $$$a$$$). You can print solutions in any order.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006874139268778362" id="id0022906334595778954" class="input-output-copier">Copy</div></div><pre id="id006874139268778362">6
5
1 4 3 2 1
6
2 4 1 3 2 1
4
2 1 1 3
4
1 3 3 1
12
2 1 3 4 5 6 7 8 9 1 10 2
3
1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008505060286533946" id="id0017146142045039758" class="input-output-copier">Copy</div></div><pre id="id008505060286533946">2
1 4
4 1
1
4 2
0
0
1
2 10
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, two possible ways to divide $$$a$$$ into permutations are $$$\{1\} + \{4, 3, 2, 1\}$$$ and $$$\{1,4,3,2\} + \{1\}$$$.</p><p>In the second example, the only way to divide $$$a$$$ into permutations is $$$\{2,4,1,3\} + \{2,1\}$$$.</p><p>In the third example, there are no possible ways.</p></div>