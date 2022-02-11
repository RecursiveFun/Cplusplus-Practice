#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear;
      int purchasePrice;
      int currentValue;

   public:
      void SetModelYear(int userYear);

      int GetModelYear() const;

      // Declare SetPurchasePrice() function
      void SetPurchasePrice(int price);
      // Declare GetPurchasePrice() function
      int GetPurchasePrice() const;
      

      void CalcCurrentValue(int currentYear);

     // Declare PrintInfo() method to output modelYear, purchasePrice, and
     // currentValue
     
      void PrintInfo() const;

};

#endif