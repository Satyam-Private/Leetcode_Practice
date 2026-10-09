# Write your MySQL query statement below
with user_with_most_rating as (
    select t2.name , t1.user_id , count(t1.user_id) as number_of_ratings 
    from MovieRating as t1
    join Users as t2
    on t1.user_id = t2.user_id
    group by t1.user_id
)

, movies_avg_ratings as (
    select t1.movie_id, t2.title , avg(t1.rating) as average_rating
    from MovieRating as t1
    join Movies as t2
    on t1.movie_id = t2.movie_id
    where month(t1.created_at) = 02 && year(t1.created_at) = 2020
    group by t1.movie_id
)
select min(name) as results
from user_with_most_rating
where number_of_ratings = (
    select max(number_of_ratings) from user_with_most_rating
)

union all 

select min(title) as results 
from movies_avg_ratings
where average_rating = (
    select max(average_rating) from movies_avg_ratings
)
