# [level 0] 문자열안에 문자열 - 120908 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120908?language=python3) 

### 성능 요약

메모리: 10.3 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 25일 08:29:45

### 문제 설명

<p style="user-select: auto !important;">문자열 <code style="user-select: auto !important;">str1</code>, <code style="user-select: auto !important;">str2</code>가 매개변수로 주어집니다. <code style="user-select: auto !important;">str1</code> 안에 <code style="user-select: auto !important;">str2</code>가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">str1</code>의 길이 ≤ 100</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">str2</code>의 길이 ≤ 100</li>
<li style="user-select: auto !important;">문자열은 알파벳 대문자, 소문자, 숫자로 구성되어 있습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">str1</th>
<th style="user-select: auto !important;">str2</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"ab6CDE443fgh22iJKlmn1o"</td>
<td style="user-select: auto !important;">"6CD"</td>
<td style="user-select: auto !important;">1</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"ppprrrogrammers"</td>
<td style="user-select: auto !important;">"pppp"</td>
<td style="user-select: auto !important;">2</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"AbcAbcA"</td>
<td style="user-select: auto !important;">"AAA"</td>
<td style="user-select: auto !important;">2</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"ab<code style="user-select: auto !important;">6CD</code>E443fgh22iJKlmn1o" <code style="user-select: auto !important;">str1</code>에 <code style="user-select: auto !important;">str2</code>가 존재하므로 1을 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"ppprrrogrammers" <code style="user-select: auto !important;">str1</code>에 <code style="user-select: auto !important;">str2</code>가 없으므로 2를 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #3</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"AbcAbcA" <code style="user-select: auto !important;">str1</code>에 <code style="user-select: auto !important;">str2</code>가 없으므로 2를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges