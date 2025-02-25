# Write your MySQL query statement below
/* Write your PL/SQL query statement below */
WITH cte AS
(SELECT turn,person_id ID,person_name,weight,
SUM(weight) OVER(ORDER BY turn) AS Total_Weight
FROM queue)
SELECT person_name FROM cte WHERE Total_Weight<=1000 ORDER BY Total_Weight DESC
LIMIT 1;
