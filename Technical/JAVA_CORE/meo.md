1 - Arraylist vs LinkedList ?
+ Arraylist is backed by dynamic array , so it provides fast random access by index - usually O(1) . However , inserting and removing elements in the middle can be slower because elements can be shifted 
+ LinkedList based on doubly linked list, inserting or removing elements can be efficient once we have position but accessing by index is O(N)

2-How does HashMap work internally in Java ?
+ HashMap stores data as key-value pairs. When we put a key-value pair, Java uses the key's hashCode() to calculate a hash and determine which bucket to store the entry in. If multiple keys map to the same bucket, a collision occurs, and Java handles it using a linked structure, and in modern Java, it can use a balanced tree when the bucket becomes large.

3-What is the difference between HashSet and HashMap ?
+ “HashSet stores a collection of unique elements, while HashMap stores key-value pairs. HashSet does not allow duplicate elements, while HashMap does not allow duplicate keys, but it can have duplicate values.

+ Both are based on hashing, so they usually provide O(1) average time for adding, removing, and searching.”

4-Why is String immutable in Java, and what is the String Pool?
+ String is immutable, which means once a String object is created, its value cannot be changed. If we modify a String, Java creates a new String object instead.
+ The String Pool is a special area in the heap where Java stores String literals and reuses identical strings. This helps save memory. For example, if two variables have the same string literal, they can refer to the same object in the String Pool.

5-What is the difference between checked and unchecked exceptions in Java?
+ Checked exceptions are checked at compile time, so the programmer must handle them or declare them with throws. Unchecked exceptions occur at runtime and are subclasses of RuntimeException. For example, IOException is a checked exception, while NullPointerException and IllegalArgumentException are unchecked exceptions.

6-What does the final keyword mean in Java?
+ The final keyword can be used with variables, methods, and classes. A final variable cannot be reassigned after initialization. A final method cannot be overridden by subclasses, and a final class cannot be extended.

7-What is the difference between == and .equals() in Java?
+ For objects, == compares whether two references point to the same object, while equals() is used to compare the logical content of objects, depending on how the class implements it.
+ For example, two String objects can have the same content but be different objects, so == can return false while equals() returns true.
