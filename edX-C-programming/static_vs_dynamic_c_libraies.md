# Static vs Dynamic Libraries in C

Sure! Here's a table comparing Static and Dynamic Libraries in C, using Markdown syntax:

| Aspect            | Static Libraries | Dynamic Libraries |
|-------------------|------------------|-------------------|
| File extension    | .a               | .so/.dll          |
| Compilation       | Linked during compilation | Linked during linking/loading |
| File size         | Larger, contains all library code | Smaller, only contains necessary code |
| Memory usage      | Code is loaded into memory during execution | Code is loaded into memory during execution |
| Relocation        | Not relocatable, must be recompiled for different architectures | Relocatable, can be used on different architectures |
| Version management | Each version requires a new library file | Can have multiple versions in the same file |
| Application size  | Larger due to library code inclusion | Smaller due to shared code |
| Portability       | Less portable due to architecture dependence | More portable due to architecture independence |
| Performance       | Faster, as library code is already present in the application | Slightly slower, as library code needs to be loaded during execution |
| Flexibility       | Less flexible, as library code cannot be updated independently | More flexible, as library code can be updated independently |




Note: `.a` is the file extension for static libraries on Unix-based systems, while `.lib` is used on Windows-based systems. Similarly, `.so` is used for shared objects on Unix-based systems, while `.dll` is used on Windows-based systems.