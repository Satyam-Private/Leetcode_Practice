SELECT *,
       CASE
           WHEN GREATEST(x, y, z)
                < LEAST(x, y, z)
                  + GREATEST(
                      LEAST(x, y),
                      LEAST(y, z),
                      LEAST(x, z)
                    )
           THEN 'Yes'
           ELSE 'No'
       END AS triangle
FROM Triangle;