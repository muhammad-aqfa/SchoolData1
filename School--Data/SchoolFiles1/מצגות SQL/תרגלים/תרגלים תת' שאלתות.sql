use [Northwind]

select * from Products

--q1
select ProductName 
from Products 
group by ProductName ,UnitPrice
HAVING  UnitPrice< (select UnitPrice from Products where Productid in ('4'))

--q2
select ProductName 
from Products 
group by ProductName ,UnitPrice
HAVING  UnitPrice>(select UnitPrice from Products where ProductName='chai')

select * from Employees
--q3
select FirstName,HireDate
from Employees
group by FirstName,HireDate,EmployeeID
HAVING  EmployeeID>(select EmployeeID from Employees where EmployeeID=6)

--q4

select * from Products
select avg(UnitPrice) from Products

select p.ProductID,p.ProductName,p.UnitPrice
from Products p
where p.UnitPrice>(select avg(UnitPrice) from products) 

select * from Products
--q5
select avg(UnitsInStock) from Products

select count(p.productID) as number
from products p
where p.unitsinstock > (select avg(unitsinstock) from products)
--q6
select * from Products

select ProductName,UnitPrice
from Products
group by ProductName,UnitPrice
HAVING UnitPrice>=(select UnitPrice from Products where  ProductID in ('7'))

select * from Products
--q7
select ProductName,UnitPrice
from Products
group by ProductName,UnitPrice
HAVING UnitPrice!=(select UnitPrice from Products where  ProductID in ('7'))

select * from Products
--q8
select SupplierID,ProductName
from Products
group by SupplierID,UnitPrice,ProductName
having UnitPrice=(select max(UnitPrice) from Products)

--q9
select SupplierID
from Products
group by SupplierID,UnitsOnOrder
having UnitsOnOrder=(select max(UnitsOnOrder) from Products)

--q10
select * from Products

select ProductID,ProductName,UnitPrice
from Products
group by ProductID,ProductName,UnitPrice
HAVING UnitPrice>(select UnitPrice from Products where ProductName='Alice Mutton')

--q11
select UnitsOnOrder
from Products
group by SupplierID,UnitsOnOrder
having SupplierID=(select max(SupplierID) from Products)


select * from Customers
select * from Employees
--q12
select c.Address,c.city,c.postalcode,c.country,c.phone,c.fax,e.Address,e.city,e.postalcode,e.country,e.homephone
from Customers c inner join Employees e ON c.Region= e.Region
 group by c.Address,c.city,c.postalcode,c.country,c.phone,c.fax,e.Address,e.city,e.postalcode,e.country,e.homephone

 --q13
  --???????
 select * from Products


