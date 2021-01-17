USE [DATABASE1]
--q1
Create Table Vehicles
(
    employeenum int,
	employeeFirstName nvarchar(50) ,
	employeeLastName nvarchar(50),
	vehicleType nvarchar(20),
	vehicleCost int,
	vehicleColor nvarchar(20)
)

select * from Vehicles
--Q2
insert into Vehicles values(325, N'אסתר', N'רוזנפלד', N'טויוטה', 10000, N'כחול'),
							(254, N'יוגב', N'ישראלי', N'הונדה', 50000, N'ירוק'),
							(458, N'מירב', N'ישראלי', N'פגו', 50000, N'אדום'),
							(658, N'טל', N'גרין', N'פורד', 5000, N'לבן'),
							(369, N'רבקה', N'כהן', N'פורד', 10000, N'לבן'),
							(1000, N'שרון', N'גרין', N'טויוטה', 10000, N'אפור')
create table employee(
 employeenum int,
 Debtname nvarchar(50),
 cityName nvarchar(50)
  )
 insert into employee values(325,N'שיווק',N'תל אביב'),
							(254,N'מכירות',N'רישון ליצין'),
							(458,N'שיווק',N'תל אביב'),
							(658,N'מכירות',N'חולון'),
							(369,N'אחזקה',N'רישון ליציון'),
							(1000,N'אחזקה',N'חולון')
--q3	
select v.employeeFirstName,v.employeeLastName,e.Debtname,e.cityName
from Vehicles v  inner join  employee e ON e.employeenum = v.employeenum
where e.Debtname=N'שיווק' and e.cityName=N'תל אביב'

--q4 
select v.employeeFirstName,v.employeeLastName,e.cityName
from Vehicles v  inner join employee e  ON v.employeenum = e.employeenum
where e.cityName=N'רישון ליציון'

--q5
select e.cityname,v.employeenum
from employee e join Vehicles v ON v.employeenum = e.employeenum


--q6
select v.employeenum,e.Debtname
from Vehicles v  inner join employee e  ON v.employeenum = e.employeenum
order by e.Debtname

--q7
select  v.employeenum,v.employeeFirstName,v.employeeLastName,e.cityName
from employee e inner join Vehicles v ON v.employeenum = e.employeenum
where v.vehicleType=N'טויוטה'



