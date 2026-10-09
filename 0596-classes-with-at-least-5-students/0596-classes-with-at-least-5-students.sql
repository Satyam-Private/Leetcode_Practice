# Write your MySQL query statement below
with class_freq as (
    select class , count(class) as freq
    from Courses
    group by class
)

select class 
from class_freq
where freq >=5