# Write your MySQL query statement below
select name,ifnull(sum(distance),0) as travelled_distance
from users u left join rides r on u.id=r.user_id
group by u.id,name
order by 2 desc,1;