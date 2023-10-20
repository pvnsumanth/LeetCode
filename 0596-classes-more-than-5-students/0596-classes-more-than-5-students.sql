# Write your MySQL query statement below

select class from 
(select class,count(class) as cnt from Courses group by class)as tab where cnt>=5;