WITH total_confirmedtransactions AS (
    SELECT
        t1.user_id,
        COUNT(CASE WHEN t2.action = 'confirmed' THEN 1 END)
            AS confirmedTransactions
    FROM Signups AS t1
    LEFT JOIN Confirmations AS t2
        ON t1.user_id = t2.user_id
    GROUP BY t1.user_id
),
total_transaction AS (
    SELECT
        t1.user_id,
        COUNT(t2.action) AS totalTransactions
    FROM Signups AS t1
    LEFT JOIN Confirmations AS t2
        ON t1.user_id = t2.user_id
    GROUP BY t1.user_id
)
SELECT
    t1.user_id,
    COALESCE(
        ROUND(
            t1.confirmedTransactions / NULLIF(t2.totalTransactions, 0),
            2
        ),
        0
    ) AS confirmation_rate
FROM total_confirmedtransactions AS t1
JOIN total_transaction AS t2
    ON t1.user_id = t2.user_id;