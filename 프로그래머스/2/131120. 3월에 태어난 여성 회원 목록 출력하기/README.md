# [level 2] 3월에 태어난 여성 회원 목록 출력하기 - 131120 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131120) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 07월 30일 18:50:14

### 문제 설명

<p style="user-select: auto !important;">다음은 식당 리뷰 사이트의 회원 정보를 담은 <code style="user-select: auto !important;">MEMBER_PROFILE</code> 테이블입니다. <code style="user-select: auto !important;">MEMBER_PROFILE</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">MEMBER_ID</code>, <code style="user-select: auto !important;">MEMBER_NAME</code>, <code style="user-select: auto !important;">TLNO</code>, <code style="user-select: auto !important;">GENDER</code>, <code style="user-select: auto !important;">DATE_OF_BIRTH</code>는 회원 ID, 회원 이름, 회원 연락처, 성별, 생년월일을 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">MEMBER_ID</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">MEMBER_NAME</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">TLNO</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">GENDER</td>
<td style="user-select: auto !important;">VARCHAR(1)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">DATE_OF_BIRTH</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">MEMBER_PROFILE</code> 테이블에서 생일이 3월인 여성 회원의 ID, 이름, 성별, 생년월일을 조회하는 SQL문을 작성해주세요. 이때 전화번호가 NULL인 경우는 출력대상에서 제외시켜 주시고, 결과는 회원ID를 기준으로 오름차순 정렬해주세요. </p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">MEMBER_PROFILE</code> 테이블이 다음과 같을 때</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">MEMBER_ID</th>
<th style="user-select: auto !important;">MEMBER_NAME</th>
<th style="user-select: auto !important;">TLNO</th>
<th style="user-select: auto !important;">GENDER</th>
<th style="user-select: auto !important;">DATE_OF_BIRTH</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">jiho92@naver.com</code></td>
<td style="user-select: auto !important;">이지호</td>
<td style="user-select: auto !important;">01076432111</td>
<td style="user-select: auto !important;">W</td>
<td style="user-select: auto !important;">1992-02-12</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">jiyoon22@hotmail.com</code></td>
<td style="user-select: auto !important;">김지윤</td>
<td style="user-select: auto !important;">01032324117</td>
<td style="user-select: auto !important;">W</td>
<td style="user-select: auto !important;">1992-02-22</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">jihoon93@hanmail.net</code></td>
<td style="user-select: auto !important;">김지훈</td>
<td style="user-select: auto !important;">01023258688</td>
<td style="user-select: auto !important;">M</td>
<td style="user-select: auto !important;">1993-02-23</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">seoyeons@naver.com</code></td>
<td style="user-select: auto !important;">박서연</td>
<td style="user-select: auto !important;">01076482209</td>
<td style="user-select: auto !important;">W</td>
<td style="user-select: auto !important;">1993-03-16</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">yoonsy94@gmail.com</code></td>
<td style="user-select: auto !important;">윤서연</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">W</td>
<td style="user-select: auto !important;">1994-03-19</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">MEMBER_ID</th>
<th style="user-select: auto !important;">MEMBER_NAME</th>
<th style="user-select: auto !important;">GENDER</th>
<th style="user-select: auto !important;">DATE_OF_BIRTH</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;"><code style="user-select: auto !important;">seoyeons@naver.com</code></td>
<td style="user-select: auto !important;">박서연</td>
<td style="user-select: auto !important;">W</td>
<td style="user-select: auto !important;">1993-03-16</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">주의사항</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">DATE_OF_BIRTH</code>의 데이트 포맷이 예시와 동일해야 정답처리 됩니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges