# Requirements
## Introduction
The requirement for this project was to come up with a way to design different types of active filters that the user would require. The different filters considered are First order low and high pass filter,Second order low and high pass filters and Bandpass filter.

## Research
Since the topic was simple and basic, I could not find any relevant projects or topics related to this.But the project will come in handy because softwares like Matlab,Scilab do not directly provide us with filter blocks in the simulation, but will provide only the components like op-amps, resistors,capacitors individually.

## Cost and Features
 * The cost parameter for this project was none.All the softwares and features were freely available on the internet.
 * The features of this project is that it can take input for the type of filter for caculation and provides accurate results.

## Defining Our System
### Configurations
 * The first order filters, both low and high, can be designed for both configurations, i.e., the inverting and the non-inverting op-amps.
 * The second order filters are usually designed for the non-inverting configuration.
 * The Bandpass filter is primarily designed for the inverting configuration.
### Application
 * The program is to be run using the command line interface.
 * The results are also shown on the command line interface.
 * The advantage of this is that this project can be used online or offline.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/PramodhMahadeshKM/MiniProject_LTTS/blob/master/1_Requirements/SWOT.png)

# 4W&#39;s and 1&#39;H

## Who:
 * Electical,Electronics,control systems,instrumentation engineers and students;people who need to design a filter.

## What:
 * This project gives out the parameters required to design the type of filter according to the user inputs. 

## When:
 * This project can be used whenever there is a need to design active filters.

## Where:
 * This project can be used colleges/universities,labs or even for individual uses.

## How:
 * The user can follow the [steps](https://github.com/PramodhMahadeshKM/MiniProject_LTTS/blob/master/3_Implementation/Readme.md). Then the user enters their requirements and the output will be displayed.

# Detail requirements

## High Level Requirements: 
| ID | Description | Status |
| ----- | ----------- | ------- |
| HR01 | Application should take input from the user | Implemented |
| HR02 | Application should work on both Linux and Windows | Implemented |
| HR03 | Application should print output to the user | Implemented |
| HR04 | Application should follow clean code rules | TBD |

##  Low level Requirements:
 
| ID | Description | HR ID | Status |
| ------ | --------- | ------ | ----- |
| LR01 | Application should be able to run on the CLI of the user | HR01,HR03 | Implemented |
| LR02 | Application should use makefile option for different commands | HR02 | Implemented |
| LR03 | Application should comply with different checks like valgrind,cppcheck,build etc. | TBD |
| LR04 | Application to be used with a GUI to provide inputs and print outputs | HR01,HR03 | Future |
| LR05 | Application should give the user leverage on different inputs and give information on various limits | HR01 | Implemented |

