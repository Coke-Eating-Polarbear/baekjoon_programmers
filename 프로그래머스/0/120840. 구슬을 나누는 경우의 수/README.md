# [level 0] 구슬을 나누는 경우의 수 - 120840 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120840) 

### 성능 요약

메모리: 4.46 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 29일 11:36:33

### 문제 설명

<p style="user-select: auto !important;">머쓱이는 구슬을 친구들에게 나누어주려고 합니다. 구슬은 모두 다르게 생겼습니다. 머쓱이가 갖고 있는 구슬의 개수 <code style="user-select: auto !important;">balls</code>와 친구들에게 나누어 줄 구슬 개수 <code style="user-select: auto !important;">share</code>이 매개변수로 주어질 때, <code style="user-select: auto !important;">balls</code>개의 구슬 중 <code style="user-select: auto !important;">share</code>개의 구슬을 고르는 가능한 모든 경우의 수를 return 하는 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">balls</code> ≤ 30</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">share</code> ≤ 30</li>
<li style="user-select: auto !important;">구슬을 고르는 순서는 고려하지 않습니다.</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">share</code> ≤ <code style="user-select: auto !important;">balls</code></li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">balls</th>
<th style="user-select: auto !important;">share</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">10</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">서로 다른 구슬 3개 중 2개를 고르는 경우의 수는 3입니다.
<img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/668adf7a-38b1-4112-bbc5-4fab429168c9/%E1%84%89%E1%85%B3%E1%84%8F%E1%85%B3%E1%84%85%E1%85%B5%E1%86%AB%E1%84%89%E1%85%A3%E1%86%BA%202022-08-01%20%E1%84%8B%E1%85%A9%E1%84%92%E1%85%AE%204.15.55.png" title="" alt="스크린샷 2022-08-01 오후 4.15.55.png" style="user-select: auto !important;"></li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">서로 다른 구슬 5개 중 3개를 고르는 경우의 수는 10입니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">Hint</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">서로 다른 n개 중 m개를 뽑는 경우의 수 공식은 다음과 같습니다.
<img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/54c8b2b9-f88c-4a09-8956-7560ff7ea918/%E1%84%89%E1%85%B3%E1%84%8F%E1%85%B3%E1%84%85%E1%85%B5%E1%86%AB%E1%84%89%E1%85%A3%E1%86%BA%202022-08-01%20%E1%84%8B%E1%85%A9%E1%84%92%E1%85%AE%204.37.53.png" title="" alt="스크린샷 2022-08-01 오후 4.37.53.png" style="user-select: auto !important;"></li>
</ul>

<hr style="user-select: auto !important;">

<p style="user-select: auto !important;">※ 공지 - 2022년 10월 11일 제한 사항 및 테스트케이스가 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges