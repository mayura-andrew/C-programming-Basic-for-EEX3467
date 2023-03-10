total = 0;
count = 0;
highest_price = 0;
lowest_price = 0
avg_price = 0
prices = [];

while True:
    price_vlaue = input("Enter each prices: ");


    try: 
        price = float(price_vlaue);
    except ValueError:
        print("Invalid input. Try again!");
        continue
        
    if price <= -1:
        print("invaid input Try again");
        continue
    elif price == 0:
        break;

    prices.append(price);
    total += price;
    count += 1;
    
   
    highest_price = max(prices);

    
    lowest_price = min(prices);


if count > 0:
    avg_price = total / count;
else: 
    avg_price = 0;


print("Summary Report:")
print("---------------")
print("Total price: ", total )
print("Average price: ", avg_price)
print("Highest price: ", highest_price)
print("Lowest price: ", lowest_price)


    
