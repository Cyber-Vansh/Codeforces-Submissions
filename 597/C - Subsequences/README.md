<h2><a href="https://codeforces.com/contest/597/problem/C" target="_blank" rel="noopener noreferrer">597C — Subsequences</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 597C](https://codeforces.com/contest/597/problem/C) |

## Topics
`data structures` `dp`

---

## Problem Statement

<div class="header"><div class="title">C. Subsequences</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>For the given sequence with <span class="tex-span"><i>n</i></span> different elements find the number of increasing subsequences with <span class="tex-span"><i>k</i> + 1</span> elements. It is guaranteed that the answer is not greater than <span class="tex-span">8·10<sup class="upper-index">18</sup></span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>First line contain two integer values <span class="tex-span"><i>n</i></span> and <span class="tex-span"><i>k</i></span> <span class="tex-span">(1 ≤ <i>n</i> ≤ 10<sup class="upper-index">5</sup>, 0 ≤ <i>k</i> ≤ 10)</span> — the length of sequence and the number of elements in increasing subsequences.</p><p>Next <span class="tex-span"><i>n</i></span> lines contains one integer <span class="tex-span"><i>a</i><sub class="lower-index"><i>i</i></sub></span> (<span class="tex-span">1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub> ≤ <i>n</i></span>) each — elements of sequence. All values <span class="tex-span"><i>a</i><sub class="lower-index"><i>i</i></sub></span> are different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the answer to the problem.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008176633196850022" id="id009537945959067152" class="input-output-copier">Copy</div></div><pre id="id008176633196850022">5 2<br>1<br>2<br>3<br>5<br>4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0043270963992742895" id="id007340060180401993" class="input-output-copier">Copy</div></div><pre id="id0043270963992742895">7<br></pre></div></div></div>