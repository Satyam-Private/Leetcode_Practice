# Write your MySQL query statement below
with customer_with_count as (
    select customer_id , count(distinct product_key) as product_count
    from Customer
    group by customer_id
)

select customer_id 
from customer_with_count
where product_count >= (select count(product_key) from Product)