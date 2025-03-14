/* Write your PL/SQL query statement below */
with cte as
(select s.name as name from
salesperson s 
left join 
orders o
on s.sales_id=o.sales_id
join 
company c
on o.com_id=c.com_id
where o.com_id=(select com_id from company where name='RED'))

select name from salesperson where name not in (select * from cte);