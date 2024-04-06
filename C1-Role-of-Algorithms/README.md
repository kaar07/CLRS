# Chapter - 1: The Role of Algorithms in Computing

## Algorithms

*`... An algorithm is thus a sequence of computational steps, that transform the input into the output`*

- Algorithms are used to solve specific computational problems.
    - Correct algorithm:
        - takes finite time for computation
        - provides solution to all instances of computational problem
    - Computational problem may have more than one algorithmic solution.
    - Which to choose among candidate solutions?
        - Depends on requirements.
        - Optmize on time/compute/accuracy ?
    - Incorrect algorithm
        - May not compute in finite time
        - Or computes in finite time with wrong solution
        - Can still be useful!
- Programming language agnostic
    - Doesn't matter which programming language is used!
    - Plain English / Pseudo-code / C / Rust / Haskell
    - They are more like skeletons using which computer programs are built
- vs Mathematical Function
    - Similarities
        - I/O structure
        - Abstraction
        - Can be described formally
        - Deterministic for most part.
    - Differences
        - Representation is symbolic only for functions.
        - I/O is limited to numeric values in functions.
        - Non-deterministic nature of output in exceptional cases.
            - Random Number Generators (RNGs) are mostly deterministic.
            - But there are non-deterministic ones that rely on external randomness:
                - Example: Hardware based RNGs
        - Algorithms may not have: ("explicit")
            - explicit input (example: RNGs)
            - explicit output (example: in-place sorting methods)
- vs Computer program
    - Similarities
        - structured sequence of steps
        - can be used as sub-set to larger algorithm/program
        - resusability
        - abstraction
    - Differences
        - implementation details or programming language isn't relevant for algorithms
        - algorithms need to be implemented before execution
        - computer programs are platform dependent, algorithms aren't


## Data Structures

*`... A data structure is a way to store and organize data in order to facilitate access and modifications`*

- Strictly speaking DS should be limited to just that: "store and organize data"
    - But often DS is also accompanied with algorithms.
        - Provides encapsulation, abstraction and modularity.

- The context of a DS in a program, primarily pertains to its usage within the program execution.
    - Data structures are instantiated, populated, and manipulated within the program to fulfill specific tasks or requirements, reflecting their relevance within the program's execution environment. The requirements of a program may also include adherance to specific DS to exchange between programs. But otherwise, they have no role outside of the program.


## Algorithms as a technology

- While solving a computational problem with infinite compute resources:
    - Algorithm is still needed
    - Exact of choice of algorithm among correct ones, would've been irrelevant.

- *"...  Total system performance depends on choosing efficient algorithms as much as on choosing fast hardware."*

- Even a simple "Hello world" program is dependent on algorithms at some level (possibly hardware), even though the program itself might not develop or make use of algorithms directly.