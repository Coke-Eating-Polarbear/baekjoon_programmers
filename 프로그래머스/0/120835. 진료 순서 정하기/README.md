# [level 0] 진료 순서 정하기 - 120835 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120835) 

### 성능 요약

메모리: 4.17 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 29일 11:48:58

### 문제 설명

<p style="user-select: auto !important;">외과의사 머쓱이는 응급실에 온 환자의 응급도를 기준으로 진료 순서를 정하려고 합니다. 정수 배열 <code style="user-select: auto !important;">emergency</code>가 매개변수로 주어질 때 응급도가 높은 순서대로 진료 순서를 정한 배열을 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">중복된 원소는 없습니다.</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">emergency</code>의 길이 ≤ 10</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">emergency</code>의 원소 ≤ 100</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">emergency</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[3, 76, 24]</td>
<td style="user-select: auto !important;">[3, 1, 2]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1, 2, 3, 4, 5, 6, 7]</td>
<td style="user-select: auto !important;">[7, 6, 5, 4, 3, 2, 1]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[30, 10, 23, 6, 100]</td>
<td style="user-select: auto !important;">[2, 4, 3, 5, 1]</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">emergency</code>가 [3, 76, 24]이므로 응급도의 크기 순서대로 번호를 매긴 [3, 1, 2]를 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">emergency</code>가 [1, 2, 3, 4, 5, 6, 7]이므로 응급도의 크기 순서대로 번호를 매긴 [7, 6, 5, 4, 3, 2, 1]를 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #3</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">emergency</code>가 [30, 10, 23, 6, 100]이므로 응급도의 크기 순서대로 번호를 매긴 [2, 4, 3, 5, 1]를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges