# Write your MySQL query statement below
select user_id,round(avg(confirm_rate),2) as confirmation_rate 
from(
    select user_id,
    case when action='confirmed' then 1
    else 0 end as confirm_rate
    from (
        select s.user_id,action from Signups s
        left join Confirmations c
        on s.user_id=c.user_id) as tab
    )as tab1 
group by user_id;