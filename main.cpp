#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       fire
//  action 1:   the fire burns
fire.burn();
//  action 2:   the fire crackles
fire.crackle();
//  action 3:   the fire spreads
fire.spread(); 
//
//  2)
//  Noun:       tree
//  action 1:   the tree drops its leaves
tree.dropLeaves();
//  action 2:   the tree makes shade
tree.makeShade();
//  action 3:   the tree changes colors
tree.changeColor();
// 
//  3)
//  Noun:       phone
//  action 1:   the phone makes calls
phone.startCall();
//  action 2:   the phone takes pictures
phone.takePicture();
//  action 3:   the phone sends text messages
phone.sendMessage();
// 
//  4)
//  Noun:       tractor
//  action 1:   the tractor mows the field
tractor.cutGrass();
//  action 2:   the tractor burns fuel
tractor.burnFuel();
//  action 3:   the tractor carries supplies
tractor.carrySupplies();
// 
//  5)
//  Noun:       student
//  action 1:   the student studies for the test
student.study();
//  action 2:   the student attends class
student.attendClass();
//  action 3:   the student graduates
student.graduate();
// 
//  6)
//  Noun:       snow
//  action 1:   the snow falls
snow.fall();
//  action 2:   the snow fall accumulates (or increases)
snow.accumulate();
//  action 3:   the snow melts
snow.melt();
//
//  7)
//  Noun:       hand
//  action 1:   the hand touches.
hand.touch();
//  action 2:   the hand grips
hand.grip();
//  action 3:   the hand flexes
hand.flex();
//
//  8)
//  Noun:       car
//  action 1:   the car speeds up
car.accelerate();
//  action 2:   the care slows down
car.brake();
//  action 3:   the car carries passengers
car.carryPassenger();
// 
//  9)
//  Noun:       bird
//  action 1:   the bird tweets
bird.sing();
//  action 2:   the bird flies
bird.fly();
//  action 3:   the bird eats worms
bird.eatWorm();
// 
//  10)
//  Noun:       athlete
//  action 1:   the athlete exercises
athlete.exercise();
//  action 2:   the athlete runs
athlete.run();
//  action 3:   the athlete jumps
athlete.jump(); 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
