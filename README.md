Queue Implementation in C++

This project contains two implementations of a queue using C++: a dynamic queue and a static queue. The code demonstrates basic queue operations such as adding elements to the queue and removing elements from the queue.

Files

- `queueDynamic.cpp`: This file contains an implementation where the user can dynamically add animal names to the queue through console input.
- `queueStatic.cpp`: This file contains a static implementation where a predefined set of animal names is added to the queue and then printed.

Description

Dynamic Queue (`queueDynamic.cpp`)

This program allows the user to enter names of animals to add to a queue. The user can keep adding names until they choose to stop. Once the user decides to stop, the program prints all the animal names in the order they were added to the queue.

Features:
- Allows dynamic input of animal names.
- Displays all names in the queue before exiting.

Usage:
1. Run the program.
2. Enter the name of an animal when prompted.
3. Choose whether to add another name or not.
4. The program will display all the names in the queue before terminating.

Static Queue (`queueStatic.cpp`)

This program initializes a queue with a predefined set of animal names. It then prints all the animal names in the queue.

Features:
- Predefined list of animal names.
- Prints all names in the queue.

Usage:
1. Run the program.
2. The program will display the predefined names in the queue and then terminate.

Compilation and Execution

Dynamic Queue

To compile and run `queueDynamic.cpp`:
```sh
g++ -o queueDynamic queueDynamic.cpp
./queueDynamic
```

Static Queue

To compile and run `queueStatic.cpp`:
```sh
g++ -o queueStatic queueStatic.cpp
./queueStatic
```

Example Output

Dynamic Queue
```
Program Queue untuk Nama Hewan

Masukkan nama hewan: Cat
Nama hewan 'Cat' berhasil ditambahkan ke dalam antrian.
Ingin memasukkan nama hewan lain? (y/n): y
Masukkan nama hewan: Dog
Nama hewan 'Dog' berhasil ditambahkan ke dalam antrian.
Ingin memasukkan nama hewan lain? (y/n): n

Hewan-hewan dalam antrian: Cat Dog 
```

Static Queue
```
Queue: Cat, Dog, Fish, Bear, Bird,
```
