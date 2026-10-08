# Write your MySQL query statement below
with rank_scores as (
    select * , DENSE_RANK() over(order by score desc) as rnk
    from Scores
)

select score , rnk as 'rank'
from rank_scores