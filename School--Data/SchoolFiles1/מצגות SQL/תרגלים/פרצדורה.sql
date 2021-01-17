-- ================================================
-- Template generated from Template Explorer using:
-- Create Procedure (New Menu).SQL
--
-- Use the Specify Values for Template Parameters 
-- command (Ctrl-Shift-M) to fill in the parameter 
-- values below.
--
-- This block of comments will not be included in
-- the definition of the procedure.
-- ================================================
USE [DATABASE1]
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
Create PROCEDURE Insertnewcity
	@cityid int,
	@cityname nvarchar(30)
AS
BEGIN
	if not exists (select city_ID from Cities where city_ID=@cityid and city_Name=@cityname)
		insert into Cities values (@cityid,@cityname);
	else
		print 'the cityname'+' '+@cityname +' '+'is already exsit';

END
GO
exec Insertnewcity 6600, N'חולון';


--q2
alter PROCEDURE Insertnewcity2
	@cityName nvarchar(30)
 AS
BEGIN
select c.city_Name, count(s.streetID) 
from Cities c 
inner join Streets2 s 
on c.city_ID = s.city_ID
where c.city_Name=@cityName
group by c.city_Name
END
GO
exec Insertnewcity2 N'תל אביב';
select * from Cities

--q3
alter PROCEDURE Insertnewcity3
	@cityName nvarchar(30)
 AS
BEGIN
select s.street_Name 
from Streets2 s 
inner join Cities c
on c.city_ID = s.city_ID
where c.city_Name = @cityName
END
GO
exec Insertnewcity3 N'מודיעין';

--q4
alter PROCEDURE Insertnewcity4
	@citynumber int
 AS
BEGIN
select  city_ID,city_Name from Cities where city_ID=@citynumber
END
GO
exec Insertnewcity4 7900;

--q5
alter PROCEDURE Insertnewcity5
	@cityid int
AS
BEGIN
select  c.city_ID,c.city_Name,s.streetID from Cities c inner join Streets2 s ON c.city_ID=s.city_ID  where c.city_ID=@cityid 
END
GO
exec Insertnewcity5 5000;



SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[Blocks](
	[City_ID] [int] NULL,
	[streetID] [int] NULL,
	[blockID] [int] NULL
) ON [PRIMARY]
GO
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 1, 2500)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 1, 2600)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 2, 2700)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 2, 2800)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 3, 2900)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (5000, 3, 3000)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 11, 3500)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 11, 3600)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 12, 3700)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 12, 3800)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 13, 3900)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 13, 4000)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 14, 4100)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 14, 4101)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 15, 4102)
INSERT [dbo].[Blocks] ([City_ID], [streetID], [blockID]) VALUES (1200, 15, 4103)


--q7
alter PROCEDURE Insertnewcity6
@cityName nvarchar(30)
AS
BEGIN
select  city_ID,city_Name from Cities  where city_Name=@cityName 
END
GO
exec Insertnewcity6 N'אשדוד';



--q8
alter PROCEDURE Insertnewcity7
@cityName nvarchar(30)
AS
BEGIN
select  c.city_ID,c.city_Name,b.blockID from Cities c  FULL join Blocks b ON c.city_ID = b.City_ID where c.city_Name=@cityName 
order by B.blockID
END
GO
exec Insertnewcity7 N'ירושלים';


--q9
alter PROCEDURE Insertnewcity8
@cityName nvarchar(30)
AS
BEGIN
select  c.city_ID,c.city_Name,sum(b.blockID)  
from Cities c  inner join Blocks b ON c.city_ID = b.City_ID 
group by c.city_Name,c.city_ID
having c.city_Name=@cityName
END
GO
exec Insertnewcity8 N'תל אביב';

--q10
--א
create PROCEDURE Insertnewcity9
 @City_ID int NULL,
	@streetID int NULL,
	@blockID int NULL,
	@CityName nvarchar(50) NULL,
	@blockstatus nvarchar(30)
AS
BEGIN
IF OBJECT_ID('Newtable') IS NOT NULL
	DROP TABLE Newtable; 
else
	begin
		CREATE TABLE [dbo].[Newtable](
		[City_ID] [int] NULL,
		[streetID] [int] NULL,
		[blockID] [int] NULL,
		[CityName]nvarchar(50) NULL,
		[blockstatus] nvarchar(30)
		);
		insert INTO Newtable (c.City_ID,CityName,s.streetID)
		SELECT c.City_ID, c.city_Name,s.streetID
		FROM Cities c INNER JOIN Streets2 s 
		ON c.city_ID =  s.city_ID 
	end
END
GO
