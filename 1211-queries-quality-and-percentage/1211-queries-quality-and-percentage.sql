# Write your MySQL query statement below
select t1.query_name, 
round( avg(t1.rating / t1.position) , 2) as quality , 
round( ((select count(*) from Queries as t2 where rating < 3 and t1.query_name = t2.query_name) / (select count(*) from Queries as t3 where t3.query_name = t1.query_name)) * 100, 2) as poor_query_percentage
from Queries as t1
group by t1.query_name