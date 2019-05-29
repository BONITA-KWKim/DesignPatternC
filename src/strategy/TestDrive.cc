#include "TestDrive.hh"

int main(int argc, char** argv){
    /* start */
    printf("Strategy Pattern.\n");
    
    /* create algorithm group objects */
    QuackBehavior* quack = new Quack();
    QuackBehavior* squeak = new Squeak();
    QuackBehavior* muteQuack = new MuteQuack();

    FlyBehavior* flyWithWings = new FlyWithWings();
    FlyBehavior* flyNoWay = new FlyNoWay();

    /* create client objects and set their actions(algorithm) */
    Duck* decoyDuck = new DecoyDuck();
    decoyDuck->setQuackBehavior(muteQuack);
    decoyDuck->setFlyBehavior(flyWithWings);
    decoyDuck->display();
    decoyDuck->performQuack();
    decoyDuck->performFly();
    
    Duck* mallardDuck = new MallardDuck();
    mallardDuck->setQuackBehavior(quack);
    mallardDuck->setFlyBehavior(flyWithWings);
    mallardDuck->display();
    mallardDuck->performQuack();
    mallardDuck->performFly();
    
    Duck* rubberDuck = new RubberDuck();
    rubberDuck->setQuackBehavior(squeak);
    rubberDuck->setFlyBehavior(flyNoWay);
    rubberDuck->display();
    rubberDuck->performQuack();
    rubberDuck->performFly();

    /* terminate */
    return 0;
}
