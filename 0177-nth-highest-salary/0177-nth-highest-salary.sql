CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
        with ranked_salaries as (
            select *, DENSE_RANK() over(order by salary desc) as rnk
            from Employee
        )

        select salary as nthSalary 
        from ranked_salaries 
        where rnk = N 
        order by id
        limit 1
  );
END