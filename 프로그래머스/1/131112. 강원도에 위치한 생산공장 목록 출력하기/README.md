# [level 1] 강원도에 위치한 생산공장 목록 출력하기 - 131112 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131112) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 07월 30일 19:20:39

### 문제 설명

<p style="user-select: auto !important;">다음은 식품공장의 정보를 담은 <code style="user-select: auto !important;">FOOD_FACTORY</code> 테이블입니다. <code style="user-select: auto !important;">FOOD_FACTORY</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">FACTORY_ID</code>, <code style="user-select: auto !important;">FACTORY_NAME</code>, <code style="user-select: auto !important;">ADDRESS</code>, <code style="user-select: auto !important;">TLNO</code>는 각각 공장 ID, 공장 이름, 주소, 전화번호를 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FACTORY_ID</td>
<td style="user-select: auto !important;">VARCHAR(10)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FACTORY_NAME</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">ADDRESS</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">TLNO</td>
<td style="user-select: auto !important;">VARCHAR(20)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">FOOD_FACTORY</code> 테이블에서 강원도에 위치한 식품공장의 공장 ID, 공장 이름, 주소를 조회하는 SQL문을 작성해주세요. 이때 결과는 공장 ID를 기준으로 오름차순 정렬해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">FOOD_FACTORY</code> 테이블이 다음과 같을 때</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">FACTORY_ID</th>
<th style="user-select: auto !important;">FACTORY_NAME</th>
<th style="user-select: auto !important;">ADDRESS</th>
<th style="user-select: auto !important;">TLNO</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT19980003</td>
<td style="user-select: auto !important;">(주)맛있는라면</td>
<td style="user-select: auto !important;">강원도 정선군 남면 칠현로 679</td>
<td style="user-select: auto !important;">033-431-3122</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT19980004</td>
<td style="user-select: auto !important;">(주)맛있는기름</td>
<td style="user-select: auto !important;">경기도 평택시 포승읍 포승공단순환로 245</td>
<td style="user-select: auto !important;">031-651-2410</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20010001</td>
<td style="user-select: auto !important;">(주)맛있는소스</td>
<td style="user-select: auto !important;">경상북도 구미시 1공단로7길 58-11</td>
<td style="user-select: auto !important;">054-231-2121</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20010002</td>
<td style="user-select: auto !important;">(주)맛있는통조림</td>
<td style="user-select: auto !important;">전라남도 영암군 미암면 곤미현로 1336</td>
<td style="user-select: auto !important;">061-341-5210</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100001</td>
<td style="user-select: auto !important;">(주)맛있는차</td>
<td style="user-select: auto !important;">전라남도 장성군 서삼면 장산리 233-1번지</td>
<td style="user-select: auto !important;">061-661-1420</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100002</td>
<td style="user-select: auto !important;">(주)맛있는김치</td>
<td style="user-select: auto !important;">충청남도 아산시 탕정면 탕정면로 485</td>
<td style="user-select: auto !important;">041-241-5421</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100003</td>
<td style="user-select: auto !important;">(주)맛있는음료</td>
<td style="user-select: auto !important;">강원도 원주시 문막읍 문막공단길 154</td>
<td style="user-select: auto !important;">033-232-7630</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100004</td>
<td style="user-select: auto !important;">(주)맛있는국</td>
<td style="user-select: auto !important;">강원도 평창군 봉평면 진조길 227-35</td>
<td style="user-select: auto !important;">033-323-6640</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20110001</td>
<td style="user-select: auto !important;">(주)맛있는밥</td>
<td style="user-select: auto !important;">경기도 화성시 팔탄면 가재리 34번지</td>
<td style="user-select: auto !important;">031-661-1532</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20110002</td>
<td style="user-select: auto !important;">(주)맛있는과자</td>
<td style="user-select: auto !important;">광주광역시 북구 하서로 222</td>
<td style="user-select: auto !important;">062-211-7759</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">FACTORY_ID</th>
<th style="user-select: auto !important;">FACTORY_NAME</th>
<th style="user-select: auto !important;">ADDRESS</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT19980003</td>
<td style="user-select: auto !important;">(주)맛있는라면</td>
<td style="user-select: auto !important;">강원도 정선군 남면 칠현로 679</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100003</td>
<td style="user-select: auto !important;">(주)맛있는음료</td>
<td style="user-select: auto !important;">강원도 원주시 문막읍 문막공단길 154</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">FT20100004</td>
<td style="user-select: auto !important;">(주)맛있는국</td>
<td style="user-select: auto !important;">강원도 평창군 봉평면 진조길 227-35</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges