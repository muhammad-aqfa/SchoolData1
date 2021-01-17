--use[database]
----Q1
--Create Table Vehicles
--(
--	employeeID int not null,
--	employeeFirstName nvarchar(50) ,
--	employeeLastName nvarchar(50),
--	vehicleType nvarchar(20),
--	vehicleCost int,
--	vehicleColor nvarchar(20)
--)

--select * from Vehicles
--delete from Vehicles
--Q2
--insert into Vehicles values(1, N'אסתר', N'רוזנפלד', N'טויוטה', 10000, N'כחול'),
--							(2, N'יוגב', N'ישראלי', N'הונדה', 50000, N'ירוק'),
--							(3, N'מירב', N'ישראלי', N'פגו', 50000, N'אדום'),
--							(4, N'טל', N'גרין', N'פורד', 5000, N'לבן'),
--							(5, N'רבקה', N'כהן', N'פורד', 10000, N'לבן'),
--							(6, N'שרון', N'גרין', N'טויוטה', 10000, N'אפור')


--Q3
--select employeeFirstName,vehicleType,vehicleCost from Vehicles;


--Q1
--select employeeID,employeeFirstName+' '+employeeLastName,vehicleType
--from  Vehicles;

--Q2
--select   employeeFirstName+'  '+employeeLastName as 'full name'
--from  Vehicles
--where vehicleType like N'טו%'
--Q3

--select employeeFirstName+' '+employeeLastName as 'full name',vehicleCost
--from  Vehicles
--where vehicleColor like N'לבן%'

--q4
--Create Table table1
--(
--	employeeID int not null,
--	employeeFirstName nvarchar(50) ,
--	employeeLastName nvarchar(50),
--	vehicleType nvarchar(20),
--	vehicleCost int,
--	vehicleColor nvarchar(20)
--)

--insert into table1 values(1, N'אסתר', N'רוזנפלד', N'טויוטה',5000 ,N'כחול'),
--							(2, N'יוגב', N'ישראלי', NULL,50000, N'ירוק'),
--							(3, N'מירב', N'ישראלי', N'פגו',35000, N'אדום'),
--							(4, N'טל', N'גרין', N'פורד',10000 , N'לבן'),
--							(5, N'רבקה', N'כהן', N'פורד',10000 , N'לבן'),
--							(6, N'שרון', N'גרין', N'טויוטה', 25000 , N'אפור')

--select *  from table1

--q5

--select employeeFirstName
--from  Vehicles
--where  employeeFirstName like N'י%' OR vehicleType Like N'פו%'

--q6
--select * from  table1

--select employeeID,employeeFirstName,employeelastName,vehicleType,vehicleCost,vehicleColor
--from table1
--where vehicleType is NULL

--q7

--select employeeFirstName,vehicleType,vehicleCost
--from table1


--q1
--select employeeFirstName,vehicleCost
--from Vehicles
--where vehicleCost>15000

--q2

--select employeelastName
--from Vehicles
--where employeelastName like N'%פלד' OR employeelastName like  N'%רי%' 

--q3

     --ALTER TABLE   Vehicles
     --          ADD   total_price int;
--select * from Vehicles

--update Vehicles
--set total_price=vehicleCost+(vehicleCost*17/100)
--where employeeID >=1 and employeeID<=6 

--q4

--create table  VehiclesBackup
--(
--	employeeFirstName nvarchar(50) ,
--	employeeLastName nvarchar(50),
--	vehicleType nvarchar(20),
--	vehicleCost int,
--)

--insert into VehiclesBackup values( N'אסתר', N'רוזנפלד', N'טויוטה',5000 ),
--							( N'יוגב', N'ישראלי', N'הונדה',50000),
--							( N'מירב', N'ישראלי', N'פגו',35000),
--							( N'טל', N'גרין', N'פורד',10000 ),
--							( N'רבקה', N'כהן', N'פורד',10000),
--							( N'שרון', N'גרין', N'טויוטה', 25000 )


--select vehicleCost from VehiclesBackup 
-- where Vehiclecost >=10000


--q5
--select top(2) Vehiclecost 
--from Vehiclesbackup
--where Vehiclecost>=35000 and Vehiclecost<=50000

--q6
--update Vehiclesbackup
--set vehicleCost=vehicleCost+(vehicleCost*25/100)
--where employeeFirstName=N'יוגב' and employeelastName=N'ישראלי'

--q7
--update Vehiclesbackup
--set vehicleCost=47000
--where vehicleCost is NULL

--q8 ??
--update Vehiclesbackup
--set employeelastName=N'אסתר' 
--where employeefirstName=N'אסתר'

--??
--q9
