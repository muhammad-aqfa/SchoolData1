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
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
use [Northwind]
-- =============================================
CREATE PROCEDURE <Procedure_Name, sysname, ProcedureName> 
	-- Add the parameters for the stored procedure here
	<@Param1, sysname, @p1> <Datatype_For_Param1, , int> = <Default_Value_For_Param1, , 0>, 
	<@Param2, sysname, @p2> <Datatype_For_Param2, , int> = <Default_Value_For_Param2, , 0>
AS
BEGIN
	-- SET NOCOUNT ON added to prevent extra result sets from
	-- interfering with SELECT statements.
	SET NOCOUNT ON;

    -- Insert statements for procedure here
	SELECT <@Param1, sysname, @p1>, <@Param2, sysname, @p2>
END
GO


--q5
alter PROCEDURE Prod_det 
	@productnum int
	AS
	BEGIN
	if @productnum=6
	   select p.productName,c.CategoryName
	   from Products p join Categories c 
	   on p.CategoryID=c.CategoryID
	   where p.ProductID=@productnum
	else
	  print 'the number is not 6'
	END
	GO
	exec Prod_det 6


--q6
alter PROCEDURE Cust_det  
	@code nvarchar(40)
	AS
	BEGIN
	 select country,address,companyName
	 from Customers  
	 where CustomerID=@code
	END
	GO
	exec Cust_det 'ALFKI'


--q7

alter PROCEDURE Cust_Orders    
	@code nvarchar(40),
	@totalorders int output
	AS
	BEGIN
	 select @totalorders=count(ordersid)
	 from Orders
	 where CustomerID=@code
	END
go
--run the proc 
	Declare @totalcount int 
	exec Cust_Orders  @totalorders=@totalcount out,@code='ALFKI'
	print @totalcount

