use [Northwind]
--q1
select * from [Order Details]

--q2
select unitprice from [Order Details]

select cast(unitprice as int)
from  [Order Details]

--q3 
select *from EMPLOYEES 

select count(*) as FirstName 
from EMPLOYEES 

--q4
select *from ORDERS

ALTER TABLE  orders
               ADD   Duration int;

 select orderdate,shippedDate 
 from  orders

SELECT orderdate,shippedDate ,
 DATEDIFF (DD,orderdate,shippedDate) AS 'Duration' 
 FROM orders

--q5
 --??


 --q6

 create table  Personal_Details
 (
  rowID int,
  id int,
  fullName varchar(50),
  addressName varchar(50),
  homeNum int,
  cityName varchar(50),
  age int
 )
 insert into Personal_Details values(1,22021562, 'Gadi Rosen', 'Nahal zoher',66,'modiin',50),
							(2,12651865, 'Dina Rosen', 'Nahal zoher',66,'modiin',47),
							(3,217529577, 'Chagai Rosen', 'Nahal zoher',66,'modiin',8),
							(4,204094619, 'Doron Rosen', 'Menachem Begin',40,'petah Tikva',26),
							(5,204612899, 'Omer Rosen', 'Yehuda hamaccabi',15,'Tel aviv',24)
--q6

select SUBSTRING(fullName,1,charindex(' ',fullName)) AS 'First name'
from  Personal_Details

select SUBSTRING(fullName,charindex(' ',fullName),len(fullname)) AS 'last name'
from  Personal_Details
--q7

select cityname,Replace (cityname,' ', '_')  
 from  Personal_Details
 where cityName='petah tikva'

 --q8
 select * from orders


 select sum(employeeid) as 'total employee id'
 from orders


 --q9
 select top(9) customerid,companyName,contactName,ContactTitle,address,city,region,postalcode,country,phone,fax
 from Customers

 --q10
 select firstName+' '+lastname as 'fullName',BirthDate
 from Employees
 where  Year(birthdate) ='1963'
             