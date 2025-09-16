# Write your MySQL query statement below
-- with dup as(
--     select email as duplicate from person p1, person p2 where p1.email=p2.email
-- )
delete p1 from person p1, person p2 where p1.email=p2.email and p1.id>p2.id; 

-- select * from person;
