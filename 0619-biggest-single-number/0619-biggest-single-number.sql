# Write your MySQL query statement below
with freq_count as (
    select num , 
    COUNT(num) AS freq
    from MyNumbers
    group by num
)


select max(num) as num
from freq_count
where freq = 1; 