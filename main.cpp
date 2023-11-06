#include "AvocadoDecorator.h"
#include "BaconDecorator.h"
#include "DeepDish.h"
#include "MozarellaDecorator.h"
#include "Pizza.h"
#include "ThickCrust.h"
#include "ThinCrust.h"
#include "TomatoSauceDecorator.h"

int main() {
  Pizza *pizza = new ThinCrust();
  pizza = new TomatoSauceDecorator(pizza);
  pizza = new MozarellaDecorator(pizza);
  pizza = new BaconDecorator(pizza);
  pizza = new AvocadoDecorator(pizza);

  float price = pizza->getPrice();

  return 0;
}