-- 코드를 입력하세요
SELECT ANIMAL_TYPE, COUNT(ANIMAL_TYPE) AS count
from ANIMAL_INS 
where ANIMAL_TYPE = 'Dog' or ANIMAL_TYPE = 'Cat'
group by ANIMAL_TYPE
order by ANIMAL_TYPE