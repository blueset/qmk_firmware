# Eana’s Colemak layout for Drop Ctrl

1. SmartEEPROM support [[1]](https://github.com/nicoelayda/mdloader) [[2]](https://github.com/nicoelayda/qmk_firmware/tree/feature/smart-eeprom)
2. Colemak by default, <key>Fn</key> + <key>/</key> for QWERTY layout.  
   Indicators lights up on <key>Backspace</key> in QWERTY layout, on <key>Caps Lock/Backspace</key> for Colemak layout.
3. Default ANSI modifiers, <key>Fn</key> + <key>>.</key> for macOS modifiers.  
   Indicators lights up under both <key>Command</key>s for macOS modifiers, under both <key>GUI</key>s for ANSI modifiers.

![Layout preview](https://i.imgur.com/TGzxMnA.png)

<details>
<summary>keyboard-layout-editor.com source</summary>

```
["Esc",{x:1,a:0},"\n\n\n\nF1","\n\n\n\nF2","F3\n\n\n\nF3","F4\n\n\n\nF4",{x:0.5},"\n\n\n\nF5","\n\n\n\nF6","\n\n\n\nF7","\n\n\n\nF8",{x:0.5},"\n\n\n\nF9","\n\n\n\nF10","\n\n\n\nF11","\n\n\n\nF12",{x:0.25,a:4},"PrtSc","Scroll Lock",{a:0},"Pause\nBreak\n\n\n"],
[{y:0.5,a:4},"~\n`",{a:0},"!\n1\n\n\nDbg tgl","@\n2\n\n\nDbgMtx","#\n3\n\n\nDbgKb","$\n4\n\n\nDbgMs",{a:4},"%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{a:0,w:2},"Backspace\n\n\n\nReset",{x:0.25},"Insert\n\n\n\n","Home\n\n\n\n","PgUp\n\n\n\n"],
[{a:4,w:1.5},"Tab",{a:0},"Q\n\n\n\n🌈Spd-","W\n\n\n\n","F\n\n\nE\n🌈Spd+","P\n\n\nR\n🌈Hue+","G\n\n\nT\n🌈Satu+",{a:4},"J\n\n\nY",{a:0},"L\n\n\nU\nU_T_AUTO","U\n\n\nI\nU_T_ACGR",{a:4},"Y\n\n\nO",":\n;\n\nP","{\n[","}\n]",{a:0,w:1.5},"|\n\\\n\n\nDebug",{x:0.25},"Delete\n\n\n\n","End\n\n\n\n","PgDn\n\n\n\n"],
[{a:4,w:1.75},"Backspace\n\n\nCaps Lock",{a:0},"A\n\n\n\n🌈","R\n\n\nS\n","S\n\n\nD\n🌈",{n:true},"T\n\n\nF\n🌈Hue-","D\n\n\nG\n🌈Satu-",{a:4},"H",{n:true},"N\n\n\nJ","E\n\n\nK","I\n\n\nL","O\n\n:\n;","\"\n'",{w:2.25},"Enter\nReturn"],
[{w:2.25},"Shift","Z","X","C","V",{a:0},"B\n\n\n\nReset","K\n\n\nN\nNKRO",{a:4},"M","<\n,",{a:0},">\n.\n\n\n田/🍎","?\n/\n\n\nCo/Qw",{a:4,w:2.75},"Shift",{x:1.25},"↑"],
[{w:1.25},"Ctrl",{w:1.25},"Win\nOpt",{w:1.25},"Alt\nCmd",{a:7,w:6.25},"",{a:4,w:1.25},"Alt\nCmd",{w:1.25},"Win\nOpt",{w:1.25},"Fn\nMenu",{w:1.25},"Ctrl",{x:0.25},"←","↓","→"]
```

</details>
