# the following makefile is used to test the functionality of the making shopping list system
mymake: main.cpp
	g++ -Wall main.cpp User.cpp Ingredient.cpp Recipe.cpp MealPlan.cpp List.cpp ShoppingList.cpp MarketPurchasing.cpp Storage.cpp -o food_management_system.exe
	./food_management_system.exe