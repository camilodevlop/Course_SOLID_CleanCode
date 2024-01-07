// Created by Camilo Castillo on 05/01/2024
// Single Responsibility Principle (SRP)

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

class ProductProps
{
    public:
        int mId;
        string mName;
        string mDescription;
        double mPrice;

        ProductProps(int id, string name): mId{id}, mName{name},
                     mDescription{string()}, mPrice{double()} {}

        ~ProductProps() {};
};

class Product: public ProductProps
{
    public:
        Product(int id = int(), string name = string()): ProductProps{id, name} {}

        ~Product() {};
};

//------------------------------------------------------------------------------

class ProductService
{
    public:
        ProductService() {};

        void loadProduct(int productId)
        { cout << "\n\tProduct: " << productId << " loaded" << endl; }

        void saveProduct(Product product)
        { cout << "\n\tProduct: " << product.mId << " " << product.mName 
               << " saved" << endl; }

        ~ProductService() {};
};


//------------------------------------------------------------------------------

class Mailer
{
    public:
        Mailer() {};

        void sendMail(string emailList, string message)
        { cout << "\n\tMail sent from: " << mMasterMail
               << "\n\tto: " << emailList
               << "\n\tMessage: " << message << endl; }

        ~Mailer() {};

    private:
        string mMasterMail = "test@unal.edu.co";
};

//------------------------------------------------------------------------------

class CartBloc
{
    public:
        CartBloc() {};
        void addToCart(int productId)
        { cout << "\n\tProduct: " << productId << " added" << endl; }

        ~CartBloc() {};
};

//------------------------------------------------------------------------------

class ProductBloc
{
    public:
        ProductBloc(ProductService productService, Mailer mailer):
                    mProductService{productService}, mMailer{mailer} {}

        void loadProduct(int productId)
        { mProductService.loadProduct(productId); }

        void saveProduct(Product product)
        { mProductService.saveProduct(product); }

        void notifyClients(string emailList, string message)
        { mMailer.sendMail(emailList, message); }

        ~ProductBloc() {};

    private:
        ProductService mProductService;
        Mailer mMailer;
};

//------------------------------------------------------------------------------

int main()
{
    Product auto1(1, "Auto");
    ProductService productService {}; //= ProductService();
    Mailer mailer {}; //= Mailer();
    ProductBloc productBloc(productService, mailer);
    CartBloc cartBloc;

    productBloc.loadProduct(auto1.mId);
    productBloc.saveProduct(auto1);
    productBloc.notifyClients("clien1@mail.com, client2@mail.com", "New product");
    cartBloc.addToCart(auto1.mId);

    return 0;
}

//------------------------------------------------------------------------------
