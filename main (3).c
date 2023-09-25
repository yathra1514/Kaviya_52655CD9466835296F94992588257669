#Define the function
def linear_search_product(product_list, target_product):
    indices = []
    for i, product in enumerate(product_list):
        if product == target_product:
            indices.append(i)
    return indices

#Create a list of products
products = ["Apple", "Banana", "Orange", "Apple", "Mango", "Apple"]

#Define the target product you want to search for
target = "Apple"

#Call the function to search for the target product in the list
result = linear_search_product(products, target)

#Print the result
if result:
    print(f"The target product '{target}' was found at indices: {result}")
else:
    print(f"The target product '{target}' was not found in the list.")