# Write your MySQL query statement below

select t1.firstName, t1.lastName, t2.city, t2.state
from Person as t1
LEFT JOIN Address as t2
ON t1.personId = t2.personId; 