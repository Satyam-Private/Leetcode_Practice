# Write your MySQL query statement below

with buy_prices as (
    select * , sum(price) as total_buy_price
    from Stocks
    where operation = 'Buy'
    group by stock_name
) ,

sell_prices as (
    select * , sum(price) as total_sell_price
    from Stocks
    where operation = 'Sell'
    group by stock_name
)

select t1.stock_name , (t2.total_sell_price - t1.total_buy_price) as capital_gain_loss
from buy_prices as t1
join sell_prices as t2
on t1.stock_name = t2.stock_name
