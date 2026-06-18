cmake_minimum_required(VERSION 4.1)
project(DSA C)

set(CMAKE_C_STANDARD 11)

add_executable(DSA main.c
        Striver/hello.c
        Striver/tp.c
        Striver/dsaCalc.c
        Lists/Insert.c
        Lists/delete.c
        Striver/PointersPrac/q1.c
        Striver/PointersPrac/q2.c
        Striver/PatternsPrac/q1.c
        Striver/PatternsPrac/q2.c
        Striver/PatternsPrac/q3.c
        Striver/PatternsPrac/q4.c
        Striver/PatternsPrac/q5.c
        Striver/PatternsPrac/q6.c
        Striver/PatternsPrac/q7.c
        Striver/PatternsPrac/q8.c
        Striver/PatternsPrac/q9.c
        Striver/PatternsPrac/q10.c
        Striver/PatternsPrac/q11.c
        Striver/PatternsPrac/q12.c
        Striver/PatternsPrac/q13.c
        Striver/PatternsPrac/q14.c
        Striver/PatternsPrac/q15.c
        Striver/PatternsPrac/q16.c
        Striver/PatternsPrac/q17.c
        Striver/PatternsPrac/q18.c
        Striver/PatternsPrac/q19.c
        Striver/PatternsPrac/q20.c
        Striver/PatternsPrac/q21.c
        Striver/PatternsPrac/q22.c
        Striver/KnowYourMaths/q1.c
        Striver/KnowYourMaths/q2.c
        Striver/KnowYourMaths/q3.c
        Striver/KnowYourMaths/q4.c
        Striver/KnowYourMaths/q5.c
        Striver/KnowYourMaths/q6.c
        Striver/KnowYourMaths/q7.c
        Striver/BasicRecursion/q1.c
        Striver/BasicRecursion/q3.c
        Striver/BasicRecursion/q4.c
        Striver/BasicRecursion/q5.c
        Striver/BasicRecursion/q6.c
        Striver/BasicRecursion/q7.c
        Striver/BasicRecursion/q8.c
        Striver/BasicRecursion/q9.c
        Striver/Hashing/basic.c
        "Striver/Hashing/basic(findMax).c"
        "Striver/Hashing/basic(stringInput).c"
        "Striver/Sorting-1/SelectionSort(MoreSwaps).c"
        "Striver/Sorting-1/SelectionSort(Classic).c"
        Striver/Sorting-1/BubbleSort.c
        Striver/Sorting-1/InsertionSort.c
        "Striver/Sorting-2/MergeSort(For).c"
        Striver/Arrays/Easy/LargestElement.c
        Striver/Arrays/Easy/SecondLargest.c
        Striver/Arrays/Easy/CheckArraySort-II.c
        Striver/Arrays/Easy/RemoveDuplicateFromSorted.c
        Striver/Arrays/Easy/LeftRotateBy1.c
        Striver/Sorting-2/RecursiveBubble.c
        Striver/Arrays/Easy/LeftRotateByK.cpp
        Striver/Sorting-2/RecursiveInsertion.c
        Striver/Arrays/Easy/ZerosToEnd.c
        Striver/Arrays/Easy/LinearSearch.c
        Striver/Arrays/Easy/UnionOf2SortedArrays.c
        "LeetcodeContests/Contest 504/Q1.c"
        LeetCode/Medium/ReverseInteger.c
)
