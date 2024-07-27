# [level 0] 가위 바위 보 - 120839 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120839?language=c) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 27일 14:39:22

### 문제 설명

<p style="user-select: auto !important;">가위는 2 바위는 0 보는 5로 표현합니다. 가위 바위 보를 내는 순서대로 나타낸 문자열 <code style="user-select: auto !important;">rsp</code>가 매개변수로 주어질 때, rsp에 저장된 가위 바위 보를  모두 이기는 경우를 순서대로 나타낸 문자열을 return하도록 solution 함수를 완성해보세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 &lt; <code style="user-select: auto !important;">rsp</code>의 길이 ≤ 100</li>
<li style="user-select: auto !important;"> <code style="user-select: auto !important;">rsp</code>와 길이가 같은 문자열을 return 합니다.</li>
<li style="user-select: auto !important;"> <code style="user-select: auto !important;">rsp</code>는 숫자 0, 2, 5로 이루어져 있습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">rsp</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"2"</td>
<td style="user-select: auto !important;">"0"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"205"</td>
<td style="user-select: auto !important;">"052"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"2"는 가위이므로 바위를 나타내는 "0"을 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">"205"는 순서대로 가위, 바위, 보이고 이를 모두 이기려면 바위, 보, 가위를 순서대로 내야하므로 “052”를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges