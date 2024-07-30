-- 코드를 입력하세요
SELECT round(avg(DAILY_FEE)) AS AVERAGE_FEE
from CAR_RENTAL_COMPANY_CAR
where car_type = 'suv'
group by car_type;