# Write your MySQL query statement below
Select customer_id,count(customer_id) as count_no_trans 
from 
(Select customer_id,transaction_id,Transactions.visit_id,amount
from visits 
left join Transactions 
on Visits.visit_id=Transactions.visit_id ) 
as tab 
where transaction_id is null 
group by customer_id;