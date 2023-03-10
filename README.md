# Laptop benchmarking using an algorithm of O(n) and Ω(1) time and space complexity

## Introduction
The time complexity of an algorithm describes the quantity of computing time it takes for an algorithm to run.<sup>[[Wikipedia]](https://en.wikipedia.org/wiki/Time_complexity)</sup> The algorithm in `bench.c` has a time complexity of O(n), implying that there is a linear relationship between the input size and the time that the program takes to run.

## Goal
This experiment aims to measure the running time of one program on different computers with different chipsets.

## Equipment
- Dell Vostro 14 5410
    - Intel(R) Core<sup><small>TM</small></sup> i5-11320H Processor @3.2 GHz
    - 3200Mhz 16GB SDDR4 RAM (dual-channel)
    - ADATA 256GB M.2 NVMe SSD

- HP Notebook 15-da2000ni
    - Intel(R) Core<sup><small>TM</small></sup> i5-10210U Processor @1.6 GHz
    - 2666Mhz 8GB SDDR4 RAM (dual-channel)
    - WD Blue 500GB SATA3 3D NAND SSD

## Method
1. The source code was compiled on each machine. C was chosen as the language of choice because it is a low-level, compiled language. This makes the program run very fast.
2. The program was run for a total of five runs per trial of input size *n*. The input size was increased after each trial by one order of magnitude to 1x10<sup>9</sup> for a total of 10 trials.
3. The results of each run were recorded and the average was taken for each trial of input size *n*. The data were graphed to clearly illustrate the mathematical relationship and performance contrast between the two devices.

## Results and Discussion
|                            |            |             | Dell Vostro 14 5410 (2021) |                      | HP Notebook 15-da2000ni (2020) |             |
|----------------------------|------------|-------------|------------------|--------------------------------|------------------|---------------------------|
| Power of 10                | Input size | Sum         | Avg. time (secs) | Standard deviation (secs)      | Avg. time (secs) | Standard deviation (secs) |
| 0                          | 1          | 1           | 0.000064         | 5.65685E-06                    | 0.0000576        | 1.05972E-05               |
| 1                          | 10         | 55          | 0.0000644        | 5.89915E-06                    | 0.0000556        | 1.30499E-05               |
| 2                          | 100        | 5050        | 0.0000646        | 1.36308E-05                    | 0.0000516        | 5.31977E-06               |
| 3                          | 1000       | 500500      | 0.0000702        | 1.26965E-05                    | 0.000062         | 8.24621E-06               |
| 4                          | 10000      | 50005000    | 0.0000772        | 8.16701E-06                    | 0.0001022        | 2.68328E-06               |
| 5                          | 100000     | 5000050000  | 0.0002406        | 8.61974E-06                    | 0.0005412        | 8.28855E-06               |
| 6                          | 1000000    | 5.00001E+11 | 0.0019106        | 5.35798E-05                    | 0.0048842        | 2.91325E-05               |
| 7                          | 10000000   | 5E+13       | 0.0183554        | 0.00016695                     | 0.049281         | 0.00019494                |
| 8                          | 100000000  | 5E+15       | 0.1670672        | 0.003745487                    | 0.4912596        | 0.002284736               |
| 9                          | 1000000000 | 5E+17       | 1.611498         | 0.033794382                    | 4.910758         | 0.006612668               |


The Dell 14 falls slightly behind the HP 15 in the smallest step sizes. However, the gap widens rapidly over input sizes exceeding 1000, with overall performance of the Dell on average being 300% faster than the HP. 

## Conclusion and final thoughts
The 11th Gen Intel Core i5 CPUs are a massive imporovement over the 10th Gen lineup of notebook i5 CPUs when it comes o running algorithms with linear time and space complexity. This therefore means that the clock speed of the i5 CPu has improved by that same margin of 300%.

You're highly encouraged to clone this repository!

## References
1. https://en.wikipedia.org/wiki/Time_complexity