# randomNumGenerator2
This assignment is to introduce you to pseudorandom number generation by generating pseudorandom numbers. A random number generator or RNG is a function which takes as input a number called a seed, and outputs a sequence of pseudorandom numbers. Here, the term 'pseudorandom' is used, as the same sequence of numbers is output for a given seed over multiple program runs.

You will write a program which prompts the user for a seed, and then generate the first five pseudorandom numbers using that seed. Then, you will change the seed to be the current time, and then generate five more pseudorandom numbers.

You will call two functions to use an RNG, srand() and rand(), both of which are defined in the cstdlib library. srand() takes one argument, the seed, which is an unsigned integer. For example, to seed an RNG with 17, the following line of code would work:
```
srand(17);
```

Now with the RNG seeded, you can generate pseudorandom numbers. This is where you call rand(). Each call to rand() will return one pseudorandom number. Thus, if you want to return five numbers, you need to call the rand() function five times.

Once you have output the first five pseudorandom numbers returned from five calls to rand(), change the seed to the current time. To do this, you need to use the time() function defined in the ctime library, and write the following line of code:
```
srand(time(0));
```

This will change the seed of the RNG from the original value (in this case 17) to the current system time. Notice that time() takes one argument, which here is 0. This argument when set to 0 (or nullptr) is not used by the function - just make sure it is 0. Output the first five pseudorandom numbers using this new seed. Only set the seed to the current time once.

A complete program run, when the user enters 105 as the seed value, should look similar to this:

```
Enter a seed for the random number generator: 105
First 5 numbers (seed = user input): 1309058823, 755337607, 544244102, 186746040, 1176485468
First 5 numbers (seed = current time): 760832073, 215264851, 76604524, 544326083, 996316729
```

Note, when switching the seed to the current time, your generated pseudorandom numbers will be different than the ones shown above. While the seed = user input line should display the numbers shown above (for input = 105), the seed = current time line will not.

Experiment with running your program multiple times with the same user input seed value. You should find that the numbers generated using the user input seed remain the same for each program run, whereas the numbers generated using the current time as the seed are different for each program run. When using the current time as the seed over multiple program runs, the numbers generated may look random as opposed to pseudorandom, but they are still pseudorandom. Whenever you call srand() using the return value from time() as the seed, the seed value itself will be different. The current time (what is returned by time(0)) is represented as the number of seconds elapsed since January 1, 1970, which is a monotonically increasing number. Thus, when you run your program twice, the current time will be greater in the second run than it was in the first run.

Example Output
Suppose 17 is entered at the prompt:
```
Enter a seed for the random number generator: 17
```
Output should look like this:
```
First 5 numbers (seed = user input): 1227918265, 3978157, 263514239, 1969574147, 1833982879
First 5 numbers (seed = current time): 1748590231, 933398804, 903302576, 1273587361, 2021935727
```
The first line of the output is when the seed is the user input (in this example it would be 17). The pseudorandom numbers your program generates should match the output above given 17 as input. As mentioned previously, when switching the seed to the current time, your generated pseudorandom numbers will be different than the ones shown above. If you want to see this 'current time' representation, write a program which simply outputs the current time (time(0)), and run it multiple times.

Note, zyLabs automated test cases utilize predetermined output for comparison. Because we cannot predict what the current time will be when you submit your program for grading, test cases for using current time as the RNG seed cannot be written. Therefore, only the pseudorandom numbers generated from the user input seed will be compared, as those are deterministic (do not change between program runs). The input prompt and output strings will be checked to make sure they are present.
