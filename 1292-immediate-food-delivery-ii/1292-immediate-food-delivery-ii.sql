# Write your MySQL query statement below

select 
    round(count(*)/
    (select count(distinct customer_id) from Delivery)*100,2) as immediate_percentage
    from
(select min(order_date) as c1,min(customer_pref_delivery_date) as c2 from Delivery
group by customer_id) as tab where c1=c2;