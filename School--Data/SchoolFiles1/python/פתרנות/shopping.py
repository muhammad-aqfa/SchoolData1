market={"tomatoes":3,"melons":4,"banana":6,"XL":7,"apple":5}
Shopping_Cart={}
my_list={}
for i in range (0,len(market)):
    product=input("please enter product:")
    quantity=input("Please enter quantity:")
    if product not in market.keys():
       print("Sorry We dont have this product ")
    else :
      if product in Shopping_Cart.keys():
         my_list[product]=Shopping_Cart[product]   
         Shopping_Cart[product]=int(quantity)+int(my_list[product])
      else:
         Shopping_Cart[product]=quantity
               
print(Shopping_Cart)
print("your bill is")
for product  in Shopping_Cart.keys():
 if product in market.keys():
     price=int(market[product])* int(Shopping_Cart[product])
     total=total+price
     print(str(Shopping_Cart[product])+" " + str(product) +" @ " + str(market[product]) + " shekels " + " = " + str(price))     
print("total = ",total)   


