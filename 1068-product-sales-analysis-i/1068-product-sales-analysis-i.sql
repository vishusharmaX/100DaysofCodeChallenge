# Write your MySQL query statement below
select product_name,year,price from sales  as s left join product  as p on p.product_id = s.product_id; 