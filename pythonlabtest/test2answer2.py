# Initialize variables
prices = []
total_cost = 0
num_items = 0

# Prompt user to enter price values
while True:
    price = input("Enter a price value (or 0 to finish): ")
    if not price.isdigit():
        print("Invalid input. Please enter a positive number.")
        continue
    price = float(price)
    if price <= 0:
        break
    prices.append(price)
    total_cost += price
    num_items += 1

# Generate summary report
if num_items == 0:
    print("No items were purchased.")
else:
    average_cost = total_cost / num_items
    highest_price = max(prices)
    lowest_price = min(prices)
    num_items_above_avg = sum(price > average_cost for price in prices)
    num_items_below_avg = sum(price < average_cost for price in prices)
    print("Summary Report:")
    print("Total cost: ", total_cost)
    print("Average cost: ", average_cost)
    print("Highest price: ", highest_price)
    print("Lowest price: ", lowest_price)
    print("Number of items above average: ", num_items_above_avg)
    print("Number of items below average: ", num_items_below_avg)
