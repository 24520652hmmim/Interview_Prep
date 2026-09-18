1 - What is an index in a database, and why does it improve query performance?
+ Index is a data structure of database , it can help finding rows more efficiently without scanning the entire table
+ if I want to find an email user , I will create an index on email column , it will save time and significantly improve lookup performance

2- What is the difference between a primary key and a foreign key?
+ The primary key uniquely identifies the each row in the table, it must be unique and can't be NULL 
+ The foreign key is a column or a set of column that references to the primary key or another key on the table. It can maintain relationship and the referential integrity of between tables . 

3- What is a JOIN in SQL, and what is the difference between INNER JOIN and LEFT JOIN?
+ A JOIN is used to combine rows from multiple tables based on related conditions. INNER JOIN returns only matching rows, while LEFT JOIN returns all rows from the left table and matching rows from the right table.

4-What does ACID stand for, and why is it important in database transactions?
+ A stands for atomicity - it is all or nothing 
+ C stands for consistency - it means changes database from a valid state to another valid state 
+ I stands for Isolation - concurrent transaction can not interfere incorrectly or affect each other 
+ D stands for Durability - it means if a transaction is committed - it 'll never be failed even the system is crashed

5-What is a clustered index, and how is it different from a non-clustered index?
+ A clustered index determines how the data rows are physically organized, so a table can generally have only one clustered index. A non-clustered index is stored separately from the data rows and contains the indexed key plus a pointer or row locator. A table can have multiple non-clustered indexes.

6-Suppose you have a query that is running very slowly. How would you investigate and improve its performance?
+ First, I would analyze the execution plan using EXPLAIN or EXPLAIN ANALYZE. Then I would check whether there are inefficient joins, filters, or missing or unnecessary indexes. I would also avoid SELECT * and only select the necessary columns.

7-What is the difference between SQL and NoSQL databases, and when would you choose NoSQL over SQL?
+ SQL databases are relational databases that store data in tables with a predefined schema. They are good for structured data and complex relationships, and they support strong consistency and transactions.
+ NoSQL databases use different data models, such as document, key-value, or graph databases. They usually provide more flexible schemas and can scale horizontally more easily.
+ I would choose NoSQL when I have a large amount of data, need high scalability, or have data with a flexible or frequently changing structure. If the data has complex relationships and requires strong transactions, I would prefer SQL.