# [level 0] k의 개수 - 120887 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120887#) 

### 성능 요약

메모리: 4.14 MB, 시간: 6.11 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 08월 06일 19:48:50

### 문제 설명

<p style="user-select: auto !important;">1부터 13까지의 수에서, 1은 1, 10, 11, 12, 13 이렇게 총 6번 등장합니다. 정수 <code style="user-select: auto !important;">i</code>, <code style="user-select: auto !important;">j</code>, <code style="user-select: auto !important;">k</code>가 매개변수로 주어질 때, <code style="user-select: auto !important;">i</code>부터 <code style="user-select: auto !important;">j</code>까지 <code style="user-select: auto !important;">k</code>가 몇 번 등장하는지 return 하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">i</code> &lt; <code style="user-select: auto !important;">j</code> ≤ 100,000</li>
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">k</code> ≤ 9</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">i</th>
<th style="user-select: auto !important;">j</th>
<th style="user-select: auto !important;">k</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">13</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">6</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">10</td>
<td style="user-select: auto !important;">50</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">5</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">10</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">0</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">본문과 동일합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">10부터 50까지 5는 15, 25, 35, 45, 50 총 5번 등장합니다. 따라서 5를 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #3</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">3부터 10까지 2는 한 번도 등장하지 않으므로 0을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges