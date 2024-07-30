# [level 1] 조건에 부합하는 중고거래 댓글 조회하기 - 164673 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/164673) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 07월 30일 19:17:52

### 문제 설명

<p style="user-select: auto !important;">다음은 중고거래 게시판 정보를 담은 <code style="user-select: auto !important;">USED_GOODS_BOARD</code> 테이블과 중고거래 게시판 첨부파일 정보를 담은 <code style="user-select: auto !important;">USED_GOODS_REPLY</code> 테이블입니다. <code style="user-select: auto !important;">USED_GOODS_BOARD</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">BOARD_ID</code>, <code style="user-select: auto !important;">WRITER_ID</code>, <code style="user-select: auto !important;">TITLE</code>, <code style="user-select: auto !important;">CONTENTS</code>, <code style="user-select: auto !important;">PRICE</code>, <code style="user-select: auto !important;">CREATED_DATE</code>, <code style="user-select: auto !important;">STATUS</code>, <code style="user-select: auto !important;">VIEWS</code>은 게시글 ID, 작성자 ID, 게시글 제목, 게시글 내용, 가격, 작성일, 거래상태, 조회수를 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">BOARD_ID</td>
<td style="user-select: auto !important;">VARCHAR(5)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">WRITER_ID</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">TITLE</td>
<td style="user-select: auto !important;">VARCHAR(100)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">CONTENTS</td>
<td style="user-select: auto !important;">VARCHAR(1000)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">PRICE</td>
<td style="user-select: auto !important;">NUMBER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">CREATED_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">STATUS</td>
<td style="user-select: auto !important;">VARCHAR(10)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">VIEWS</td>
<td style="user-select: auto !important;">NUMBER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;"><code style="user-select: auto !important;">USED_GOODS_REPLY</code> 테이블은 다음과 같으며 <code style="user-select: auto !important;">REPLY_ID</code>, <code style="user-select: auto !important;">BOARD_ID</code>, <code style="user-select: auto !important;">WRITER_ID</code>, <code style="user-select: auto !important;">CONTENTS</code>, <code style="user-select: auto !important;">CREATED_DATE</code>는 각각 댓글 ID, 게시글 ID, 작성자 ID, 댓글 내용, 작성일을 의미합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">REPLY_ID</td>
<td style="user-select: auto !important;">VARCHAR(10)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">BOARD_ID</td>
<td style="user-select: auto !important;">VARCHAR(5)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">WRITER_ID</td>
<td style="user-select: auto !important;">VARCHAR(50)</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">CONTENTS</td>
<td style="user-select: auto !important;">VARCHAR(1000)</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">CREATED_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">USED_GOODS_BOARD</code>와 <code style="user-select: auto !important;">USED_GOODS_REPLY</code> 테이블에서 2022년 10월에 작성된 게시글 제목, 게시글  ID, 댓글 ID, 댓글 작성자 ID, 댓글 내용, 댓글 작성일을 조회하는 SQL문을 작성해주세요. 결과는 댓글 작성일을 기준으로 오름차순 정렬해주시고, 댓글 작성일이 같다면 게시글  제목을 기준으로 오름차순 정렬해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">USED_GOODS_BOARD</code> 테이블이 다음과 같고</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">BOARD_ID</th>
<th style="user-select: auto !important;">WRITER_ID</th>
<th style="user-select: auto !important;">TITLE</th>
<th style="user-select: auto !important;">CONTENTS</th>
<th style="user-select: auto !important;">PRICE</th>
<th style="user-select: auto !important;">CREATED_DATE</th>
<th style="user-select: auto !important;">STATUS</th>
<th style="user-select: auto !important;">VIEWS</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">B0001</td>
<td style="user-select: auto !important;">kwag98</td>
<td style="user-select: auto !important;">반려견 배변패드 팝니다</td>
<td style="user-select: auto !important;">정말 저렴히 판매합니다. 전부 미개봉 새상품입니다.</td>
<td style="user-select: auto !important;">12000</td>
<td style="user-select: auto !important;">2022-10-01</td>
<td style="user-select: auto !important;">DONE</td>
<td style="user-select: auto !important;">250</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">B0002</td>
<td style="user-select: auto !important;">lee871201</td>
<td style="user-select: auto !important;">국내산 볶음참깨</td>
<td style="user-select: auto !important;">직접 농사지은 참깨입니다.</td>
<td style="user-select: auto !important;">3000</td>
<td style="user-select: auto !important;">2022-10-02</td>
<td style="user-select: auto !important;">DONE</td>
<td style="user-select: auto !important;">121</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">B0003</td>
<td style="user-select: auto !important;">goung12</td>
<td style="user-select: auto !important;">배드민턴 라켓</td>
<td style="user-select: auto !important;">사놓고 방치만 해서 팝니다.</td>
<td style="user-select: auto !important;">9000</td>
<td style="user-select: auto !important;">2022-10-02</td>
<td style="user-select: auto !important;">SALE</td>
<td style="user-select: auto !important;">212</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">B0004</td>
<td style="user-select: auto !important;">keel1990</td>
<td style="user-select: auto !important;">디올 귀걸이</td>
<td style="user-select: auto !important;">신세계강남점에서 구입. 정품 아닐시 백퍼센트 환불</td>
<td style="user-select: auto !important;">130000</td>
<td style="user-select: auto !important;">2022-10-02</td>
<td style="user-select: auto !important;">SALE</td>
<td style="user-select: auto !important;">199</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">B0005</td>
<td style="user-select: auto !important;">haphli01</td>
<td style="user-select: auto !important;">스팸클래식 팔아요</td>
<td style="user-select: auto !important;">유통기한 2025년까지에요</td>
<td style="user-select: auto !important;">10000</td>
<td style="user-select: auto !important;">2022-10-02</td>
<td style="user-select: auto !important;">SALE</td>
<td style="user-select: auto !important;">121</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;"><code style="user-select: auto !important;">USED_GOODS_REPLY</code> 테이블이 다음과 같을 때</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">REPLY_ID</th>
<th style="user-select: auto !important;">BOARD_ID</th>
<th style="user-select: auto !important;">WRITER_ID</th>
<th style="user-select: auto !important;">CONTENTS</th>
<th style="user-select: auto !important;">CREATED_DATE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000001</td>
<td style="user-select: auto !important;">B0001</td>
<td style="user-select: auto !important;">s2s2123</td>
<td style="user-select: auto !important;">구매하겠습니다. 쪽지 드립니다.</td>
<td style="user-select: auto !important;">2022-10-02</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000002</td>
<td style="user-select: auto !important;">B0002</td>
<td style="user-select: auto !important;">hoho1112</td>
<td style="user-select: auto !important;">쪽지 주세요.</td>
<td style="user-select: auto !important;">2022-10-03</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000003</td>
<td style="user-select: auto !important;">B0006</td>
<td style="user-select: auto !important;">hwahwa2</td>
<td style="user-select: auto !important;">삽니다. 연락주세요.</td>
<td style="user-select: auto !important;">2022-10-03</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000004</td>
<td style="user-select: auto !important;">B0007</td>
<td style="user-select: auto !important;">hong02</td>
<td style="user-select: auto !important;">예약중</td>
<td style="user-select: auto !important;">2022-10-06</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">R000000005</td>
<td style="user-select: auto !important;">B0009</td>
<td style="user-select: auto !important;">hanju23</td>
<td style="user-select: auto !important;">구매완료</td>
<td style="user-select: auto !important;">2022-10-07</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">TITLE</th>
<th style="user-select: auto !important;">BOARD_ID</th>
<th style="user-select: auto !important;">REPLY_ID</th>
<th style="user-select: auto !important;">WRITER_ID</th>
<th style="user-select: auto !important;">CONTENTS</th>
<th style="user-select: auto !important;">CREATED_DATE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">반려견 배변패드 팝니다</td>
<td style="user-select: auto !important;">B0001</td>
<td style="user-select: auto !important;">R000000001</td>
<td style="user-select: auto !important;">s2s2123</td>
<td style="user-select: auto !important;">구매하겠습니다. 쪽지 드립니다.</td>
<td style="user-select: auto !important;">2022-10-02</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">국내산 볶음참깨</td>
<td style="user-select: auto !important;">B0002</td>
<td style="user-select: auto !important;">R000000002</td>
<td style="user-select: auto !important;">hoho1112</td>
<td style="user-select: auto !important;">쪽지 주세요.</td>
<td style="user-select: auto !important;">2022-10-03</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">주의사항</h5>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">CREATED_DATE</code>의 포맷이 예시의 포맷과 일치해야 정답처리 됩니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges