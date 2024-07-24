# [level 0] 대문자와 소문자 - 120893 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120893) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 25일 08:19:52

### 문제 설명

<p style="user-select: auto !important;">문자열 <code style="user-select: auto !important;">my_string</code>이 매개변수로 주어질 때, 대문자는 소문자로 소문자는 대문자로 변환한 문자열을 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">my_string</code>의 길이 ≤ 1,000</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">my_string</code>은 영어 대문자와 소문자로만 구성되어 있습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">my_string</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"cccCCC"</td>
<td style="user-select: auto !important;">"CCCccc"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"abCdEfghIJ"</td>
<td style="user-select: auto !important;">"ABcDeFGHij"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">소문자는 대문자로 대문자는 소문자로 바꾼 "CCCccc"를 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">소문자는 대문자로 대문자는 소문자로 바꾼 "ABcDeFGHij"를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges