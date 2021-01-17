use Northwind
select * from Categories
select * from Products

--Q1
select C.categoryName,P.quantityPerUnit
from Categories C,Products P
where C.CategoryID=P.ProductID

--Q2
select C.categoryName,P.quantityPerUnit,p.UnitPrice
from Categories c join Products p
ON  C.CategoryID=P.CategoryID
where UnitPrice>50

--q3 
select * from Employees
select *from EmployeeTerritories
select *from Territories

select Y.firstName,Y.lastname,E.TerritoryID,T.TerritoryID
from Employees y   join Employeeterritories E ON  Y.EmployeeID=E.EmployeeID  
  join territories T ON T.TerritoryID=E.TerritoryID

--q4 
select * from orders
select *from Customers

select O.orderid,O.employeeid,O.requireddate,C.contactName,C.city,C.phone
from Orders O left join Customers C ON c.CustomerID=o.CustomerID
where OrderID>10700
order by employeeid

--q5
select * from Products
select * from Categories
select * from Suppliers

select P.Productname,C.description,S.city
from Products p join Categories C ON P.CategoryID=C.CategoryID join Suppliers S 
ON P.SupplierID=S.SupplierID
where S.city in (select city 
from Suppliers where city='london' OR city='tokyo')


--q6 
select * from Customers
select * from orders


select C.companyName,O.Orderid
from customers c  join orders o ON o.CustomerID=c.CustomerID
order by o.CustomerID

--q7 ???

select * from employees
 select firstname,lastname



--q8
select * from  Products
select * from Suppliers

select P.quantityPerUnit,P.unitprice,P.Supplierid,p.productName
from Products p  join Suppliers S 
ON P.SupplierID=S.SupplierID


--q9
create table salesman(
 sales_id int,
 name varchar(50),
 city varchar(50),
 comission float
 )
 insert into salesman values(5001,'james hoog', 'new york',0.15),
							(5002, 'Nail knite', 'paries',0.13),
							(5005,'pit Alex', 'london',0.11),
							(5006,'mc lyon', 'paries',0.14),
							(5003, 'lauson hen','',0.12),
							(5007, 'paul adam', 'rome',0.13)
create table customer(
 customerid int,
cust_name varchar(50),
 city varchar(50),
 grade int ,
 salesman_id int
 )
 insert into customer values(3002,'nick rimando', 'new york',100,5001),
							(3005, 'graham zusi', 'california',200,5002),
							(3001,'brad guzan', 'london',0.11,5005),
							(3004,'fabian johns', 'paries',300,5006),
							(3007, 'brad davis','new york',200,5001),
							(3009, 'geoff camrero', 'berlin',100,5003),
							(3008, 'julian green', 'LOndon',300,5002)
 select * from customer
 select * from salesman

 select C.customerid,C.cust_name,C.city,C.grade,C.salesman_id,S.salesman_id,S.name,S.city,S.comission
from customer c  left join   salesman S 
ON c.salesman_ID=S.salesman_id

--q10

select C.cust_name,s.name,C.City,s.city
from customer c inner join salesman s ON c.city=s.city


--q11
 select * from customer
 select * from salesman

select C.cust_name,s.name
from customer c  join   salesman s ON c.city=s.city

--q12

create table orders1(
 ord_no int,
purch_amt float,
 ord_date int,
 customerid int ,
 salesman_id int
 )
 insert into orders1 values(70001,150.5,20121005 ,3005,5002),
							(70009, 270.65, 20120910,3001,5005),
							(70002,65.26, 20121005,3002,5001),
							(70004,110.5, 20120817,3009,5003),
							(70007,948.5,20120910,3005,5002),
							(70005, 2004.6,20120727,3007,5001),
							(70008, 5760, 20120910,3002,5001),
							(70010,1983.43, 20121010,3004,5006),
							(70003, 2480.4, 20121010,3009,5003),
							(70012,250.45, 20120627,3008,5002),
							(70011,75.29, 20120817,3003,5007),
							(70013, 3045.6,20120425,3002,5001)			
select * from orders1	
select *from Customers
--q13 
select a.ord_no,a.purch_amt,b.customeriD,b.city
from orders1 a inner join customers b on 
a.customeriD=a.customeriD
where a.purch_amt>=500
and a.purch_amt <=2000

--q14???
select * from orders1	
select *from Customers


select  ord_date
from orders1