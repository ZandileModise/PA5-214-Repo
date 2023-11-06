#include "Pizza.h"

int main() {
  Pizza *pizza = new ThinCrust();
  pizza = new TomatoSauceDecorator(pizza);
  pizza = new MozarellaDecorator(pizza);
  pizza = new BaconDecorator(pizza);
  pizza = new AvocadoDecorator(pizza);

  float price = pizza->getPrice();

  return 0;
}