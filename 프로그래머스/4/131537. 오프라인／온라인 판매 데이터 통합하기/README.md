# [level 4] 오프라인/온라인 판매 데이터 통합하기 - 131537 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131537) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 07월 30일 19:50:44

### 문제 설명

<p style="user-select: auto !important;">다음은 어느 의류 쇼핑몰의 온라인 상품 판매 정보를 담은 <code style="user-select: auto !important;">ONLINE_SALE</code> 테이블과 오프라인 상품 판매 정보를 담은 <code style="user-select: auto !important;">OFFLINE_SALE</code> 테이블 입니다. <code style="user-select: auto !important;">ONLINE_SALE</code> 테이블은 아래와 같은 구조로 되어있으며 <code style="user-select: auto !important;">ONLINE_SALE_ID</code>, <code style="user-select: auto !important;">USER_ID</code>, <code style="user-select: auto !important;">PRODUCT_ID</code>, <code style="user-select: auto !important;">SALES_AMOUNT</code>, <code style="user-select: auto !important;">SALES_DATE</code>는 각각 온라인 상품 판매 ID, 회원 ID, 상품 ID, 판매량, 판매일을 나타냅니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">ONLINE_SALE_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">USER_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">PRODUCT_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">SALES_AMOUNT</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">SALES_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">동일한 날짜, 회원 ID, 상품 ID 조합에 대해서는 하나의 판매 데이터만 존재합니다.</p>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">OFFLINE_SALE</code> 테이블은 아래와 같은 구조로 되어있으며 <code style="user-select: auto !important;">OFFLINE_SALE_ID</code>, <code style="user-select: auto !important;">PRODUCT_ID</code>, <code style="user-select: auto !important;">SALES_AMOUNT</code>, <code style="user-select: auto !important;">SALES_DATE</code>는 각각 오프라인 상품 판매 ID, 상품 ID, 판매량, 판매일을 나타냅니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">OFFLINE_SALE_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">PRODUCT_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">SALES_AMOUNT</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">SALES_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">동일한 날짜, 상품 ID 조합에 대해서는 하나의 판매 데이터만 존재합니다.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">ONLINE_SALE</code> 테이블과 <code style="user-select: auto !important;">OFFLINE_SALE</code> 테이블에서 2022년 3월의 오프라인/온라인 상품 판매 데이터의 판매 날짜, 상품ID, 유저ID, 판매량을 출력하는 SQL문을 작성해주세요. <code style="user-select: auto !important;">OFFLINE_SALE</code> 테이블의 판매 데이터의 <code style="user-select: auto !important;">USER_ID</code> 값은 NULL 로 표시해주세요. 결과는 판매일을 기준으로 오름차순 정렬해주시고 판매일이 같다면 상품 ID를 기준으로 오름차순, 상품ID까지 같다면 유저 ID를 기준으로 오름차순 정렬해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;">예를 들어 <code style="user-select: auto !important;">ONLINE_SALE</code> 테이블이 다음과 같고</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">ONLINE_SALE_ID</th>
<th style="user-select: auto !important;">USER_ID</th>
<th style="user-select: auto !important;">PRODUCT_ID</th>
<th style="user-select: auto !important;">SALES_AMOUNT</th>
<th style="user-select: auto !important;">SALES_DATE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2022-02-25</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-03-01</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2022-03-02</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">2022-03-02</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-03-03</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">7</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-04-06</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;"><code style="user-select: auto !important;">OFFLINE_SALE</code> 테이블이 다음과 같다면</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">OFFLINE_SALE_ID</th>
<th style="user-select: auto !important;">PRODUCT_ID</th>
<th style="user-select: auto !important;">SALES_AMOUNT</th>
<th style="user-select: auto !important;">SALES_DATE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2022-02-21</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2022-03-01</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">2022-03-01</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-03-01</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-03-03</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022-04-01</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">각 테이블의 2022년 3월의 판매 데이터를 합쳐서, 정렬한 결과는 다음과 같아야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">SALES_DATE</th>
<th style="user-select: auto !important;">PRODUCT_ID</th>
<th style="user-select: auto !important;">USER_ID</th>
<th style="user-select: auto !important;">SALES_AMOUNT</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-01</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">2</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-01</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-01</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">1</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-01</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">1</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-02</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-02</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-03</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">1</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2022-03-03</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">1</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges