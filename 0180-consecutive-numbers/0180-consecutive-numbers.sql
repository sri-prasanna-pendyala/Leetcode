# Write your MySQL query statement below
-- using self join type
-- select L1.num as ConsecutiveNums from logs L1, logs L2 , logs L3
-- where L1.num=L2.num and
-- L2.id=L1.id+1 and
-- L3.id=L2.id+1
-- group by L1.num

-- using lead and lag
select distinct num as ConsecutiveNums from (
    select num,
    lag(num) over(order by id) as lagg,
    lead(num) over(order by id) as leadd
    from logs
) as sub
where num=lagg and num=leadd;