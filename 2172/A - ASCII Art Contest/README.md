<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005943927851747177" id="id001364975880549758" class="input-output-copier">Copy</div></div><pre id="id0005943927851747177">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0029479116491974744" id="id003838504819462205" class="input-output-copier">Copy</div></div><pre id="id0029479116491974744">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015639664895357352" id="id0006497517478593084" class="input-output-copier">Copy</div></div><pre id="id0015639664895357352">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005573426755776449" id="id007670569265206186" class="input-output-copier">Copy</div></div><pre id="id005573426755776449">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008409904020628556" id="id0002431001743954575" class="input-output-copier">Copy</div></div><pre id="id0008409904020628556">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040253620843035887" id="id009316170869483855" class="input-output-copier">Copy</div></div><pre id="id0040253620843035887">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00783156603129781" id="id008565084933104545" class="input-output-copier">Copy</div></div><pre id="id00783156603129781">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006482320517953889" id="id00662367625793521" class="input-output-copier">Copy</div></div><pre id="id006482320517953889">check again
</pre></div></div></div>