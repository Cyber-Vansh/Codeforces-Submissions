<h2><a href="https://codeforces.com/contest/597/problem/A" target="_blank" rel="noopener noreferrer">597A — Divisibility</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 597A](https://codeforces.com/contest/597/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Divisibility</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Find the number of <span class="tex-span"><i>k</i></span>-divisible numbers on the segment <span class="tex-span">[<i>a</i>, <i>b</i>]</span>. In other words you need to find the number of such integer values <span class="tex-span"><i>x</i></span> that <span class="tex-span"><i>a</i> ≤ <i>x</i> ≤ <i>b</i></span> and <span class="tex-span"><i>x</i></span> is divisible by <span class="tex-span"><i>k</i></span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains three space-separated integers <span class="tex-span"><i>k</i></span>, <span class="tex-span"><i>a</i></span> and <span class="tex-span"><i>b</i></span> (<span class="tex-span">1 ≤ <i>k</i> ≤ 10<sup class="upper-index">18</sup>; - 10<sup class="upper-index">18</sup> ≤ <i>a</i> ≤ <i>b</i> ≤ 10<sup class="upper-index">18</sup></span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required number.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025580223827942594" id="id0016635379257350047" class="input-output-copier">Copy</div></div><pre id="id0025580223827942594">1 1 10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008462837475024215" id="id003878980552604917" class="input-output-copier">Copy</div></div><pre id="id008462837475024215">10<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0026281783340630893" id="id005338155439572358" class="input-output-copier">Copy</div></div><pre id="id0026281783340630893">2 -4 4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005919639683070091" id="id004321110936361875" class="input-output-copier">Copy</div></div><pre id="id005919639683070091">5<br></pre></div></div></div>