# Write your MySQL query statement below
select product_id,
case when sum(prod) is null then 0
else round(sum(prod)/sum(units),2) end as average_price
from
    (select Prices.product_id,price,units,price*units as prod 
    from Prices 
    left join UnitsSold
    on
    UnitsSold.product_id=Prices.product_id 
    and  
    purchase_date between start_date and end_date) 
as tab group by product_id;