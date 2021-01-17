use Northwind

--q2
select count(o.OrderDate)as 'OrderNumAmt' ,day(o.OrderDate)as 'OrderDay',month(o.OrderDate)as 'OrderMonth',Year(o.OrderDate)as 'OrderYear'
,count(c.salesman_id) as 'salesManAmt' 
from orders o inner join customer c ON c.city=o.ShipCity
group by (o.OrderDate),c.salesman_id
having Year(o.OrderDate)=1996

--q3

select Country,count(SupplierID) 
from Suppliers
group by Country

--q4

select o.Customerid,s.name,s.comission 
from Orders o inner join salesman s ON o.ShipCity=s.city
group by o.Customerid,s.name,s.comission 
