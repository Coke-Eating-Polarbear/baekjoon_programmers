# [level 0] 모스부호 (1) - 120838 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120838?language=c) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 29일 12:18:45

### 문제 설명

<p style="user-select: auto !important;">머쓱이는 친구에게 모스부호를 이용한 편지를 받았습니다. 그냥은 읽을 수 없어 이를 해독하는 프로그램을 만들려고 합니다. 문자열 <code style="user-select: auto !important;">letter</code>가 매개변수로 주어질 때, <code style="user-select: auto !important;">letter</code>를 영어 소문자로 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.<br style="user-select: auto !important;">
모스부호는 다음과 같습니다.</p>
<div class="highlight" style="user-select: auto !important;"><pre class="codehilite" style="user-select: auto !important;"><code style="user-select: auto !important;">morse = { 
    '.-':'a','-...':'b','-.-.':'c','-..':'d','.':'e','..-.':'f',
    '--.':'g','....':'h','..':'i','.---':'j','-.-':'k','.-..':'l',
    '--':'m','-.':'n','---':'o','.--.':'p','--.-':'q','.-.':'r',
    '...':'s','-':'t','..-':'u','...-':'v','.--':'w','-..-':'x',
    '-.--':'y','--..':'z'
}
</code></pre></div>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">letter</code>의 길이 ≤ 1,000</li>
<li style="user-select: auto !important;">return값은 소문자입니다.</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">letter</code>의 모스부호는 공백으로 나누어져 있습니다.</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">letter</code>에 공백은 연속으로 두 개 이상 존재하지 않습니다.</li>
<li style="user-select: auto !important;">해독할 수 없는 편지는 주어지지 않습니다.</li>
<li style="user-select: auto !important;">편지의 시작과 끝에는 공백이 없습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">letter</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">".... . .-.. .-.. ---"</td>
<td style="user-select: auto !important;">"hello"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">".--. -.-- - .... --- -."</td>
<td style="user-select: auto !important;">"python"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">.... = h</li>
<li style="user-select: auto !important;">. = e</li>
<li style="user-select: auto !important;">.-.. = l</li>
<li style="user-select: auto !important;">.-.. = l</li>
<li style="user-select: auto !important;">--- = o</li>
<li style="user-select: auto !important;">따라서 "hello"를 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">.--. = p</li>
<li style="user-select: auto !important;">-.-- = y</li>
<li style="user-select: auto !important;">- = t</li>
<li style="user-select: auto !important;">.... = h</li>
<li style="user-select: auto !important;">--- = o</li>
<li style="user-select: auto !important;">-. = n</li>
<li style="user-select: auto !important;">따라서 "python"을 return 합니다.</li>
</ul>

<hr style="user-select: auto !important;">

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">a ~ z에 해당하는 모스부호가 순서대로 담긴 배열입니다.</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}</code></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges