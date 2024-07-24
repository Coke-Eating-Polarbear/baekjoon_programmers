# [level 0] 최댓값 만들기 (1) - 120847 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120847) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 25일 08:56:27

### 문제 설명

<p style="user-select: auto !important;">정수 배열 <code style="user-select: auto !important;">numbers</code>가 매개변수로 주어집니다. <code style="user-select: auto !important;">numbers</code>의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">numbers</code>의 원소 ≤ 10,000</li>
<li style="user-select: auto !important;">2 ≤ <code style="user-select: auto !important;">numbers</code>의 길이 ≤ 100</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">numbers</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1, 2, 3, 4, 5]</td>
<td style="user-select: auto !important;">20</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[0, 31, 24, 10, 1, 9]</td>
<td style="user-select: auto !important;">744</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">두 수의 곱중 최댓값은 4 * 5 = 20 입니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">두 수의 곱중 최댓값은 31 * 24 = 744 입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges