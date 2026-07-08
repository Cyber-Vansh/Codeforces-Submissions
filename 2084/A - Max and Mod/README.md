<h2><a href="https://codeforces.com/contest/2084/problem/A" target="_blank" rel="noopener noreferrer">2084A — Max and Mod</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Python 3 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2084A](https://codeforces.com/contest/2084/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Max and Mod</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p>You are given an integer $$$n$$$. Find any permutation $$$p$$$ of length $$$n$$$$$$^{\text{∗}}$$$ such that:</p><ul> <li> For all $$$2 \le i \le n$$$, $$$\max(p_{i - 1}, p_i) \bmod i$$$ $$$^{\text{†}}$$$ $$$= i - 1$$$ is satisfied. </li></ul><p>If it is impossible to find such a permutation $$$p$$$, output $$$-1$$$.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A permutation of length $$$n$$$ is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array). </p><p>$$$^{\text{†}}$$$$$$x \bmod y$$$ denotes the remainder from dividing $$$x$$$ by $$$y$$$. </p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 99$$$). The description of the test cases follows. </p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case:</p><ul> <li> If such a permutation $$$p$$$ doesn't exist, output a single integer $$$-1$$$. </li><li> Otherwise, output $$$n$$$ integers $$$p_1, p_2, \ldots, p_n$$$ — the permutation $$$p$$$ you've found. If there are multiple answers, output any of them. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0002458871571939869" id="id007809926209071298" class="input-output-copier">Copy</div></div><pre id="id0002458871571939869"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-even test-example-line-4">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003275783719901819" id="id008599324748415967" class="input-output-copier">Copy</div></div><pre id="id003275783719901819">-1
3 2 1
-1
1 5 2 3 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is impossible to find such a permutation $$$p$$$, so you should output $$$-1$$$.</p><p>In the fourth test case, $$$p = [1, 5, 2, 3, 4]$$$ satisfies the condition:</p><ul> <li> For $$$i = 2$$$, $$$\max(p_1, p_2) = 5$$$ and $$$5 \bmod 2 = 1$$$. </li><li> For $$$i = 3$$$, $$$\max(p_2, p_3) = 5$$$ and $$$5 \bmod 3 = 2$$$. </li><li> For $$$i = 4$$$, $$$\max(p_3, p_4) = 3$$$ and $$$3 \bmod 4 = 3$$$. </li><li> For $$$i = 5$$$, $$$\max(p_4, p_5) = 4$$$ and $$$4 \bmod 5 = 4$$$. </li></ul></div>