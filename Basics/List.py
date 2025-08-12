shop=["pen","book","eraser",2,3,5.6]
print(shop);
for item in shop:
    print(item)
shop.append("curd")
print(shop)
shop.insert(2,"noodles")
print(shop)
shop.insert(2,"noodles")
shop.insert(2,"noodles")
shop.insert(2,"noodles")
print(shop)
a=shop.count("noodles")
print(a)
a=[25,5.6,6,12,87,90,3.14159,19]
print(a)
a.sort()
print(a)
a.reverse()
print(shop," :dec")
print(shop[-1:400])
for i in range(1,30):
    print(i)