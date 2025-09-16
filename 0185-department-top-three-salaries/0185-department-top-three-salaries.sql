/* Write your PL/SQL query statement below */
WITH cte AS
(SELECT d.name Department,e.name Employee,e.salary Salary,
DENSE_RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC) AS rank
FROM employee e
JOIN department d
ON e.departmentid=d.id)
SELECT Department,Employee,Salary from cte where rank<4;
