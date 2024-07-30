# [level 4] 서울에 위치한 식당 목록 출력하기 - 131118 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131118) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 07월 30일 19:02:37

### 문제 설명

<p style="user-select: auto !important;">다음은 식당의 정보를 담은 <code style="user-select: auto !important;">REST_INFO</code> 테이블과 식당의 리뷰 정보를 담은  <code style="user-select: auto !important;">REST_REVIEW</code> 테이블입니다. <code style="user-select: auto !important;">REST_INFO</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">REST_ID</code>, <code style="user-select: auto !important;">REST_NAME</code>, <code style="user-select: auto !important;">FOOD_TYPE</code>, <code style="user-select: auto !important;">VIEWS</code>, <code style="user-select: auto !important;">FAVORITES</code>, <code style="user-select: auto !important;">PARKING_LOT</code>, <code style="user-select: auto !important;">ADDRESS</code>, <code style="user-select: auto !important;">TEL</code>은 식당 ID, 식당 이름, 음식 종류, 조회수, 즐겨찾기수, 주차장 유무, 주소, 전화번호를 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REST_ID</td>
<td style="user-select: auto !important;">VARCHAR(5)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REST_NAME</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FOOD_TYPE</td>
<td style="user-select: auto !important;">VARCHAR(20)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">VIEWS</td>
<td style="user-select: auto !important;">NUMBER</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FAVORITES</td>
<td style="user-select: auto !important;">NUMBER</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">PARKING_LOT</td>
<td style="user-select: auto !important;">VARCHAR(1)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">ADDRESS</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">TEL</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;"><code style="user-select: auto !important;">REST_REVIEW</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">REVIEW_ID</code>, <code style="user-select: auto !important;">REST_ID</code>, <code style="user-select: auto !important;">MEMBER_ID</code>, <code style="user-select: auto !important;">REVIEW_SCORE</code>, <code style="user-select: auto !important;">REVIEW_TEXT</code>,<code style="user-select: auto !important;">REVIEW_DATE</code>는 각각 리뷰 ID, 식당 ID, 회원 ID, 점수, 리뷰 텍스트, 리뷰 작성일을 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REVIEW_ID</td>
<td style="user-select: auto !important;">VARCHAR(10)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REST_ID</td>
<td style="user-select: auto !important;">VARCHAR(10)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">MEMBER_ID</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REVIEW_SCORE</td>
<td style="user-select: auto !important;">NUMBER</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REVIEW_TEXT</td>
<td style="user-select: auto !important;">VARCHAR(1000)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REVIEW_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">REST_INFO</code>와 <code style="user-select: auto !important;">REST_REVIEW</code> 테이블에서 서울에 위치한 식당들의 식당 ID, 식당 이름, 음식 종류, 즐겨찾기수, 주소, 리뷰 평균 점수를 조회하는 SQL문을 작성해주세요. 이때 리뷰 평균점수는 소수점 세 번째 자리에서 반올림 해주시고 결과는 평균점수를 기준으로 내림차순 정렬해주시고, 평균점수가 같다면 즐겨찾기수를 기준으로 내림차순 정렬해주세요. </p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">REST_INFO</code> 테이블이 다음과 같고</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">REST_ID</th>
<th style="user-select: auto !important;">REST_NAME</th>
<th style="user-select: auto !important;">FOOD_TYPE</th>
<th style="user-select: auto !important;">VIEWS</th>
<th style="user-select: auto !important;">FAVORITES</th>
<th style="user-select: auto !important;">PARKING_LOT</th>
<th style="user-select: auto !important;">ADDRESS</th>
<th style="user-select: auto !important;">TEL</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">00028</td>
<td style="user-select: auto !important;">대우부대찌개</td>
<td style="user-select: auto !important;">한식</td>
<td style="user-select: auto !important;">52310</td>
<td style="user-select: auto !important;">10</td>
<td style="user-select: auto !important;">N</td>
<td style="user-select: auto !important;">경기도 용인시 처인구 남사읍 처인성로 309</td>
<td style="user-select: auto !important;">031-235-1235</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">00039</td>
<td style="user-select: auto !important;">광주식당</td>
<td style="user-select: auto !important;">한식</td>
<td style="user-select: auto !important;">23001</td>
<td style="user-select: auto !important;">20</td>
<td style="user-select: auto !important;">N</td>
<td style="user-select: auto !important;">경기도 부천시 산업로8번길 60</td>
<td style="user-select: auto !important;">031-235-6423</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">00035</td>
<td style="user-select: auto !important;">삼촌식당</td>
<td style="user-select: auto !important;">일식</td>
<td style="user-select: auto !important;">532123</td>
<td style="user-select: auto !important;">80</td>
<td style="user-select: auto !important;">N</td>
<td style="user-select: auto !important;">서울특별시 강서구 가로공원로76가길</td>
<td style="user-select: auto !important;">02-135-1266</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;"><code style="user-select: auto !important;">REST_REVIEW</code> 테이블이 다음과 같을 때</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">REVIEW_ID</th>
<th style="user-select: auto !important;">REST_ID</th>
<th style="user-select: auto !important;">MEMBER_ID</th>
<th style="user-select: auto !important;">REVIEW_SCORE</th>
<th style="user-select: auto !important;">REVIEW_TEXT</th>
<th style="user-select: auto !important;">REVIEW_DATE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000065</td>
<td style="user-select: auto !important;">00028</td>
<td style="user-select: auto !important;"><code style="user-select: auto !important;">soobin97@naver.com</code></td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">부찌 국물에서 샤브샤브 맛이나고 깔끔</td>
<td style="user-select: auto !important;">2022-04-12</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000066</td>
<td style="user-select: auto !important;">00039</td>
<td style="user-select: auto !important;"><code style="user-select: auto !important;">yelin1130@gmail.com</code></td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">김치찌개 최곱니다.</td>
<td style="user-select: auto !important;">2022-02-12</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000067</td>
<td style="user-select: auto !important;">00028</td>
<td style="user-select: auto !important;"><code style="user-select: auto !important;">yelin1130@gmail.com</code></td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">햄이 많아서 좋아요</td>
<td style="user-select: auto !important;">2022-02-22</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000068</td>
<td style="user-select: auto !important;">00035</td>
<td style="user-select: auto !important;"><code style="user-select: auto !important;">ksyi0316@gmail.com</code></td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">숙성회가 끝내줍니다.</td>
<td style="user-select: auto !important;">2022-02-15</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000069</td>
<td style="user-select: auto !important;">00035</td>
<td style="user-select: auto !important;"><code style="user-select: auto !important;">yoonsy95@naver.com</code></td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">비린내가 전혀없어요.</td>
<td style="user-select: auto !important;">2022-04-16</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">REST_ID</th>
<th style="user-select: auto !important;">REST_NAME</th>
<th style="user-select: auto !important;">FOOD_TYPE</th>
<th style="user-select: auto !important;">FAVORITES</th>
<th style="user-select: auto !important;">ADDRESS</th>
<th style="user-select: auto !important;">SCORE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">00035</td>
<td style="user-select: auto !important;">삼촌식당</td>
<td style="user-select: auto !important;">일식</td>
<td style="user-select: auto !important;">80</td>
<td style="user-select: auto !important;">서울특별시 강서구 가로공원로76가길</td>
<td style="user-select: auto !important;">4.50</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges