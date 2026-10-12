WITH possible_price AS (
    SELECT product_id, new_price 
    FROM Products
    WHERE (product_id, change_date) IN (
        SELECT product_id, MAX(change_date)
        FROM Products
        WHERE change_date <= '2019-08-16'
        GROUP BY product_id
    )
), 
all_products AS (
    SELECT DISTINCT product_id 
    FROM Products
)

SELECT t1.product_id, IFNULL(t2.new_price, 10) AS price
FROM all_products AS t1 
LEFT JOIN possible_price AS t2
ON t1.product_id = t2.product_id;