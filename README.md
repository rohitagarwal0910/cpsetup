# CP Setup
Contains template, codepieces and custom config files for VSCode + ICIE extension for competitve programming.

Additional behaviour apart from ICIE default (defined in tasks.json):
* ```cmd+shift+B``` will build and execute main.e in an integrated terminal window.
* ```alt+C``` will clear out current main.cpp and testcases and copy template into main.cpp

Command used to compile code ```clang++ -std=c++17 -Wall -Wextra -Wconversion -Wshadow -Wno-sign-conversion -g -D_GLIBCXX_DEBUG -fno-sanitize-recover=undefined -fsanitize=undefined main.cpp -o main.e```

To import the above, copy .vscode folder into workspace.

Custom keyboard shortcuts and settings for VSCode and ICIE (overriding the default ones) are defined below. To use - copy them in ```~/Library/Application Support/Code/User/{filename}``` or press ```cmd+shift+P``` in VSCode and choose ```Preferences: Open Keyboard Shortcuts (JSON)``` and ```Preferences: Open Settings (JSON)``` respectively to open these files.

Settings:
```{
    "window.zoomLevel": 1,
    "editor.suggestSelection": "recentlyUsedByPrefix",
    "vsintellicode.modify.editor.suggestSelection": "automaticallyOverrodeDefaultValue",
    "C_Cpp.updateChannel": "Insiders",
    "icie.dir.projectDirectory": "~/Development/Competitive",
    "icie.template.solution": "~/Development/Competitive/templates/cc_template.cpp",
    "workbench.iconTheme": "material-icon-theme",
    "editor.cursorSmoothCaretAnimation": true,
    "editor.cursorBlinking": "phase",
    "icie.paste.library.path": "/Users/rohitagarwal/Development/Competitive/codepieces",
    "editor.smoothScrolling": true
}```

Keybindings:
```// Place your key bindings in this file to override the defaultsauto[]
[
    {
        "key": "cmd+r",
        "command": "workbench.action.reloadWindow",
        "when": "editorTextFocus"
    },
    {
        "key": "alt+c",
        "command": "workbench.action.tasks.test",
    },
    {
        "key": "alt+s",
        "command": "icie.submit.send"
    },
    {
        "key": "alt+f12",
        "command": "-icie.submit.send"
    },
    {
        "key": "alt+\\",
        "command": "icie.launch.nearby"
    },
    {
        "key": "alt+backspace",
        "command": "-icie.launch.nearby"
    },
    {
        "key": "alt+n",
        "command": "icie.open.scan"
    },
    {
        "key": "alt+f9",
        "command": "-icie.open.scan"
    },
    {
        "key": "alt+m",
        "command": "icie.open.url"
    },
    {
        "key": "alt+f11",
        "command": "-icie.open.url"
    },
    {
        "key": "alt+7",
        "command": "icie.paste.qistruct"
    },
    {
        "key": "alt+i",
        "command": "-icie.paste.qistruct"
    }
]```

Configured for
* ICIE version: 0.7.23