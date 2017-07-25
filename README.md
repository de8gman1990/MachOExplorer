# MOEX - MachO EXplorer

Yet another MachOView, and trying to be a better one.


⚠️ This repo is under construction, code may not compile

⚠️ This repo is under construction, code may not compile

⚠️ This repo is under construction, code may not compile



# Feature

- [X] Basic view MachO file structure (like MachOView).
- [ ] Insert a dylib (like optool).
- [ ] Class dump (like class-dump).
- [ ] Symbolicate static initializers : just drop dSYM into `mod_func_init` section.
- [ ] Restore Symbol : one key to restore symbol.


# How to build 

macOS only until now, Windows support in the near future.

1. Env

```
brew install cmake
brew install boost --c++11
```

2. moex-cli

- vscode with cmake-tools extension
- Clion

3. moex-gui

- Qt Creator with Qt 5.9.1

