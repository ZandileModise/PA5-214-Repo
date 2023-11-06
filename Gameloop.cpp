#include "Gameloop.hpp"

#include <iostream>
#include "Restaurant.hpp"


// first say which tables they are seated at


int Gameloop::displayMenu(){

    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "        WELCOME TO TAKE A BYTE          "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                    MENU                "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Pizza                           "<<std::endl;
    std::cout<< "2.      Pasta                           "<<std::endl;
    std::cout<< "3.      Salad                           "<<std::endl;
    std::cout<< "4.      Dessert                         "<<std::endl;
    std::cout<< "5.      Drinks                          "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    std::cout<< "What is your choice?"<<std::endl;
    std::cin >> choice; 

    return choice;
}

void Gameloop::handleCase(int num){

        switch(num){
            case 1: 
            // Pizza
            pizza();
            break;
            case 2:
            // Pasta
            pasta();
            break;
            case 3:
            //Salad
            // salad();
            break;
            case 4:
            //dessert
            // dessert();
            break;
            case 5:
            // drinks 
            // drinks();
            break;


        }
}

void Gameloop::startLoop(){

    //seat the customers
    Restaurant* restaurant = Restaurant::GetInstance();
    //created a single instance of the restaurant 

    //flyweight for the tables 
    restaurant->AcceptCustomers(4);
    restaurant->AcceptCustomers(4);
    restaurant->AcceptCustomers(7);
    restaurant->AcceptCustomers(9);
    restaurant->AcceptCustomers(12);
    restaurant->AcceptCustomers(16);
     

    // while(choice != 6)
    // {
        int num = displayMenu();
        handleCase(num);
    // }
}

void Gameloop::pizza(){
     
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pizza                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Crust)           "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Thin Crust                      "<<std::endl;
    std::cout<< "2.      Thick Crust                     "<<std::endl;
    std::cout<< "3.      Deep Dish                       "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array 
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pizza                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Sauce)           "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Tomato Sauce                    "<<std::endl;
    std::cout<< "2.      No Sauce                        "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pizza                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                MENU (Cheese)           "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Feta                            "<<std::endl;
    std::cout<< "2.      Parmesan                        "<<std::endl;
    std::cout<< "3.      Chedder                         "<<std::endl;
    std::cout<< "4.      Mozzarella                      "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array 

    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pizza                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "               MENU (Toppings)          "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Mushrooms                       "<<std::endl;
    std::cout<< "2.      Pepper                          "<<std::endl;
    std::cout<< "3.      Avocado                         "<<std::endl;
    std::cout<< "4.      Olives                          "<<std::endl;
    std::cout<< "5.      Arichokes                       "<<std::endl;
    std::cout<< "6.      Bacon                           "<<std::endl;
    std::cout<< "7.      Tofu                            "<<std::endl;
    std::cout<< "8.      Pepperoni                       "<<std::endl;
    std::cout<< "9.      Chicken                         "<<std::endl;
    std::cout<< "10.      Ham                            "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // std::cout<< "What is your choice?"<<std::endl;
    // std::cin >> choice; 

    // return choice;
}

void Gameloop::pasta(){
     
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pasta                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Type)            "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Penne                           "<<std::endl;
    std::cout<< "2.      Spaghetti                       "<<std::endl;
    std::cout<< "3.      Linguine                        "<<std::endl;
    std::cout<< "4.      Fettucine                       "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array 
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pasta                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Sauce)           "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Tomato Sauce                    "<<std::endl;
    std::cout<< "2.      No Sauce                        "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pasta                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                MENU (Cheese)           "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Feta                            "<<std::endl;
    std::cout<< "2.      Parmesan                        "<<std::endl;
    std::cout<< "3.      Chedder                         "<<std::endl;
    std::cout<< "4.      Mozzarella                      "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // push into order array 
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Pasta                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "               MENU (Toppings)          "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Mushrooms                       "<<std::endl;
    std::cout<< "2.      Pepper                          "<<std::endl;
    std::cout<< "3.      Avocado                         "<<std::endl;
    std::cout<< "4.      Olives                          "<<std::endl;
    std::cout<< "5.      Arichokes                       "<<std::endl;
    std::cout<< "6.      Bacon                           "<<std::endl;
    std::cout<< "7.      Tofu                            "<<std::endl;
    std::cout<< "8.      Pepperoni                       "<<std::endl;
    std::cout<< "9.      Chicken                         "<<std::endl;
    std::cout<< "10.     Ham                             "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    // std::cout<< "What is your choice?"<<std::endl;
    // std::cin >> choice; 

    // return choice;
}

void Gameloop::salad(){
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Salad                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Base)            "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Lettuce                         "<<std::endl;
    std::cout<< "2.      None                            "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Salad                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "               MENU (Toppings)          "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Cucumber                        "<<std::endl;
    std::cout<< "2.      Tomato                          "<<std::endl;
    std::cout<< "3.      Salad Avocado                   "<<std::endl;
    std::cout<< "4.      Salad Olives                    "<<std::endl;
    std::cout<< "5.      Salad Rockets                   "<<std::endl;
    std::cout<< "6.      Salad Pepper                    "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 
    
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Salad                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "               MENU (Dressing)            "<<std::endl;
    std::cout<< "                 -----------              "<<std::endl;
    std::cout<< "1.      Dressing                          "<<std::endl;
    std::cout<< "2.      No Dressing                       "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 
}

void Gameloop::dessert(){
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Dessert                "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                 MENU (Type)            "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Brownie                         "<<std::endl;
    std::cout<< "2.      Ice Cream                       "<<std::endl;
    std::cout<< "3.      Cheese Cake                        "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 

}

void Gameloop::drinks(){
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                   Drinks               "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl;
    std::cout<< "                    MENU                "<<std::endl;
    std::cout<< "                 -----------            "<<std::endl;
    std::cout<< "1.      Coke                            "<<std::endl;
    std::cout<< "2.      Fanta                           "<<std::endl;
    std::cout<< "3.      Sprite                          "<<std::endl;
    std::cout<< "4.      Water                           "<<std::endl;
    std::cout<< "5.      Red Wine                        "<<std::endl;
    std::cout<< "6.      White Wine                      "<<std::endl;
    std::cout<< "7.      Rose                            "<<std::endl;
    std::cout<< "----------------------------------------"<<std::endl; 
}


