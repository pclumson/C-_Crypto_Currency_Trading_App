# pragma once

#include <string>
#include <vector>


enum class OrderBookType{bid, ask, unknown};

class OrderBookEntry // this is the name of the class
{
    
    // private:
    //     double price; // this is a data member (AKA a variable inside a class)
    //     double amount;
    //     std::string timestamp;
    //     std::string product;
    //     OrderBookType orderType;
    
    public: // parts of the class that can be seen from outside
        /** Create a new OrderBookEntry with the price
        * set to the sent value
        */
        OrderBookEntry( 
                double price,
                double amount,
                std::string timestamp,
                std::string product, 
                OrderBookType orderType
          );
        
        double getPrice();
        double getAmount();
        std::string getTimestamp();
        std::string getProduct(); 
        OrderBookType getOrderType();
        
        double setPrice(double p);
        double setAmount(double a);
        std::string setTimestamp(std::string t);
        std::string setProduct(std::string p);
        OrderBookType setOrderType(OrderBookType o);
        
        static OrderBookType stringToOrderBookType(const std::string& s);
        
        double computeAveragePrice(std::vector<OrderBookEntry>& entries);
        double computeLowPrice(std::vector<OrderBookEntry>& entries);
        double computeHighPrice(std::vector<OrderBookEntry>& entries);
        double computePriceSpread(std::vector<OrderBookEntry>& entries);
        
        
        double price; // this is a data member (AKA a variable inside a class)
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
        
        
}; // note the semi-colon


