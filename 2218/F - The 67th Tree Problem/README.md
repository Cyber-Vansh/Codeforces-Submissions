<h2><a href="https://codeforces.com/contest/2218/problem/F" target="_blank" rel="noopener noreferrer">2218F — The 67th Tree Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2218F](https://codeforces.com/contest/2218/problem/F) |

## Topics
`constructive algorithms` `implementation` `trees`

---

## Problem Statement

<div class="header"><div class="title">F. The 67th Tree Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-size-small"><span class="tex-font-style-it">Now that PMOI season is over (Cloud emerged victorious), Macaque can continue on his journey towards enlightenment. The problems he is to solve are getting harder, the burden of the past lives is getting heavier, and you are losing your free will at such a rate that you struggle to remember the last time you did anything out of your own volition without being coerced by Macaque. The only upside for you is that Macaque is giving you a free tour of his current habitat up in the trees once you solve the following problem for him.</span></span> </p><p>You are given two integers $$$x$$$ and $$$y$$$.</p><p>Your task is to construct a tree with $$$x + y$$$ nodes, rooted at node $$$1$$$, such that:</p><ul> <li> Exactly $$$x$$$ nodes in the tree have <span class="tex-font-style-bf">even</span> subtree$$$^{\text{∗}}$$$ size. </li><li> Exactly $$$y$$$ nodes in the tree have <span class="tex-font-style-bf">odd</span> subtree size. </li></ul> If multiple valid trees exist, you may output any of them. If there is no such tree, output <span class="tex-font-style-tt">NO</span>.<div class="statement-footnote"><p>$$$^{\text{∗}}$$$The subtree of a vertex $$$u$$$ is the set of all vertices that pass through $$$u$$$ on a simple path to the root (including $$$u$$$ itself).</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>Each subsequent line contains two integers $$$x$$$ and $$$y$$$ ($$$0 \leq x, y \leq 2 \cdot 10^5$$$, $$$1 \leq x + y \leq 2 \cdot 10^5$$$). </p><p>It is guaranteed that the sum of $$$x+y$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, output "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>", depending on whether or not a construction exists. You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, "<span class="tex-font-style-tt">yES</span>", "<span class="tex-font-style-tt">yes</span>", and "<span class="tex-font-style-tt">Yes</span>" will be recognized as a positive response).</p><p>If you output "<span class="tex-font-style-tt">YES</span>", output $$$x+y-1$$$ lines, each containing two space-separated integers $$$u$$$ and $$$v$$$, denoting that there is an edge between nodes $$$u$$$ and $$$v$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000956006373011472" id="id006919693655638826" class="input-output-copier">Copy</div></div><pre id="id000956006373011472"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">0 3</div><div class="test-example-line test-example-line-even test-example-line-4">3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">0 2</div><div class="test-example-line test-example-line-even test-example-line-6">1 0</div><div class="test-example-line test-example-line-odd test-example-line-7">4 7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007368280869167751" id="id0006608045360747217" class="input-output-copier">Copy</div></div><pre id="id007368280869167751">YES
1 2
NO
YES
1 2
1 3
YES
1 2
2 3
3 4
4 5
5 6
6 7
NO
NO
YES
1 2
2 3
3 4
4 5
4 11
2 6
6 7
7 8
2 9
9 10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test, the output tree is valid because node $$$1$$$ has subtree size $$$2$$$, which is even, and node $$$2$$$ has subtree size $$$1$$$, which is odd.</p><p>In the second test, it can be shown that no valid tree exists.</p><p>In the fourth test, the nodes with even subtree size are $$$[2, 4, 6]$$$, and the nodes with odd subtree size are $$$[1, 3, 5, 7]$$$.</p><p>The output of the final test is shown in the diagram below, where the blue nodes have even subtree size and the red nodes have odd subtree size.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e76628e482920b31c69a3d4905a0ca4da059dc86.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>