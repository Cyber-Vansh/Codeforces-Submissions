<h2><a href="https://codeforces.com/contest/11/problem/D" target="_blank" rel="noopener noreferrer">11D — A Simple Task</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 11D](https://codeforces.com/contest/11/problem/D) |

## Topics
`bitmasks` `dp` `graphs`

---

## Problem Statement

<div class="header"><div class="title">D. A Simple Task</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Given a simple graph, output the number of simple cycles in it. A simple cycle is a cycle with no repeated vertices or edges.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains two integers <span class="tex-span"><i>n</i></span> and <span class="tex-span"><i>m</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 19</span>, <span class="tex-span">0 ≤ <i>m</i></span>) – respectively the number of vertices and edges of the graph. Each of the subsequent <span class="tex-span"><i>m</i></span> lines contains two integers <span class="tex-span"><i>a</i></span> and <span class="tex-span"><i>b</i></span>, (<span class="tex-span">1 ≤ <i>a</i>, <i>b</i> ≤ <i>n</i></span>, <span class="tex-span"><i>a</i> ≠ <i>b</i></span>) indicating that vertices <span class="tex-span"><i>a</i></span> and <span class="tex-span"><i>b</i></span> are connected by an undirected edge. There is no more than one edge connecting any pair of vertices.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the number of cycles in the given graph.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00906601113122622" id="id005896885724728874" class="input-output-copier">Copy</div></div><pre id="id00906601113122622">4 6<br>1 2<br>1 3<br>1 4<br>2 3<br>2 4<br>3 4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004759080509936452" id="id0010750052394781784" class="input-output-copier">Copy</div></div><pre id="id004759080509936452">7<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The example graph is a clique and contains four cycles of length 3 and three cycles of length 4.</p></div>