# Write your MySQL query statement below

select E.employee_id,E.name,R.reports_count,R.average_age from Employees E
inner join (select reports_to,round(avg(age)) as average_age,count(reports_to) as reports_count from Employees group by reports_to)as R on E.employee_id=R.reports_to order by employee_id asc;