#ifndef CP5

#define CP5

struct Sales_data{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

};

 Sales_data& Sales_data::combine(const Sales_data rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs..revenue;
    return *this;
}


#endif // CP5
