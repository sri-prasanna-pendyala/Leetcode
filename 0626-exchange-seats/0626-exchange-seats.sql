/* Write your PL/SQL query statement below */
select id,
case
    when mod(id,2)=1 then lead(student,1,student) over(order by id) 
    else lag(student,1,student) over(order by id) 
end as student
from seat;