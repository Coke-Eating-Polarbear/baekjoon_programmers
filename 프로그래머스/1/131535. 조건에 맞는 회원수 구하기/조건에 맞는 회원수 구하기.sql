-- 코드를 입력하세요
SELECT count(USER_ID) AS USERS
from USER_INFO 
where (age >= 20 and age <= 29) and JOINED like '2021%'
