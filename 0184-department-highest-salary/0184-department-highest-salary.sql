/* Write your PL/SQL query statement below */
WITH cte AS
(SELECT d.name Department,e.name Employee,e.salary Salary,
RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC) as Rank
FROM employee e
JOIN department d
ON e.departmentid=d.id
GROUP BY d.name,e.name,e.salary)
SELECT Department,Employee,salary FROM cte WHERE Rank=1;