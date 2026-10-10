# Write your MySQL query statement below
with first_orders as (
    select * 
    from Delivery as t1
    where order_date = (
        select min(order_date) 
        from Delivery as t2
        where t1.customer_id = t2.customer_id
        group by customer_id

    )
), 

immediate_orders as (
    select count(*) as immediate_count
    from first_orders
    where order_date = customer_pref_delivery_date
)


select round(((select immediate_count from immediate_orders) /  (select count(*) from first_orders)) * 100 , 2) as immediate_percentage
