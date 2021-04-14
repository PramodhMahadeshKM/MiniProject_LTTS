
# TEST PLAN:

## Table: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|HLT01     | Test various code quality checks | .c files, .out/.exe files,Implementation folder | Pass | Pass | Technical |
|HLT02     | Test various user inputs | User inputs | Success | Success | Scenario/Technical

## Table: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| LLT01  | HLT02 | Check for boundary conditions of input frequency | Struct with boundary values of freq | Success | Success | Scenario/Technical |
| LLT02  | HLT02 | Upper and lower limit violation check for freq | Struct with limit violating values of freq | Limit_error | Limit_error | Scenario/Technical |
| LLT03  | HLT02 | Check for boundary conditions of input pass band gain | Struct with boundary values of Av | Success | Success | Scenario/Technical |
| LLT04  | HLT02 | Upper and lower limit violation check for pass band gain | Struct with limit violating values of Av | Limit_error | Limit_error | Scenario/Technical |
| LLT05  | HLT02 | Check for wrong input variable for filter choosing | char with wrong code | code_error | code_error | Scenario/Technical |
| LLT06  | HLT02 | Null pointer check | Null ptr | Failure | Failure | Technical |
| LLT07  | HLT01 | Static code analysis | Cppcheck on .c files | Success | Success | Technical |
| LLT08  | HLT01 | Dynamic code quality check | Valgrind on .out files | Pass | Pass | Technical |