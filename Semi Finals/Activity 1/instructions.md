A hospital maintains digital records of patients in critical care. Each patient has:

Name (string)

Age (integer)

Vital signs:

Heart rate (float)

Blood pressure systolic (float)

Blood pressure diastolic (float)

 

Your task is to write a C program that:

Dynamically allocate memory for n patients. Note: You must use arrow notation (->) to access and assign structure members. Use malloc().
Input for each patient:

name

age

vital signs

Invalid values must trigger re-input.

After all patients are entered, determine:

The patient with the highest heart rate

The patient with the lowest systolic blood pressure

The average diastolic pressure of all patients

Program must display:

Patient name and HR of the highest heart rate

Patient name and SBP of the lowest systolic pressure

The computed average diastolic pressure