# CP Setup
Contains template, codepieces and custom config files for VSCode + ICIE extension for competitve programming.

Additional behaviour apart from ICIE default (defined in tasks.json):
* ```cmd+shift+B``` will build and execute main.e in an integrated terminal window.
* ```alt+C``` will clear out current main.cpp and testcases and copy template into main.cpp

Command used to compile code ```clang++ -std=c++17 -Wall -Wextra -Wconversion -Wshadow -Wno-sign-conversion -g -D_GLIBCXX_DEBUG -fno-sanitize-recover=undefined -fsanitize=undefined main.cpp -o main.e```

To import the above, copy .vscode folder into workspace.

Custom keyboard shortcuts and settings for VSCode and ICIE (overriding the default ones) are defined in keybindings.json and settings.json. To use - copy them in ```~/Library/Application Support/Code/User/{filename}``` or press ```cmd+shift+P``` in VSCode and choose ```Preferences: Open Keyboard Shortcuts (JSON)``` and ```Preferences: Open Settings (JSON)``` respectively to open these files.

Configured for
* ICIE version: 0.7.16
* VSCode version: 1.44.2
