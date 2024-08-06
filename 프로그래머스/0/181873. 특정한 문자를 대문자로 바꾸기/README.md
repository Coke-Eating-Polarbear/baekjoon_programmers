# [level 0] 특정한 문자를 대문자로 바꾸기 - 181873 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181873?language=c) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 08월 06일 20:08:27

### 문제 설명

<p style="user-select: auto !important;">영소문자로 이루어진 문자열 <code style="user-select: auto !important;">my_string</code>과 영소문자 1글자로 이루어진 문자열 <code style="user-select: auto !important;">alp</code>가 매개변수로 주어질 때, <code style="user-select: auto !important;">my_string</code>에서 <code style="user-select: auto !important;">alp</code>에 해당하는 모든 글자를 대문자로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">my_string</code>의 길이 ≤ 1,000</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">my_string</th>
<th style="user-select: auto !important;">alp</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"programmers"</td>
<td style="user-select: auto !important;">"p"</td>
<td style="user-select: auto !important;">"Programmers"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"lowercase"</td>
<td style="user-select: auto !important;">"x"</td>
<td style="user-select: auto !important;">"lowercase"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 1번의 <code style="user-select: auto !important;">my_string</code>은 "programmers"이고 <code style="user-select: auto !important;">alp</code>가 "p"이므로 <code style="user-select: auto !important;">my_string</code>에 모든 p를 대문자인 P로 바꾼 문자열 "Programmers"를 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 2번의 <code style="user-select: auto !important;">alp</code>는 "x"이고 <code style="user-select: auto !important;">my_string</code>에 x는 없습니다. 따라서 "lowercase"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges