

# Building a robust test suite on type confusion vulnerabilities - EPFL Master project - Spring 2024

C++ has a lot of vulnerabilities due to type confusion, which can lead to memory corruption 
and security vulnerabilities. Casting a pointer from a type to another is a highly 
common operation but, if misused, can lead to type confusion and thus can be exploited. 
[Hextype](https://hexhive.epfl.ch/publications/files/17CCS.pdf) and [Type++](https://hexhive.epfl.ch/publications/files/25NDSS.pdf) are two mechanisms that aim to detect type confusion at runtime.
Although they achieve a high success rate, they can not ensure a perfect type safety.\\
We propose a benchmark that evaluates a range of type confusion cases by defining which 
situations are likely to trigger type confusion. We evaluate it on Hextype and Type++ and
we conclude that they achieve a high success rate even if they do not pass all the tests.
In addition, we show that Type++ is more complete than Hextype as it detects more type confusion.

# License and acknowledgement

The source code and LaTeX package is licensed under the LPPL. This work may be
distributed and/or modified under the conditions of the LaTeX Project Public
License, either version 1.3 of this license or (at your option) any later
version. The latest version of this license is in
http://www.latex-project.org/lppl.txt

We would appreciate if you acknowledge the use of this template and where you
got it from in your report.


# Contact

Contact [Mathias Payer](mailto:mathias.payer@epfl.ch) with bug reports or 
questions.

