1 - Can you explain the four main principles of OOP? 
+ Inheritance - it allows class to reuse or extend behavior from superclass 
+ Encapsulation - it means bundling data and behavior together and controlling access to the internal state 
+ Polymorphism - it allows the same interface or methods call to have different implementations depending on the actual object
+ Abstraction - it means exposing essential behavior while hiding implementation details 

2- What is the difference between abstraction and encapsulation?
+ Encapsulation controls access to the object's internal state, while abstraction hides implementation details and exposes only essential behavior.

3- What is the difference between method overloading and method overriding?
+ overloading means having multiple methods with the same name but have different parameters within the same class - it is compile run 
+ pverriding occurs when a subclass provides a specific implementation of a method inherited from a superclass

4- What is the difference between an abstract class and an interface in Java? 
+ abstract class cannot be instantiated, it can contain abstract class and concrete methods as well as instance state.
+ interface mainly define a mainly contract that implementing class must follow , in java it can cointain defaul and static methods .
* In conclusion - abstract class : what they are
                - interface : what they can do

5- Why would you prefer composition over inheritance?
+ Inheritance represents an is-a relationship, while composition represents a has-a relationship. I prefer composition because it creates looser coupling and makes components easier to change independently.