# Write your MySQL query statement below
with rank_salary as (
    select t1.* , t2.name as dept_name , 
    dense_rank() over(partition by t1.departmentId order by t1.salary desc) as rnk
    from Employee as t1 
    join Department as t2
    on t1.departmentId = t2.id
)

select dept_name as 'Department' , name as 'Employee' , salary 
from rank_salary
where rnk <= 3;