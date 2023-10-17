select Prices.product_id,
case when sum(price*units) is null then 0
else round(sum(price*units)/sum(units),2) end as average_price 
from Prices 
left join UnitsSold
on
UnitsSold.product_id=Prices.product_id 
and  
purchase_date between start_date and end_date
group by product_id;