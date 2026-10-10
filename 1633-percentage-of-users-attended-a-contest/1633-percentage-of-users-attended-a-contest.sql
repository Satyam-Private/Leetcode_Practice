# Write your MySQL query statement below
WITH contest_count as (
    select contest_id , count(user_id) as total_users
    from Register 
    group by contest_id
)

select contest_id , 
round( (total_users / (select count(*) from Users) * 100), 2) as percentage
from contest_count
order by percentage desc , contest_id asc;