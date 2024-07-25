# [level 0] 배열의 유사도 - 120903 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120903) 

### 성능 요약

메모리: 4.46 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 25일 09:03:51

### 문제 설명

<p style="user-select: auto !important;">두 배열이 얼마나 유사한지 확인해보려고 합니다. 문자열 배열 <code style="user-select: auto !important;">s1</code>과 <code style="user-select: auto !important;">s2</code>가 주어질 때 같은 원소의 개수를 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">s1</code>, <code style="user-select: auto !important;">s2</code>의 길이 ≤ 100</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">s1</code>, <code style="user-select: auto !important;">s2</code>의 원소의 길이 ≤ 10</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">s1</code>과 <code style="user-select: auto !important;">s2</code>의 원소는 알파벳 소문자로만 이루어져 있습니다</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">s1</code>과 <code style="user-select: auto !important;">s2</code>는 각각 중복된 원소를 갖지 않습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">s1</th>
<th style="user-select: auto !important;">s2</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">["a", "b", "c"]</td>
<td style="user-select: auto !important;">["com", "b", "d", "p", "c"]</td>
<td style="user-select: auto !important;">2</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">["n", "omg"]</td>
<td style="user-select: auto !important;">["m", "dot"]</td>
<td style="user-select: auto !important;">0</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"b"와 "c"가 같으므로 2를 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">같은 원소가 없으므로 0을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges