<h2><a href="https://codeforces.com/contest/58/problem/A" target="_blank" rel="noopener noreferrer">58A — Chat room</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 58A](https://codeforces.com/contest/58/problem/A) |

## Topics
`greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Chat room</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word <span class="tex-span"><i>s</i></span>. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "<span class="tex-font-style-tt">hello</span>". For example, if Vasya types the word "<span class="tex-font-style-tt">ahhellllloou</span>", it will be considered that he said hello, and if he types "<span class="tex-font-style-tt">hlelo</span>", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word <span class="tex-span"><i>s</i></span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains the word <span class="tex-span"><i>s</i></span>, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If Vasya managed to say hello, print "<span class="tex-font-style-tt">YES</span>", otherwise print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0038102466219131614" id="id006782131076892923" class="input-output-copier">Copy</div></div><pre id="id0038102466219131614">ahhellllloou<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008887793437442545" id="id009942586562849745" class="input-output-copier">Copy</div></div><pre id="id008887793437442545">YES<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006011036334365335" id="id007249318558096232" class="input-output-copier">Copy</div></div><pre id="id006011036334365335">hlelo<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008711278177837177" id="id0024684653072297336" class="input-output-copier">Copy</div></div><pre id="id008711278177837177">NO<br></pre></div></div></div>