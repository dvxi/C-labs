# AGH University C Programming Labs

This repository contains a collection of projects developed for the C programming language labs at AGH University of Science and Technology. Each project represents a specific lab exercise, structured in individual folders from `CWL_2` to `CWL_8`.

## Structure

The repository is organized into the following directories:

- `CWL_2`: Lab 2 project
- `CWL_3`: Lab 3 project
- `CWL_4`: Lab 4 project
- `CWL_5`: Lab 5 project
- `CWL_6`: Lab 6 project
- `CWL_7`: Lab 7 project
- `CWL_8`: Lab 8 project

Each directory contains the source code files, along with any additional resources required for that specific lab.

## Compilation Instructions

To compile the projects, ensure you have `gcc` installed on your system. The projects can be compiled using the following command:

```bash
gcc -o output_filename source_file.c
```

For projects that require linking to the math library, append the `-lm` flag:

```bash
gcc -o output_filename source_file.c -lm
```

Replace `output_filename` with your desired output file name and `source_file.c` with the relevant source file.

## Running the Programs

After compilation, you can run the program using:

```bash
./output_filename
```

## Contributions

This repository is primarily for educational purposes related to the labs at AGH University. However, suggestions for improvements or bug fixes are welcome. Please open an issue or submit a pull request for any contributions.
