# Write your MySQL query statement below
with turns as (
    select turn , person_id , person_name , weight, 
     sum(weight) over(order by turn asc) as total_weight
     from Queue

),
eligible_persons as (
    select *
    from turns
    where total_weight <= 1000
)
select person_name 
from eligible_persons
where total_weight = (select max(total_weight) from eligible_persons);