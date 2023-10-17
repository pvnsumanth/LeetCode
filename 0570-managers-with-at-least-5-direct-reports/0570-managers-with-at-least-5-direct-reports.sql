# Write your MySQL query statement below
Select name from Employee
where id 
IN 
(Select managerId from Employee group by managerId Having count(*)>=5);