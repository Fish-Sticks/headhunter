# headhunter
A simple Roblox exploit written in C++
Everything in the C++ file is original work besides the dependencies, free for you to use.

This code uses the luau compiler from https://www.github.com/Roblox/luau

This is a fully functioning Roblox script executor with custom functions.
Identity has been raised to 7 and the exploit is UPDATED as of 4/8/2022.

custom functions aren't updated right now, will be updated today or tomorrow.
everything else works

CUSTOM FUNCTIONS HAVE BEEN RELEASED!!!!!!!!!!!!!!!!
https://discord.gg/GC5dGFQyAD

getrawmetatable
getnamecallmethod
setreadonly
setfpscap
loadstring
game:HttpGet & HttpGet

```asm
b     esp, 58h
.text:0035F889                 push    esi
.text:0035F88A                 push    edi
.text:0035F88B                 mov     edi, ecx
.text:0035F88D                 mov     [ebp-2Ch], edx
.text:0035F890                 mov     eax, [edi+8]
.text:0035F893                 lea     edx, [edi+8]
.text:0035F896                 mov     esi, eax
.text:0035F898                 mov     [ebp-8], edi
.text:0035F89B                 sub     eax, edi
.text:0035F89D                 mov     [ebp-14h], edx
.text:0035F8A0                 sub     esi, edx
.text:0035F8A2                 mov     eax, [eax+30h]
.text:0035F8A5                 cmp     eax, [esi+34h]
.text:0035F8A8                 jb      short loc_35F8B4
.text:0035F8A8
.text:0035F8AA                 mov     dl, 1
.text:0035F8AC                 call    sub_1376710
.text:0035F8AC
.text:0035F8B1                 lea     edx, [edi+8]
.text:0035F8B1
.text:0035F8B4
.text:0035F8B4 loc_35F8B4:                             ; CODE XREF: newuserdata+38↑j
.text:0035F8B4                 mov     al, [edi+5]
.text:0035F8B7                 test    al, 2
.text:0035F8B9                 jz      short loc_35F8E0
.text:0035F8B9
.text:0035F8BB                 mov     ecx, [edx]
.text:0035F8BD                 and     al, 0FDh
.text:0035F8BF                 sub     ecx, edx
.text:0035F8C1                 mov     [edi+5], al
.text:0035F8C4                 mov     al, [ecx+15h]
.text:0035F8C7                 cmp     al, 1
.text:0035F8C9                 jz      short loc_35F8D3
.text:0035F8C9
.text:0035F8CB                 cmp     al, 2
.text:0035F8CD                 jz      short loc_35F8D3
.text:0035F8CD
.text:0035F8CF                 cmp     al, 3
.text:0035F8D1                 jnz     short loc_35F8E0
.text:0035F8D1
.text:0035F8D3
.text:0035F8D3 loc_35F8D3:                             ; CODE XREF: newuserdata+59↑j
.text:0035F8D3                                         ; newuserdata+5D↑j
.text:0035F8D3                 mov     eax, [ecx+20h]
.text:0035F8D6                 mov     [edi+3Ch], eax
.text:0035F8D9                 mov     [ecx+20h], edi
.text:0035F8DC                 and     byte ptr [edi+2], 0FBh
.text:0035F8DC
.text:0035F8E0
.text:0035F8E0 loc_35F8E0:                             ; CODE XREF: newuserdata+49↑j
.text:0035F8E0                                         ; newuserdata+61↑j
.text:0035F8E0                 mov     eax, [ebx+8]
.text:0035F8E3                 cmp     eax, 7FFFFFE7h
.text:0035F8E8                 ja      loc_3603ED
.text:0035F8E8
.text:0035F8EE                 mov     cl, [edi+4]
.text:0035F8F1                 lea     edi, [eax+10h]
.text:0035F8F4                 mov     [ebp-1], cl
.text:0035F8F7                 lea     eax, [edi-1]
.text:0035F8FA                 mov     ecx, [edx]
.text:0035F8FC                 sub     ecx, edx
.text:0035F8FE                 mov     [ebp-30h], ecx
.text:0035F901                 cmp     eax, 200h
.text:0035F906                 jnb     short loc_35F91F
.text:0035F906
.text:0035F908                 movsx   edx, byte_2AB8E08[edi]
.text:0035F90F                 test    edx, edx
.text:0035F911                 js      short loc_35F91F
.text:0035F911
.text:0035F913                 mov     ecx, [ebp-8]
.text:0035F916                 call    loc_13C09C0
.text:0035F916
.text:0035F91B                 mov     esi, eax
.text:0035F91D                 jmp     short loc_35F943
.text:0035F91D
.text:0035F91F ; ---------------------------------------------------------------------------
.text:0035F91F
.text:0035F91F loc_35F91F:                             ; CODE XREF: newuserdata+96↑j
.text:0035F91F                                         ; newuserdata+A1↑j
.text:0035F91F                 push    1
.text:0035F921                 lea     eax, [edi+28h]
.text:0035F924                 push    edi
.text:0035F925                 lea     edx, [ecx+13Ch]
.text:0035F92B                 mov     ecx, [ebp-8]
.text:0035F92E                 push    eax
.text:0035F92F                 call    sub_13C07B0
.text:0035F92F
.text:0035F934                 add     esp, 0Ch
.text:0035F937                 mov     ecx, [eax+14h]
.text:0035F93A                 lea     esi, [eax+28h]
.text:0035F93D                 sub     [eax+1Ch], ecx
.text:0035F940                 inc     dword ptr [eax+20h]
.text:0035F940
.text:0035F943
.text:0035F943 loc_35F943:                             ; CODE XREF: newuserdata+AD↑j
.text:0035F943                 test    esi, esi
.text:0035F945                 jnz     short loc_35F94F
.text:0035F945
.text:0035F947                 test    edi, edi
.text:0035F949                 jnz     loc_3603F4
.text:0035F949
.text:0035F94F
.text:0035F94F loc_35F94F:                             ; CODE XREF: newuserdata+D5↑j
.text:0035F94F                 mov     ecx, [ebp-30h]
.text:0035F952                 movzx   eax, byte ptr [ebp-1]
.text:0035F956                 mov     edx, [ebp-14h]
.text:0035F959                 add     [ecx+38h], edi
.text:0035F95C                 add     [ecx+eax*4+144h], edi
.text:0035F963                 mov     eax, [edx]
.text:0035F965                 mov     edi, [ebp-8]
.text:0035F968                 sub     eax, edx
.text:0035F96A                 mov     al, [eax+14h]
.text:0035F96D                 and     al, 3
.text:0035F96F                 mov     byte ptr [esi], 7
.text:0035F972                 mov     [esi+2], al
.text:0035F975                 mov     al, [edi+4]
.text:0035F978                 mov     [esi+1], al
.text:0035F97B                 mov     eax, [ebx+8]
.text:0035F97E                 mov     [esi+4], eax
.text:0035F981                 lea     eax, [esi+8]
.text:0035F984                 mov     [eax], eax
.text:0035F986                 mov     al, [ebx+0Ch]
.text:0035F989                 mov     [esi+3], al
.text:0035F98C                 mov     eax, [edi+18h]
.text:0035F98F                 mov     [eax], esi
.text:0035F991                 mov     dword ptr [eax+0Ch], 7
.text:0035F998                 add     dword ptr [edi+18h], 10h
.text:0035F99C                 mov     eax, ds:off_2F43004
.text:0035F9A1                 mov     ecx, [ebx+4]
.text:0035F9A4                 sub     ecx, eax
.text:0035F9A6                 cmp     ecx, ds:off_2F43000
.text:0035F9AC                 jb      short loc_35F9CA
.text:0035F9AC
.text:0035F9AE                 mov     eax, ds:lpAddress
.text:0035F9B3                 mov     ecx, [ebx+4]
.text:0035F9B6                 sub     ecx, eax
.text:0035F9B8                 cmp     ecx, ds:dwSize
.text:0035F9BE                 jb      short loc_35F9CA
.text:0035F9BE
.text:0035F9C0                 mov     ecx, edi
.text:0035F9C2                 call    retcheck
.text:0035F9C2
.text:0035F9C7                 lea     edx, [edi+8]
.text:0035F9C7
.text:0035F9CA
.text:0035F9CA loc_35F9CA:                             ; CODE XREF: newuserdata+13C↑j
.text:0035F9CA                                         ; newuserdata+14E↑j
.text:0035F9CA                 lea     eax, [esi+10h]
.text:0035F9CD                 mov     [ebp-34h], eax
.text:0035F9D0                 mov     al, [edi+5]
.text:0035F9D3                 test    al, 2
.text:0035F9D5                 jz      short loc_35F9FC
.text:0035F9D5
.text:0035F9D7                 mov     ecx, [edx]
.text:0035F9D9                 and     al, 0FDh
.text:0035F9DB                 sub     ecx, edx
.text:0035F9DD                 mov     [edi+5], al
.text:0035F9E0                 mov     al, [ecx+15h]
.text:0035F9E3                 cmp     al, 1
.text:0035F9E5                 jz      short loc_35F9EF
.text:0035F9E5
.text:0035F9E7                 cmp     al, 2
.text:0035F9E9                 jz      short loc_35F9EF
.text:0035F9E9
.text:0035F9EB                 cmp     al, 3
.text:0035F9ED                 jnz     short loc_35F9FC
.text:0035F9ED
.text:0035F9EF
.text:0035F9EF loc_35F9EF:                             ; CODE XREF: newuserdata+175↑j
.text:0035F9EF                                         ; newuserdata+179↑j
.text:0035F9EF                 mov     eax, [ecx+20h]
.text:0035F9F2                 mov     [edi+3Ch], eax
.text:0035F9F5                 mov     [ecx+20h], edi
.text:0035F9F8                 and     byte ptr [edi+2], 0FBh
.text:0035F9F8
.text:0035F9FC
.text:0035F9FC loc_35F9FC:                             ; CODE XREF: newuserdata+165↑j
.text:0035F9FC                                         ; newuserdata+17D↑j
.text:0035F9FC                 mov     edx, 0FFFFD8F0h
.text:0035FA01                 mov     ecx, edi
.text:0035FA03                 call    pseudo2addr
.text:0035FA03
.text:0035FA08                 mov     esi, [ebp-2Ch]
.text:0035FA0B                 mov     ecx, esi
.text:0035FA0D                 mov     [ebp-1Ch], eax
.text:0035FA10                 lea     edx, [ecx+1]
.text:0035FA10
.text:0035FA13
.text:0035FA13 loc_35FA13:                             ; CODE XREF: newuserdata+1A8↓j
.text:0035FA13                 mov     al, [ecx]
.text:0035FA15                 inc     ecx
.text:0035FA16                 test    al, al
.text:0035FA18                 jnz     short loc_35FA13
.text:0035FA18
.text:0035FA1A                 sub     ecx, edx
.text:0035FA1C                 mov     dword ptr [ebp-0Ch], 0
.text:0035FA23                 mov     [ebp-10h], ecx
.text:0035FA26                 mov     eax, esi
.text:0035FA28                 mov     [ebp-18h], eax
.text:0035FA2B                 mov     edi, ecx
.text:0035FA2D                 mov     [ebp-24h], ecx
.text:0035FA30                 mov     esi, ecx
.text:0035FA32                 cmp     ecx, 20h ; ' '
.text:0035FA35                 jb      short loc_35FAA2
.text:0035FA35
.text:0035FA37                 add     ecx, 0FFFFFFECh
.text:0035FA3A                 mov     eax, 0AAAAAAABh
.text:0035FA3F                 mul     ecx
.text:0035FA41                 mov     eax, [ebp-18h]
.text:0035FA44                 shr     edx, 3
.text:0035FA47                 mov     [ebp-24h], edx
.text:0035FA4A                 xor     edx, edx
.text:0035FA4C                 nop     dword ptr [eax+00h]
.text:0035FA4C
.text:0035FA50
.text:0035FA50 loc_35FA50:                             ; CODE XREF: newuserdata+22D↓j
.text:0035FA50                 movq    xmm0, qword ptr [eax]
.text:0035FA54                 sub     edi, 0Ch
.text:0035FA57                 mov     eax, [eax+8]
.text:0035FA5A                 add     esi, eax
.text:0035FA5C                 mov     [ebp-40h], eax
.text:0035FA5F                 mov     ecx, esi
.text:0035FA61                 movq    qword ptr [ebp-48h], xmm0
.text:0035FA66                 add     edx, [ebp-48h]
.text:0035FA69                 mov     eax, [ebp-44h]
.text:0035FA6C                 xor     edx, esi
.text:0035FA6E                 add     [ebp-0Ch], eax
.text:0035FA71                 mov     eax, [ebp-0Ch]
.text:0035FA74                 ror     ecx, 0Eh
.text:0035FA77                 sub     edx, ecx
.text:0035FA79                 xor     eax, edx
.text:0035FA7B                 mov     ecx, edx
.text:0035FA7D                 ror     ecx, 0Bh
.text:0035FA80                 sub     eax, ecx
.text:0035FA82                 mov     [ebp-30h], ecx
.text:0035FA85                 mov     [ebp-0Ch], eax
.text:0035FA88                 xor     esi, [ebp-0Ch]
.text:0035FA8B                 rol     eax, 7
.text:0035FA8E                 sub     esi, eax
.text:0035FA90                 mov     eax, [ebp-18h]
.text:0035FA93                 add     eax, 0Ch
.text:0035FA96                 sub     dword ptr [ebp-24h], 1
.text:0035FA9A                 mov     [ebp-18h], eax
.text:0035FA9D                 jnz     short loc_35FA50
.text:0035FA9D
.text:0035FA9F                 mov     [ebp-24h], esi
.text:0035FA9F
.text:0035FAA2
.text:0035FAA2 loc_35FAA2:                             ; CODE XREF: newuserdata+1C5↑j
.text:0035FAA2                 test    edi, edi
.text:0035FAA4                 jz      short loc_35FAC6
.text:0035FAA4
.text:0035FAA6
.text:0035FAA6 loc_35FAA6:                             ; CODE XREF: newuserdata+251↓j
.text:0035FAA6                 movzx   ecx, byte ptr [eax+edi-1]
.text:0035FAAB                 mov     eax, esi
.text:0035FAAD                 shl     eax, 5
.text:0035FAB0                 add     ecx, eax
.text:0035FAB2                 mov     eax, esi
.text:0035FAB4                 shr     eax, 2
.text:0035FAB7                 add     ecx, eax
.text:0035FAB9                 mov     eax, [ebp-18h]
.text:0035FABC                 xor     esi, ecx
.text:0035FABE                 sub     edi, 1
.text:0035FAC1                 jnz     short loc_35FAA6
.text:0035FAC1
.text:0035FAC3                 mov     [ebp-24h], esi
.text:0035FAC3
.text:0035FAC6
.text:0035FAC6 loc_35FAC6:                             ; CODE XREF: newuserdata+234↑j
.text:0035FAC6                 mov     ecx, [ebp-14h]
.text:0035FAC9                 mov     edx, [ecx]
.text:0035FACB                 mov     eax, edx
.text:0035FACD                 sub     eax, ecx
.text:0035FACF                 mov     ecx, [eax+4]
.text:0035FAD2                 dec     ecx
.text:0035FAD3                 and     ecx, esi
.text:0035FAD5                 mov     esi, [ebp-8]
.text:0035FAD8                 sub     edx, esi
.text:0035FADA                 mov     eax, [edx-8]
.text:0035FADD                 mov     edi, [eax+ecx*4]
.text:0035FAE0                 mov     [ebp-0Ch], edi
.text:0035FAE3                 test    edi, edi
.text:0035FAE5                 jz      short loc_35FB5E
.text:0035FAE5
.text:0035FAE7                 mov     esi, [ebp-10h]
.text:0035FAEA                 nop     word ptr [eax+eax+00h]
.text:0035FAEA
.text:0035FAF0
.text:0035FAF0 loc_35FAF0:                             ; CODE XREF: newuserdata+2E9↓j
.text:0035FAF0                 mov     eax, [edi+10h]
.text:0035FAF3                 lea     ecx, [edi+10h]
.text:0035FAF6                 sub     eax, ecx
.text:0035FAF8                 cmp     eax, esi
.text:0035FAFA                 jnz     short loc_35FB51
.text:0035FAFA
.text:0035FAFC                 mov     ecx, [ebp-2Ch]
.text:0035FAFF                 lea     edx, [edi+14h]
.text:0035FB02                 sub     esi, 4
.text:0035FB05                 jb      short loc_35FB18
.text:0035FB05
.text:0035FB07
.text:0035FB07 loc_35FB07:                             ; CODE XREF: newuserdata+2A6↓j
.text:0035FB07                 mov     eax, [ecx]
.text:0035FB09                 cmp     eax, [edx]
.text:0035FB0B                 jnz     short loc_35FB21
.text:0035FB0B
.text:0035FB0D                 add     ecx, 4
.text:0035FB10                 add     edx, 4
.text:0035FB13                 sub     esi, 4
.text:0035FB16                 jnb     short loc_35FB07
.text:0035FB16
.text:0035FB18
.text:0035FB18 loc_35FB18:                             ; CODE XREF: newuserdata+295↑j
.text:0035FB18                 cmp     esi, 0FFFFFFFCh
.text:0035FB1B                 jz      loc_35FBA6
.text:0035FB1B
.text:0035FB21
.text:0035FB21 loc_35FB21:                             ; CODE XREF: newuserdata+29B↑j
.text:0035FB21                 mov     al, [ecx]
.text:0035FB23                 cmp     al, [edx]
.text:0035FB25                 jnz     short loc_35FB4E
.text:0035FB25
.text:0035FB27                 cmp     esi, 0FFFFFFFDh
.text:0035FB2A                 jz      short loc_35FBA6
.text:0035FB2A
.text:0035FB2C                 mov     al, [ecx+1]
.text:0035FB2F                 cmp     al, [edx+1]
.text:0035FB32                 jnz     short loc_35FB4E
.text:0035FB32
.text:0035FB34                 cmp     esi, 0FFFFFFFEh
.text:0035FB37                 jz      short loc_35FBA6
.text:0035FB37
.text:0035FB39                 mov     al, [ecx+2]
.text:0035FB3C                 cmp     al, [edx+2]
.text:0035FB3F                 jnz     short loc_35FB4E
.text:0035FB3F
.text:0035FB41                 cmp     esi, 0FFFFFFFFh
.text:0035FB44                 jz      short loc_35FBA6
.text:0035FB44
.text:0035FB46                 mov     al, [ecx+3]
.text:0035FB49                 cmp     al, [edx+3]
.text:0035FB4C                 jz      short loc_35FBA6
.text:0035FB4C
.text:0035FB4E
.text:0035FB4E loc_35FB4E:                             ; CODE XREF: newuserdata+2B5↑j
.text:0035FB4E                                         ; newuserdata+2C2↑j ...
.text:0035FB4E                 mov     esi, [ebp-10h]
.text:0035FB4E
.text:0035FB51
.text:0035FB51 loc_35FB51:                             ; CODE XREF: newuserdata+28A↑j
.text:0035FB51                 mov     edi, [edi+8]
.text:0035FB54                 mov     [ebp-0Ch], edi
.text:0035FB57                 test    edi, edi
.text:0035FB59                 jnz     short loc_35FAF0
.text:0035FB59
.text:0035FB5B                 mov     esi, [ebp-8]
.text:0035FB5B
.text:0035FB5E
.text:0035FB5E loc_35FB5E:                             ; CODE XREF: newuserdata+275↑j
.text:0035FB5E                 mov     edi, [ebp-10h]
.text:0035FB61                 cmp     edi, 40000000h
.text:0035FB67                 ja      loc_3603E5
.text:0035FB67
.text:0035FB6D                 mov     al, [esi+4]
.text:0035FB70                 lea     ecx, [edi+15h]
.text:0035FB73                 mov     edx, [esi+8]
.text:0035FB76                 mov     [ebp-1], al
.text:0035FB79                 lea     eax, [esi+8]
.text:0035FB7C                 sub     edx, eax
.text:0035FB7E                 mov     [ebp-18h], ecx
.text:0035FB81                 lea     eax, [ecx-1]
.text:0035FB84                 mov     [ebp-30h], edx
.text:0035FB87                 cmp     eax, 200h
.text:0035FB8C                 jnb     short loc_35FBD5
.text:0035FB8C
.text:0035FB8E                 movsx   eax, byte_2AB8E08[ecx]
.text:0035FB95                 test    eax, eax
.text:0035FB97                 js      short loc_35FBD5
.text:0035FB97
.text:0035FB99                 mov     edx, eax
.text:0035FB9B                 mov     ecx, esi
.text:0035FB9D                 call    loc_13C09C0
.text:0035FB9D
.text:0035FBA2                 mov     esi, eax
.text:0035FBA4                 jmp     short loc_35FBF8
.text:0035FBA4
.text:0035FBA6 ; ---------------------------------------------------------------------------
.text:0035FBA6
.text:0035FBA6 loc_35FBA6:                             ; CODE XREF: newuserdata+2AB↑j
.text:0035FBA6                                         ; newuserdata+2BA↑j ...
.text:0035FBA6                 mov     ecx, [ebp-14h]
.text:0035FBA9                 mov     esi, [ebp-0Ch]
.text:0035FBAC                 mov     eax, [ecx]
.text:0035FBAE                 mov     dl, [esi+2]
.text:0035FBB1                 sub     eax, ecx
.text:0035FBB3                 movzx   ecx, byte ptr [eax+14h]
.text:0035FBB7                 not     ecx
.text:0035FBB9                 movzx   eax, dl
.text:0035FBBC                 and     ecx, 3
.text:0035FBBF                 xor     ecx, eax
.text:0035FBC1                 test    cl, 0Bh
.text:0035FBC4                 jnz     loc_35FDD1
.text:0035FBC4
.text:0035FBCA                 xor     dl, 3
.text:0035FBCD                 mov     [esi+2], dl
.text:0035FBD0                 jmp     loc_35FDD1
.text:0035FBD0
.text:0035FBD5 ; ---------------------------------------------------------------------------
.text:0035FBD5
.text:0035FBD5 loc_35FBD5:                             ; CODE XREF: newuserdata+31C↑j
.text:0035FBD5                                         ; newuserdata+327↑j
.text:0035FBD5                 push    1
.text:0035FBD7                 push    ecx
.text:0035FBD8                 lea     eax, [ecx+28h]
.text:0035FBDB                 add     edx, 13Ch
.text:0035FBE1                 push    eax
.text:0035FBE2                 mov     ecx, esi
.text:0035FBE4                 call    sub_13C07B0
.text:0035FBE4
.text:0035FBE9                 add     esp, 0Ch
.text:0035FBEC                 mov     ecx, [eax+14h]
.text:0035FBEF                 lea     esi, [eax+28h]
.text:0035FBF2                 sub     [eax+1Ch], ecx
.text:0035FBF5                 inc     dword ptr [eax+20h]
.text:0035FBF5
.text:0035FBF8
.text:0035FBF8 loc_35FBF8:                             ; CODE XREF: newuserdata+334↑j
.text:0035FBF8                 mov     ecx, [ebp-18h]
.text:0035FBFB                 mov     [ebp-0Ch], esi
.text:0035FBFE                 test    esi, esi
.text:0035FC00                 jnz     short loc_35FC0A
.text:0035FC00
.text:0035FC02                 test    ecx, ecx
.text:0035FC04                 jnz     loc_360401
.text:0035FC04
.text:0035FC0A
.text:0035FC0A loc_35FC0A:                             ; CODE XREF: newuserdata+390↑j
.text:0035FC0A                 mov     edx, [ebp-30h]
.text:0035FC0D                 movzx   eax, byte ptr [ebp-1]
.text:0035FC11                 push    dword ptr [ebp-10h]
.text:0035FC14                 add     [edx+38h], ecx
.text:0035FC17                 add     [edx+eax*4+144h], ecx
.text:0035FC1E                 lea     eax, [edi+10h]
.text:0035FC21                 mov     ecx, [ebp-14h]
.text:0035FC24                 add     eax, esi
.text:0035FC26                 mov     edi, [ebp-24h]
.text:0035FC29                 mov     [esi+10h], eax
.text:0035FC2C                 lea     eax, [esi+0Ch]
.text:0035FC2F                 push    dword ptr [ebp-2Ch]
.text:0035FC32                 sub     eax, edi
.text:0035FC34                 mov     [esi+0Ch], eax
.text:0035FC37                 mov     eax, [ecx]
.text:0035FC39                 sub     eax, ecx
.text:0035FC3B                 mov     al, [eax+14h]
.text:0035FC3E                 and     al, 3
.text:0035FC40                 mov     byte ptr [esi], 5
.text:0035FC43                 mov     [esi+2], al
.text:0035FC46                 mov     eax, [ebp-8]
.text:0035FC49                 mov     al, [eax+4]
.text:0035FC4C                 mov     [esi+1], al
.text:0035FC4F                 lea     eax, [esi+14h]
.text:0035FC52                 push    eax
.text:0035FC53                 call    sub_1B7EE40
.text:0035FC53
.text:0035FC58                 mov     edx, [ebp-14h]
.text:0035FC5B                 add     esp, 0Ch
.text:0035FC5E                 mov     ecx, [ebp-10h]
.text:0035FC61                 mov     byte ptr [ecx+esi+14h], 0
.text:0035FC66                 mov     eax, [edx]
.text:0035FC68                 sub     eax, edx
.text:0035FC6A                 mov     edx, [eax+858h]
.text:0035FC70                 test    edx, edx
.text:0035FC72                 jz      short loc_35FC83
.text:0035FC72
.text:0035FC74                 push    ecx
.text:0035FC75                 lea     eax, [esi+14h]
.text:0035FC78                 push    eax
.text:0035FC79                 call    edx
.text:0035FC79
.text:0035FC7B                 add     esp, 8
.text:0035FC7E                 movzx   eax, ax
.text:0035FC81                 jmp     short loc_35FC86
.text:0035FC81
.text:0035FC83 ; ---------------------------------------------------------------------------
.text:0035FC83
.text:0035FC83 loc_35FC83:                             ; CODE XREF: newuserdata+402↑j
.text:0035FC83                 or      eax, 0FFFFFFFFh
.text:0035FC83
.text:0035FC86
.text:0035FC86 loc_35FC86:                             ; CODE XREF: newuserdata+411↑j
.text:0035FC86                 mov     [esi+4], ax
.text:0035FC8A                 mov     eax, [ebp-14h]
.text:0035FC8D                 mov     edx, [eax]
.text:0035FC8F                 sub     edx, eax
.text:0035FC91                 mov     ecx, [edx+4]
.text:0035FC94                 mov     eax, [edx]
.text:0035FC96                 dec     ecx
.text:0035FC97                 and     ecx, edi
.text:0035FC99                 mov     eax, [eax+ecx*4]
.text:0035FC9C                 mov     [esi+8], eax
.text:0035FC9F                 mov     eax, [edx]
.text:0035FCA1                 mov     [eax+ecx*4], esi
.text:0035FCA4                 mov     eax, [edx+4]
.text:0035FCA7                 inc     dword ptr [edx+8]
.text:0035FCAA                 mov     [ebp-2Ch], eax
.text:0035FCAD                 cmp     [edx+8], eax
.text:0035FCB0                 jbe     loc_35FDD1
.text:0035FCB0
.text:0035FCB6                 cmp     eax, 3FFFFFFFh
.text:0035FCBB                 jg      loc_35FDD1
.text:0035FCBB
.text:0035FCC1                 add     eax, eax
.text:0035FCC3                 cmp     eax, 3FFFFFFFh
.text:0035FCC8                 ja      loc_3603E5
.text:0035FCC8
.text:0035FCCE                 lea     ecx, ds:0[eax*4]
.text:0035FCD5                 mov     eax, [ebp-14h]
.text:0035FCD8                 mov     [ebp-24h], ecx
.text:0035FCDB                 mov     edx, [eax]
.text:0035FCDD                 sub     edx, eax
.text:0035FCDF                 lea     eax, [ecx-1]
.text:0035FCE2                 mov     [ebp-30h], edx
.text:0035FCE5                 cmp     eax, 200h
.text:0035FCEA                 jnb     short loc_35FD08
.text:0035FCEA
.text:0035FCEC                 movsx   eax, byte_2AB8E08[ecx]
.text:0035FCF3                 test    eax, eax
.text:0035FCF5                 js      short loc_35FD08
.text:0035FCF5
.text:0035FCF7                 mov     ecx, [ebp-8]
.text:0035FCFA                 mov     edx, eax
.text:0035FCFC                 call    sub_13C08C0
.text:0035FCFC
.text:0035FD01                 mov     edi, eax
.text:0035FD03                 mov     [ebp-18h], edi
.text:0035FD06                 jmp     short loc_35FD1D
.text:0035FD06
.text:0035FD08 ; ---------------------------------------------------------------------------
.text:0035FD08
.text:0035FD08 loc_35FD08:                             ; CODE XREF: newuserdata+47A↑j
.text:0035FD08                                         ; newuserdata+485↑j
.text:0035FD08                 mov     eax, [edx+0Ch]
.text:0035FD0B                 push    ecx
.text:0035FD0C                 push    0
.text:0035FD0E                 push    0
.text:0035FD10                 push    dword ptr [edx+10h]
.text:0035FD13                 call    eax
.text:0035FD13
.text:0035FD15                 add     esp, 10h
.text:0035FD18                 mov     [ebp-18h], eax
.text:0035FD1B                 mov     edi, eax
.text:0035FD1B
.text:0035FD1D
.text:0035FD1D loc_35FD1D:                             ; CODE XREF: newuserdata+496↑j
.text:0035FD1D                 mov     eax, [ebp-24h]
.text:0035FD20                 test    edi, edi
.text:0035FD22                 jnz     short loc_35FD2C
.text:0035FD22
.text:0035FD24                 test    eax, eax
.text:0035FD26                 jnz     loc_360401
.text:0035FD26
.text:0035FD2C
.text:0035FD2C loc_35FD2C:                             ; CODE XREF: newuserdata+4B2↑j
.text:0035FD2C                 mov     ecx, [ebp-30h]
.text:0035FD2F                 mov     esi, [ebp-2Ch]
.text:0035FD32                 add     [ecx+38h], eax
.text:0035FD35                 add     [ecx+144h], eax
.text:0035FD3B                 mov     ecx, [ebp-14h]
.text:0035FD3E                 mov     edx, [ecx]
.text:0035FD40                 sub     edx, ecx
.text:0035FD42                 lea     ecx, [esi+esi]
.text:0035FD45                 mov     esi, [ebp-0Ch]
.text:0035FD48                 mov     [ebp-10h], edx
.text:0035FD4B                 test    ecx, ecx
.text:0035FD4D                 jle     short loc_35FD5B
.text:0035FD4D
.text:0035FD4F                 shr     eax, 2
.text:0035FD52                 mov     ecx, eax
.text:0035FD54                 xor     eax, eax
.text:0035FD56                 rep stosd
.text:0035FD58                 mov     edi, [ebp-18h]
.text:0035FD58
.text:0035FD5B
.text:0035FD5B loc_35FD5B:                             ; CODE XREF: newuserdata+4DD↑j
.text:0035FD5B                 mov     eax, [edx+4]
.text:0035FD5E                 xor     ecx, ecx
.text:0035FD60                 mov     [ebp-24h], ecx
.text:0035FD63                 test    eax, eax
.text:0035FD65                 jle     short loc_35FDB0
.text:0035FD65
.text:0035FD67
.text:0035FD67 loc_35FD67:                             ; CODE XREF: newuserdata+53B↓j
.text:0035FD67                 mov     eax, [edx]
.text:0035FD69                 mov     esi, [eax+ecx*4]
.text:0035FD6C                 test    esi, esi
.text:0035FD6E                 jz      short loc_35FDA2
.text:0035FD6E
.text:0035FD70                 mov     ecx, [ebp-2Ch]
.text:0035FD73                 lea     eax, ds:0FFFFFFFFh[ecx*2]
.text:0035FD7A                 mov     [ebp-30h], eax
.text:0035FD7D                 nop     dword ptr [eax]
.text:0035FD7D
.text:0035FD80
.text:0035FD80 loc_35FD80:                             ; CODE XREF: newuserdata+52A↓j
.text:0035FD80                 mov     edx, [esi+8]
.text:0035FD83                 lea     ecx, [esi+0Ch]
.text:0035FD86                 sub     ecx, [ecx]
.text:0035FD88                 and     ecx, eax
.text:0035FD8A                 mov     eax, [edi+ecx*4]
.text:0035FD8D                 mov     [esi+8], eax
.text:0035FD90                 mov     eax, [ebp-30h]
.text:0035FD93                 mov     [edi+ecx*4], esi
.text:0035FD96                 mov     esi, edx
.text:0035FD98                 test    edx, edx
.text:0035FD9A                 jnz     short loc_35FD80
.text:0035FD9A
.text:0035FD9C                 mov     ecx, [ebp-24h]
.text:0035FD9F                 mov     edx, [ebp-10h]
.text:0035FD9F
.text:0035FDA2
.text:0035FDA2 loc_35FDA2:                             ; CODE XREF: newuserdata+4FE↑j
.text:0035FDA2                 mov     eax, [edx+4]
.text:0035FDA5                 inc     ecx
.text:0035FDA6                 mov     [ebp-24h], ecx
.text:0035FDA9                 cmp     ecx, eax
.text:0035FDAB                 jl      short loc_35FD67
.text:0035FDAB
.text:0035FDAD                 mov     esi, [ebp-0Ch]
.text:0035FDAD
.text:0035FDB0
.text:0035FDB0 loc_35FDB0:                             ; CODE XREF: newuserdata+4F5↑j
.text:0035FDB0                 mov     edx, [edx]
.text:0035FDB2                 mov     ecx, [ebp-8]
.text:0035FDB5                 shl     eax, 2
.text:0035FDB8                 push    0
.text:0035FDBA                 push    eax
.text:0035FDBB                 call    sub_13C0AF0
.text:0035FDBB
.text:0035FDC0                 mov     edx, [ebp-2Ch]
.text:0035FDC3                 add     esp, 8
.text:0035FDC6                 mov     eax, [ebp-10h]
.text:0035FDC9                 lea     ecx, [edx+edx]
.text:0035FDCC                 mov     [eax+4], ecx
.text:0035FDCF                 mov     [eax], edi
.text:0035FDCF
.text:0035FDD1
.text:0035FDD1 loc_35FDD1:                             ; CODE XREF: newuserdata+354↑j
.text:0035FDD1                                         ; newuserdata+360↑j ...
.text:0035FDD1                 mov     edi, [ebp-8]
.text:0035FDD4                 mov     eax, 5
.text:0035FDD9                 movaps  xmm3, xmmword_2C87C80
.text:0035FDE0                 mov     [ebp-58h], esi
.text:0035FDE3                 movsd   xmm4, qword ptr [ebp-58h]
.text:0035FDE8                 mov     ecx, [edi+18h]
.text:0035FDEB                 mov     edi, [ebp-1Ch]
.text:0035FDEE                 mov     [ebp-4Ch], eax
.text:0035FDF1                 mov     [ebp-30h], ecx
.text:0035FDF4                 mov     dword ptr [ebp-2Ch], 0
.text:0035FDFB                 nop     dword ptr [eax+eax+00h]
.text:0035FDFB
.text:0035FE00
.text:0035FE00 loc_35FE00:                             ; CODE XREF: newuserdata+A5E↓j
.text:0035FE00                 mov     ecx, [edi+0Ch]
.text:0035FE03                 cmp     ecx, 6
.text:0035FE06                 jnz     loc_36021B
.text:0035FE06
.text:0035FE0C                 mov     edx, [edi]
.text:0035FE0E                 mov     [ebp-10h], edx
.text:0035FE11                 sub     eax, 0
.text:0035FE14                 jz      loc_36016F
.text:0035FE14
.text:0035FE1A                 sub     eax, 4
.text:0035FE1D                 jz      short loc_35FE96
.text:0035FE1D
.text:0035FE1F                 sub     eax, 1
.text:0035FE22                 jnz     loc_35FF78
.text:0035FE22
.text:0035FE28                 mov     ecx, [ebp-10h]
.text:0035FE2B                 lea     eax, [esi+0Ch]
.text:0035FE2E                 sub     eax, [eax]
.text:0035FE30                 mov     edi, 1
.text:0035FE35                 add     edx, 14h
.text:0035FE38                 mov     cl, [ecx+5]
.text:0035FE3B                 shl     edi, cl
.text:0035FE3D                 dec     edi
.text:0035FE3E                 and     edi, eax
.text:0035FE40                 shl     edi, 5
.text:0035FE43                 sub     edi, edx
.text:0035FE45                 add     edi, [edx]
.text:0035FE45
.text:0035FE47
.text:0035FE47 loc_35FE47:                             ; CODE XREF: newuserdata+5F4↓j
.text:0035FE47                 mov     ecx, [edi+1Ch]
.text:0035FE4A                 mov     eax, ecx
.text:0035FE4C                 and     eax, 0Fh
.text:0035FE4F                 cmp     al, 5
.text:0035FE51                 jnz     short loc_35FE58
.text:0035FE51
.text:0035FE53                 cmp     [edi+10h], esi
.text:0035FE56                 jz      short loc_35FE6B ; jumptable 00360102 case 0
.text:0035FE56
.text:0035FE58
.text:0035FE58 loc_35FE58:                             ; CODE XREF: newuserdata+5E1↑j
.text:0035FE58                 sar     ecx, 4
.text:0035FE5B                 test    ecx, ecx
.text:0035FE5D                 jz      short loc_35FE66
.text:0035FE5D
.text:0035FE5F                 shl     ecx, 5
.text:0035FE62                 add     edi, ecx
.text:0035FE64                 jmp     short loc_35FE47
.text:0035FE64
.text:0035FE66 ; ---------------------------------------------------------------------------
.text:0035FE66
.text:0035FE66 loc_35FE66:                             ; CODE XREF: newuserdata+5ED↑j
.text:0035FE66                                         ; newuserdata+674↓j ...
.text:0035FE66                 mov     edi, offset luao_nilobject
.text:0035FE66
.text:0035FE6B
.text:0035FE6B loc_35FE6B:                             ; CODE XREF: newuserdata+5E6↑j
.text:0035FE6B                                         ; newuserdata+662↓j ...
.text:0035FE6B                 mov     edx, [ebp-10h]  ; jumptable 00360102 case 0
.text:0035FE6E                 cmp     edi, offset luao_nilobject
.text:0035FE74                 jz      loc_360174
.text:0035FE74
.text:0035FE7A                 mov     ecx, [ebp-8]
.text:0035FE7D                 lea     eax, [edx+14h]
.text:0035FE80                 sub     eax, [eax]
.text:0035FE82                 add     eax, edi
.text:0035FE84                 sar     eax, 5
.text:0035FE87                 mov     [ecx+34h], eax
.text:0035FE8A                 movaps  xmm3, xmmword_2C87C80
.text:0035FE91                 jmp     loc_360174
.text:0035FE91
.text:0035FE96 ; ---------------------------------------------------------------------------
.text:0035FE96
.text:0035FE96 loc_35FE96:                             ; CODE XREF: newuserdata+5AD↑j
.text:0035FE96                 xorps   xmm0, xmm0
.text:0035FE99                 movsd   xmm0, xmm4
.text:0035FE9D                 xorps   xmm0, xmm3
.text:0035FEA0                 cvttsd2si ecx, xmm0
.text:0035FEA4                 movd    xmm2, ecx
.text:0035FEA8                 cvtdq2pd xmm2, xmm2
.text:0035FEAC                 ucomisd xmm2, xmm0
.text:0035FEB0                 lahf
.text:0035FEB1                 test    ah, 44h
.text:0035FEB4                 jp      loc_35FF78
.text:0035FEB4
.text:0035FEBA                 lea     eax, [ecx-1]
.text:0035FEBD                 cmp     eax, [edx+8]
.text:0035FEC0                 jnb     short loc_35FED4
.text:0035FEC0
.text:0035FEC2                 mov     edi, [edx+18h]
.text:0035FEC5                 lea     eax, [edx+18h]
.text:0035FEC8                 shl     ecx, 4
.text:0035FECB                 add     edi, 0FFFFFFF0h
.text:0035FECE                 sub     ecx, eax
.text:0035FED0                 add     edi, ecx
.text:0035FED2                 jmp     short loc_35FE6B ; jumptable 00360102 case 0
.text:0035FED2
.text:0035FED4 ; ---------------------------------------------------------------------------
.text:0035FED4
.text:0035FED4 loc_35FED4:                             ; CODE XREF: newuserdata+650↑j
.text:0035FED4                 mov     eax, [edx+14h]
.text:0035FED7                 lea     ecx, [edx+14h]
.text:0035FEDA                 mov     [ebp-24h], eax
.text:0035FEDD                 sub     eax, ecx
.text:0035FEDF                 cmp     eax, offset dword_1EA0808
.text:0035FEE4                 jz      short loc_35FE66
.text:0035FEE4
.text:0035FEE6                 movsd   qword ptr [ebp-3Ch], xmm2
.text:0035FEEB                 mov     edi, 1
.text:0035FEF0                 mov     ecx, [ebp-38h]
.text:0035FEF3                 and     ecx, 7FFFFFFFh
.text:0035FEF9                 mov     eax, ecx
.text:0035FEFB                 shr     eax, 12h
.text:0035FEFE                 xor     eax, [ebp-3Ch]
.text:0035FF01                 imul    esi, eax, 5BD1E995h
.text:0035FF07                 mov     eax, esi
.text:0035FF09                 shr     eax, 16h
.text:0035FF0C                 xor     eax, ecx
.text:0035FF0E                 mov     ecx, [ebp-10h]
.text:0035FF11                 imul    edx, eax, 5BD1E995h
.text:0035FF17                 mov     cl, [ecx+5]
.text:0035FF1A                 shl     edi, cl
.text:0035FF1C                 mov     eax, edx
.text:0035FF1E                 dec     edi
.text:0035FF1F                 shr     eax, 11h
.text:0035FF22                 xor     eax, esi
.text:0035FF24                 imul    eax, 5BD1E995h
.text:0035FF2A                 shr     eax, 13h
.text:0035FF2D                 xor     eax, edx
.text:0035FF2F                 imul    eax, 5BD1E995h
.text:0035FF35                 and     edi, eax
.text:0035FF37                 mov     eax, [ebp-24h]
.text:0035FF3A                 shl     edi, 5
.text:0035FF3D                 add     eax, 0FFFFFFECh
.text:0035FF40                 sub     edi, [ebp-10h]
.text:0035FF43                 add     edi, eax
.text:0035FF43
.text:0035FF45
.text:0035FF45 loc_35FF45:                             ; CODE XREF: newuserdata+706↓j
.text:0035FF45                 mov     ecx, [edi+1Ch]
.text:0035FF48                 mov     eax, ecx
.text:0035FF4A                 and     al, 0Fh
.text:0035FF4C                 cmp     al, 4
.text:0035FF4E                 jnz     short loc_35FF66
.text:0035FF4E
.text:0035FF50                 movsd   xmm1, qword ptr [edi+10h]
.text:0035FF55                 xorps   xmm1, xmm3
.text:0035FF58                 ucomisd xmm1, xmm2
.text:0035FF5C                 lahf
.text:0035FF5D                 test    ah, 44h
.text:0035FF60                 jnp     loc_35FE6B      ; jumptable 00360102 case 0
.text:0035FF60
.text:0035FF66
.text:0035FF66 loc_35FF66:                             ; CODE XREF: newuserdata+6DE↑j
.text:0035FF66                 sar     ecx, 4
.text:0035FF69                 test    ecx, ecx
.text:0035FF6B                 jz      loc_35FE66
.text:0035FF6B
.text:0035FF71                 shl     ecx, 5
.text:0035FF74                 add     edi, ecx
.text:0035FF76                 jmp     short loc_35FF45
.text:0035FF76
.text:0035FF78 ; ---------------------------------------------------------------------------
.text:0035FF78
.text:0035FF78 loc_35FF78:                             ; CODE XREF: newuserdata+5B2↑j
.text:0035FF78                                         ; newuserdata+644↑j
.text:0035FF78                 mov     eax, [ebp-4Ch]
.text:0035FF7B                 dec     eax             ; switch 5 cases
.text:0035FF7C                 cmp     eax, 4
.text:0035FF7F                 ja      def_35FF85      ; jumptable 0035FF85 default case, case 2
.text:0035FF7F
.text:0035FF85                 jmp     ds:jpt_35FF85[eax*4] ; switch jump
.text:0035FF85
.text:0035FF8C ; ---------------------------------------------------------------------------
.text:0035FF8C
.text:0035FF8C loc_35FF8C:                             ; CODE XREF: newuserdata+715↑j
.text:0035FF8C                                         ; DATA XREF: .text:jpt_35FF85↓o
.text:0035FF8C                 xorps   xmm0, xmm0      ; jumptable 0035FF85 case 4
.text:0035FF8F                 movsd   xmm0, xmm4
.text:0035FF93                 xorps   xmm0, xmm3
.text:0035FF96                 movsd   qword ptr [ebp-28h], xmm0
.text:0035FF9B                 mov     ecx, [ebp-24h]
.text:0035FF9E                 and     ecx, 7FFFFFFFh
.text:0035FFA4                 mov     eax, ecx
.text:0035FFA6                 shr     eax, 12h
.text:0035FFA9                 xor     eax, [ebp-28h]
.text:0035FFAC                 imul    esi, eax, 5BD1E995h
.text:0035FFB2                 mov     eax, esi
.text:0035FFB4                 shr     eax, 16h
.text:0035FFB7                 xor     eax, ecx
.text:0035FFB9                 mov     ecx, [ebp-10h]
.text:0035FFBC                 imul    edx, eax, 5BD1E995h
.text:0035FFC2                 mov     eax, 1
.text:0035FFC7                 lea     edi, [ecx+14h]
.text:0035FFCA                 mov     cl, [ecx+5]
.text:0035FFCD                 shl     eax, cl
.text:0035FFCF                 mov     [ebp-18h], eax
.text:0035FFD2                 mov     ecx, eax
.text:0035FFD4                 mov     eax, edx
.text:0035FFD6                 dec     ecx
.text:0035FFD7                 shr     eax, 11h
.text:0035FFDA                 xor     eax, esi
.text:0035FFDC                 imul    eax, 5BD1E995h
.text:0035FFE2                 shr     eax, 13h
.text:0035FFE5                 xor     eax, edx
.text:0035FFE7                 imul    eax, 5BD1E995h
.text:0035FFED                 and     ecx, eax
.text:0035FFEF                 shl     ecx, 5
.text:0035FFF2                 sub     ecx, edi
.text:0035FFF4                 add     ecx, [edi]
.text:0035FFF6                 mov     [ebp-18h], ecx
.text:0035FFF9                 mov     edi, ecx
.text:0035FFFB                 jmp     loc_3600E8
.text:0035FFFB
.text:00360000 ; ---------------------------------------------------------------------------
.text:00360000
.text:00360000 loc_360000:                             ; CODE XREF: newuserdata+715↑j
.text:00360000                                         ; DATA XREF: .text:jpt_35FF85↓o
.text:00360000                 mov     edi, [ebp-54h]  ; jumptable 0035FF85 case 3
.text:00360003                 xor     eax, eax
.text:00360005                 cmp     dword ptr [ebp-0Ch], 8000000h
.text:0036000C                 mov     ecx, [ebp-50h]
.text:0036000F                 cmovz   esi, eax
.text:00360012                 cmp     edi, 8000000h
.text:00360018                 cmovz   edi, eax
.text:0036001B                 cmp     ecx, 8000000h
.text:00360021                 cmovz   ecx, eax
.text:00360024                 add     edx, 14h
.text:00360027                 mov     eax, ecx
.text:00360029                 shr     eax, 11h
.text:0036002C                 xor     eax, ecx
.text:0036002E                 imul    ecx, eax, 4F9FFB7h
.text:00360034                 mov     eax, esi
.text:00360036                 shr     eax, 11h
.text:00360039                 xor     eax, esi
.text:0036003B                 imul    eax, 466F45Dh
.text:00360041                 xor     ecx, eax
.text:00360043                 mov     eax, edi
.text:00360045                 shr     eax, 11h
.text:00360048                 xor     eax, edi
.text:0036004A                 mov     [ebp-18h], ecx
.text:0036004D                 imul    eax, 127409Fh
.text:00360053                 mov     edi, ecx
.text:00360055                 mov     ecx, [ebp-10h]
.text:00360058                 mov     cl, [ecx+5]
.text:0036005B                 xor     edi, eax
.text:0036005D                 mov     eax, 1
.text:00360062                 shl     eax, cl
.text:00360064                 dec     eax
.text:00360065                 and     edi, eax
.text:00360067                 shl     edi, 5
.text:0036006A                 sub     edi, edx
.text:0036006C                 add     edi, [edx]
.text:0036006E                 jmp     loc_3600E8
.text:0036006E
.text:00360073 ; ---------------------------------------------------------------------------
.text:00360073
.text:00360073 loc_360073:                             ; CODE XREF: newuserdata+715↑j
.text:00360073                                         ; DATA XREF: .text:jpt_35FF85↓o
.text:00360073                 mov     ecx, [ebp-10h]  ; jumptable 0035FF85 case 5
.text:00360076                 lea     eax, [esi+0Ch]
.text:00360079                 sub     eax, [eax]
.text:0036007B                 mov     edi, 1
.text:00360080                 add     edx, 14h
.text:00360083                 mov     cl, [ecx+5]
.text:00360086                 shl     edi, cl
.text:00360088                 dec     edi
.text:00360089                 and     edi, eax
.text:0036008B                 shl     edi, 5
.text:0036008E                 sub     edi, edx
.text:00360090                 add     edi, [edx]
.text:00360092                 jmp     short loc_3600EB
.text:00360092
.text:00360094 ; ---------------------------------------------------------------------------
.text:00360094
.text:00360094 loc_360094:                             ; CODE XREF: newuserdata+715↑j
.text:00360094                                         ; DATA XREF: .text:jpt_35FF85↓o
.text:00360094                 mov     cl, [edx+5]     ; jumptable 0035FF85 case 1
.text:00360097                 lea     eax, [edx+14h]
.text:0036009A                 mov     edi, 1
.text:0036009F                 shl     edi, cl
.text:003600A1                 dec     edi
.text:003600A2                 and     edi, esi
.text:003600A4                 shl     edi, 5
.text:003600A7                 sub     edi, eax
.text:003600A9                 add     edi, [eax]
.text:003600AB                 jmp     short loc_3600EB
.text:003600AB
.text:003600AD ; ---------------------------------------------------------------------------
.text:003600AD
.text:003600AD def_35FF85:                             ; CODE XREF: newuserdata+70F↑j
.text:003600AD                                         ; newuserdata+715↑j
.text:003600AD                                         ; DATA XREF: ...
.text:003600AD                 mov     eax, esi        ; jumptable 0035FF85 default case, case 2
.text:003600AF                 mov     edi, 1
.text:003600B4                 shr     eax, 10h
.text:003600B7                 xor     eax, esi
.text:003600B9                 imul    ecx, eax, 85EBCA6Bh
.text:003600BF                 mov     eax, ecx
.text:003600C1                 shr     eax, 0Dh
.text:003600C4                 xor     eax, ecx
.text:003600C6                 imul    edx, eax, 0C2B2AE35h
.text:003600CC                 mov     eax, [ebp-10h]
.text:003600CF                 lea     esi, [eax+14h]
.text:003600D2                 mov     cl, [eax+5]
.text:003600D5                 mov     eax, edx
.text:003600D7                 shl     edi, cl
.text:003600D9                 shr     eax, 10h
.text:003600DC                 dec     edi
.text:003600DD                 xor     eax, edx
.text:003600DF                 and     edi, eax
.text:003600E1                 shl     edi, 5
.text:003600E4                 sub     edi, esi
.text:003600E6                 add     edi, [esi]
.text:003600E6
.text:003600E8
.text:003600E8 loc_3600E8:                             ; CODE XREF: newuserdata+78B↑j
.text:003600E8                                         ; newuserdata+7FE↑j
.text:003600E8                 mov     esi, [ebp-0Ch]
.text:003600E8
.text:003600EB
.text:003600EB loc_3600EB:                             ; CODE XREF: newuserdata+822↑j
.text:003600EB                                         ; newuserdata+83B↑j
.text:003600EB                 mov     edx, [ebp-4Ch]
.text:003600EE                 xchg    ax, ax
.text:003600EE
.text:003600F0
.text:003600F0 loc_3600F0:                             ; CODE XREF: newuserdata+8FA↓j
.text:003600F0                 mov     eax, [edi+1Ch]
.text:003600F3                 lea     ecx, [edi+10h]
.text:003600F6                 and     eax, 0Fh
.text:003600F9                 cmp     eax, edx
.text:003600FB                 jnz     short loc_36015B
.text:003600FB
.text:003600FD                 cmp     eax, 4          ; switch 5 cases
.text:00360100                 ja      short def_360102 ; jumptable 00360102 default case, cases 1,2
.text:00360100
.text:00360102                 jmp     ds:jpt_360102[eax*4] ; switch jump
.text:00360102
.text:00360109 ; ---------------------------------------------------------------------------
.text:00360109
.text:00360109 loc_360109:                             ; CODE XREF: newuserdata+892↑j
.text:00360109                                         ; DATA XREF: .text:jpt_360102↓o
.text:00360109                 movsd   xmm1, qword ptr [ecx] ; jumptable 00360102 case 4
.text:0036010D                 xorps   xmm0, xmm0
.text:00360110                 movsd   xmm0, xmm4
.text:00360114                 xorps   xmm1, xmm3
.text:00360117                 xorps   xmm0, xmm3
.text:0036011A                 ucomisd xmm1, xmm0
.text:0036011E                 lahf
.text:0036011F                 test    ah, 44h
.text:00360122                 jnp     loc_35FE6B      ; jumptable 00360102 case 0
.text:00360122
.text:00360128                 jmp     short loc_36015B
.text:00360128
.text:0036012A ; ---------------------------------------------------------------------------
.text:0036012A
.text:0036012A loc_36012A:                             ; CODE XREF: newuserdata+892↑j
.text:0036012A                                         ; DATA XREF: .text:jpt_360102↓o
.text:0036012A                 lea     edx, [ebp-58h]  ; jumptable 00360102 case 3
.text:0036012D                 call    sub_13180D0
.text:0036012D
.text:00360132                 mov     esi, [ebp-58h]
.text:00360135                 movsd   xmm4, qword ptr [ebp-58h]
.text:0036013A                 movaps  xmm3, xmmword_2C87C80
.text:00360141                 mov     edx, [ebp-4Ch]
.text:00360144                 movzx   eax, al
.text:00360147                 mov     [ebp-0Ch], esi
.text:0036014A                 jmp     short loc_360153
.text:0036014A
.text:0036014C ; ---------------------------------------------------------------------------
.text:0036014C
.text:0036014C def_360102:                             ; CODE XREF: newuserdata+890↑j
.text:0036014C                                         ; newuserdata+892↑j
.text:0036014C                                         ; DATA XREF: ...
.text:0036014C                 xor     eax, eax        ; jumptable 00360102 default case, cases 1,2
.text:0036014E                 cmp     [ecx], esi
.text:00360150                 setz    al
.text:00360150
.text:00360153
.text:00360153 loc_360153:                             ; CODE XREF: newuserdata+8DA↑j
.text:00360153                 test    eax, eax
.text:00360155                 jnz     loc_35FE6B      ; jumptable 00360102 case 0
.text:00360155
.text:0036015B
.text:0036015B loc_36015B:                             ; CODE XREF: newuserdata+88B↑j
.text:0036015B                                         ; newuserdata+8B8↑j
.text:0036015B                 mov     eax, [edi+1Ch]
.text:0036015E                 sar     eax, 4
.text:00360161                 test    eax, eax
.text:00360163                 jz      short loc_36016C
.text:00360163
.text:00360165                 shl     eax, 5
.text:00360168                 add     edi, eax
.text:0036016A                 jmp     short loc_3600F0
.text:0036016A
.text:0036016C ; ---------------------------------------------------------------------------
.text:0036016C
.text:0036016C loc_36016C:                             ; CODE XREF: newuserdata+8F3↑j
.text:0036016C                 mov     edx, [ebp-10h]
.text:0036016C
.text:0036016F
.text:0036016F loc_36016F:                             ; CODE XREF: newuserdata+5A4↑j
.text:0036016F                 mov     edi, offset luao_nilobject
.text:0036016F
.text:00360174
.text:00360174 loc_360174:                             ; CODE XREF: newuserdata+604↑j
.text:00360174                                         ; newuserdata+621↑j
.text:00360174                 cmp     dword ptr [edi+0Ch], 0
.text:00360178                 jnz     loc_3602DF
.text:00360178
.text:0036017E                 lea     ecx, [edx+10h]
.text:00360181                 mov     edx, [ecx]
.text:00360183                 mov     eax, edx
.text:00360185                 sub     eax, ecx
.text:00360187                 jz      loc_3602DF
.text:00360187
.text:0036018D                 sub     edx, [ebp-10h]
.text:00360190                 mov     [ebp-24h], edx
.text:00360193                 mov     al, [edx-0Ah]
.text:00360196                 mov     [ebp-1], al
.text:00360199                 test    al, 1
.text:0036019B                 jnz     loc_3602DF
.text:0036019B
.text:003601A1                 mov     ecx, [ebp-14h]
.text:003601A4                 mov     esi, 1
.text:003601A9                 add     edx, 4
.text:003601AC                 mov     eax, [ecx]
.text:003601AE                 sub     eax, ecx
.text:003601B0                 mov     ecx, [eax+56Ch]
.text:003601B6                 add     eax, 56Ch
.text:003601BB                 sub     ecx, eax
.text:003601BD                 mov     [ebp-18h], ecx
.text:003601C0                 lea     eax, [ecx+0Ch]
.text:003601C3                 mov     ecx, [ebp-24h]
.text:003601C6                 sub     eax, [eax]
.text:003601C8                 mov     cl, [ecx-0Bh]
.text:003601CB                 shl     esi, cl
.text:003601CD                 dec     esi
.text:003601CE                 and     esi, eax
.text:003601D0                 shl     esi, 5
.text:003601D3                 sub     esi, edx
.text:003601D5                 add     esi, [edx]
.text:003601D7                 mov     edx, [ebp-18h]
.text:003601DA                 nop     word ptr [eax+eax+00h]
.text:003601DA
.text:003601E0
.text:003601E0 loc_3601E0:                             ; CODE XREF: newuserdata+98D↓j
.text:003601E0                 mov     ecx, [esi+1Ch]
.text:003601E3                 mov     eax, ecx
.text:003601E5                 and     eax, 0Fh
.text:003601E8                 cmp     al, 5
.text:003601EA                 jnz     short loc_3601F1
.text:003601EA
.text:003601EC                 cmp     [esi+10h], edx
.text:003601EF                 jz      short loc_360204
.text:003601EF
.text:003601F1
.text:003601F1 loc_3601F1:                             ; CODE XREF: newuserdata+97A↑j
.text:003601F1                 sar     ecx, 4
.text:003601F4                 test    ecx, ecx
.text:003601F6                 jz      short loc_3601FF
.text:003601F6
.text:003601F8                 shl     ecx, 5
.text:003601FB                 add     esi, ecx
.text:003601FD                 jmp     short loc_3601E0
.text:003601FD
.text:003601FF ; ---------------------------------------------------------------------------
.text:003601FF
.text:003601FF loc_3601FF:                             ; CODE XREF: newuserdata+986↑j
.text:003601FF                 mov     esi, offset luao_nilobject
.text:003601FF
.text:00360204
.text:00360204 loc_360204:                             ; CODE XREF: newuserdata+97F↑j
.text:00360204                 cmp     dword ptr [esi+0Ch], 0
.text:00360208                 jz      loc_3602D3
.text:00360208
.text:0036020E                 test    esi, esi
.text:00360210                 jz      loc_3602DF
.text:00360210
.text:00360216                 jmp     loc_3602AD
.text:00360216
.text:0036021B ; ---------------------------------------------------------------------------
.text:0036021B
.text:0036021B loc_36021B:                             ; CODE XREF: newuserdata+596↑j
.text:0036021B                 mov     edx, [ebp-14h]
.text:0036021E                 mov     eax, ecx
.text:00360220                 sub     eax, 6
.text:00360223                 jz      short loc_360241
.text:00360223
.text:00360225                 sub     eax, 1
.text:00360228                 jz      short loc_36023A
.text:00360228
.text:0036022A                 mov     eax, [edx]
.text:0036022C                 lea     ecx, ds:544h[ecx*4]
.text:00360233                 sub     ecx, edx
.text:00360235                 mov     ecx, [ecx+eax]
.text:00360238                 jmp     short loc_36024A
.text:00360238
.text:0036023A ; ---------------------------------------------------------------------------
.text:0036023A
.text:0036023A loc_36023A:                             ; CODE XREF: newuserdata+9B8↑j
.text:0036023A                 mov     eax, [edi]
.text:0036023C                 add     eax, 8
.text:0036023F                 jmp     short loc_360246
.text:0036023F
.text:00360241 ; ---------------------------------------------------------------------------
.text:00360241
.text:00360241 loc_360241:                             ; CODE XREF: newuserdata+9B3↑j
.text:00360241                 mov     eax, [edi]
.text:00360243                 add     eax, 10h
.text:00360243
.text:00360246
.text:00360246 loc_360246:                             ; CODE XREF: newuserdata+9CF↑j
.text:00360246                 mov     ecx, [eax]
.text:00360248                 sub     ecx, eax
.text:00360248
.text:0036024A
.text:0036024A loc_36024A:                             ; CODE XREF: newuserdata+9C8↑j
.text:0036024A                 test    ecx, ecx
.text:0036024C                 jz      short loc_36029E
.text:0036024C
.text:0036024E                 mov     eax, [edx]
.text:00360250                 mov     esi, 1
.text:00360255                 sub     eax, edx
.text:00360257                 lea     edx, [ecx+14h]
.text:0036025A                 mov     cl, [ecx+5]
.text:0036025D                 add     eax, 56Ch
.text:00360262                 shl     esi, cl
.text:00360264                 dec     esi
.text:00360265                 mov     edi, [eax]
.text:00360267                 sub     edi, eax
.text:00360269                 lea     eax, [edi+0Ch]
.text:0036026C                 sub     eax, [eax]
.text:0036026E                 and     esi, eax
.text:00360270                 shl     esi, 5
.text:00360273                 sub     esi, edx
.text:00360275                 add     esi, [edx]
.text:00360275
.text:00360277
.text:00360277 loc_360277:                             ; CODE XREF: newuserdata+A24↓j
.text:00360277                 mov     ecx, [esi+1Ch]
.text:0036027A                 mov     eax, ecx
.text:0036027C                 and     eax, 0Fh
.text:0036027F                 cmp     al, 5
.text:00360281                 jnz     short loc_360288
.text:00360281
.text:00360283                 cmp     [esi+10h], edi
.text:00360286                 jz      short loc_360296
.text:00360286
.text:00360288
.text:00360288 loc_360288:                             ; CODE XREF: newuserdata+A11↑j
.text:00360288                 sar     ecx, 4
.text:0036028B                 test    ecx, ecx
.text:0036028D                 jz      short loc_36029B
.text:0036028D
.text:0036028F                 shl     ecx, 5
.text:00360292                 add     esi, ecx
.text:00360294                 jmp     short loc_360277
.text:00360294
.text:00360296 ; ---------------------------------------------------------------------------
.text:00360296
.text:00360296 loc_360296:                             ; CODE XREF: newuserdata+A16↑j
.text:00360296                 mov     edi, [ebp-1Ch]
.text:00360299                 jmp     short loc_3602A3
.text:00360299
.text:0036029B ; ---------------------------------------------------------------------------
.text:0036029B
.text:0036029B loc_36029B:                             ; CODE XREF: newuserdata+A1D↑j
.text:0036029B                 mov     edi, [ebp-1Ch]
.text:0036029B
.text:0036029E
.text:0036029E loc_36029E:                             ; CODE XREF: newuserdata+9DC↑j
.text:0036029E                 mov     esi, offset luao_nilobject
.text:0036029E
.text:003602A3
.text:003602A3 loc_3602A3:                             ; CODE XREF: newuserdata+A29↑j
.text:003602A3                 cmp     dword ptr [esi+0Ch], 0
.text:003602A7                 jz      loc_36043C
.text:003602A7
.text:003602AD
.text:003602AD loc_3602AD:                             ; CODE XREF: newuserdata+9A6↑j
.text:003602AD                 cmp     dword ptr [esi+0Ch], 8
.text:003602B1                 jz      short loc_3602ED
.text:003602B1
.text:003602B3                 mov     edx, [ebp-2Ch]
.text:003602B6                 mov     edi, esi
.text:003602B8                 inc     edx
.text:003602B9                 mov     [ebp-1Ch], edi
.text:003602BC                 mov     [ebp-2Ch], edx
.text:003602BF                 cmp     edx, 64h ; 'd'
.text:003602C2                 jge     loc_36040E
.text:003602C2
.text:003602C8                 mov     esi, [ebp-0Ch]
.text:003602CB                 mov     eax, [ebp-4Ch]
.text:003602CE                 jmp     loc_35FE00
.text:003602CE
.text:003602D3 ; ---------------------------------------------------------------------------
.text:003602D3
.text:003602D3 loc_3602D3:                             ; CODE XREF: newuserdata+998↑j
.text:003602D3                 mov     eax, [ebp-24h]
.text:003602D6                 mov     cl, [ebp-1]
.text:003602D9                 or      cl, 1
.text:003602DC                 mov     [eax-0Ah], cl
.text:003602DC
.text:003602DF
.text:003602DF loc_3602DF:                             ; CODE XREF: newuserdata+908↑j
.text:003602DF                                         ; newuserdata+917↑j ...
.text:003602DF                 movups  xmm0, xmmword ptr [edi]
.text:003602E2                 mov     edx, [ebp-30h]
.text:003602E5                 mov     edi, [ebp-8]
.text:003602E8                 movups  xmmword ptr [edx], xmm0
.text:003602EB                 jmp     short loc_360306
.text:003602EB
.text:003602ED ; ---------------------------------------------------------------------------
.text:003602ED
.text:003602ED loc_3602ED:                             ; CODE XREF: newuserdata+A41↑j
.text:003602ED                 mov     edi, [ebp-8]
.text:003602F0                 lea     eax, [ebp-58h]
.text:003602F3                 mov     edx, [ebp-30h]
.text:003602F6                 mov     ecx, edi
.text:003602F8                 push    eax
.text:003602F9                 mov     eax, [ebp-1Ch]
.text:003602FC                 push    eax
.text:003602FD                 push    esi
.text:003602FE                 call    sub_13B2350
.text:003602FE
.text:00360303                 add     esp, 0Ch
.text:00360303
.text:00360306
.text:00360306 loc_360306:                             ; CODE XREF: newuserdata+A7B↑j
.text:00360306                 add     dword ptr [edi+18h], 10h
.text:0036030A                 mov     eax, ds:off_2F43004
.text:0036030F                 mov     ecx, [ebx+4]
.text:00360312                 sub     ecx, eax
.text:00360314                 cmp     ecx, ds:off_2F43000
.text:0036031A                 jb      short loc_360335
.text:0036031A
.text:0036031C                 mov     eax, ds:lpAddress
.text:00360321                 mov     ecx, [ebx+4]
.text:00360324                 sub     ecx, eax
.text:00360326                 cmp     ecx, ds:dwSize
.text:0036032C                 jb      short loc_360335
.text:0036032C
.text:0036032E                 mov     ecx, edi
.text:00360330                 call    retcheck
.text:00360330
.text:00360335
.text:00360335 loc_360335:                             ; CODE XREF: newuserdata+AAA↑j
.text:00360335                                         ; newuserdata+ABC↑j
.text:00360335                 mov     esi, [edi+18h]
.text:00360338                 cmp     dword ptr [esi-4], 0
.text:0036033C                 jnz     short loc_360342
.text:0036033C
.text:0036033E                 xor     edx, edx
.text:00360340                 jmp     short loc_360345
.text:00360340
.text:00360342 ; ---------------------------------------------------------------------------
.text:00360342
.text:00360342 loc_360342:                             ; CODE XREF: newuserdata+ACC↑j
.text:00360342                 mov     edx, [esi-10h]
.text:00360342
.text:00360345
.text:00360345 loc_360345:                             ; CODE XREF: newuserdata+AD0↑j
.text:00360345                 mov     ecx, [esi-14h]
.text:00360348                 mov     eax, ecx
.text:0036034A                 sub     eax, 6
.text:0036034D                 jz      short loc_360374
.text:0036034D
.text:0036034F                 sub     eax, 1
.text:00360352                 jz      short loc_360367
.text:00360352
.text:00360354                 lea     eax, [edi+8]
.text:00360357                 lea     ecx, ds:544h[ecx*4]
.text:0036035E                 sub     ecx, eax
.text:00360360                 mov     eax, [eax]
.text:00360362                 mov     [ecx+eax], edx
.text:00360365                 jmp     short loc_3603A9
.text:00360365
.text:00360367 ; ---------------------------------------------------------------------------
.text:00360367
.text:00360367 loc_360367:                             ; CODE XREF: newuserdata+AE2↑j
.text:00360367                 mov     ecx, [esi-20h]
.text:0036036A                 add     ecx, 8
.text:0036036D                 lea     eax, [ecx+edx]
.text:00360370                 mov     [ecx], eax
.text:00360372                 jmp     short loc_360389
.text:00360372
.text:00360374 ; ---------------------------------------------------------------------------
.text:00360374
.text:00360374 loc_360374:                             ; CODE XREF: newuserdata+ADD↑j
.text:00360374                 mov     ecx, [esi-20h]
.text:00360377                 cmp     byte ptr [ecx+7], 0
.text:0036037B                 jnz     loc_360426
.text:0036037B
.text:00360381                 lea     eax, [edx+10h]
.text:00360384                 add     eax, ecx
.text:00360386                 mov     [ecx+10h], eax
.text:00360386
.text:00360389
.text:00360389 loc_360389:                             ; CODE XREF: newuserdata+B02↑j
.text:00360389                 test    edx, edx
.text:0036038B                 jz      short loc_3603A9
.text:0036038B
.text:0036038D                 mov     eax, [esi-20h]
.text:00360390                 test    byte ptr [eax+2], 4
.text:00360394                 jz      short loc_3603A9
.text:00360394
.text:00360396                 test    byte ptr [edx+2], 3
.text:0036039A                 jz      short loc_3603A9
.text:0036039A
.text:0036039C                 push    edx
.text:0036039D                 mov     edx, eax
.text:0036039F                 mov     ecx, edi
.text:003603A1                 call    sub_1376AD0
.text:003603A1
.text:003603A6                 add     esp, 4
.text:003603A6
.text:003603A9
.text:003603A9 loc_3603A9:                             ; CODE XREF: newuserdata+AF5↑j
.text:003603A9                                         ; newuserdata+B1B↑j ...
.text:003603A9                 add     dword ptr [edi+18h], 0FFFFFFF0h
.text:003603AD                 mov     eax, ds:off_2F43004
.text:003603B2                 mov     ecx, [ebx+4]
.text:003603B5                 sub     ecx, eax
.text:003603B7                 cmp     ecx, ds:off_2F43000
.text:003603BD                 jb      short loc_3603D9
.text:003603BD
.text:003603BF                 mov     ecx, ds:lpAddress
.text:003603C5                 mov     edx, [ebx+4]
.text:003603C8                 sub     edx, ecx
.text:003603CA                 cmp     edx, ds:dwSize
.text:003603D0                 jb      short loc_3603D9
.text:003603D0
.text:003603D2                 mov     ecx, edi
.text:003603D4                 call    retcheck
.text:003603D4
.text:003603D9
.text:003603D9 loc_3603D9:                             ; CODE XREF: newuserdata+B4D↑j
.text:003603D9                                         ; newuserdata+B60↑j
.text:003603D9                 mov     eax, [ebp-34h]
.text:003603DC                 pop     edi
.text:003603DD                 pop     esi
.text:003603DE                 mov     esp, ebp
.text:003603E0                 pop     ebp
.text:003603E1                 mov     esp, ebx
.text:003603E3                 pop     ebx
.text:003603E4                 retn
.text:003603E4
.text:003603E5 ; ---------------------------------------------------------------------------
.text:003603E5
.text:003603E5 loc_3603E5:                             ; CODE XREF: newuserdata+2F7↑j
.text:003603E5                                         ; newuserdata+458↑j
.text:003603E5                 mov     ecx, [ebp-8]
.text:003603E8                 call    sub_13C0780
.text:003603E8
.text:003603ED ; ---------------------------------------------------------------------------
.text:003603ED
.text:003603ED loc_3603ED:                             ; CODE XREF: newuserdata+78↑j
.text:003603ED                 mov     ecx, edi
.text:003603EF                 call    sub_13C0780
.text:003603EF
.text:003603F4 ; ---------------------------------------------------------------------------
.text:003603F4
.text:003603F4 loc_3603F4:                             ; CODE XREF: newuserdata+D9↑j
.text:003603F4                 mov     ecx, [ebp-8]
.text:003603F7                 mov     edx, 4
.text:003603FC                 call    sub_1320520
.text:003603FC
.text:00360401 ; ---------------------------------------------------------------------------
.text:00360401
.text:00360401 loc_360401:                             ; CODE XREF: newuserdata+394↑j
.text:00360401                                         ; newuserdata+4B6↑j
.text:00360401                 mov     ecx, [ebp-8]
.text:00360404                 mov     edx, 4
.text:00360409                 call    sub_1320520
.text:00360409
.text:0036040E ; ---------------------------------------------------------------------------
.text:0036040E
.text:0036040E loc_36040E:                             ; CODE XREF: newuserdata+A52↑j
.text:0036040E                 mov     dword ptr [ebp-30h], offset aLlErrnoD ; "LL, errno = %d"
.text:00360415                 mov     eax, [ebp-30h]
.text:00360418                 sub     eax, 1B392h
.text:0036041D                 push    eax
.text:0036041E                 push    dword ptr [ebp-8]
.text:00360421                 call    sub_13336C0
.text:00360421
.text:00360426 ; ---------------------------------------------------------------------------
.text:00360426
.text:00360426 loc_360426:                             ; CODE XREF: newuserdata+B0B↑j
.text:00360426                 mov     dword ptr [ebp-30h], offset off_28495D4
.text:0036042D                 mov     eax, [ebp-30h]
.text:00360430                 sub     eax, 0BB58Ch
.text:00360435                 push    eax
.text:00360436                 push    edi
.text:00360437                 call    sub_13336C0
.text:00360437
.text:0036043C ; ---------------------------------------------------------------------------
.text:0036043C
.text:0036043C loc_36043C:                             ; CODE XREF: newuserdata+A37↑j
.text:0036043C                 mov     ecx, [ebp-8]
.text:0036043F                 lea     eax, [ebp-58h]
.text:00360442                 push    eax
.text:00360443                 mov     edx, edi
.text:00360445                 call    sub_1333170
.text:00360445
.text:00360445 newuserdata     endp
.text:00360445
.text:00360445 ; ---------------------------------------------------------------------------
.text:0036044A                 align 4
.text:0036044C jpt_35FF85      dd offset loc_360094    ; DATA XREF: newuserdata+715↑r
.text:0036044C                 dd offset def_35FF85    ; jump table for switch statement
.text:0036044C                 dd offset loc_360000
.text:0036044C                 dd offset loc_35FF8C
.text:0036044C                 dd offset loc_360073
.text:00360460 jpt_360102      dd offset loc_35FE6B    ; DATA XREF: newuserdata+892↑r
.text:00360460                 dd offset def_360102    ; jump table for switch statement
.text:00360460                 dd offset def_360102
.text:00360460                 dd offset loc_36012A
.text:00360460                 dd offset loc_360109
.text:00360474                 align 10h
.text:00360480
.text:00360480 ; =============== S U B R O U T I N E =======================================
.text:00360480
.text:00360480 ; Attributes: fuzzy-sp
.text:00360480
.text:00360480 sub_360480      proc near               ; CODE XREF: sub_382990+8D↓p
.text:00360480                                         ; sub_382A90+8D↓p ...
.text:00360480
.text:00360480 var_8           = dword ptr -8
.text:00360480
.text:00360480                 push    ebx
.text:00360481                 mov     ebx, esp
.text:00360483                 sub     esp, 8
.text:00360486                 and     esp, 0FFFFFFF0h
.text:00360489                 add     esp, 4
.text:0036048C                 push    ebp
.text:0036048D                 mov     ebp, [ebx+4]
.text:00360490                 mov     [esp+0Ch+var_8], ebp
.text:00360494                 mov     ebp, esp
.text:00360496                 mov     eax, 1208h
.text:0036049B                 call    __alloca_probe
.text:0036049B
.text:003604A0                 push    esi
.text:003604A1                 mov     eax, edx
.text:003604A3                 mov     esi, ecx
.text:003604A5                 push    edi
.text:003604A6                 mov     [ebp-60h], eax
.text:003604A9                 mov     [ebp-74h], esi
.text:003604AC                 call    sub_1323EF0
.text:003604AC
.text:003604B1                 mov     ecx, esi
.text:003604B3                 call    sub_35D0E0
.text:003604B3
.text:003604B8                 mov     eax, [esi+8]
.text:003604BB                 lea     edx, [esi+8]
.text:003604BE                 mov     ecx, eax
.text:003604C0                 mov     [ebp-64h], edx
.text:003604C3                 sub     eax, esi
.text:003604C5                 sub     ecx, edx
.text:003604C7                 mov     eax, [eax+30h]
.text:003604CA                 cmp     eax, [ecx+34h]
.text:003604CD                 jb      short loc_3604D8
.text:003604CD
.text:003604CF                 mov     dl, 1
.text:003604D1                 mov     ecx, esi
.text:003604D3                 call    sub_1376710
.text:003604D3
.text:003604D8
.text:003604D8 loc_3604D8:                             ; CODE XREF: sub_360480+4D↑j
.text:003604D8                 test    byte ptr [esi+5], 2
.text:003604DC                 jz      short loc_3604E5
.text:003604DC
.text:003604DE                 mov     ecx, esi
.text:003604E0                 call    sub_1376B90
.text:003604E0
.text:003604E5
.text:003604E5 loc_3604E5:                             ; CODE XREF: sub_360480+5C↑j
.text:003604E5                 mov     eax, [esi+18h]
.text:003604E8                 mov     edi, 6
.text:003604ED                 mov     [ebp-5Ch], eax
.text:003604F0                 mov     edx, edi
.text:003604F0
.text:003604F2
.text:003604F2 loc_3604F2:                             ; CODE XREF: sub_360480+8C↓j
.text:003604F2                 movzx   ecx, ds:byte_26413A7[edx]
.text:003604F9                 mov     eax, edi
.text:003604FB                 shl     eax, 5
.text:003604FE                 add     ecx, eax
.text:00360500                 mov     eax, edi
.text:00360502                 shr     eax, 2
.text:00360505                 add     ecx, eax
.text:00360507                 xor     edi, ecx
.text:00360509                 sub     edx, 1
.text:0036050C                 jnz     short loc_3604F2
.text:0036050C
.text:0036050E                 mov     edx, [esi+8]
.text:00360511                 lea     ecx, [esi+8]
.text:00360514                 mov     eax, edx
.text:00360516                 sub     edx, esi
.text:00360518                 sub     eax, ecx
.text:0036051A                 mov     ecx, [eax+4]
.text:0036051D                 mov     eax, [edx-8]
.text:00360520                 dec     ecx
.text:00360521                 and     ecx, edi
.text:00360523                 mov     esi, [eax+ecx*4]
.text:00360526                 test    esi, esi
.text:00360528                 jz      short loc_360554
.text:00360528
.text:0036052A                 mov     edx, 6570h
.text:0036052F                 nop
.text:0036052F
.text:00360530
.text:00360530 loc_360530:                             ; CODE XREF: sub_360480+D2↓j
.text:00360530                 mov     eax, [esi+10h]
.text:00360533                 lea     ecx, [esi+10h]
.text:00360536                 sub     eax, ecx
.text:00360538                 cmp     eax, 6
.text:0036053B                 jnz     short loc_36054D
.text:0036053B
.text:0036053D                 mov     eax, 79745F5Fh
.text:00360542                 cmp     eax, [esi+14h]
.text:00360545                 jnz     short loc_36054D
.text:00360545
.text:00360547                 cmp     dx, [esi+18h]
.text:0036054B                 jz      short loc_36057B
.text:0036054B
.text:0036054D
.text:0036054D loc_36054D:                             ; CODE XREF: sub_360480+BB↑j
.text:0036054D                                         ; sub_360480+C5↑j
.text:0036054D                 mov     esi, [esi+8]
.text:00360550                 test    esi, esi
.text:00360552                 jnz     short loc_360530
.text:00360552
.text:00360554
.text:00360554 loc_360554:                             ; CODE XREF: sub_360480+A8↑j
.text:00360554                 mov     ecx, [ebp-74h]
.text:00360557                 lea     edx, [ecx+8]
.text:0036055A                 mov     al, [ecx+4]
.text:0036055D                 mov     [ebp-1], al
.text:00360560                 mov     eax, [edx]
.text:00360562                 sub     eax, edx
.text:00360564                 movsx   edx, byte_2AB8E23
.text:0036056B                 mov     [ebp-38h], eax
.text:0036056E                 test    edx, edx
.text:00360570                 js      short loc_3605A7
.text:00360570
.text:00360572                 call    loc_13C09C0
.text:00360572
.text:00360577                 mov     esi, eax
.text:00360579                 jmp     short loc_3605C7
.text:00360579
.text:0036057B ; ---------------------------------------------------------------------------
.text:0036057B
.text:0036057B loc_36057B:                             ; CODE XREF: sub_360480+CB↑j
.text:0036057B                 mov     ecx, [ebp-64h]
.text:0036057E                 mov     dl, [esi+2]
.text:00360581                 mov     eax, [ecx]
.text:00360583                 sub     eax, ecx
.text:00360585                 movzx   ecx, byte ptr [eax+14h]
.text:00360589                 not     ecx
.text:0036058B                 movzx   eax, dl
.text:0036058E                 and     ecx, 3
.text:00360591                 xor     ecx, eax
.text:00360593                 test    cl, 0Bh
.text:00360596                 jnz     loc_360791
.text:00360596
.text:0036059C                 xor     dl, 3
.text:0036059F                 mov     [esi+2], dl
.text:003605A2                 jmp     loc_360791
.text:003605A2
.text:003605A7 ; ---------------------------------------------------------------------------
.text:003605A7
.text:003605A7 loc_3605A7:                             ; CODE XREF: sub_360480+F0↑j
.text:003605A7                 push    1
.text:003605A9                 push    1Bh
.text:003605AB                 push    43h ; 'C'
.text:003605AD                 lea     edx, [eax+13Ch]
.text:003605B3                 call    sub_13C07B0
.text:003605B3
.text:003605B8                 add     esp, 0Ch
.text:003605BB                 mov     ecx, [eax+14h]
.text:003605BE                 lea     esi, [eax+28h]
.text:003605C1                 sub     [eax+1Ch], ecx
.text:003605C4                 inc     dword ptr [eax+20h]
.text:003605C4
.text:003605C7
.text:003605C7 loc_3605C7:                             ; CODE XREF: sub_360480+F9↑j
.text:003605C7                 mov     [ebp-0Ch], esi
.text:003605CA                 test    esi, esi
.text:003605CC                 jz      loc_3760A9
.text:003605CC
.text:003605D2                 mov     ecx, [ebp-38h]
.text:003605D5                 movzx   eax, byte ptr [ebp-1]
.text:003605D9                 mov     edx, [ebp-64h]
.text:003605DC                 add     dword ptr [ecx+38h], 1Bh
.text:003605E0                 add     dword ptr [ecx+eax*4+144h], 1Bh
.text:003605E8                 lea     eax, [esi+16h]
.text:003605EB                 mov     [esi+10h], eax
.text:003605EE                 lea     ecx, [esi+14h]
.text:003605F1                 lea     eax, [esi+0Ch]
.text:003605F4                 sub     eax, edi
.text:003605F6                 mov     [esi+0Ch], eax
.text:003605F9                 mov     eax, [edx]
.text:003605FB                 sub     eax, edx
.text:003605FD                 mov     al, [eax+14h]
.text:00360600                 and     al, 3
.text:00360602                 mov     [esi+2], al
.text:00360605                 mov     eax, [ebp-74h]
.text:00360608                 mov     byte ptr [esi], 5
.text:0036060B                 mov     al, [eax+4]
.text:0036060E                 mov     [esi+1], al
.text:00360611                 mov     eax, ds:dword_26413A8
.text:00360616                 mov     [ecx], eax
.text:00360618                 mov     ax, ds:word_26413AC
.text:0036061E                 mov     [ecx+4], ax
.text:00360622                 mov     byte ptr [esi+1Ah], 0
.text:00360626                 mov     eax, [edx]
.text:00360628                 sub     eax, edx
.text:0036062A                 mov     eax, [eax+858h]
.text:00360630                 test    eax, eax
.text:00360632                 jz      short loc_360644
.text:00360632
.text:00360634                 push    6
.text:00360636                 push    ecx
.text:00360637                 call    eax
.text:00360637
.text:00360639                 mov     edx, [ebp-64h]
.text:0036063C                 add     esp, 8
.text:0036063F                 movzx   eax, ax
.text:00360642                 jmp     short loc_360647
.text:00360642
.text:00360644 ; ---------------------------------------------------------------------------
.text:00360644
.text:00360644 loc_360644:                             ; CODE XREF: sub_360480+1B2↑j
.text:00360644                 or      eax, 0FFFFFFFFh
.text:00360644
.text:00360647
.text:00360647 loc_360647:                             ; CODE XREF: sub_360480+1C2↑j
.text:00360647                 mov     [esi+4], ax
.text:0036064B                 mov     edx, [edx]
.text:0036064D                 sub     edx, [ebp-64h]
.text:00360650                 mov     ecx, [edx+4]
.text:00360653                 mov     eax, [edx]
.text:00360655                 dec     ecx
.text:00360656                 and     ecx, edi
.text:00360658                 mov     eax, [eax+ecx*4]
.text:0036065B                 mov     [esi+8], eax
.text:0036065E                 mov     eax, [edx]
.text:00360660                 mov     [eax+ecx*4], esi
.text:00360663                 inc     dword ptr [edx+8]
.text:00360666                 mov     eax, [edx+4]
.text:00360669                 mov     [ebp-38h], eax
.text:0036066C                 cmp     [edx+8], eax
.text:0036066F                 jbe     loc_360791
.text:0036066F
.text:00360675                 cmp     eax, 3FFFFFFFh
.text:0036067A                 jg      loc_360791
.text:0036067A
.text:00360680                 add     eax, eax
.text:00360682                 cmp     eax, 3FFFFFFFh
.text:00360687                 ja      loc_376089
.text:00360687
.text:0036068D                 lea     ecx, ds:0[eax*4]
.text:00360694                 mov     eax, [ebp-64h]
.text:00360697                 mov     [ebp-8], ecx
.text:0036069A                 mov     edx, [eax]
.text:0036069C                 sub     edx, eax
.text:0036069E                 lea     eax, [ecx-1]
.text:003606A1                 mov     [ebp-10h], edx
.text:003606A4                 cmp     eax, 200h
.text:003606A9                 jnb     short loc_3606C7
.text:003606A9
.text:003606AB                 movsx   eax, byte_2AB8E08[ecx]
.text:003606B2                 test    eax, eax
.text:003606B4                 js      short loc_3606C7
.text:003606B4
.text:003606B6                 mov     ecx, [ebp-74h]
.text:003606B9                 mov     edx, eax
.text:003606BB                 call    sub_13C08C0
.text:003606BB
.text:003606C0                 mov     edi, eax
.text:003606C2                 mov     [ebp-30h], edi
.text:003606C5                 jmp     short loc_3606DC
.text:003606C5
.text:003606C7 ; ---------------------------------------------------------------------------
.text:003606C7
.text:003606C7 loc_3606C7:                             ; CODE XREF: sub_360480+229↑j
.text:003606C7                                         ; sub_360480+234↑j
.text:003606C7                 mov     eax, [edx+0Ch]
.text:003606CA                 push    ecx
.text:003606CB                 push    0
.text:003606CD                 push    0
.text:003606CF                 push    dword ptr [edx+10h]
.text:003606D2                 call    eax
.text:003606D2
.text:003606D4                 add     esp, 10h
.text:003606D7                 mov     [ebp-30h], eax
.text:003606DA                 mov     edi, eax
.text:003606DA
.text:003606DC
.text:003606DC loc_3606DC:                             ; CODE XREF: sub_360480+245↑j
.text:003606DC                 mov     eax, [ebp-8]
.text:003606DF                 test    edi, edi
.text:003606E1                 jnz     short loc_3606EB
.text:003606E1
.text:003606E3                 test    eax, eax
.text:003606E5                 jnz     loc_3760A9
.text:003606E5
.text:003606EB
.text:003606EB loc_3606EB:                             ; CODE XREF: sub_360480+261↑j
.text:003606EB                 mov     ecx, [ebp-10h]
.text:003606EE                 mov     edi, [ebp-38h]
.text:003606F1                 add     [ecx+38h], eax
.text:003606F4                 add     [ecx+144h], eax
.text:003606FA                 mov     ecx, [ebp-64h]
.text:003606FD                 mov     edx, [ecx]
.text:003606FF                 sub     edx, ecx
.text:00360701                 lea     ecx, [edi+edi]
.text:00360704                 mov     edi, [ebp-30h]
.text:00360707                 mov     [ebp-10h], edx
.text:0036070A                 test    ecx, ecx
.text:0036070C                 jle     short loc_36071A
.text:0036070C
.text:0036070E                 shr     eax, 2
.text:00360711                 mov     ecx, eax
.text:00360713                 xor     eax, eax
.text:00360715                 rep stosd
.text:00360717                 mov     edi, [ebp-30h]
.text:00360717
.text:0036071A
.text:0036071A loc_36071A:                             ; CODE XREF: sub_360480+28C↑j
.text:0036071A                 mov     eax, [edx+4]
.text:0036071D                 xor     ecx, ecx
.text:0036071F                 mov     [ebp-30h], ecx
.text:00360722                 test    eax, eax
.text:00360724                 jle     short loc_360770
.text:00360724
.text:00360726
.text:00360726 loc_360726:                             ; CODE XREF: sub_360480+2EB↓j
.text:00360726                 mov     eax, [edx]
.text:00360728                 mov     esi, [eax+ecx*4]
.text:0036072B                 test    esi, esi
.text:0036072D                 jz      short loc_360762
.text:0036072D
.text:0036072F                 mov     ecx, [ebp-38h]
.text:00360732                 lea     eax, ds:0FFFFFFFFh[ecx*2]
.text:00360739                 mov     [ebp-8], eax
.text:0036073C                 nop     dword ptr [eax+00h]
.text:0036073C
.text:00360740
.text:00360740 loc_360740:                             ; CODE XREF: sub_360480+2DA↓j
.text:00360740                 mov     edx, [esi+8]
.text:00360743                 lea     ecx, [esi+0Ch]
.text:00360746                 sub     ecx, [ecx]
.text:00360748                 and     ecx, eax
.text:0036074A                 mov     eax, [edi+ecx*4]
.text:0036074D                 mov     [esi+8], eax
.text:00360750                 mov     eax, [ebp-8]
.text:00360753                 mov     [edi+ecx*4], esi
.text:00360756                 mov     esi, edx
.text:00360758                 test    edx, edx
.text:0036075A                 jnz     short loc_360740
.text:0036075A
.text:0036075C                 mov     ecx, [ebp-30h]
.text:0036075F                 mov     edx, [ebp-10h]
.text:0036075F
.text:00360762
.text:00360762 loc_360762:                             ; CODE XREF: sub_360480+2AD↑j
.text:00360762                 mov     eax, [edx+4]
.text:00360765                 inc     ecx
.text:00360766                 mov     [ebp-30h], ecx
.text:00360769                 cmp     ecx, eax
.text:0036076B                 jl      short loc_360726
.text:0036076B
.text:0036076D                 mov     esi, [ebp-0Ch]
.text:0036076D
.text:00360770
.text:00360770 loc_360770:                             ; CODE XREF: sub_360480+2A4↑j
.text:00360770                 mov     edx, [edx]
.text:00360772                 mov     ecx, [ebp-74h]
.text:00360775                 shl     eax, 2
.text:00360778                 push    0
.text:0036077A                 push    eax
.text:0036077B                 call    sub_13C0AF0
.text:0036077B
.text:00360780                 mov     edx, [ebp-38h]
.text:00360783                 add     esp, 8
.text:00360786                 mov     eax, [ebp-10h]
.text:00360789                 lea     ecx, [edx+edx]
.text:0036078C                 mov     [eax+4], ecx
.text:0036078F                 mov     [eax], edi
.text:0036078F
.text:00360791
.text:00360791 loc_360791:                             ; CODE XREF: sub_360480+116↑j
.text:00360791                                         ; sub_360480+122↑j ...
.text:00360791                 mov     eax, [ebp-5Ch]
.text:00360794                 mov     edx, [ebp-74h]
.text:00360797                 mov     [eax], esi
.text:00360799                 mov     dword ptr [eax+0Ch], 5
.text:003607A0                 add     dword ptr [edx+18h], 10h
.text:003607A4                 mov     eax, ds:off_2F43004
.text:003607A9                 mov     ecx, [ebx+4]
.text:003607AC                 sub     ecx, eax
.text:003607AE                 cmp     ecx, ds:off_2F43000
.text:003607B4                 jb      short loc_3607D2
.text:003607B4
.text:003607B6                 mov     eax, ds:lpAddress
.text:003607BB                 mov     ecx, [ebx+4]
.text:003607BE                 sub     ecx, eax
.text:003607C0                 cmp     ecx, ds:dwSize
.text:003607C6                 jb      short loc_3607D2
.text:003607C6
.text:003607C8                 mov     ecx, edx
.text:003607CA                 call    retcheck
.text:003607CA
.text:003607CF                 mov     edx, [ebp-74h]
.text:003607CF
.text:003607D2
.text:003607D2 loc_3607D2:                             ; CODE XREF: sub_360480+334↑j
.text:003607D2                                         ; sub_360480+346↑j
.text:003607D2                 mov     edi, [ebp-60h]
.text:003607D5                 test    edi, edi
.text:003607D7                 jnz     short loc_3607E4
.text:003607D7
.text:003607D9                 mov     eax, [edx+18h]
.text:003607DC                 mov     [eax+0Ch], edi
.text:003607DF                 jmp     loc_360BF6
.text:003607DF
.text:003607E4 ; ---------------------------------------------------------------------------
.text:003607E4
.text:003607E4 loc_3607E4:                             ; CODE XREF: sub_360480+357↑j
.text:003607E4                 mov     esi, edi
.text:003607E6                 lea     ecx, [esi+1]
.text:003607E9                 nop     dword ptr [eax+00000000h]
.text:003607E9
.text:003607F0
.text:003607F0 loc_3607F0:                             ; CODE XREF: sub_360480+375↓j
.text:003607F0                 mov     al, [esi]
.text:003607F2                 inc     esi
.text:003607F3                 test    al, al
.text:003607F5                 jnz     short loc_3607F0
.text:003607F5
.text:003607F7                 mov     eax, [edx+8]
.text:003607FA                 sub     esi, ecx
.text:003607FC                 mov     ecx, eax
.text:003607FE                 mov     [ebp-30h], esi
.text:00360801                 sub     ecx, [ebp-64h]
.text:00360804                 sub     eax, edx
.text:00360806                 mov     eax, [eax+30h]
.text:00360809                 cmp     eax, [ecx+34h]
.text:0036080C                 jb      short loc_36081B
.text:0036080C
.text:0036080E                 mov     ecx, [ebp-74h]
.text:00360811                 mov     dl, 1
.text:00360813                 call    sub_1376710
.text:00360813
.text:00360818                 mov     edx, [ebp-74h]
.text:00360818
.text:0036081B
.text:0036081B loc_36081B:                             ; CODE XREF: sub_360480+38C↑j
.text:0036081B                 test    byte ptr [edx+5], 2
.text:0036081F                 jz      short loc_36082B
.text:0036081F
.text:00360821                 mov     ecx, edx
.text:00360823                 call    sub_1376B90
.text:00360823
.text:00360828                 mov     edx, [ebp-74h]
.text:00360828
.text:0036082B
.text:0036082B loc_36082B:                             ; CODE XREF: sub_360480+39F↑j
.text:0036082B                 mov     eax, [edx+18h]
.text:0036082E                 mov     ecx, edi
.text:00360830                 mov     [ebp-10h], eax
.text:00360833                 mov     eax, esi
.text:00360835                 mov     [ebp-8], eax
.text:00360838                 mov     edi, esi
.text:0036083A                 mov     [ebp-0Ch], ecx
.text:0036083D                 cmp     esi, 20h ; ' '
.text:00360840                 jb      short loc_3608B9
.text:00360840
.text:00360842                 lea     ecx, [esi-14h]
.text:00360845                 mov     eax, 0AAAAAAABh
.text:0036084A                 mul     ecx
.text:0036084C                 mov     ecx, [ebp-0Ch]
.text:0036084F                 shr     edx, 3
.text:00360852                 mov     [ebp-38h], edx
.text:00360855                 xor     edx, edx
.text:00360857                 xor     esi, esi
.text:00360859                 nop     dword ptr [eax+00000000h]
.text:00360859
.text:00360860
.text:00360860 loc_360860:                             ; CODE XREF: sub_360480+434↓j
.text:00360860                 mov     eax, [ecx+8]
.text:00360863                 add     edi, eax
.text:00360865                 movq    xmm0, qword ptr [ecx]
.text:00360869                 mov     ecx, edi
.text:0036086B                 ror     ecx, 0Eh
.text:0036086E                 movq    qword ptr [ebp-1D4h], xmm0
.text:00360876                 add     edx, [ebp-1D4h]
.text:0036087C                 add     esi, [ebp-1D0h]
.text:00360882                 xor     edx, edi
.text:00360884                 sub     edx, ecx
.text:00360886                 mov     [ebp-1CCh], eax
.text:0036088C                 mov     eax, [ebp-8]
.text:0036088F                 mov     ecx, edx
.text:00360891                 ror     ecx, 0Bh
.text:00360894                 xor     esi, edx
.text:00360896                 sub     esi, ecx
.text:00360898                 sub     eax, 0Ch
.text:0036089B                 mov     ecx, esi
.text:0036089D                 mov     [ebp-8], eax
.text:003608A0                 rol     ecx, 7
.text:003608A3                 xor     edi, esi
.text:003608A5                 sub     edi, ecx
.text:003608A7                 mov     ecx, [ebp-0Ch]
.text:003608AA                 add     ecx, 0Ch
.text:003608AD                 sub     dword ptr [ebp-38h], 1
.text:003608B1                 mov     [ebp-0Ch], ecx
.text:003608B4                 jnz     short loc_360860
.text:003608B4
.text:003608B6                 mov     esi, [ebp-30h]
.text:003608B6
.text:003608B9
.text:003608B9 loc_3608B9:                             ; CODE XREF: sub_360480+3C0↑j
.text:003608B9                 test    eax, eax
.text:003608BB                 jz      short loc_3608E3
.text:003608BB
.text:003608BD                 nop     dword ptr [eax]
.text:003608BD
.text:003608C0
.text:003608C0 loc_3608C0:                             ; CODE XREF: sub_360480+461↓j
.text:003608C0                 movzx   ecx, byte ptr [ecx+eax-1]
.text:003608C5                 mov     eax, edi
.text:003608C7                 shl     eax, 5
.text:003608CA                 add     ecx, eax
.text:003608CC                 mov     eax, edi
.text:003608CE                 shr     eax, 2
.text:003608D1                 add     ecx, eax
.text:003608D3                 mov     eax, [ebp-8]
.text:003608D6                 xor     edi, ecx
.text:003608D8                 mov     ecx, [ebp-0Ch]
.text:003608DB                 sub     eax, 1
.text:003608DE                 mov     [ebp-8], eax
.text:003608E1                 jnz     short loc_3608C0
.text:003608E1
.text:003608E3
.text:003608E3 loc_3608E3:                             ; CODE XREF: sub_360480+43B↑j
.text:003608E3                 mov     ecx, [ebp-64h]
.text:003608E6                 mov     edx, [ecx]
.text:003608E8                 mov     eax, edx
.text:003608EA                 sub     edx, [ebp-74h]
.text:003608ED                 sub     eax, ecx
.text:003608EF                 mov     ecx, [eax+4]
.text:003608F2                 mov     eax, [edx-8]
.text:003608F5                 dec     ecx
.text:003608F6                 and     ecx, edi
.text:003608F8                 mov     eax, [eax+ecx*4]
.text:003608FB                 mov     [ebp-8], eax
.text:003608FE                 test    eax, eax
.text:00360900                 jz      short loc_360977
.text:00360900
.text:00360902
.text:00360902 loc_360902:                             ; CODE XREF: sub_360480+4F5↓j
.text:00360902                 lea     ecx, [eax+10h]
.text:00360905                 mov     eax, [ecx]
.text:00360907                 sub     eax, ecx
.text:00360909                 cmp     eax, esi
.text:0036090B                 jnz     short loc_36096A
.text:0036090B
.text:0036090D                 mov     edx, [ebp-8]
.text:00360910                 mov     ecx, [ebp-60h]
.text:00360913                 add     edx, 14h
.text:00360916                 sub     esi, 4
.text:00360919                 jb      short loc_360931
.text:00360919
.text:0036091B                 nop     dword ptr [eax+eax+00h]
.text:0036091B
.text:00360920
.text:00360920 loc_360920:                             ; CODE XREF: sub_360480+4AF↓j
.text:00360920                 mov     eax, [ecx]
.text:00360922                 cmp     eax, [edx]
.text:00360924                 jnz     short loc_36093A
.text:00360924
.text:00360926                 add     ecx, 4
.text:00360929                 add     edx, 4
.text:0036092C                 sub     esi, 4
.text:0036092F                 jnb     short loc_360920
.text:0036092F
.text:00360931
.text:00360931 loc_360931:                             ; CODE XREF: sub_360480+499↑j
.text:00360931                 cmp     esi, 0FFFFFFFCh
.text:00360934                 jz      loc_3609BF
.text:00360934
.text:0036093A
.text:0036093A loc_36093A:                             ; CODE XREF: sub_360480+4A4↑j
.text:0036093A                 mov     al, [ecx]
.text:0036093C                 cmp     al, [edx]
.text:0036093E                 jnz     short loc_360967
.text:0036093E
.text:00360940                 cmp     esi, 0FFFFFFFDh
.text:00360943                 jz      short loc_3609BF
.text:00360943
.text:00360945                 mov     al, [ecx+1]
.text:00360948                 cmp     al, [edx+1]
.text:0036094B                 jnz     short loc_360967
.text:0036094B
.text:0036094D                 cmp     esi, 0FFFFFFFEh
.text:00360950                 jz      short loc_3609BF
.text:00360950
.text:00360952                 mov     al, [ecx+2]
.text:00360955                 cmp     al, [edx+2]
.text:00360958                 jnz     short loc_360967
.text:00360958
.text:0036095A                 cmp     esi, 0FFFFFFFFh
.text:0036095D                 jz      short loc_3609BF
.text:0036095D
.text:0036095F                 mov     al, [ecx+3]
.text:00360962                 cmp     al, [edx+3]
.text:00360965                 jz      short loc_3609BF
.text:00360965
.text:00360967
.text:00360967 loc_360967:                             ; CODE XREF: sub_360480+4BE↑j
.text:00360967                                         ; sub_360480+4CB↑j ...
.text:00360967                 mov     esi, [ebp-30h]
.text:00360967
.text:0036096A
.text:0036096A loc_36096A:                             ; CODE XREF: sub_360480+48B↑j
.text:0036096A                 mov     eax, [ebp-8]
.text:0036096D                 mov     eax, [eax+8]
.text:00360970                 mov     [ebp-8], eax
.text:00360973                 test    eax, eax
.text:00360975                 jnz     short loc_360902
.text:00360975
.text:00360977
.text:00360977 loc_360977:                             ; CODE XREF: sub_360480+480↑j
.text:00360977                 cmp     esi, 40000000h
.text:0036097D                 ja      loc_376089
.text:0036097D
.text:00360983                 mov     eax, [ebp-74h]
.text:00360986                 lea     ecx, [esi+15h]
.text:00360989                 mov     [ebp-0Ch], ecx
.text:0036098C                 mov     al, [eax+4]
.text:0036098F                 mov     [ebp-1], al
.text:00360992                 mov     eax, [ebp-64h]
.text:00360995                 mov     edx, [eax]
.text:00360997                 sub     edx, eax
.text:00360999                 lea     eax, [ecx-1]
.text:0036099C                 mov     [ebp-38h], edx
.text:0036099F                 cmp     eax, 200h
.text:003609A4                 jnb     short loc_3609EE
.text:003609A4
.text:003609A6                 movsx   eax, byte_2AB8E08[ecx]
.text:003609AD                 test    eax, eax
.text:003609AF                 js      short loc_3609EE
.text:003609AF
.text:003609B1                 mov     ecx, [ebp-74h]
.text:003609B4                 mov     edx, eax
.text:003609B6                 call    loc_13C09C0
.text:003609B6
.text:003609BB                 mov     esi, eax
.text:003609BD                 jmp     short loc_360A12
.text:003609BD
.text:003609BF ; ---------------------------------------------------------------------------
.text:003609BF
.text:003609BF loc_3609BF:                             ; CODE XREF: sub_360480+4B4↑j
.text:003609BF                                         ; sub_360480+4C3↑j ...
.text:003609BF                 mov     ecx, [ebp-64h]
.text:003609C2                 mov     esi, [ebp-8]
.text:003609C5                 mov     eax, [ecx]
.text:003609C7                 mov     dl, [esi+2]
.text:003609CA                 sub     eax, ecx
.text:003609CC                 movzx   ecx, byte ptr [eax+14h]
.text:003609D0                 not     ecx
.text:003609D2                 movzx   eax, dl
.text:003609D5                 and     ecx, 3
.text:003609D8                 xor     ecx, eax
.text:003609DA                 test    cl, 0Bh
.text:003609DD                 jnz     loc_360BE7
.text:003609DD
.text:003609E3                 xor     dl, 3
.text:003609E6                 mov     [esi+2], dl
.text:003609E9                 jmp     loc_360BE7
.text:003609E9
.text:003609EE ; ---------------------------------------------------------------------------
.text:003609EE
.text:003609EE loc_3609EE:                             ; CODE XREF: sub_360480+524↑j
.text:003609EE                                         ; sub_360480+52F↑j
.text:003609EE                 push    1
.text:003609F0                 push    ecx
.text:003609F1                 lea     eax, [ecx+28h]
.text:003609F4                 add     edx, 13Ch
.text:003609FA                 mov     ecx, [ebp-74h]
.text:003609FD                 push    eax
.text:003609FE                 call    sub_13C07B0
.text:003609FE
.text:00360A03                 add     esp, 0Ch
.text:00360A06                 mov     ecx, [eax+14h]
.text:00360A09                 lea     esi, [eax+28h]
.text:00360A0C                 sub     [eax+1Ch], ecx
.text:00360A0F                 inc     dword ptr [eax+20h]
.text:00360A0F
.text:00360A12
.text:00360A12 loc_360A12:                             ; CODE XREF: sub_360480+53D↑j
.text:00360A12                 mov     ecx, [ebp-0Ch]
.text:00360A15                 mov     [ebp-8], esi
.text:00360A18                 test    esi, esi
.text:00360A1A                 jnz     short loc_360A24
.text:00360A1A
.text:00360A1C                 test    ecx, ecx
.text:00360A1E                 jnz     loc_3760A9
.text:00360A1E
.text:00360A24
.text:00360A24 loc_360A24:                             ; CODE XREF: sub_360480+59A↑j
.text:00360A24                 mov     edx, [ebp-38h]
.text:00360A27                 movzx   eax, byte ptr [ebp-1]
.text:00360A2B                 add     [edx+38h], ecx
.text:00360A2E                 add     [edx+eax*4+144h], ecx
.text:00360A35                 mov     edx, [ebp-30h]
.text:00360A38                 mov     ecx, [ebp-64h]
.text:00360A3B                 push    edx
.text:00360A3C                 push    dword ptr [ebp-60h]
.text:00360A3F                 lea     eax, [edx+10h]
.text:00360A42                 add     eax, esi
.text:00360A44                 mov     [esi+10h], eax
.text:00360A47                 lea     eax, [esi+0Ch]
.text:00360A4A                 sub     eax, edi
.text:00360A4C                 mov     [esi+0Ch], eax
.text:00360A4F                 mov     eax, [ecx]
.text:00360A51                 sub     eax, ecx
.text:00360A53                 mov     al, [eax+14h]
.text:00360A56                 and     al, 3
.text:00360A58                 mov     [esi+2], al
.text:00360A5B                 mov     eax, [ebp-74h]
.text:00360A5E                 mov     byte ptr [esi], 5
.text:00360A61                 mov     al, [eax+4]
.text:00360A64                 mov     [esi+1], al
.text:00360A67                 lea     eax, [esi+14h]
.text:00360A6A                 push    eax
.text:00360A6B                 call    sub_1B7EE40
.text:00360A6B
.text:00360A70                 mov     edx, [ebp-64h]
.text:00360A73                 add     esp, 0Ch
.text:00360A76                 mov     ecx, [ebp-30h]
.text:00360A79                 mov     byte ptr [ecx+esi+14h], 0
.text:00360A7E                 mov     eax, [edx]
.text:00360A80                 sub     eax, edx
.text:00360A82                 mov     edx, [eax+858h]
.text:00360A88                 test    edx, edx
.text:00360A8A                 jz      short loc_360A9B
.text:00360A8A
.text:00360A8C                 push    ecx
.text:00360A8D                 lea     eax, [esi+14h]
.text:00360A90                 push    eax
.text:00360A91                 call    edx
.text:00360A91
.text:00360A93                 add     esp, 8
.text:00360A96                 movzx   eax, ax
.text:00360A99                 jmp     short loc_360A9E
.text:00360A99
.text:00360A9B ; ---------------------------------------------------------------------------
.text:00360A9B
.text:00360A9B loc_360A9B:                             ; CODE XREF: sub_360480+60A↑j
.text:00360A9B                 or      eax, 0FFFFFFFFh
.text:00360A9B
.text:00360A9E
.text:00360A9E loc_360A9E:                             ; CODE XREF: sub_360480+619↑j
.text:00360A9E                 mov     [esi+4], ax
.text:00360AA2                 mov     eax, [ebp-64h]
.text:00360AA5                 mov     edx, [eax]
.text:00360AA7                 sub     edx, eax
.text:00360AA9                 mov     ecx, [edx+4]
.text:00360AAC                 mov     eax, [edx]
.text:00360AAE                 dec     ecx
.text:00360AAF                 and     ecx, edi
.text:00360AB1                 mov     eax, [eax+ecx*4]
.text:00360AB4                 mov     [esi+8], eax
.text:00360AB7                 mov     eax, [edx]
.text:00360AB9                 mov     [eax+ecx*4], esi
.text:00360ABC                 inc     dword ptr [edx+8]
.text:00360ABF                 mov     eax, [edx+4]
.text:00360AC2                 mov     [ebp-30h], eax
.text:00360AC5                 cmp     [edx+8], eax
.text:00360AC8                 jbe     loc_360BE7
.text:00360AC8
.text:00360ACE                 cmp     eax, 3FFFFFFFh
.text:00360AD3                 jg      loc_360BE7
.text:00360AD3
.text:00360AD9                 add     eax, eax
.text:00360ADB                 cmp     eax, 3FFFFFFFh
.text:00360AE0                 ja      loc_376089
.text:00360AE0
.text:00360AE6                 lea     ecx, ds:0[eax*4]
.text:00360AED                 mov     eax, [ebp-64h]
.text:00360AF0                 mov     [ebp-0Ch], ecx
.text:00360AF3                 mov     edx, [eax]
.text:00360AF5                 sub     edx, eax
.text:00360AF7                 lea     eax, [ecx-1]
.text:00360AFA                 mov     [ebp-38h], edx
.text:00360AFD                 cmp     eax, 200h
.text:00360B02                 jnb     short loc_360B20
.text:00360B02
.text:00360B04                 movsx   eax, byte_2AB8E08[ecx]
.text:00360B0B                 test    eax, eax
.text:00360B0D                 js      short loc_360B20
.text:00360B0D
.text:00360B0F                 mov     ecx, [ebp-74h]
.text:00360B12                 mov     edx, eax
.text:00360B14                 call    sub_13C08C0
.text:00360B14
.text:00360B19                 mov     edi, eax
.text:00360B1B                 mov     [ebp-5Ch], edi
.text:00360B1E                 jmp     short loc_360B35
.text:00360B1E
.text:00360B20 ; ---------------------------------------------------------------------------
.text:00360B20
.text:00360B20 loc_360B20:                             ; CODE XREF: sub_360480+682↑j
.text:00360B20                                         ; sub_360480+68D↑j
.text:00360B20                 mov     eax, [edx+0Ch]
.text:00360B23                 push    ecx
.text:00360B24                 push    0
.text:00360B26                 push    0
.text:00360B28                 push    dword ptr [edx+10h]
.text:00360B2B                 call    eax
.text:00360B2B
.text:00360B2D                 add     esp, 10h
.text:00360B30                 mov     [ebp-5Ch], eax
.text:00360B33                 mov     edi, eax
.text:00360B33
.text:00360B35
.text:00360B35 loc_360B35:                             ; CODE XREF: sub_360480+69E↑j
.text:00360B35                 mov     eax, [ebp-0Ch]
.text:00360B38                 test    edi, edi
.text:00360B3A                 jnz     short loc_360B44
.text:00360B3A
.text:00360B3C                 test    eax, eax
.text:00360B3E                 jnz     loc_3760A9
.text:00360B3E
.text:00360B44
.text:00360B44 loc_360B44:                             ; CODE XREF: sub_360480+6BA↑j
.text:00360B44                 mov     ecx, [ebp-38h]
.text:00360B47                 mov     esi, [ebp-30h]
.text:00360B4A                 add     [ecx+38h], eax
.text:00360B4D                 add     [ecx+144h], eax
.text:00360B53                 mov     ecx, [ebp-64h]
.text:00360B56                 mov     edx, [ecx]
.text:00360B58                 sub     edx, ecx
.text:00360B5A                 lea     ecx, [esi+esi]
.text:00360B5D                 mov     esi, [ebp-8]
.text:00360B60                 mov     [ebp-0Ch], edx
.text:00360B63                 test    ecx, ecx
.text:00360B65                 jle     short loc_360B73
.text:00360B65
.text:00360B67                 shr     eax, 2
.text:00360B6A                 mov     ecx, eax
.text:00360B6C                 xor     eax, eax
.text:00360B6E                 rep stosd
.text:00360B70                 mov     edi, [ebp-5Ch]
.text:00360B70
.text:00360B73
.text:00360B73 loc_360B73:                             ; CODE XREF: sub_360480+6E5↑j
.text:00360B73                 mov     eax, [edx+4]
.text:00360B76                 xor     ecx, ecx
.text:00360B78                 mov     [ebp-38h], ecx
.text:00360B7B                 test    eax, eax
.text:00360B7D                 jle     short loc_360BC6
.text:00360B7D
.text:00360B7F                 nop
.text:00360B7F
.text:00360B80
.text:00360B80 loc_360B80:                             ; CODE XREF: sub_360480+741↓j
.text:00360B80                 mov     eax, [edx]
.text:00360B82                 mov     esi, [eax+ecx*4]
.text:00360B85                 test    esi, esi
.text:00360B87                 jz      short loc_360BB8
.text:00360B87
.text:00360B89                 mov     ecx, [ebp-30h]
.text:00360B8C                 lea     eax, ds:0FFFFFFFFh[ecx*2]
.text:00360B93                 mov     [ebp-5Ch], eax
.text:00360B93
.text:00360B96
.text:00360B96 loc_360B96:                             ; CODE XREF: sub_360480+730↓j
.text:00360B96                 mov     edx, [esi+8]
.text:00360B99                 lea     ecx, [esi+0Ch]
.text:00360B9C                 sub     ecx, [ecx]
.text:00360B9E                 and     ecx, eax
.text:00360BA0                 mov     eax, [edi+ecx*4]
.text:00360BA3                 mov     [esi+8], eax
.text:00360BA6                 mov     eax, [ebp-5Ch]
.text:00360BA9                 mov     [edi+ecx*4], esi
.text:00360BAC                 mov     esi, edx
.text:00360BAE                 test    edx, edx
.text:00360BB0                 jnz     short loc_360B96
.text:00360BB0
.text:00360BB2                 mov     ecx, [ebp-38h]
.text:00360BB5                 mov     edx, [ebp-0Ch]
.text:00360BB5
.text:00360BB8
.text:00360BB8 loc_360BB8:                             ; CODE XREF: sub_360480+707↑j
.text:00360BB8                 mov     eax, [edx+4]
.text:00360BBB                 inc     ecx
.text:00360BBC                 mov     [ebp-38h], ecx
.text:00360BBF                 cmp     ecx, eax
.text:00360BC1                 jl      short loc_360B80
.text:00360BC1
.text:00360BC3                 mov     esi, [ebp-8]
.text:00360BC3
.text:00360BC6
.text:00360BC6 loc_360BC6:                             ; CODE XREF: sub_360480+6FD↑j
.text:00360BC6                 mov     edx, [edx]
.text:00360BC8                 mov     ecx, [ebp-74h]
.text:00360BCB                 shl     eax, 2
.text:00360BCE                 push    0
.text:00360BD0                 push    eax
.text:00360BD1                 call    sub_13C0AF0
.text:00360BD1
.text:00360BD6                 mov     edx, [ebp-30h]
.text:00360BD9                 add     esp, 8
.text:00360BDC                 mov     eax, [ebp-0Ch]
.text:00360BDF                 lea     ecx, [edx+edx]
.text:00360BE2                 mov     [eax+4], ecx
.text:00360BE5                 mov     [eax], edi
.text:00360BE5
.text:00360BE7
.text:00360BE7 loc_360BE7:                             ; CODE XREF: sub_360480+55D↑j
.text:00360BE7                                         ; sub_360480+569↑j ...
.text:00360BE7                 mov     eax, [ebp-10h]
.text:00360BEA                 mov     edx, [ebp-74h]
.text:00360BED                 mov     [eax], esi
.text:00360BEF                 mov     dword ptr [eax+0Ch], 5
.text:00360BEF
.text:00360BF6
.text:00360BF6 loc_360BF6:                             ; CODE XREF: sub_360480+35F↑j
.text:00360BF6                 add     dword ptr [edx+18h], 10h
.text:00360BFA                 mov     eax, ds:off_2F43004
.text:00360BFF                 mov     ecx, [ebx+4]
.text:00360C02                 sub     ecx, eax
.text:00360C04                 cmp     ecx, ds:off_2F43000
.text:00360C0A                 jb      short loc_360C28
.text:00360C0A
.text:00360C0C                 mov     eax, ds:lpAddress
.text:00360C11                 mov     ecx, [ebx+4]
.text:00360C14                 sub     ecx, eax
.text:00360C16                 cmp     ecx, ds:dwSize
.text:00360C1C                 jb      short loc_360C28
.text:00360C1C
.text:00360C1E                 mov     ecx, edx
.text:00360C20                 call    retcheck
.text:00360C20
.text:00360C25                 mov     edx, [ebp-74h]
.text:00360C25
.text:00360C28
.text:00360C28 loc_360C28:                             ; CODE XREF: sub_360480+78A↑j
.text:00360C28                                         ; sub_360480+79C↑j
.text:00360C28                 mov     eax, [edx+18h]
.text:00360C2B                 mov     [ebp-30h], eax
.text:00360C2E                 mov     dword ptr [ebp-38h], 0
.text:00360C35                 lea     ecx, [eax-10h]
.text:00360C38                 lea     edi, [eax-20h]
.text:00360C3B                 mov     [ebp-10h], ecx
.text:00360C3E                 lea     edx, [eax-30h]
.text:00360C41                 mov     [ebp-8], edi
.text:00360C44                 mov     [ebp-0Ch], edx
.text:00360C47                 nop     word ptr [eax+eax+00000000h]
.text:00360C47
.text:00360C50
.text:00360C50 loc_360C50:                             ; CODE XREF: sub_360480+21FB↓j
.text:00360C50                 mov     ecx, [edx+0Ch]
.text:00360C53                 cmp     ecx, 6
.text:00360C56                 jnz     loc_3625AD
.text:00360C56
.text:00360C5C                 mov     esi, [edx]
.text:00360C5E                 mov     [ebp-5Ch], esi
.text:00360C61                 cmp     byte ptr [esi+7], 0
.text:00360C65                 jnz     loc_376116
.text:00360C65
.text:00360C6B                 mov     edx, [eax-14h]
.text:00360C6E                 mov     eax, edx
.text:00360C70                 sub     eax, 0
.text:00360C73                 jz      loc_36102D
.text:00360C73
.text:00360C79                 movaps  xmm3, xmmword_2C87C80
.text:00360C80                 sub     eax, 4
.text:00360C83                 jz      loc_360D25
.text:00360C83
.text:00360C89                 sub     eax, 1
.text:00360C8C                 jnz     loc_360E16
.text:00360C8C
.text:00360C92                 mov     eax, [edi]
.text:00360C94                 lea     edx, [esi+14h]
.text:00360C97                 mov     cl, [esi+5]
.text:00360C9A                 mov     edi, 1
.text:00360C9F                 mov     [ebp-60h], eax
.text:00360CA2                 add     eax, 0Ch
.text:00360CA5                 shl     edi, cl
.text:00360CA7                 dec     edi
.text:00360CA8                 sub     eax, [eax]
.text:00360CAA                 and     edi, eax
.text:00360CAC                 shl     edi, 5
.text:00360CAF                 sub     edi, edx
.text:00360CB1                 add     edi, [edx]
.text:00360CB3                 mov     edx, [ebp-60h]
.text:00360CB3
.text:00360CB6
.text:00360CB6 loc_360CB6:                             ; CODE XREF: sub_360480+853↓j
.text:00360CB6                 mov     ecx, [edi+1Ch]
.text:00360CB9                 mov     eax, ecx
.text:00360CBB                 and     eax, 0Fh
.text:00360CBE                 cmp     al, 5
.text:00360CC0                 jnz     short loc_360CC7
.text:00360CC0
.text:00360CC2                 cmp     [edi+10h], edx
.text:00360CC5                 jz      short loc_360CDA ; jumptable 00360FC9 case 0
.text:00360CC5
.text:00360CC7
.text:00360CC7 loc_360CC7:                             ; CODE XREF: sub_360480+840↑j
.text:00360CC7                 sar     ecx, 4
.text:00360CCA                 test    ecx, ecx
.text:00360CCC                 jz      short loc_360CD5
.text:00360CCC
.text:00360CCE                 shl     ecx, 5
.text:00360CD1                 add     edi, ecx
.text:00360CD3                 jmp     short loc_360CB6
.text:00360CD3
.text:00360CD5 ; ---------------------------------------------------------------------------
.text:00360CD5
.text:00360CD5 loc_360CD5:                             ; CODE XREF: sub_360480+84C↑j
.text:00360CD5                                         ; sub_360480+8F3↓j ...
.text:00360CD5                 mov     edi, offset luao_nilobject
.text:00360CD5
.text:00360CDA
.text:00360CDA loc_360CDA:                             ; CODE XREF: sub_360480+845↑j
.text:00360CDA                                         ; sub_360480+8DE↓j ...
.text:00360CDA                 mov     byte ptr [esi+6], 0 ; jumptable 00360FC9 case 0
.text:00360CDE                 cmp     edi, offset luao_nilobject
.text:00360CE4                 jnz     loc_3624FC
.text:00360CE4
.text:00360CEA
.text:00360CEA loc_360CEA:                             ; CODE XREF: sub_360480+BA8↓j
.text:00360CEA                 mov     edi, [ebp-8]
.text:00360CEA
.text:00360CED
.text:00360CED loc_360CED:                             ; CODE XREF: sub_360480+BB1↓j
.text:00360CED                 mov     ecx, [ebp-30h]
.text:00360CF0                 mov     eax, [ecx-14h]
.text:00360CF3                 test    eax, eax
.text:00360CF5                 jz      loc_3760FE
.text:00360CF5
.text:00360CFB                 cmp     eax, 4
.text:00360CFE                 jnz     loc_361036
.text:00360CFE
.text:00360D04                 movsd   xmm1, qword ptr [edi]
.text:00360D08                 movaps  xmm2, xmmword_2C87C80
.text:00360D0F                 xorps   xmm1, xmm2
.text:00360D12                 ucomisd xmm1, xmm1
.text:00360D16                 lahf
.text:00360D17                 test    ah, 44h
.text:00360D1A                 jp      loc_376091
.text:00360D1A
.text:00360D20                 jmp     loc_361054
.text:00360D20
.text:00360D25 ; ---------------------------------------------------------------------------
.text:00360D25
.text:00360D25 loc_360D25:                             ; CODE XREF: sub_360480+803↑j
.text:00360D25                 movsd   xmm1, qword ptr [edi]
.text:00360D29                 xorps   xmm1, xmm3
.text:00360D2C                 cvttsd2si ecx, xmm1
.text:00360D30                 movd    xmm2, ecx
.text:00360D34                 cvtdq2pd xmm2, xmm2
.text:00360D38                 ucomisd xmm2, xmm1
.text:00360D3C                 lahf
.text:00360D3D                 test    ah, 44h
.text:00360D40                 jp      loc_360E16
.text:00360D40
.text:00360D46                 lea     eax, [ecx-1]
.text:00360D49                 cmp     eax, [esi+8]
.text:00360D4C                 jnb     short loc_360D63
.text:00360D4C
.text:00360D4E                 mov     edi, [esi+18h]
.text:00360D51                 lea     eax, [esi+18h]
.text:00360D54                 shl     ecx, 4
.text:00360D57                 add     edi, 0FFFFFFF0h
.text:00360D5A                 sub     ecx, eax
.text:00360D5C                 add     edi, ecx
.text:00360D5E                 jmp     loc_360CDA      ; jumptable 00360FC9 case 0
.text:00360D5E
.text:00360D63 ; ---------------------------------------------------------------------------
.text:00360D63
.text:00360D63 loc_360D63:                             ; CODE XREF: sub_360480+8CC↑j
.text:00360D63                 mov     eax, [esi+14h]
.text:00360D66                 lea     ecx, [esi+14h]
.text:00360D69                 mov     [ebp-60h], eax
.text:00360D6C                 sub     eax, ecx
.text:00360D6E                 cmp     eax, offset dword_1EA0808
.text:00360D73                 jz      loc_360CD5
.text:00360D73
.text:00360D79                 movsd   qword ptr [ebp-0C8h], xmm2
.text:00360D81                 mov     edi, 1
.text:00360D86                 mov     ecx, [ebp-0C4h]
.text:00360D8C                 and     ecx, 7FFFFFFFh
.text:00360D92                 mov     eax, ecx
.text:00360D94                 shr     eax, 12h
.text:00360D97                 xor     eax, [ebp-0C8h]
.text:00360D9D                 imul    esi, eax, 5BD1E995h
.text:00360DA3                 mov     eax, esi
.text:00360DA5                 shr     eax, 16h
.text:00360DA8                 xor     eax, ecx
.text:00360DAA                 imul    edx, eax, 5BD1E995h
.text:00360DB0                 mov     eax, [ebp-5Ch]
.text:00360DB3                 mov     cl, [eax+5]
.text:00360DB6                 mov     eax, edx
.text:00360DB8                 shr     eax, 11h
.text:00360DBB                 xor     eax, esi
.text:00360DBD                 shl     edi, cl
.text:00360DBF                 mov     esi, [ebp-5Ch]
.text:00360DC2                 dec     edi
.text:00360DC3                 imul    eax, 5BD1E995h
.text:00360DC9                 shr     eax, 13h
.text:00360DCC                 xor     eax, edx
.text:00360DCE                 imul    eax, 5BD1E995h
.text:00360DD4                 and     edi, eax
.text:00360DD6                 mov     eax, [ebp-60h]
.text:00360DD9                 shl     edi, 5
.text:00360DDC                 add     eax, 0FFFFFFECh
.text:00360DDF                 sub     edi, esi
.text:00360DE1                 add     edi, eax
.text:00360DE1
.text:00360DE3
.text:00360DE3 loc_360DE3:                             ; CODE XREF: sub_360480+994↓j
.text:00360DE3                 mov     ecx, [edi+1Ch]
.text:00360DE6                 mov     eax, ecx
.text:00360DE8                 and     al, 0Fh
.text:00360DEA                 cmp     al, 4
.text:00360DEC                 jnz     short loc_360E04
.text:00360DEC
.text:00360DEE                 movsd   xmm1, qword ptr [edi+10h]
.text:00360DF3                 xorps   xmm1, xmm3
.text:00360DF6                 ucomisd xmm1, xmm2
.text:00360DFA                 lahf
.text:00360DFB                 test    ah, 44h
.text:00360DFE                 jnp     loc_360CDA      ; jumptable 00360FC9 case 0
.text:00360DFE
.text:00360E04
.text:00360E04 loc_360E04:                             ; CODE XREF: sub_360480+96C↑j
.text:00360E04                 sar     ecx, 4
.text:00360E07                 test    ecx, ecx
.text:00360E09                 jz      loc_360CD5
.text:00360E09
.text:00360E0F                 shl     ecx, 5
.text:00360E12                 add     edi, ecx
.text:00360E14                 jmp     short loc_360DE3
.text:00360E14
.text:00360E16 ; ---------------------------------------------------------------------------
.text:00360E16
.text:00360E16 loc_360E16:                             ; CODE XREF: sub_360480+80C↑j
.text:00360E16                                         ; sub_360480+8C0↑j
.text:00360E16                 lea     eax, [edx-1]    ; switch 5 cases
.text:00360E19                 cmp     eax, 4
.text:00360E1C                 ja      def_360E22      ; jumptable 00360E22 default case, case 2
.text:00360E1C
.text:00360E22                 jmp     ds:jpt_360E22[eax*4] ; switch jump
.text:00360E22
.text:00360E29 ; ---------------------------------------------------------------------------
.text:00360E29
.text:00360E29 loc_360E29:                             ; CODE XREF: sub_360480+9A2↑j
.text:00360E29                                         ; DATA XREF: .text:jpt_360E22↓o
.text:00360E29                 movsd   xmm1, qword ptr [edi] ; jumptable 00360E22 case 4
.text:00360E2D                 xorps   xmm1, xmm3
.text:00360E30                 movsd   qword ptr [ebp-20h], xmm1
.text:00360E35                 mov     ecx, [ebp-1Ch]
.text:00360E38                 and     ecx, 7FFFFFFFh
.text:00360E3E                 mov     eax, ecx
.text:00360E40                 shr     eax, 12h
.text:00360E43                 xor     eax, [ebp-20h]
.text:00360E46                 imul    esi, eax, 5BD1E995h
.text:00360E4C                 mov     eax, esi
.text:00360E4E                 shr     eax, 16h
.text:00360E51                 xor     eax, ecx
.text:00360E53                 mov     ecx, [ebp-5Ch]
.text:00360E56                 imul    edx, eax, 5BD1E995h
.text:00360E5C                 mov     eax, 1
.text:00360E61                 lea     edi, [ecx+14h]
.text:00360E64                 mov     cl, [ecx+5]
.text:00360E67                 shl     eax, cl
.text:00360E69                 mov     [ebp-60h], eax
.text:00360E6C                 mov     ecx, eax
.text:00360E6E                 mov     eax, edx
.text:00360E70                 dec     ecx
.text:00360E71                 shr     eax, 11h
.text:00360E74                 xor     eax, esi
.text:00360E76                 imul    eax, 5BD1E995h
.text:00360E7C                 shr     eax, 13h
.text:00360E7F                 xor     eax, edx
.text:00360E81                 imul    eax, 5BD1E995h
.text:00360E87                 and     ecx, eax
.text:00360E89                 shl     ecx, 5
.text:00360E8C                 sub     ecx, edi
.text:00360E8E                 add     ecx, [edi]
.text:00360E90                 mov     [ebp-60h], ecx
.text:00360E93                 mov     edi, ecx
.text:00360E95                 jmp     loc_360FA6
.text:00360E95
.text:00360E9A ; ---------------------------------------------------------------------------
.text:00360E9A
.text:00360E9A loc_360E9A:                             ; CODE XREF: sub_360480+9A2↑j
.text:00360E9A                                         ; DATA XREF: .text:jpt_360E22↓o
.text:00360E9A                 movq    xmm0, qword ptr [edi] ; jumptable 00360E22 case 3
.text:00360E9E                 xor     ecx, ecx
.text:00360EA0                 mov     edx, [edi+8]
.text:00360EA3                 movq    qword ptr [ebp-1E0h], xmm0
.text:00360EAB                 mov     eax, [ebp-1E0h]
.text:00360EB1                 cmp     eax, 8000000h
.text:00360EB6                 cmovz   eax, ecx
.text:00360EB9                 mov     ecx, [ebp-1DCh]
.text:00360EBF                 xor     esi, esi
.text:00360EC1                 cmp     ecx, 8000000h
.text:00360EC7                 cmovz   ecx, esi
.text:00360ECA                 cmp     edx, 8000000h
.text:00360ED0                 cmovz   edx, esi
.text:00360ED3                 mov     esi, eax
.text:00360ED5                 shr     esi, 11h
.text:00360ED8                 xor     esi, eax
.text:00360EDA                 mov     eax, ecx
.text:00360EDC                 shr     eax, 11h
.text:00360EDF                 xor     eax, ecx
.text:00360EE1                 imul    edi, esi, 466F45Dh
.text:00360EE7                 mov     [ebp-1DCh], eax
.text:00360EED                 mov     ecx, edx
.text:00360EEF                 imul    eax, 127409Fh
.text:00360EF5                 shr     ecx, 11h
.text:00360EF8                 xor     ecx, edx
.text:00360EFA                 mov     [ebp-1E0h], esi
.text:00360F00                 mov     esi, [ebp-5Ch]
.text:00360F03                 mov     edx, [ebp-5Ch]
.text:00360F06                 xor     edi, eax
.text:00360F08                 mov     [ebp-1D8h], ecx
.text:00360F0E                 imul    eax, ecx, 4F9FFB7h
.text:00360F14                 add     edx, 14h
.text:00360F17                 mov     cl, [esi+5]
.text:00360F1A                 xor     edi, eax
.text:00360F1C                 mov     eax, 1
.text:00360F21                 shl     eax, cl
.text:00360F23                 dec     eax
.text:00360F24                 and     edi, eax
.text:00360F26                 shl     edi, 5
.text:00360F29                 sub     edi, edx
.text:00360F2B                 add     edi, [edx]
.text:00360F2D                 jmp     short loc_360FA6
.text:00360F2D
.text:00360F2F ; ---------------------------------------------------------------------------
.text:00360F2F
.text:00360F2F loc_360F2F:                             ; CODE XREF: sub_360480+9A2↑j
.text:00360F2F                                         ; DATA XREF: .text:jpt_360E22↓o
.text:00360F2F                 mov     eax, [edi]      ; jumptable 00360E22 case 5
.text:00360F31                 lea     edx, [esi+14h]
.text:00360F34                 mov     cl, [esi+5]
.text:00360F37                 add     eax, 0Ch
.text:00360F3A                 mov     edi, 1
.text:00360F3F                 shl     edi, cl
.text:00360F41                 dec     edi
.text:00360F42                 sub     eax, [eax]
.text:00360F44                 and     edi, eax
.text:00360F46                 shl     edi, 5
.text:00360F49                 sub     edi, edx
.text:00360F4B                 add     edi, [edx]
.text:00360F4D                 jmp     short loc_360FA6
.text:00360F4D
.text:00360F4F ; ---------------------------------------------------------------------------
.text:00360F4F
.text:00360F4F loc_360F4F:                             ; CODE XREF: sub_360480+9A2↑j
.text:00360F4F                                         ; DATA XREF: .text:jpt_360E22↓o
.text:00360F4F                 mov     cl, [esi+5]     ; jumptable 00360E22 case 1
.text:00360F52                 lea     eax, [esi+14h]
.text:00360F55                 mov     edx, [ebp-8]
.text:00360F58                 mov     edi, 1
.text:00360F5D                 shl     edi, cl
.text:00360F5F                 dec     edi
.text:00360F60                 and     edi, [edx]
.text:00360F62                 shl     edi, 5
.text:00360F65                 sub     edi, eax
.text:00360F67                 add     edi, [eax]
.text:00360F69                 jmp     short loc_360FB0
.text:00360F69
.text:00360F6B ; ---------------------------------------------------------------------------
.text:00360F6B
.text:00360F6B def_360E22:                             ; CODE XREF: sub_360480+99C↑j
.text:00360F6B                                         ; sub_360480+9A2↑j
.text:00360F6B                                         ; DATA XREF: ...
.text:00360F6B                 mov     ecx, [edi]      ; jumptable 00360E22 default case, case 2
.text:00360F6D                 add     esi, 14h
.text:00360F70                 shr     ecx, 10h
.text:00360F73                 xor     ecx, [edi]
.text:00360F75                 mov     edi, 1
.text:00360F7A                 imul    ecx, 85EBCA6Bh
.text:00360F80                 mov     eax, ecx
.text:00360F82                 shr     eax, 0Dh
.text:00360F85                 xor     eax, ecx
.text:00360F87                 imul    edx, eax, 0C2B2AE35h
.text:00360F8D                 mov     eax, [ebp-5Ch]
.text:00360F90                 mov     cl, [eax+5]
.text:00360F93                 mov     eax, edx
.text:00360F95                 shl     edi, cl
.text:00360F97                 shr     eax, 10h
.text:00360F9A                 dec     edi
.text:00360F9B                 xor     eax, edx
.text:00360F9D                 and     edi, eax
.text:00360F9F                 shl     edi, 5
.text:00360FA2                 sub     edi, esi
.text:00360FA4                 add     edi, [esi]
.text:00360FA4
.text:00360FA6
.text:00360FA6 loc_360FA6:                             ; CODE XREF: sub_360480+A15↑j
.text:00360FA6                                         ; sub_360480+AAD↑j ...
.text:00360FA6                 mov     edx, [ebp-8]
.text:00360FA9                 nop     dword ptr [eax+00000000h]
.text:00360FA9
.text:00360FB0
.text:00360FB0 loc_360FB0:                             ; CODE XREF: sub_360480+AE9↑j
.text:00360FB0                                         ; sub_360480+BA2↓j
.text:00360FB0                 mov     esi, [ebp-30h]
.text:00360FB3                 lea     ecx, [edi+10h]
.text:00360FB6                 mov     eax, [ecx+0Ch]
.text:00360FB9                 and     eax, 0Fh
.text:00360FBC                 cmp     eax, [esi-14h]
.text:00360FBF                 mov     esi, [ebp-5Ch]
.text:00360FC2                 jnz     short loc_361013
.text:00360FC2
.text:00360FC4                 cmp     eax, 4          ; switch 5 cases
.text:00360FC7                 ja      short def_360FC9 ; jumptable 00360FC9 default case, cases 1,2
.text:00360FC7
.text:00360FC9                 jmp     ds:jpt_360FC9[eax*4] ; switch jump
.text:00360FC9
.text:00360FD0 ; ---------------------------------------------------------------------------
.text:00360FD0
.text:00360FD0 loc_360FD0:                             ; CODE XREF: sub_360480+B49↑j
.text:00360FD0                                         ; DATA XREF: .text:jpt_360FC9↓o
.text:00360FD0                 movsd   xmm2, qword ptr [ecx] ; jumptable 00360FC9 case 4
.text:00360FD4                 movsd   xmm1, qword ptr [edx]
.text:00360FD8                 xorps   xmm2, xmm3
.text:00360FDB                 xorps   xmm1, xmm3
.text:00360FDE                 ucomisd xmm2, xmm1
.text:00360FE2                 lahf
.text:00360FE3                 test    ah, 44h
.text:00360FE6                 jnp     loc_360CDA      ; jumptable 00360FC9 case 0
.text:00360FE6
.text:00360FEC                 jmp     short loc_361013
.text:00360FEC
.text:00360FEE ; ---------------------------------------------------------------------------
.text:00360FEE
.text:00360FEE loc_360FEE:                             ; CODE XREF: sub_360480+B49↑j
.text:00360FEE                                         ; DATA XREF: .text:jpt_360FC9↓o
.text:00360FEE                 call    sub_13180D0     ; jumptable 00360FC9 case 3
.text:00360FEE
.text:00360FF3                 movaps  xmm3, xmmword_2C87C80
.text:00360FFA                 mov     edx, [ebp-8]
.text:00360FFD                 movzx   ecx, al
.text:00361000                 jmp     short loc_36100B
.text:00361000
.text:00361002 ; ---------------------------------------------------------------------------
.text:00361002
.text:00361002 def_360FC9:                             ; CODE XREF: sub_360480+B47↑j
.text:00361002                                         ; sub_360480+B49↑j
.text:00361002                                         ; DATA XREF: ...
.text:00361002                 mov     eax, [ecx]      ; jumptable 00360FC9 default case, cases 1,2
.text:00361004                 xor     ecx, ecx
.text:00361006                 cmp     eax, [edx]
.text:00361008                 setz    cl
.text:00361008
.text:0036100B
.text:0036100B loc_36100B:                             ; CODE XREF: sub_360480+B80↑j
.text:0036100B                 test    ecx, ecx
.text:0036100D                 jnz     loc_360CDA      ; jumptable 00360FC9 case 0
.text:0036100D
.text:00361013
.text:00361013 loc_361013:                             ; CODE XREF: sub_360480+B42↑j
.text:00361013                                         ; sub_360480+B6C↑j
.text:00361013                 mov     eax, [edi+1Ch]
.text:00361016                 sar     eax, 4
.text:00361019                 test    eax, eax
.text:0036101B                 jz      short loc_361024
.text:0036101B
.text:0036101D                 shl     eax, 5
.text:00361020                 add     edi, eax
.text:00361022                 jmp     short loc_360FB0
.text:00361022
.text:00361024 ; ---------------------------------------------------------------------------
.text:00361024
.text:00361024 loc_361024:                             ; CODE XREF: sub_360480+B9B↑j
.text:00361024                 mov     byte ptr [esi+6], 0
.text:00361028                 jmp     loc_360CEA
.text:00361028
.text:0036102D ; ---------------------------------------------------------------------------
.text:0036102D
.text:0036102D loc_36102D:                             ; CODE XREF: sub_360480+7F3↑j
.text:0036102D                 mov     byte ptr [esi+6], 0
.text:00361031                 jmp     loc_360CED
.text:00361031
.text:00361036 ; ---------------------------------------------------------------------------
.text:00361036
.text:00361036 loc_361036:                             ; CODE XREF: sub_360480+87E↑j
.text:00361036                 cmp     eax, 3
.text:00361039                 jnz     short loc_36104D
.text:00361039
.text:0036103B                 mov     ecx, edi
.text:0036103D                 call    sub_13B3E20
.text:0036103D
.text:00361042                 test    al, al
.text:00361044                 jnz     loc_3760B6
.text:00361044
.text:0036104A                 mov     ecx, [ebp-30h]
.text:0036104A
.text:0036104D
.text:0036104D loc_36104D:                             ; CODE XREF: sub_360480+BB9↑j
.text:0036104D                 movaps  xmm2, xmmword_2C87C80
.text:0036104D
.text:00361054
.text:00361054 loc_361054:                             ; CODE XREF: sub_360480+8A0↑j
.text:00361054                 cmp     byte_2AB209C, 0
.text:0036105B                 jz      loc_3618DD
.text:0036105B
.text:00361061                 cmp     dword ptr [ecx-14h], 4
.text:00361065                 jnz     loc_3618DD
.text:00361065
.text:0036106B                 mov     eax, [esi+8]
.text:0036106E                 movsd   xmm1, qword ptr [edi]
.text:00361072                 inc     eax
.text:00361073                 xorps   xmm1, xmm2
.text:00361076                 movd    xmm0, eax
.text:0036107A                 cvtdq2pd xmm0, xmm0
.text:0036107E                 ucomisd xmm1, xmm0
.text:00361082                 lahf
.text:00361083                 test    ah, 44h
.text:00361086                 jp      loc_3618DD
.text:00361086
.text:0036108C                 xorps   xmm0, xmm0
.text:0036108F                 mov     dword ptr [ebp-868h], 0
.text:00361099                 lea     edx, [ebp-8D0h]
.text:0036109F                 movaps  xmmword ptr [ebp-8D0h], xmm0
.text:003610A6                 mov     ecx, esi
.text:003610A8                 movaps  xmmword ptr [ebp-8C0h], xmm0
.text:003610AF                 movaps  xmmword ptr [ebp-8B0h], xmm0
.text:003610B6                 movaps  xmmword ptr [ebp-8A0h], xmm0
.text:003610BD                 movaps  xmmword ptr [ebp-890h], xmm0
.text:003610C4                 movaps  xmmword ptr [ebp-880h], xmm0
.text:003610CB                 movq    qword ptr [ebp-870h], xmm0
.text:003610D3                 call    sub_13B3F30
.text:003610D3
.text:003610D8                 mov     edi, eax
.text:003610DA                 lea     edx, [ebp-8D0h]
.text:003610E0                 lea     eax, [ebp-68h]
.text:003610E3                 mov     [ebp-68h], edi
.text:003610E6                 push    eax
.text:003610E7                 mov     ecx, esi
.text:003610E9                 call    sub_13B3FF0
.text:003610E9
.text:003610EE                 add     edi, eax
.text:003610F0                 add     esp, 4
.text:003610F3                 mov     eax, [ebp-30h]
.text:003610F6                 cmp     dword ptr [eax-14h], 4
.text:003610FA                 jnz     short loc_361116
.text:003610FA
.text:003610FC                 movsd   xmm1, qword ptr [eax-20h]
.text:00361101                 lea     ecx, [ebp-8D0h]
.text:00361107                 xorps   xmm1, xmmword_2C87C80
.text:0036110E                 call    sub_13B3EE0
.text:0036110E
.text:00361113                 add     [ebp-68h], eax
.text:00361113
.text:00361116
.text:00361116 loc_361116:                             ; CODE XREF: sub_360480+C7A↑j
.text:00361116                 inc     edi
.text:00361117                 lea     edx, [ebp-68h]
.text:0036111A                 lea     ecx, [ebp-8D0h]
.text:00361120                 mov     [ebp-60h], edi
.text:00361123                 call    sub_13B3E70
.text:00361123
.text:00361128                 cmp     byte_2AB209C, 0
.text:0036112F                 mov     edi, [ebp-68h]
.text:00361132                 mov     [ebp-3Ch], eax
.text:00361135                 mov     [ebp-34h], edi
.text:00361138                 jz      loc_3612AB
.text:00361138
.text:0036113E                 mov     ecx, [esi+14h]
.text:00361141                 lea     edx, [esi+14h]
.text:00361144                 sub     ecx, edx
.text:00361146                 cmp     ecx, offset dword_1EA0808
.text:0036114C                 jnz     short loc_361157
.text:0036114C
.text:0036114E                 mov     byte ptr [ebp-1], 0
.text:00361152                 cmp     edi, [esi+8]
.text:00361155                 jge     short loc_36115B
.text:00361155
.text:00361157
.text:00361157 loc_361157:                             ; CODE XREF: sub_360480+CCC↑j
.text:00361157                 mov     byte ptr [ebp-1], 1
.text:00361157
.text:0036115B
.text:0036115B loc_36115B:                             ; CODE XREF: sub_360480+CD5↑j
.text:0036115B                 mov     ecx, [ebp-30h]
.text:0036115E                 movaps  xmm3, xmmword_2C87C80
.text:00361165                 cmp     dword ptr [ecx-14h], 4
.text:00361169                 jnz     short loc_36118F
.text:00361169
.text:0036116B                 movsd   xmm1, qword ptr [ecx-20h]
.text:00361170                 xorps   xmm1, xmm3
.text:00361173                 cvttsd2si ecx, xmm1
.text:00361177                 mov     [ebp-44h], ecx
.text:0036117A                 movd    xmm0, ecx
.text:0036117E                 cvtdq2pd xmm0, xmm0
.text:00361182                 ucomisd xmm0, xmm1
.text:00361186                 lahf
.text:00361187                 test    ah, 44h
.text:0036118A                 mov     eax, [ebp-3Ch]
.text:0036118D                 jnp     short loc_361196
.text:0036118D
.text:0036118F
.text:0036118F loc_36118F:                             ; CODE XREF: sub_360480+CE9↑j
.text:0036118F                 mov     dword ptr [ebp-44h], 0FFFFFFFFh
.text:0036118F
.text:00361196
.text:00361196 loc_361196:                             ; CODE XREF: sub_360480+D0D↑j
.text:00361196                                         ; sub_360480+E26↓j
.text:00361196                 lea     ecx, [edi+1]
.text:00361199                 mov     [ebp-24h], ecx
.text:0036119C                 cmp     ecx, [ebp-44h]
.text:0036119F                 jz      loc_36129A
.text:0036119F
.text:003611A5                 cmp     byte ptr [ebp-1], 0
.text:003611A9                 jz      loc_3612AB
.text:003611A9
.text:003611AF                 lea     eax, [ecx-1]
.text:003611B2                 cmp     eax, [esi+8]
.text:003611B5                 jnb     short loc_3611CF
.text:003611B5
.text:003611B7                 mov     edx, [esi+18h]
.text:003611BA                 lea     eax, [esi+18h]
.text:003611BD                 shl     ecx, 4
.text:003611C0                 sub     ecx, eax
.text:003611C2                 add     ecx, 0FFFFFFF0h
.text:003611C5                 add     edx, ecx
.text:003611C7                 mov     ecx, [ebp-24h]
.text:003611CA                 jmp     loc_36128E
.text:003611CA
.text:003611CF ; ---------------------------------------------------------------------------
.text:003611CF
.text:003611CF loc_3611CF:                             ; CODE XREF: sub_360480+D35↑j
.text:003611CF                 mov     eax, [edx]
.text:003611D1                 sub     eax, edx
.text:003611D3                 cmp     eax, offset dword_1EA0808
.text:003611D8                 jz      loc_361289
.text:003611D8
.text:003611DE                 movd    xmm2, ecx
.text:003611E2                 mov     edi, 1
.text:003611E7                 cvtdq2pd xmm2, xmm2
.text:003611EB                 movsd   qword ptr [ebp-0D0h], xmm2
.text:003611F3                 mov     ecx, [ebp-0CCh]
.text:003611F9                 and     ecx, 7FFFFFFFh
.text:003611FF                 mov     eax, ecx
.text:00361201                 shr     eax, 12h
.text:00361204                 xor     eax, [ebp-0D0h]
.text:0036120A                 imul    esi, eax, 5BD1E995h
.text:00361210                 mov     eax, esi
.text:00361212                 shr     eax, 16h
.text:00361215                 xor     eax, ecx
.text:00361217                 imul    edx, eax, 5BD1E995h
.text:0036121D                 mov     eax, [ebp-5Ch]
.text:00361220                 mov     cl, [eax+5]
.text:00361223                 mov     eax, edx
.text:00361225                 shr     eax, 11h
.text:00361228                 xor     eax, esi
.text:0036122A                 shl     edi, cl
.text:0036122C                 mov     esi, [ebp-5Ch]
.text:0036122F                 dec     edi
.text:00361230                 imul    eax, 5BD1E995h
.text:00361236                 shr     eax, 13h
.text:00361239                 xor     eax, edx
.text:0036123B                 mov     edx, [esi+14h]
.text:0036123E                 imul    eax, 5BD1E995h
.text:00361244                 add     edx, 0FFFFFFECh
.text:00361247                 and     edi, eax
.text:00361249                 shl     edi, 5
.text:0036124C                 sub     edi, esi
.text:0036124E                 add     edx, edi
.text:0036124E
.text:00361250
.text:00361250 loc_361250:                             ; CODE XREF: sub_360480+DF9↓j
.text:00361250                 mov     ecx, [edx+1Ch]
.text:00361253                 mov     eax, ecx
.text:00361255                 and     al, 0Fh
.text:00361257                 cmp     al, 4
.text:00361259                 jnz     short loc_36126D
.text:00361259
.text:0036125B                 movsd   xmm1, qword ptr [edx+10h]
.text:00361260                 xorps   xmm1, xmm3
.text:00361263                 ucomisd xmm1, xmm2
.text:00361267                 lahf
.text:00361268                 test    ah, 44h
.text:0036126B                 jnp     short loc_36127B
.text:0036126B
.text:0036126D
.text:0036126D loc_36126D:                             ; CODE XREF: sub_360480+DD9↑j
.text:0036126D                 sar     ecx, 4
.text:00361270                 test    ecx, ecx
.text:00361272                 jz      short loc_361283
.text:00361272
.text:00361274                 shl     ecx, 5
.text:00361277                 add     edx, ecx
.text:00361279                 jmp     short loc_361250
.text:00361279
.text:0036127B ; ---------------------------------------------------------------------------
.text:0036127B
.text:0036127B loc_36127B:                             ; CODE XREF: sub_360480+DEB↑j
.text:0036127B                 mov     edi, [ebp-34h]
.text:0036127E                 mov     ecx, [ebp-24h]
.text:00361281                 jmp     short loc_36128E
.text:00361281
.text:00361283 ; ---------------------------------------------------------------------------
.text:00361283
.text:00361283 loc_361283:                             ; CODE XREF: sub_360480+DF2↑j
.text:00361283                 mov     edi, [ebp-34h]
.text:00361286                 mov     ecx, [ebp-24h]
.text:00361286
.text:00361289
.text:00361289 loc_361289:                             ; CODE XREF: sub_360480+D58↑j
.text:00361289                 mov     edx, offset luao_nilobject
.text:00361289
.text:0036128E
.text:0036128E loc_36128E:                             ; CODE XREF: sub_360480+D4A↑j
.text:0036128E                                         ; sub_360480+E01↑j
.text:0036128E                 cmp     dword ptr [edx+0Ch], 0
.text:00361292                 jz      short loc_3612AB
.text:00361292
.text:00361294                 mov     eax, [ebp-3Ch]
.text:00361297                 lea     edx, [esi+14h]
.text:00361297
.text:0036129A
.text:0036129A loc_36129A:                             ; CODE XREF: sub_360480+D1F↑j
.text:0036129A                 mov     edi, ecx
.text:0036129C                 inc     eax
.text:0036129D                 mov     [ebp-34h], edi
.text:003612A0                 mov     [ebp-68h], edi
.text:003612A3                 mov     [ebp-3Ch], eax
.text:003612A6                 jmp     loc_361196
.text:003612A6
.text:003612AB ; ---------------------------------------------------------------------------
.text:003612AB
.text:003612AB loc_3612AB:                             ; CODE XREF: sub_360480+CB8↑j
.text:003612AB                                         ; sub_360480+D29↑j ...
.text:003612AB                 mov     eax, [ebp-60h]
.text:003612AE                 sub     eax, [ebp-3Ch]
.text:003612B1                 mov     [ebp-60h], eax
.text:003612B4                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:003612BA                 jg      loc_3760E6
.text:003612BA
.text:003612C0                 cmp     eax, (offset dword_3FFF948+6B8h)
.text:003612C5                 jg      loc_3760E6
.text:003612C5
.text:003612CB                 movzx   ecx, byte ptr [esi+5]
.text:003612CF                 mov     edx, [esi+8]
.text:003612D2                 mov     [ebp-24h], edx
.text:003612D5                 mov     edx, [esi+14h]
.text:003612D8                 mov     [ebp-44h], ecx
.text:003612DB                 lea     ecx, [esi+14h]
.text:003612DE                 sub     edx, ecx
.text:003612E0                 mov     [ebp-3Ch], edx
.text:003612E3                 mov     edx, [ebp-24h]
.text:003612E6                 cmp     edi, edx
.text:003612E8                 jle     loc_36146A
.text:003612E8
.text:003612EE                 mov     al, [esi+1]
.text:003612F1                 mov     [ebp-1], al
.text:003612F4                 cmp     edi, 0FFFFFFFh
.text:003612FA                 ja      loc_376089
.text:003612FA
.text:00361300                 mov     eax, edx
.text:00361302                 mov     ecx, edi
.text:00361304                 shl     eax, 4
.text:00361307                 lea     edx, [esi+18h]
.text:0036130A                 mov     [ebp-58h], eax
.text:0036130D                 mov     eax, [edx]
.text:0036130F                 sub     eax, edx
.text:00361311                 shl     ecx, 4
.text:00361314                 mov     [ebp-4Ch], eax
.text:00361317                 mov     eax, [ebp-64h]
.text:0036131A                 mov     [ebp-14h], ecx
.text:0036131D                 mov     edx, [eax]
.text:0036131F                 sub     edx, eax
.text:00361321                 lea     eax, [ecx-1]
.text:00361324                 mov     [ebp-50h], edx
.text:00361327                 cmp     eax, 200h
.text:0036132C                 jnb     short loc_36133A
.text:0036132C
.text:0036132E                 movsx   eax, byte_2AB8E08[ecx]
.text:00361335                 mov     [ebp-54h], eax
.text:00361338                 jmp     short loc_361341
.text:00361338
.text:0036133A ; ---------------------------------------------------------------------------
.text:0036133A
.text:0036133A loc_36133A:                             ; CODE XREF: sub_360480+EAC↑j
.text:0036133A                 mov     dword ptr [ebp-54h], 0FFFFFFFFh
.text:0036133A
.text:00361341
.text:00361341 loc_361341:                             ; CODE XREF: sub_360480+EB8↑j
.text:00361341                 mov     eax, [ebp-58h]
.text:00361344                 dec     eax
.text:00361345                 cmp     eax, 200h
.text:0036134A                 jnb     short loc_361358
.text:0036134A
.text:0036134C                 mov     eax, [ebp-58h]
.text:0036134F                 movsx   eax, byte_2AB8E08[eax]
.text:00361356                 jmp     short loc_36135B
.text:00361356
.text:00361358 ; ---------------------------------------------------------------------------
.text:00361358
.text:00361358 loc_361358:                             ; CODE XREF: sub_360480+ECA↑j
.text:00361358                 or      eax, 0FFFFFFFFh
.text:00361358
.text:0036135B
.text:0036135B loc_36135B:                             ; CODE XREF: sub_360480+ED6↑j
.text:0036135B                 cmp     dword ptr [ebp-54h], 0
.text:0036135F                 mov     [ebp-2Ch], eax
.text:00361362                 jge     short loc_3613A3
.text:00361362
.text:00361364                 test    eax, eax
.text:00361366                 mov     eax, [edx+0Ch]
.text:00361369                 push    ecx
.text:0036136A                 jns     short loc_361395
.text:0036136A
.text:0036136C                 push    dword ptr [ebp-58h]
.text:0036136F                 push    dword ptr [ebp-4Ch]
.text:00361372                 push    dword ptr [edx+10h]
.text:00361375                 call    eax
.text:00361375
.text:00361377                 mov     ecx, [ebp-14h]
.text:0036137A                 add     esp, 10h
.text:0036137D                 mov     [ebp-54h], eax
.text:00361380                 test    eax, eax
.text:00361382                 jnz     loc_361418
.text:00361382
.text:00361388                 test    ecx, ecx
.text:0036138A                 jnz     loc_3760A9
.text:0036138A
.text:00361390                 jmp     loc_361418
.text:00361390
.text:00361395 ; ---------------------------------------------------------------------------
.text:00361395
.text:00361395 loc_361395:                             ; CODE XREF: sub_360480+EEA↑j
.text:00361395                 push    0
.text:00361397                 push    0
.text:00361399                 push    dword ptr [edx+10h]
.text:0036139C                 call    eax
.text:0036139C
.text:0036139E                 add     esp, 10h
.text:003613A1                 jmp     short loc_3613AE
.text:003613A1
.text:003613A3 ; ---------------------------------------------------------------------------
.text:003613A3
.text:003613A3 loc_3613A3:                             ; CODE XREF: sub_360480+EE2↑j
.text:003613A3                 mov     edx, [ebp-54h]
.text:003613A6                 mov     ecx, [ebp-74h]
.text:003613A9                 call    sub_13C08C0
.text:003613A9
.text:003613AE
.text:003613AE loc_3613AE:                             ; CODE XREF: sub_360480+F21↑j
.text:003613AE                 mov     ecx, [ebp-14h]
.text:003613B1                 mov     [ebp-54h], eax
.text:003613B4                 test    eax, eax
.text:003613B6                 jnz     short loc_3613C0
.text:003613B6
.text:003613B8                 test    ecx, ecx
.text:003613BA                 jnz     loc_3760A9
.text:003613BA
.text:003613C0
.text:003613C0 loc_3613C0:                             ; CODE XREF: sub_360480+F36↑j
.text:003613C0                 mov     edx, [ebp-58h]
.text:003613C3                 test    edx, edx
.text:003613C5                 jz      short loc_3613E8
.text:003613C5
.text:003613C7                 test    ecx, ecx
.text:003613C9                 jz      short loc_3613E8
.text:003613C9
.text:003613CB                 cmp     edx, ecx
.text:003613CD                 mov     eax, edi
.text:003613CF                 cmovb   eax, [ebp-24h]
.text:003613D3                 shl     eax, 4
.text:003613D6                 push    eax
.text:003613D7                 push    dword ptr [ebp-4Ch]
.text:003613DA                 push    dword ptr [ebp-54h]
.text:003613DD                 call    sub_1B7EE40
.text:003613DD
.text:003613E2                 mov     edx, [ebp-58h]
.text:003613E5                 add     esp, 0Ch
.text:003613E5
.text:003613E8
.text:003613E8 loc_3613E8:                             ; CODE XREF: sub_360480+F45↑j
.text:003613E8                                         ; sub_360480+F49↑j
.text:003613E8                 mov     eax, [ebp-2Ch]
.text:003613EB                 test    eax, eax
.text:003613ED                 js      short loc_361401
.text:003613ED
.text:003613EF                 push    dword ptr [ebp-4Ch]
.text:003613F2                 mov     ecx, [ebp-74h]
.text:003613F5                 mov     edx, eax
.text:003613F7                 call    sub_13C0A60
.text:003613F7
.text:003613FC                 add     esp, 4
.text:003613FF                 jmp     short loc_361415
.text:003613FF
.text:00361401 ; ---------------------------------------------------------------------------
.text:00361401
.text:00361401 loc_361401:                             ; CODE XREF: sub_360480+F6D↑j
.text:00361401                 mov     eax, [ebp-50h]
.text:00361404                 push    0
.text:00361406                 push    edx
.text:00361407                 push    dword ptr [ebp-4Ch]
.text:0036140A                 push    dword ptr [eax+10h]
.text:0036140D                 mov     eax, [eax+0Ch]
.text:00361410                 call    eax
.text:00361410
.text:00361412                 add     esp, 10h
.text:00361412
.text:00361415
.text:00361415 loc_361415:                             ; CODE XREF: sub_360480+F7F↑j
.text:00361415                 mov     ecx, [ebp-14h]
.text:00361415
.text:00361418
.text:00361418 loc_361418:                             ; CODE XREF: sub_360480+F02↑j
.text:00361418                                         ; sub_360480+F10↑j
.text:00361418                 mov     edx, [ebp-50h]
.text:0036141B                 mov     eax, ecx
.text:0036141D                 sub     eax, [ebp-58h]
.text:00361420                 sub     ecx, [ebp-58h]
.text:00361423                 add     [edx+38h], eax
.text:00361426                 movzx   eax, byte ptr [ebp-1]
.text:0036142A                 add     [edx+eax*4+144h], ecx
.text:00361431                 mov     ecx, [ebp-54h]
.text:00361434                 add     ecx, 18h
.text:00361437                 add     ecx, esi
.text:00361439                 mov     [esi+18h], ecx
.text:0036143C                 sub     ecx, esi
.text:0036143E                 mov     edx, [esi+8]
.text:00361441                 cmp     edx, edi
.text:00361443                 jge     short loc_361461
.text:00361443
.text:00361445                 mov     eax, edx
.text:00361447                 add     ecx, 0FFFFFFF4h
.text:0036144A                 shl     eax, 4
.text:0036144D                 add     eax, ecx
.text:0036144F                 mov     ecx, edi
.text:00361451                 sub     ecx, edx
.text:00361451
.text:00361453
.text:00361453 loc_361453:                             ; CODE XREF: sub_360480+FDF↓j
.text:00361453                 mov     dword ptr [eax], 0
.text:00361459                 lea     eax, [eax+10h]
.text:0036145C                 sub     ecx, 1
.text:0036145F                 jnz     short loc_361453
.text:0036145F
.text:00361461
.text:00361461 loc_361461:                             ; CODE XREF: sub_360480+FC3↑j
.text:00361461                 mov     eax, [ebp-60h]
.text:00361464                 lea     ecx, [esi+14h]
.text:00361467                 mov     [esi+8], edi
.text:00361467
.text:0036146A
.text:0036146A loc_36146A:                             ; CODE XREF: sub_360480+E68↑j
.text:0036146A                 test    eax, eax
.text:0036146C                 jnz     short loc_36147D
.text:0036146C
.text:0036146E                 lea     eax, dword_1EA0808[ecx]
.text:00361474                 mov     [ecx], eax
.text:00361476                 xor     ecx, ecx
.text:00361478                 jmp     loc_361572
.text:00361478
.text:0036147D ; ---------------------------------------------------------------------------
.text:0036147D
.text:0036147D loc_36147D:                             ; CODE XREF: sub_360480+FEC↑j
.text:0036147D                 dec     eax
.text:0036147E                 or      ecx, 0FFFFFFFFh
.text:00361481                 cmp     eax, 100h
.text:00361486                 jb      short loc_36149D
.text:00361486
.text:00361488                 nop     dword ptr [eax+eax+00000000h]
.text:00361488
.text:00361490
.text:00361490 loc_361490:                             ; CODE XREF: sub_360480+101B↓j
.text:00361490                 shr     eax, 8
.text:00361493                 add     ecx, 8
.text:00361496                 cmp     eax, 100h
.text:0036149B                 jnb     short loc_361490
.text:0036149B
.text:0036149D
.text:0036149D loc_36149D:                             ; CODE XREF: sub_360480+1006↑j
.text:0036149D                 movzx   eax, ds:byte_278DF30[eax]
.text:003614A4                 inc     eax
.text:003614A5                 add     eax, ecx
.text:003614A7                 mov     [ebp-2Ch], eax
.text:003614AA                 cmp     eax, 1Ah
.text:003614AD                 jg      loc_3760CE
.text:003614AD
.text:003614B3                 mov     ecx, eax
.text:003614B5                 mov     edx, 1
.text:003614BA                 mov     al, [esi+1]
.text:003614BD                 shl     edx, cl
.text:003614BF                 mov     [ebp-60h], edx
.text:003614C2                 mov     [ebp-1], al
.text:003614C5                 cmp     edx, 7FFFFFFh
.text:003614CB                 ja      loc_376089
.text:003614CB
.text:003614D1                 mov     eax, [ebp-64h]
.text:003614D4                 mov     ecx, edx
.text:003614D6                 shl     ecx, 5
.text:003614D9                 mov     [ebp-54h], ecx
.text:003614DC                 mov     edx, [eax]
.text:003614DE                 sub     edx, eax
.text:003614E0                 lea     eax, [ecx-1]
.text:003614E3                 mov     [ebp-50h], edx
.text:003614E6                 cmp     eax, 200h
.text:003614EB                 jnb     short loc_361504
.text:003614EB
.text:003614ED                 movsx   eax, byte_2AB8E08[ecx]
.text:003614F4                 test    eax, eax
.text:003614F6                 js      short loc_361504
.text:003614F6
.text:003614F8                 mov     ecx, [ebp-74h]
.text:003614FB                 mov     edx, eax
.text:003614FD                 call    sub_13C08C0
.text:003614FD
.text:00361502                 jmp     short loc_361514
.text:00361502
.text:00361504 ; ---------------------------------------------------------------------------
.text:00361504
.text:00361504 loc_361504:                             ; CODE XREF: sub_360480+106B↑j
.text:00361504                                         ; sub_360480+1076↑j
.text:00361504                 mov     eax, [edx+0Ch]
.text:00361507                 push    ecx
.text:00361508                 push    0
.text:0036150A                 push    0
.text:0036150C                 push    dword ptr [edx+10h]
.text:0036150F                 call    eax
.text:0036150F
.text:00361511                 add     esp, 10h
.text:00361511
.text:00361514
.text:00361514 loc_361514:                             ; CODE XREF: sub_360480+1082↑j
.text:00361514                 mov     ecx, [ebp-54h]
.text:00361517                 mov     [ebp-4Ch], eax
.text:0036151A                 test    eax, eax
.text:0036151C                 jnz     short loc_361526
.text:0036151C
.text:0036151E                 test    ecx, ecx
.text:00361520                 jnz     loc_3760A9
.text:00361520
.text:00361526
.text:00361526 loc_361526:                             ; CODE XREF: sub_360480+109C↑j
.text:00361526                 mov     edx, [ebp-50h]
.text:00361529                 movzx   eax, byte ptr [ebp-1]
.text:0036152D                 add     [edx+38h], ecx
.text:00361530                 add     [edx+eax*4+144h], ecx
.text:00361537                 lea     ecx, [esi+14h]
.text:0036153A                 mov     eax, [ebp-4Ch]
.text:0036153D                 add     eax, ecx
.text:0036153F                 mov     [ecx], eax
.text:00361541                 mov     eax, [ebp-60h]
.text:00361544                 test    eax, eax
.text:00361546                 jle     short loc_36156F
.text:00361546
.text:00361548                 xor     edx, edx
.text:0036154A                 mov     esi, eax
.text:0036154C                 nop     dword ptr [eax+00h]
.text:0036154C
.text:00361550
.text:00361550 loc_361550:                             ; CODE XREF: sub_360480+10EA↓j
.text:00361550                 mov     eax, edx
.text:00361552                 add     edx, 20h ; ' '
.text:00361555                 sub     eax, ecx
.text:00361557                 add     eax, [ecx]
.text:00361559                 mov     dword ptr [eax+1Ch], 0
.text:00361560                 mov     dword ptr [eax+0Ch], 0
.text:00361567                 sub     esi, 1
.text:0036156A                 jnz     short loc_361550
.text:0036156A
.text:0036156C                 mov     esi, [ebp-5Ch]
.text:0036156C
.text:0036156F
.text:0036156F loc_36156F:                             ; CODE XREF: sub_360480+10C6↑j
.text:0036156F                 mov     ecx, [ebp-2Ch]
.text:0036156F
.text:00361572
.text:00361572 loc_361572:                             ; CODE XREF: sub_360480+FF8↑j
.text:00361572                 mov     al, 1
.text:00361574                 mov     [esi+5], cl
.text:00361577                 shl     al, cl
.text:00361579                 dec     al
.text:0036157B                 mov     [esi+4], al
.text:0036157E                 mov     eax, [ebp-60h]
.text:00361581                 mov     [esi+0Ch], eax
.text:00361584                 cmp     edi, [ebp-24h]
.text:00361587                 jge     loc_361716
.text:00361587
.text:0036158D                 mov     eax, edi
.text:0036158F                 mov     [esi+8], edi
.text:00361592                 shl     eax, 4
.text:00361595                 lea     ecx, [esi+18h]
.text:00361598                 mov     [ebp-54h], eax
.text:0036159B                 mov     edi, eax
.text:0036159D                 mov     eax, [ebp-34h]
.text:003615A0                 mov     [ebp-2Ch], ecx
.text:003615A3                 lea     edx, [eax+1]
.text:003615A6                 mov     [ebp-50h], edx
.text:003615A9                 mov     edx, [ebp-24h]
.text:003615AC                 mov     [ebp-4Ch], edx
.text:003615AF                 sub     [ebp-4Ch], eax
.text:003615B2                 mov     edx, [ebp-50h]
.text:003615B2
.text:003615B5
.text:003615B5 loc_3615B5:                             ; CODE XREF: sub_360480+11CA↓j
.text:003615B5                 mov     eax, [ecx]
.text:003615B7                 mov     [ebp-58h], eax
.text:003615BA                 mov     eax, edi
.text:003615BC                 mov     esi, [ebp-58h]
.text:003615BF                 sub     eax, ecx
.text:003615C1                 cmp     dword ptr [eax+esi+0Ch], 0
.text:003615C6                 mov     esi, [ebp-5Ch]
.text:003615C9                 jz      short loc_36163F
.text:003615C9
.text:003615CB                 cmp     byte_2AB2004, 0
.text:003615D2                 jz      short loc_36161B
.text:003615D2
.text:003615D4                 movd    xmm0, edx
.text:003615D8                 lea     eax, [ebp-2F0h]
.text:003615DE                 mov     edx, [ebp-5Ch]
.text:003615E1                 mov     esi, edi
.text:003615E3                 cvtdq2pd xmm1, xmm0
.text:003615E7                 sub     esi, ecx
.text:003615E9                 mov     dword ptr [ebp-2E4h], 4
.text:003615F3                 push    eax
.text:003615F4                 xorps   xmm1, xmmword_2C87C80
.text:003615FB                 movsd   qword ptr [ebp-2F0h], xmm1
.text:00361603                 add     esi, [ecx]
.text:00361605                 mov     ecx, [ebp-74h]
.text:00361608                 call    sub_13B83C0
.text:00361608
.text:0036160D                 movups  xmm0, xmmword ptr [esi]
.text:00361610                 mov     esi, [ebp-5Ch]
.text:00361613                 add     esp, 4
.text:00361616                 mov     ecx, [ebp-2Ch]
.text:00361619                 jmp     short loc_361639
.text:00361619
.text:0036161B ; ---------------------------------------------------------------------------
.text:0036161B
.text:0036161B loc_36161B:                             ; CODE XREF: sub_360480+1152↑j
.text:0036161B                 mov     ecx, [ebp-74h]
.text:0036161E                 push    edx
.text:0036161F                 mov     edx, esi
.text:00361621                 call    sub_13BBE20
.text:00361621
.text:00361626                 mov     ecx, edi
.text:00361628                 lea     edx, [esi+18h]
.text:0036162B                 sub     ecx, edx
.text:0036162D                 add     esp, 4
.text:00361630                 add     ecx, [ebp-58h]
.text:00361633                 movups  xmm0, xmmword ptr [ecx]
.text:00361636                 lea     ecx, [esi+18h]
.text:00361636
.text:00361639
.text:00361639 loc_361639:                             ; CODE XREF: sub_360480+1199↑j
.text:00361639                 mov     edx, [ebp-50h]
.text:0036163C                 movups  xmmword ptr [eax], xmm0
.text:0036163C
.text:0036163F
.text:0036163F loc_36163F:                             ; CODE XREF: sub_360480+1149↑j
.text:0036163F                 inc     edx
.text:00361640                 add     edi, 10h
.text:00361643                 sub     dword ptr [ebp-4Ch], 1
.text:00361647                 mov     [ebp-50h], edx
.text:0036164A                 jnz     loc_3615B5
.text:0036164A
.text:00361650                 mov     al, [esi+1]
.text:00361653                 mov     edi, [ebp-34h]
.text:00361656                 mov     [ebp-1], al
.text:00361659                 cmp     edi, 0FFFFFFFh
.text:0036165F                 ja      loc_376089
.text:0036165F
.text:00361665                 mov     eax, [ecx]
.text:00361667                 sub     eax, ecx
.text:00361669                 mov     ecx, [ebp-54h]
.text:0036166C                 mov     [ebp-2Ch], eax
.text:0036166F                 mov     eax, [ebp-24h]
.text:00361672                 shl     eax, 4
.text:00361675                 mov     [ebp-50h], eax
.text:00361678                 mov     eax, [ebp-64h]
.text:0036167B                 mov     edx, [eax]
.text:0036167D                 sub     edx, eax
.text:0036167F                 lea     eax, [ecx-1]
.text:00361682                 mov     [ebp-4Ch], edx
.text:00361685                 cmp     eax, 200h
.text:0036168A                 jnb     short loc_361698
.text:0036168A
.text:0036168C                 movsx   eax, byte_2AB8E08[ecx]
.text:00361693                 mov     [ebp-58h], eax
.text:00361696                 jmp     short loc_36169F
.text:00361696
.text:00361698 ; ---------------------------------------------------------------------------
.text:00361698
.text:00361698 loc_361698:                             ; CODE XREF: sub_360480+120A↑j
.text:00361698                 mov     dword ptr [ebp-58h], 0FFFFFFFFh
.text:00361698
.text:0036169F
.text:0036169F loc_36169F:                             ; CODE XREF: sub_360480+1216↑j
.text:0036169F                 mov     eax, [ebp-50h]
.text:003616A2                 dec     eax
.text:003616A3                 cmp     eax, 200h
.text:003616A8                 jnb     short loc_3616B6
.text:003616A8
.text:003616AA                 mov     eax, [ebp-50h]
.text:003616AD                 movsx   eax, byte_2AB8E08[eax]
.text:003616B4                 jmp     short loc_3616B9
.text:003616B4
.text:003616B6 ; ---------------------------------------------------------------------------
.text:003616B6
.text:003616B6 loc_3616B6:                             ; CODE XREF: sub_360480+1228↑j
.text:003616B6                 or      eax, 0FFFFFFFFh
.text:003616B6
.text:003616B9
.text:003616B9 loc_3616B9:                             ; CODE XREF: sub_360480+1234↑j
.text:003616B9                 cmp     dword ptr [ebp-58h], 0
.text:003616BD                 mov     [ebp-14h], eax
.text:003616C0                 jge     loc_3617BD
.text:003616C0
.text:003616C6                 test    eax, eax
.text:003616C8                 mov     eax, [edx+0Ch]
.text:003616CB                 push    ecx
.text:003616CC                 jns     loc_3617AA
.text:003616CC
.text:003616D2                 push    dword ptr [ebp-50h]
.text:003616D5                 mov     edi, [ebp-2Ch]
.text:003616D8                 push    edi
.text:003616D9                 push    dword ptr [edx+10h]
.text:003616DC                 call    eax
.text:003616DC
.text:003616DE                 mov     ecx, [ebp-54h]
.text:003616E1                 add     esp, 10h
.text:003616E4                 mov     [ebp-58h], eax
.text:003616E7                 test    eax, eax
.text:003616E9                 jnz     short loc_3616F3
.text:003616E9
.text:003616EB                 test    ecx, ecx
.text:003616ED                 jnz     loc_3760A9
.text:003616ED
.text:003616F3
.text:003616F3 loc_3616F3:                             ; CODE XREF: sub_360480+1269↑j
.text:003616F3                                         ; sub_360480+139C↓j
.text:003616F3                 mov     edi, [ebp-4Ch]
.text:003616F3
.text:003616F6
.text:003616F6 loc_3616F6:                             ; CODE XREF: sub_360480+13B6↓j
.text:003616F6                 mov     eax, ecx
.text:003616F8                 lea     edx, [esi+18h]
.text:003616FB                 sub     eax, [ebp-50h]
.text:003616FE                 add     [edi+38h], eax
.text:00361701                 movzx   eax, byte ptr [ebp-1]
.text:00361705                 sub     ecx, [ebp-50h]
.text:00361708                 add     [edi+eax*4+144h], ecx
.text:0036170F                 mov     eax, [ebp-58h]
.text:00361712                 add     eax, edx
.text:00361714                 mov     [edx], eax
.text:00361714
.text:00361716
.text:00361716 loc_361716:                             ; CODE XREF: sub_360480+1107↑j
.text:00361716                 mov     ecx, [ebp-44h]
.text:00361719                 mov     edx, 1
.text:0036171E                 shl     edx, cl
.text:00361720                 cmp     byte_2AB2004, 0
.text:00361727                 mov     [ebp-2Ch], edx
.text:0036172A                 lea     edi, [edx-1]
.text:0036172D                 jz      loc_36183B
.text:0036172D
.text:00361733                 test    edi, edi
.text:00361735                 js      loc_3618A8
.text:00361735
.text:0036173B                 mov     edx, [ebp-3Ch]
.text:0036173E                 mov     eax, edi
.text:00361740                 shl     eax, 5
.text:00361743                 add     edx, 10h
.text:00361746                 add     edx, eax
.text:00361748                 mov     [ebp-54h], edx
.text:0036174B                 nop     dword ptr [eax+eax+00h]
.text:0036174B
.text:00361750
.text:00361750 loc_361750:                             ; CODE XREF: sub_360480+1323↓j
.text:00361750                 cmp     dword ptr [edx-4], 0
.text:00361754                 jz      short loc_36179A
.text:00361754
.text:00361756                 mov     eax, [edx]
.text:00361758                 mov     ecx, [edx+4]
.text:0036175B                 mov     [ebp-300h], eax
.text:00361761                 mov     [ebp-2FCh], ecx
.text:00361767                 mov     eax, [edx+8]
.text:0036176A                 mov     ecx, [ebp-74h]
.text:0036176D                 mov     [ebp-2F8h], eax
.text:00361773                 mov     eax, [edx+0Ch]
.text:00361776                 mov     edx, esi
.text:00361778                 and     eax, 0Fh
.text:0036177B                 mov     [ebp-2F4h], eax
.text:00361781                 lea     eax, [ebp-300h]
.text:00361787                 push    eax
.text:00361788                 call    sub_13B40E0
.text:00361788
.text:0036178D                 mov     edx, [ebp-54h]
.text:00361790                 add     esp, 4
.text:00361793                 movups  xmm0, xmmword ptr [edx-10h]
.text:00361797                 movups  xmmword ptr [eax], xmm0
.text:00361797
.text:0036179A
.text:0036179A loc_36179A:                             ; CODE XREF: sub_360480+12D4↑j
.text:0036179A                 sub     edx, 20h ; ' '
.text:0036179D                 sub     edi, 1
.text:003617A0                 mov     [ebp-54h], edx
.text:003617A3                 jns     short loc_361750
.text:003617A3
.text:003617A5                 jmp     loc_3618A5
.text:003617A5
.text:003617AA ; ---------------------------------------------------------------------------
.text:003617AA
.text:003617AA loc_3617AA:                             ; CODE XREF: sub_360480+124C↑j
.text:003617AA                 push    0
.text:003617AC                 push    0
.text:003617AE                 push    dword ptr [edx+10h]
.text:003617B1                 call    eax
.text:003617B1
.text:003617B3                 mov     edx, eax
.text:003617B5                 add     esp, 10h
.text:003617B8                 mov     [ebp-58h], edx
.text:003617BB                 jmp     short loc_3617CD
.text:003617BB
.text:003617BD ; ---------------------------------------------------------------------------
.text:003617BD
.text:003617BD loc_3617BD:                             ; CODE XREF: sub_360480+1240↑j
.text:003617BD                 mov     edx, [ebp-58h]
.text:003617C0                 mov     ecx, [ebp-74h]
.text:003617C3                 call    sub_13C08C0
.text:003617C3
.text:003617C8                 mov     edx, eax
.text:003617CA                 mov     [ebp-58h], eax
.text:003617CA
.text:003617CD
.text:003617CD loc_3617CD:                             ; CODE XREF: sub_360480+133B↑j
.text:003617CD                 mov     eax, [ebp-54h]
.text:003617D0                 test    edx, edx
.text:003617D2                 jnz     short loc_3617DC
.text:003617D2
.text:003617D4                 test    eax, eax
.text:003617D6                 jnz     loc_3760A9
.text:003617D6
.text:003617DC
.text:003617DC loc_3617DC:                             ; CODE XREF: sub_360480+1352↑j
.text:003617DC                 mov     ecx, [ebp-50h]
.text:003617DF                 test    ecx, ecx
.text:003617E1                 jz      short loc_361803
.text:003617E1
.text:003617E3                 test    eax, eax
.text:003617E5                 jz      short loc_361803
.text:003617E5
.text:003617E7                 cmp     ecx, eax
.text:003617E9                 cmovb   edi, [ebp-24h]
.text:003617ED                 shl     edi, 4
.text:003617F0                 push    edi
.text:003617F1                 mov     edi, [ebp-2Ch]
.text:003617F4                 push    edi
.text:003617F5                 push    edx
.text:003617F6                 call    sub_1B7EE40
.text:003617F6
.text:003617FB                 mov     ecx, [ebp-50h]
.text:003617FE                 add     esp, 0Ch
.text:00361801                 jmp     short loc_361806
.text:00361801
.text:00361803 ; ---------------------------------------------------------------------------
.text:00361803
.text:00361803 loc_361803:                             ; CODE XREF: sub_360480+1361↑j
.text:00361803                                         ; sub_360480+1365↑j
.text:00361803                 mov     edi, [ebp-2Ch]
.text:00361803
.text:00361806
.text:00361806 loc_361806:                             ; CODE XREF: sub_360480+1381↑j
.text:00361806                 mov     edx, [ebp-14h]
.text:00361809                 test    edx, edx
.text:0036180B                 js      short loc_361821
.text:0036180B
.text:0036180D                 mov     ecx, [ebp-74h]
.text:00361810                 push    edi
.text:00361811                 call    sub_13C0A60
.text:00361811
.text:00361816                 mov     ecx, [ebp-54h]
.text:00361819                 add     esp, 4
.text:0036181C                 jmp     loc_3616F3
.text:0036181C
.text:00361821 ; ---------------------------------------------------------------------------
.text:00361821
.text:00361821 loc_361821:                             ; CODE XREF: sub_360480+138B↑j
.text:00361821                 push    0
.text:00361823                 push    ecx
.text:00361824                 push    edi
.text:00361825                 mov     edi, [ebp-4Ch]
.text:00361828                 push    dword ptr [edi+10h]
.text:0036182B                 mov     eax, [edi+0Ch]
.text:0036182E                 call    eax
.text:0036182E
.text:00361830                 mov     ecx, [ebp-54h]
.text:00361833                 add     esp, 10h
.text:00361836                 jmp     loc_3616F6
.text:00361836
.text:0036183B ; ---------------------------------------------------------------------------
.text:0036183B
.text:0036183B loc_36183B:                             ; CODE XREF: sub_360480+12AD↑j
.text:0036183B                 test    edi, edi
.text:0036183D                 js      short loc_3618A8
.text:0036183D
.text:0036183F                 mov     edx, [ebp-3Ch]
.text:00361842                 mov     eax, edi
.text:00361844                 shl     eax, 5
.text:00361847                 add     edx, 10h
.text:0036184A                 add     edx, eax
.text:0036184C                 mov     [ebp-54h], edx
.text:0036184F                 nop
.text:0036184F
.text:00361850
.text:00361850 loc_361850:                             ; CODE XREF: sub_360480+1423↓j
.text:00361850                 cmp     dword ptr [edx-4], 0
.text:00361854                 jz      short loc_36189A
.text:00361854
.text:00361856                 mov     eax, [edx]
.text:00361858                 mov     ecx, [edx+4]
.text:0036185B                 mov     [ebp-310h], eax
.text:00361861                 mov     [ebp-30Ch], ecx
.text:00361867                 mov     eax, [edx+8]
.text:0036186A                 mov     ecx, [ebp-74h]
.text:0036186D                 mov     [ebp-308h], eax
.text:00361873                 mov     eax, [edx+0Ch]
.text:00361876                 mov     edx, esi
.text:00361878                 and     eax, 0Fh
.text:0036187B                 mov     [ebp-304h], eax
.text:00361881                 lea     eax, [ebp-310h]
.text:00361887                 push    eax
.text:00361888                 call    sub_13BA4F0
.text:00361888
.text:0036188D                 mov     edx, [ebp-54h]
.text:00361890                 add     esp, 4
.text:00361893                 movups  xmm0, xmmword ptr [edx-10h]
.text:00361897                 movups  xmmword ptr [eax], xmm0
.text:00361897
.text:0036189A
.text:0036189A loc_36189A:                             ; CODE XREF: sub_360480+13D4↑j
.text:0036189A                 sub     edx, 20h ; ' '
.text:0036189D                 sub     edi, 1
.text:003618A0                 mov     [ebp-54h], edx
.text:003618A3                 jns     short loc_361850
.text:003618A3
.text:003618A5
.text:003618A5 loc_3618A5:                             ; CODE XREF: sub_360480+1325↑j
.text:003618A5                 mov     edx, [ebp-2Ch]
.text:003618A5
.text:003618A8
.text:003618A8 loc_3618A8:                             ; CODE XREF: sub_360480+12B5↑j
.text:003618A8                                         ; sub_360480+13BD↑j
.text:003618A8                 mov     ecx, [ebp-3Ch]
.text:003618AB                 cmp     ecx, offset dword_1EA0808
.text:003618B1                 jz      short loc_3618C9
.text:003618B1
.text:003618B3                 movzx   eax, byte ptr [esi+1]
.text:003618B7                 shl     edx, 5
.text:003618BA                 push    eax
.text:003618BB                 push    edx
.text:003618BC                 mov     edx, ecx
.text:003618BE                 mov     ecx, [ebp-74h]
.text:003618C1                 call    sub_13C0AF0
.text:003618C1
.text:003618C6                 add     esp, 8
.text:003618C6
.text:003618C9
.text:003618C9 loc_3618C9:                             ; CODE XREF: sub_360480+1431↑j
.text:003618C9                 push    dword ptr [ebp-8]
.text:003618CC                 mov     ecx, [ebp-74h]
.text:003618CF                 mov     edx, esi
.text:003618CF
.text:003618D1
.text:003618D1 loc_3618D1:                             ; CODE XREF: sub_360480+1DF9↓j
.text:003618D1                 call    sub_13B40E0
.text:003618D1
.text:003618D6                 mov     edi, eax
.text:003618D8                 jmp     loc_3624F9
.text:003618D8
.text:003618DD ; ---------------------------------------------------------------------------
.text:003618DD
.text:003618DD loc_3618DD:                             ; CODE XREF: sub_360480+BDB↑j
.text:003618DD                                         ; sub_360480+BE5↑j ...
.text:003618DD                 mov     eax, [ecx-14h]
.text:003618E0                 dec     eax             ; switch 5 cases
.text:003618E1                 cmp     eax, 4
.text:003618E4                 ja      def_3618EA      ; jumptable 003618EA default case, case 2
.text:003618E4
.text:003618EA                 jmp     ds:jpt_3618EA[eax*4] ; switch jump
.text:003618EA
.text:003618F1 ; ---------------------------------------------------------------------------
.text:003618F1
.text:003618F1 loc_3618F1:                             ; CODE XREF: sub_360480+146A↑j
.text:003618F1                                         ; DATA XREF: .text:jpt_3618EA↓o
.text:003618F1                 movsd   xmm1, qword ptr [edi] ; jumptable 003618EA case 4
.text:003618F5                 xorps   xmm1, xmm2
.text:003618F8                 movsd   qword ptr [ebp-20h], xmm1
.text:003618FD                 mov     ecx, [ebp-1Ch]
.text:00361900                 and     ecx, 7FFFFFFFh
.text:00361906                 mov     eax, ecx
.text:00361908                 shr     eax, 12h
.text:0036190B                 xor     eax, [ebp-20h]
.text:0036190E                 imul    edx, eax, 5BD1E995h
.text:00361914                 mov     eax, edx
.text:00361916                 shr     eax, 16h
.text:00361919                 xor     eax, ecx
.text:0036191B                 imul    ecx, eax, 5BD1E995h
.text:00361921                 mov     eax, ecx
.text:00361923                 shr     eax, 11h
.text:00361926                 xor     eax, edx
.text:00361928                 imul    eax, 5BD1E995h
.text:0036192E                 shr     eax, 13h
.text:00361931                 xor     eax, ecx
.text:00361933                 imul    edi, eax, 5BD1E995h
.text:00361933
.text:00361939
.text:00361939 loc_361939:                             ; CODE XREF: sub_360480+154E↓j
.text:00361939                 mov     cl, [esi+5]
.text:0036193C                 mov     eax, 1
.text:00361941                 shl     eax, cl
.text:00361943                 dec     eax
.text:00361944                 and     edi, eax
.text:00361946                 lea     eax, [esi+14h]
.text:00361949                 shl     edi, 5
.text:0036194C                 sub     edi, eax
.text:0036194E                 add     edi, [eax]
.text:00361950                 jmp     loc_361A31
.text:00361950
.text:00361955 ; ---------------------------------------------------------------------------
.text:00361955
.text:00361955 loc_361955:                             ; CODE XREF: sub_360480+146A↑j
.text:00361955                                         ; DATA XREF: .text:jpt_3618EA↓o
.text:00361955                 movq    xmm0, qword ptr [edi] ; jumptable 003618EA case 3
.text:00361959                 xor     eax, eax
.text:0036195B                 mov     esi, [edi+8]
.text:0036195E                 movq    qword ptr [ebp-1ECh], xmm0
.text:00361966                 mov     ecx, [ebp-1ECh]
.text:0036196C                 cmp     ecx, 8000000h
.text:00361972                 cmovz   ecx, eax
.text:00361975                 mov     eax, [ebp-1E8h]
.text:0036197B                 xor     edx, edx
.text:0036197D                 cmp     eax, 8000000h
.text:00361982                 cmovz   eax, edx
.text:00361985                 cmp     esi, 8000000h
.text:0036198B                 cmovz   esi, edx
.text:0036198E                 mov     edx, ecx
.text:00361990                 shr     edx, 11h
.text:00361993                 xor     edx, ecx
.text:00361995                 mov     ecx, eax
.text:00361997                 shr     ecx, 11h
.text:0036199A                 xor     ecx, eax
.text:0036199C                 mov     [ebp-1ECh], edx
.text:003619A2                 mov     eax, esi
.text:003619A4                 imul    edi, ecx, 127409Fh
.text:003619AA                 shr     eax, 11h
.text:003619AD                 xor     eax, esi
.text:003619AF                 mov     [ebp-1E8h], ecx
.text:003619B5                 mov     esi, [ebp-5Ch]
.text:003619B8                 mov     [ebp-1E4h], eax
.text:003619BE                 imul    eax, 4F9FFB7h
.text:003619C4                 xor     edi, eax
.text:003619C6                 imul    eax, edx, 466F45Dh
.text:003619CC                 xor     edi, eax
.text:003619CE                 jmp     loc_361939
.text:003619CE
.text:003619D3 ; ---------------------------------------------------------------------------
.text:003619D3
.text:003619D3 loc_3619D3:                             ; CODE XREF: sub_360480+146A↑j
.text:003619D3                                         ; DATA XREF: .text:jpt_3618EA↓o
.text:003619D3                 mov     eax, [edi]      ; jumptable 003618EA case 5
.text:003619D5                 mov     edi, 1
.text:003619DA                 mov     cl, [esi+5]
.text:003619DD                 add     eax, 0Ch
.text:003619E0                 shl     edi, cl
.text:003619E2                 dec     edi
.text:003619E3                 sub     eax, [eax]
.text:003619E5                 jmp     short loc_361A25
.text:003619E5
.text:003619E7 ; ---------------------------------------------------------------------------
.text:003619E7
.text:003619E7 loc_3619E7:                             ; CODE XREF: sub_360480+146A↑j
.text:003619E7                                         ; DATA XREF: .text:jpt_3618EA↓o
.text:003619E7                 mov     cl, [esi+5]     ; jumptable 003618EA case 1
.text:003619EA                 mov     edi, 1
.text:003619EF                 mov     eax, [ebp-8]
.text:003619F2                 shl     edi, cl
.text:003619F4                 dec     edi
.text:003619F5                 and     edi, [eax]
.text:003619F7                 jmp     short loc_361A27
.text:003619F7
.text:003619F9 ; ---------------------------------------------------------------------------
.text:003619F9
.text:003619F9 def_3618EA:                             ; CODE XREF: sub_360480+1464↑j
.text:003619F9                                         ; sub_360480+146A↑j
.text:003619F9                                         ; DATA XREF: ...
.text:003619F9                 mov     ecx, [edi]      ; jumptable 003618EA default case, case 2
.text:003619FB                 shr     ecx, 10h
.text:003619FE                 xor     ecx, [edi]
.text:00361A00                 imul    ecx, 85EBCA6Bh
.text:00361A06                 mov     eax, ecx
.text:00361A08                 shr     eax, 0Dh
.text:00361A0B                 xor     eax, ecx
.text:00361A0D                 mov     cl, [esi+5]
.text:00361A10                 imul    eax, 0C2B2AE35h
.text:00361A16                 mov     edi, eax
.text:00361A18                 shr     edi, 10h
.text:00361A1B                 xor     edi, eax
.text:00361A1D                 mov     eax, 1
.text:00361A22                 shl     eax, cl
.text:00361A24                 dec     eax
.text:00361A24
.text:00361A25
.text:00361A25 loc_361A25:                             ; CODE XREF: sub_360480+1565↑j
.text:00361A25                 and     edi, eax
.text:00361A25
.text:00361A27
.text:00361A27 loc_361A27:                             ; CODE XREF: sub_360480+1577↑j
.text:00361A27                 lea     edx, [esi+14h]
.text:00361A2A                 shl     edi, 5
.text:00361A2D                 sub     edi, edx
.text:00361A2F                 add     edi, [edx]
.text:00361A2F
.text:00361A31
.text:00361A31 loc_361A31:                             ; CODE XREF: sub_360480+14D0↑j
.text:00361A31                 cmp     dword ptr [edi+0Ch], 0
.text:00361A35                 jnz     short loc_361A43
.text:00361A35
.text:00361A37                 cmp     edi, offset dword_1EA0808
.text:00361A3D                 jnz     loc_3624B7
.text:00361A3D
.text:00361A43
.text:00361A43 loc_361A43:                             ; CODE XREF: sub_360480+15B5↑j
.text:00361A43                 mov     ecx, esi
.text:00361A45                 call    sub_13B8380
.text:00361A45
.text:00361A4A                 mov     [ebp-2Ch], eax
.text:00361A4D                 test    eax, eax
.text:00361A4F                 jnz     loc_36228B
.text:00361A4F
.text:00361A55                 xorps   xmm0, xmm0
.text:00361A58                 mov     [ebp-8D8h], eax
.text:00361A5E                 lea     edx, [ebp-940h]
.text:00361A64                 movaps  xmmword ptr [ebp-940h], xmm0
.text:00361A6B                 mov     ecx, esi
.text:00361A6D                 movaps  xmmword ptr [ebp-930h], xmm0
.text:00361A74                 movaps  xmmword ptr [ebp-920h], xmm0
.text:00361A7B                 movaps  xmmword ptr [ebp-910h], xmm0
.text:00361A82                 movaps  xmmword ptr [ebp-900h], xmm0
.text:00361A89                 movaps  xmmword ptr [ebp-8F0h], xmm0
.text:00361A90                 movq    qword ptr [ebp-8E0h], xmm0
.text:00361A98                 call    sub_13B3F30
.text:00361A98
.text:00361A9D                 mov     edi, eax
.text:00361A9F                 lea     edx, [ebp-940h]
.text:00361AA5                 lea     eax, [ebp-6Ch]
.text:00361AA8                 mov     [ebp-6Ch], edi
.text:00361AAB                 push    eax
.text:00361AAC                 mov     ecx, esi
.text:00361AAE                 call    sub_13B3FF0
.text:00361AAE
.text:00361AB3                 add     edi, eax
.text:00361AB5                 add     esp, 4
.text:00361AB8                 mov     eax, [ebp-30h]
.text:00361ABB                 cmp     dword ptr [eax-14h], 4
.text:00361ABF                 jnz     short loc_361ADD
.text:00361ABF
.text:00361AC1                 mov     eax, [ebp-8]
.text:00361AC4                 lea     ecx, [ebp-940h]
.text:00361ACA                 movsd   xmm1, qword ptr [eax]
.text:00361ACE                 xorps   xmm1, xmmword_2C87C80
.text:00361AD5                 call    sub_13B3EE0
.text:00361AD5
.text:00361ADA                 add     [ebp-6Ch], eax
.text:00361ADA
.text:00361ADD
.text:00361ADD loc_361ADD:                             ; CODE XREF: sub_360480+163F↑j
.text:00361ADD                 inc     edi
.text:00361ADE                 lea     edx, [ebp-6Ch]
.text:00361AE1                 lea     ecx, [ebp-940h]
.text:00361AE7                 mov     [ebp-2Ch], edi
.text:00361AEA                 call    sub_13B3E70
.text:00361AEA
.text:00361AEF                 cmp     byte_2AB209C, 0
.text:00361AF6                 lea     edx, [esi+14h]
.text:00361AF9                 mov     edi, [ebp-6Ch]
.text:00361AFC                 mov     [ebp-54h], eax
.text:00361AFF                 mov     [ebp-50h], edi
.text:00361B02                 jz      loc_361C6B
.text:00361B02
.text:00361B08                 mov     ecx, [edx]
.text:00361B0A                 sub     ecx, edx
.text:00361B0C                 cmp     ecx, offset dword_1EA0808
.text:00361B12                 jnz     short loc_361B1D
.text:00361B12
.text:00361B14                 mov     byte ptr [ebp-1], 0
.text:00361B18                 cmp     edi, [esi+8]
.text:00361B1B                 jge     short loc_361B21
.text:00361B1B
.text:00361B1D
.text:00361B1D loc_361B1D:                             ; CODE XREF: sub_360480+1692↑j
.text:00361B1D                 mov     byte ptr [ebp-1], 1
.text:00361B1D
.text:00361B21
.text:00361B21 loc_361B21:                             ; CODE XREF: sub_360480+169B↑j
.text:00361B21                 mov     ecx, [ebp-30h]
.text:00361B24                 movaps  xmm3, xmmword_2C87C80
.text:00361B2B                 cmp     dword ptr [ecx-14h], 4
.text:00361B2F                 jnz     short loc_361B57
.text:00361B2F
.text:00361B31                 mov     eax, [ebp-8]
.text:00361B34                 movsd   xmm1, qword ptr [eax]
.text:00361B38                 xorps   xmm1, xmm3
.text:00361B3B                 cvttsd2si ecx, xmm1
.text:00361B3F                 mov     [ebp-4Ch], ecx
.text:00361B42                 movd    xmm0, ecx
.text:00361B46                 cvtdq2pd xmm0, xmm0
.text:00361B4A                 ucomisd xmm0, xmm1
.text:00361B4E                 lahf
.text:00361B4F                 test    ah, 44h
.text:00361B52                 mov     eax, [ebp-54h]
.text:00361B55                 jnp     short loc_361B60
.text:00361B55
.text:00361B57
.text:00361B57 loc_361B57:                             ; CODE XREF: sub_360480+16AF↑j
.text:00361B57                 mov     dword ptr [ebp-4Ch], 0FFFFFFFFh
.text:00361B5E                 xchg    ax, ax
.text:00361B5E
.text:00361B60
.text:00361B60 loc_361B60:                             ; CODE XREF: sub_360480+16D5↑j
.text:00361B60                                         ; sub_360480+17E6↓j
.text:00361B60                 lea     ecx, [edi+1]
.text:00361B63                 mov     [ebp-58h], ecx
.text:00361B66                 cmp     ecx, [ebp-4Ch]
.text:00361B69                 jz      loc_361C5A
.text:00361B69
.text:00361B6F                 cmp     byte ptr [ebp-1], 0
.text:00361B73                 jz      loc_361C6B
.text:00361B73
.text:00361B79                 lea     eax, [ecx-1]
.text:00361B7C                 cmp     eax, [esi+8]
.text:00361B7F                 jnb     short loc_361B99
.text:00361B7F
.text:00361B81                 mov     edx, [esi+18h]
.text:00361B84                 lea     eax, [esi+18h]
.text:00361B87                 shl     ecx, 4
.text:00361B8A                 sub     ecx, eax
.text:00361B8C                 add     ecx, 0FFFFFFF0h
.text:00361B8F                 add     edx, ecx
.text:00361B8F
.text:00361B91
.text:00361B91 loc_361B91:                             ; CODE XREF: sub_360480+17B2↓j
.text:00361B91                 mov     ecx, [ebp-58h]
.text:00361B94                 jmp     loc_361C4E
.text:00361B94
.text:00361B99 ; ---------------------------------------------------------------------------
.text:00361B99
.text:00361B99 loc_361B99:                             ; CODE XREF: sub_360480+16FF↑j
.text:00361B99                 mov     eax, [edx]
.text:00361B9B                 mov     [ebp-14h], eax
.text:00361B9E                 sub     eax, edx
.text:00361BA0                 cmp     eax, offset dword_1EA0808
.text:00361BA5                 jz      loc_361C49
.text:00361BA5
.text:00361BAB                 movd    xmm2, ecx
.text:00361BAF                 cvtdq2pd xmm2, xmm2
.text:00361BB3                 movsd   qword ptr [ebp-0D8h], xmm2
.text:00361BBB                 mov     ecx, [ebp-0D4h]
.text:00361BC1                 and     ecx, 7FFFFFFFh
.text:00361BC7                 mov     eax, ecx
.text:00361BC9                 shr     eax, 12h
.text:00361BCC                 xor     eax, [ebp-0D8h]
.text:00361BD2                 imul    edx, eax, 5BD1E995h
.text:00361BD8                 mov     eax, edx
.text:00361BDA                 shr     eax, 16h
.text:00361BDD                 xor     eax, ecx
.text:00361BDF                 imul    ecx, eax, 5BD1E995h
.text:00361BE5                 mov     eax, ecx
.text:00361BE7                 shr     eax, 11h
.text:00361BEA                 xor     eax, edx
.text:00361BEC                 imul    eax, 5BD1E995h
.text:00361BF2                 shr     eax, 13h
.text:00361BF5                 xor     eax, ecx
.text:00361BF7                 mov     cl, [esi+5]
.text:00361BFA                 imul    edx, eax, 5BD1E995h
.text:00361C00                 mov     eax, 1
.text:00361C05                 shl     eax, cl
.text:00361C07                 dec     eax
.text:00361C08                 and     edx, eax
.text:00361C0A                 mov     eax, [ebp-14h]
.text:00361C0D                 shl     edx, 5
.text:00361C10                 add     eax, 0FFFFFFECh
.text:00361C13                 sub     edx, esi
.text:00361C15                 add     edx, eax
.text:00361C15
.text:00361C17
.text:00361C17 loc_361C17:                             ; CODE XREF: sub_360480+17C4↓j
.text:00361C17                 mov     ecx, [edx+1Ch]
.text:00361C1A                 mov     eax, ecx
.text:00361C1C                 and     al, 0Fh
.text:00361C1E                 cmp     al, 4
.text:00361C20                 jnz     short loc_361C38
.text:00361C20
.text:00361C22                 movsd   xmm1, qword ptr [edx+10h]
.text:00361C27                 xorps   xmm1, xmm3
.text:00361C2A                 ucomisd xmm1, xmm2
.text:00361C2E                 lahf
.text:00361C2F                 test    ah, 44h
.text:00361C32                 jnp     loc_361B91
.text:00361C32
.text:00361C38
.text:00361C38 loc_361C38:                             ; CODE XREF: sub_360480+17A0↑j
.text:00361C38                 sar     ecx, 4
.text:00361C3B                 test    ecx, ecx
.text:00361C3D                 jz      short loc_361C46
.text:00361C3D
.text:00361C3F                 shl     ecx, 5
.text:00361C42                 add     edx, ecx
.text:00361C44                 jmp     short loc_361C17
.text:00361C44
.text:00361C46 ; ---------------------------------------------------------------------------
.text:00361C46
.text:00361C46 loc_361C46:                             ; CODE XREF: sub_360480+17BD↑j
.text:00361C46                 mov     ecx, [ebp-58h]
.text:00361C46
.text:00361C49
.text:00361C49 loc_361C49:                             ; CODE XREF: sub_360480+1725↑j
.text:00361C49                 mov     edx, offset luao_nilobject
.text:00361C49
.text:00361C4E
.text:00361C4E loc_361C4E:                             ; CODE XREF: sub_360480+1714↑j
.text:00361C4E                 cmp     dword ptr [edx+0Ch], 0
.text:00361C52                 lea     edx, [esi+14h]
.text:00361C55                 jz      short loc_361C6B
.text:00361C55
.text:00361C57                 mov     eax, [ebp-54h]
.text:00361C57
.text:00361C5A
.text:00361C5A loc_361C5A:                             ; CODE XREF: sub_360480+16E9↑j
.text:00361C5A                 mov     edi, ecx
.text:00361C5C                 inc     eax
.text:00361C5D                 mov     [ebp-50h], edi
.text:00361C60                 mov     [ebp-6Ch], edi
.text:00361C63                 mov     [ebp-54h], eax
.text:00361C66                 jmp     loc_361B60
.text:00361C66
.text:00361C6B ; ---------------------------------------------------------------------------
.text:00361C6B
.text:00361C6B loc_361C6B:                             ; CODE XREF: sub_360480+1682↑j
.text:00361C6B                                         ; sub_360480+16F3↑j ...
.text:00361C6B                 mov     eax, [ebp-2Ch]
.text:00361C6E                 sub     eax, [ebp-54h]
.text:00361C71                 mov     [ebp-2Ch], eax
.text:00361C74                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:00361C7A                 jg      loc_3760E6
.text:00361C7A
.text:00361C80                 cmp     eax, (offset dword_3FFF948+6B8h)
.text:00361C85                 jg      loc_3760E6
.text:00361C85
.text:00361C8B                 mov     ecx, [esi+8]
.text:00361C8E                 mov     [ebp-54h], ecx
.text:00361C91                 movzx   ecx, byte ptr [esi+5]
.text:00361C95                 mov     esi, [edx]
.text:00361C97                 sub     esi, edx
.text:00361C99                 mov     [ebp-4Ch], ecx
.text:00361C9C                 mov     [ebp-58h], esi
.text:00361C9F                 mov     esi, [ebp-5Ch]
.text:00361CA2                 cmp     edi, [ebp-54h]
.text:00361CA5                 jle     loc_361E27
.text:00361CA5
.text:00361CAB                 mov     al, [esi+1]
.text:00361CAE                 mov     [ebp-1], al
.text:00361CB1                 cmp     edi, 0FFFFFFFh
.text:00361CB7                 ja      loc_376089
.text:00361CB7
.text:00361CBD                 mov     eax, [ebp-54h]
.text:00361CC0                 lea     edx, [esi+18h]
.text:00361CC3                 shl     eax, 4
.text:00361CC6                 mov     ecx, edi
.text:00361CC8                 mov     [ebp-24h], eax
.text:00361CCB                 mov     eax, [edx]
.text:00361CCD                 sub     eax, edx
.text:00361CCF                 shl     ecx, 4
.text:00361CD2                 mov     [ebp-44h], eax
.text:00361CD5                 mov     eax, [ebp-64h]
.text:00361CD8                 mov     [ebp-14h], ecx
.text:00361CDB                 mov     edx, [eax]
.text:00361CDD                 sub     edx, eax
.text:00361CDF                 lea     eax, [ecx-1]
.text:00361CE2                 mov     [ebp-34h], edx
.text:00361CE5                 cmp     eax, 200h
.text:00361CEA                 jnb     short loc_361CF8
.text:00361CEA
.text:00361CEC                 movsx   eax, byte_2AB8E08[ecx]
.text:00361CF3                 mov     [ebp-3Ch], eax
.text:00361CF6                 jmp     short loc_361CFF
.text:00361CF6
.text:00361CF8 ; ---------------------------------------------------------------------------
.text:00361CF8
.text:00361CF8 loc_361CF8:                             ; CODE XREF: sub_360480+186A↑j
.text:00361CF8                 mov     dword ptr [ebp-3Ch], 0FFFFFFFFh
.text:00361CF8
.text:00361CFF
.text:00361CFF loc_361CFF:                             ; CODE XREF: sub_360480+1876↑j
.text:00361CFF                 mov     eax, [ebp-24h]
.text:00361D02                 dec     eax
.text:00361D03                 cmp     eax, 200h
.text:00361D08                 jnb     short loc_361D16
.text:00361D08
.text:00361D0A                 mov     eax, [ebp-24h]
.text:00361D0D                 movsx   eax, byte_2AB8E08[eax]
.text:00361D14                 jmp     short loc_361D19
.text:00361D14
.text:00361D16 ; ---------------------------------------------------------------------------
.text:00361D16
.text:00361D16 loc_361D16:                             ; CODE XREF: sub_360480+1888↑j
.text:00361D16                 or      eax, 0FFFFFFFFh
.text:00361D16
.text:00361D19
.text:00361D19 loc_361D19:                             ; CODE XREF: sub_360480+1894↑j
.text:00361D19                 cmp     dword ptr [ebp-3Ch], 0
.text:00361D1D                 mov     [ebp-60h], eax
.text:00361D20                 jge     short loc_361D61
.text:00361D20
.text:00361D22                 test    eax, eax
.text:00361D24                 mov     eax, [edx+0Ch]
.text:00361D27                 push    ecx
.text:00361D28                 jns     short loc_361D53
.text:00361D28
.text:00361D2A                 push    dword ptr [ebp-24h]
.text:00361D2D                 push    dword ptr [ebp-44h]
.text:00361D30                 push    dword ptr [edx+10h]
.text:00361D33                 call    eax
.text:00361D33
.text:00361D35                 mov     ecx, [ebp-14h]
.text:00361D38                 add     esp, 10h
.text:00361D3B                 mov     [ebp-3Ch], eax
.text:00361D3E                 test    eax, eax
.text:00361D40                 jnz     loc_361DD6
.text:00361D40
.text:00361D46                 test    ecx, ecx
.text:00361D48                 jnz     loc_3760A9
.text:00361D48
.text:00361D4E                 jmp     loc_361DD6
.text:00361D4E
.text:00361D53 ; ---------------------------------------------------------------------------
.text:00361D53
.text:00361D53 loc_361D53:                             ; CODE XREF: sub_360480+18A8↑j
.text:00361D53                 push    0
.text:00361D55                 push    0
.text:00361D57                 push    dword ptr [edx+10h]
.text:00361D5A                 call    eax
.text:00361D5A
.text:00361D5C                 add     esp, 10h
.text:00361D5F                 jmp     short loc_361D6C
.text:00361D5F
.text:00361D61 ; ---------------------------------------------------------------------------
.text:00361D61
.text:00361D61 loc_361D61:                             ; CODE XREF: sub_360480+18A0↑j
.text:00361D61                 mov     edx, [ebp-3Ch]
.text:00361D64                 mov     ecx, [ebp-74h]
.text:00361D67                 call    sub_13C08C0
.text:00361D67
.text:00361D6C
.text:00361D6C loc_361D6C:                             ; CODE XREF: sub_360480+18DF↑j
.text:00361D6C                 mov     ecx, [ebp-14h]
.text:00361D6F                 mov     [ebp-3Ch], eax
.text:00361D72                 test    eax, eax
.text:00361D74                 jnz     short loc_361D7E
.text:00361D74
.text:00361D76                 test    ecx, ecx
.text:00361D78                 jnz     loc_3760A9
.text:00361D78
.text:00361D7E
.text:00361D7E loc_361D7E:                             ; CODE XREF: sub_360480+18F4↑j
.text:00361D7E                 mov     edx, [ebp-24h]
.text:00361D81                 test    edx, edx
.text:00361D83                 jz      short loc_361DA6
.text:00361D83
.text:00361D85                 test    ecx, ecx
.text:00361D87                 jz      short loc_361DA6
.text:00361D87
.text:00361D89                 cmp     edx, ecx
.text:00361D8B                 mov     eax, edi
.text:00361D8D                 cmovb   eax, [ebp-54h]
.text:00361D91                 shl     eax, 4
.text:00361D94                 push    eax
.text:00361D95                 push    dword ptr [ebp-44h]
.text:00361D98                 push    dword ptr [ebp-3Ch]
.text:00361D9B                 call    sub_1B7EE40
.text:00361D9B
.text:00361DA0                 mov     edx, [ebp-24h]
.text:00361DA3                 add     esp, 0Ch
.text:00361DA3
.text:00361DA6
.text:00361DA6 loc_361DA6:                             ; CODE XREF: sub_360480+1903↑j
.text:00361DA6                                         ; sub_360480+1907↑j
.text:00361DA6                 mov     eax, [ebp-60h]
.text:00361DA9                 test    eax, eax
.text:00361DAB                 js      short loc_361DBF
.text:00361DAB
.text:00361DAD                 push    dword ptr [ebp-44h]
.text:00361DB0                 mov     ecx, [ebp-74h]
.text:00361DB3                 mov     edx, eax
.text:00361DB5                 call    sub_13C0A60
.text:00361DB5
.text:00361DBA                 add     esp, 4
.text:00361DBD                 jmp     short loc_361DD3
.text:00361DBD
.text:00361DBF ; ---------------------------------------------------------------------------
.text:00361DBF
.text:00361DBF loc_361DBF:                             ; CODE XREF: sub_360480+192B↑j
.text:00361DBF                 mov     eax, [ebp-34h]
.text:00361DC2                 push    0
.text:00361DC4                 push    edx
.text:00361DC5                 push    dword ptr [ebp-44h]
.text:00361DC8                 push    dword ptr [eax+10h]
.text:00361DCB                 mov     eax, [eax+0Ch]
.text:00361DCE                 call    eax
.text:00361DCE
.text:00361DD0                 add     esp, 10h
.text:00361DD0
.text:00361DD3
.text:00361DD3 loc_361DD3:                             ; CODE XREF: sub_360480+193D↑j
.text:00361DD3                 mov     ecx, [ebp-14h]
.text:00361DD3
.text:00361DD6
.text:00361DD6 loc_361DD6:                             ; CODE XREF: sub_360480+18C0↑j
.text:00361DD6                                         ; sub_360480+18CE↑j
.text:00361DD6                 mov     edx, [ebp-34h]
.text:00361DD9                 mov     eax, ecx
.text:00361DDB                 sub     eax, [ebp-24h]
.text:00361DDE                 sub     ecx, [ebp-24h]
.text:00361DE1                 add     [edx+38h], eax
.text:00361DE4                 movzx   eax, byte ptr [ebp-1]
.text:00361DE8                 add     [edx+eax*4+144h], ecx
.text:00361DEF                 lea     ecx, [esi+18h]
.text:00361DF2                 add     ecx, [ebp-3Ch]
.text:00361DF5                 mov     [esi+18h], ecx
.text:00361DF8                 sub     ecx, esi
.text:00361DFA                 mov     edx, [esi+8]
.text:00361DFD                 cmp     edx, edi
.text:00361DFF                 jge     short loc_361E1E
.text:00361DFF
.text:00361E01                 mov     eax, edx
.text:00361E03                 add     ecx, 0FFFFFFF4h
.text:00361E06                 shl     eax, 4
.text:00361E09                 add     eax, ecx
.text:00361E0B                 mov     ecx, edi
.text:00361E0D                 sub     ecx, edx
.text:00361E0F                 nop
.text:00361E0F
.text:00361E10
.text:00361E10 loc_361E10:                             ; CODE XREF: sub_360480+199C↓j
.text:00361E10                 mov     dword ptr [eax], 0
.text:00361E16                 lea     eax, [eax+10h]
.text:00361E19                 sub     ecx, 1
.text:00361E1C                 jnz     short loc_361E10
.text:00361E1C
.text:00361E1E
.text:00361E1E loc_361E1E:                             ; CODE XREF: sub_360480+197F↑j
.text:00361E1E                 mov     eax, [ebp-2Ch]
.text:00361E21                 lea     edx, [esi+14h]
.text:00361E24                 mov     [esi+8], edi
.text:00361E24
.text:00361E27
.text:00361E27 loc_361E27:                             ; CODE XREF: sub_360480+1825↑j
.text:00361E27                 test    eax, eax
.text:00361E29                 jnz     short loc_361E3A
.text:00361E29
.text:00361E2B                 lea     eax, dword_1EA0808[edx]
.text:00361E31                 xor     ecx, ecx
.text:00361E33                 mov     [edx], eax
.text:00361E35                 jmp     loc_361F23
.text:00361E35
.text:00361E3A ; ---------------------------------------------------------------------------
.text:00361E3A
.text:00361E3A loc_361E3A:                             ; CODE XREF: sub_360480+19A9↑j
.text:00361E3A                 dec     eax
.text:00361E3B                 or      ecx, 0FFFFFFFFh
.text:00361E3E                 cmp     eax, 100h
.text:00361E43                 jb      short loc_361E52
.text:00361E43
.text:00361E45
.text:00361E45 loc_361E45:                             ; CODE XREF: sub_360480+19D0↓j
.text:00361E45                 shr     eax, 8
.text:00361E48                 add     ecx, 8
.text:00361E4B                 cmp     eax, 100h
.text:00361E50                 jnb     short loc_361E45
.text:00361E50
.text:00361E52
.text:00361E52 loc_361E52:                             ; CODE XREF: sub_360480+19C3↑j
.text:00361E52                 movzx   eax, ds:byte_278DF30[eax]
.text:00361E59                 inc     eax
.text:00361E5A                 add     eax, ecx
.text:00361E5C                 mov     [ebp-14h], eax
.text:00361E5F                 cmp     eax, 1Ah
.text:00361E62                 jg      loc_3760CE
.text:00361E62
.text:00361E68                 mov     ecx, eax
.text:00361E6A                 mov     edx, 1
.text:00361E6F                 mov     al, [esi+1]
.text:00361E72                 shl     edx, cl
.text:00361E74                 mov     [ebp-2Ch], edx
.text:00361E77                 mov     [ebp-1], al
.text:00361E7A                 cmp     edx, 7FFFFFFh
.text:00361E80                 ja      loc_376089
.text:00361E80
.text:00361E86                 mov     eax, [ebp-64h]
.text:00361E89                 mov     ecx, edx
.text:00361E8B                 shl     ecx, 5
.text:00361E8E                 mov     [ebp-24h], ecx
.text:00361E91                 mov     edx, [eax]
.text:00361E93                 sub     edx, eax
.text:00361E95                 lea     eax, [ecx-1]
.text:00361E98                 mov     [ebp-44h], edx
.text:00361E9B                 cmp     eax, 200h
.text:00361EA0                 jnb     short loc_361EB9
.text:00361EA0
.text:00361EA2                 movsx   eax, byte_2AB8E08[ecx]
.text:00361EA9                 test    eax, eax
.text:00361EAB                 js      short loc_361EB9
.text:00361EAB
.text:00361EAD                 mov     ecx, [ebp-74h]
.text:00361EB0                 mov     edx, eax
.text:00361EB2                 call    sub_13C08C0
.text:00361EB2
.text:00361EB7                 jmp     short loc_361EC9
.text:00361EB7
.text:00361EB9 ; ---------------------------------------------------------------------------
.text:00361EB9
.text:00361EB9 loc_361EB9:                             ; CODE XREF: sub_360480+1A20↑j
.text:00361EB9                                         ; sub_360480+1A2B↑j
.text:00361EB9                 mov     eax, [edx+0Ch]
.text:00361EBC                 push    ecx
.text:00361EBD                 push    0
.text:00361EBF                 push    0
.text:00361EC1                 push    dword ptr [edx+10h]
.text:00361EC4                 call    eax
.text:00361EC4
.text:00361EC6                 add     esp, 10h
.text:00361EC6
.text:00361EC9
.text:00361EC9 loc_361EC9:                             ; CODE XREF: sub_360480+1A37↑j
.text:00361EC9                 mov     ecx, [ebp-24h]
.text:00361ECC                 mov     [ebp-34h], eax
.text:00361ECF                 test    eax, eax
.text:00361ED1                 jnz     short loc_361EDB
.text:00361ED1
.text:00361ED3                 test    ecx, ecx
.text:00361ED5                 jnz     loc_3760A9
.text:00361ED5
.text:00361EDB
.text:00361EDB loc_361EDB:                             ; CODE XREF: sub_360480+1A51↑j
.text:00361EDB                 mov     edx, [ebp-44h]
.text:00361EDE                 movzx   eax, byte ptr [ebp-1]
.text:00361EE2                 add     [edx+38h], ecx
.text:00361EE5                 add     [edx+eax*4+144h], ecx
.text:00361EEC                 lea     ecx, [esi+14h]
.text:00361EEF                 mov     eax, [ebp-34h]
.text:00361EF2                 add     eax, ecx
.text:00361EF4                 mov     [ecx], eax
.text:00361EF6                 mov     eax, [ebp-2Ch]
.text:00361EF9                 test    eax, eax
.text:00361EFB                 jle     short loc_361F20
.text:00361EFB
.text:00361EFD                 xor     edx, edx
.text:00361EFF                 mov     esi, eax
.text:00361EFF
.text:00361F01
.text:00361F01 loc_361F01:                             ; CODE XREF: sub_360480+1A9B↓j
.text:00361F01                 mov     eax, edx
.text:00361F03                 add     edx, 20h ; ' '
.text:00361F06                 sub     eax, ecx
.text:00361F08                 add     eax, [ecx]
.text:00361F0A                 mov     dword ptr [eax+1Ch], 0
.text:00361F11                 mov     dword ptr [eax+0Ch], 0
.text:00361F18                 sub     esi, 1
.text:00361F1B                 jnz     short loc_361F01
.text:00361F1B
.text:00361F1D                 mov     esi, [ebp-5Ch]
.text:00361F1D
.text:00361F20
.text:00361F20 loc_361F20:                             ; CODE XREF: sub_360480+1A7B↑j
.text:00361F20                 mov     ecx, [ebp-14h]
.text:00361F20
.text:00361F23
.text:00361F23 loc_361F23:                             ; CODE XREF: sub_360480+19B5↑j
.text:00361F23                 mov     al, 1
.text:00361F25                 mov     [esi+5], cl
.text:00361F28                 shl     al, cl
.text:00361F2A                 dec     al
.text:00361F2C                 mov     [esi+4], al
.text:00361F2F                 mov     eax, [ebp-2Ch]
.text:00361F32                 mov     [esi+0Ch], eax
.text:00361F35                 cmp     edi, [ebp-54h]
.text:00361F38                 jge     loc_3620BC
.text:00361F38
.text:00361F3E                 mov     eax, edi
.text:00361F40                 mov     [esi+8], edi
.text:00361F43                 shl     eax, 4
.text:00361F46                 lea     edx, [esi+18h]
.text:00361F49                 mov     ecx, eax
.text:00361F4B                 mov     [ebp-14h], eax
.text:00361F4E                 lea     eax, [edi+1]
.text:00361F51                 mov     [ebp-2Ch], edx
.text:00361F54                 mov     [ebp-44h], eax
.text:00361F57                 mov     eax, [ebp-54h]
.text:00361F5A                 sub     eax, edi
.text:00361F5C                 mov     [ebp-24h], ecx
.text:00361F5F                 mov     [ebp-34h], eax
.text:00361F5F
.text:00361F62
.text:00361F62 loc_361F62:                             ; CODE XREF: sub_360480+1B6F↓j
.text:00361F62                 mov     edi, [edx]
.text:00361F64                 mov     eax, edi
.text:00361F66                 sub     eax, edx
.text:00361F68                 cmp     dword ptr [eax+ecx+0Ch], 0
.text:00361F6D                 jz      short loc_361FE2
.text:00361F6D
.text:00361F6F                 cmp     byte_2AB2004, 0
.text:00361F76                 jz      short loc_361FC3
.text:00361F76
.text:00361F78                 movd    xmm0, dword ptr [ebp-44h]
.text:00361F7D                 lea     eax, [ebp-320h]
.text:00361F83                 cvtdq2pd xmm1, xmm0
.text:00361F87                 mov     esi, ecx
.text:00361F89                 mov     dword ptr [ebp-314h], 4
.text:00361F93                 mov     ecx, [ebp-74h]
.text:00361F96                 sub     esi, edx
.text:00361F98                 push    eax
.text:00361F99                 xorps   xmm1, xmmword_2C87C80
.text:00361FA0                 movsd   qword ptr [ebp-320h], xmm1
.text:00361FA8                 add     esi, [edx]
.text:00361FAA                 mov     edx, [ebp-5Ch]
.text:00361FAD                 call    sub_13B83C0
.text:00361FAD
.text:00361FB2                 movups  xmm0, xmmword ptr [esi]
.text:00361FB5                 mov     esi, [ebp-5Ch]
.text:00361FB8                 add     esp, 4
.text:00361FBB                 mov     ecx, [ebp-24h]
.text:00361FBE                 mov     edx, [ebp-2Ch]
.text:00361FC1                 jmp     short loc_361FDF
.text:00361FC1
.text:00361FC3 ; ---------------------------------------------------------------------------
.text:00361FC3
.text:00361FC3 loc_361FC3:                             ; CODE XREF: sub_360480+1AF6↑j
.text:00361FC3                 push    dword ptr [ebp-44h]
.text:00361FC6                 mov     ecx, [ebp-74h]
.text:00361FC9                 mov     edx, esi
.text:00361FCB                 call    sub_13BBE20
.text:00361FCB
.text:00361FD0                 mov     ecx, [ebp-24h]
.text:00361FD3                 lea     edx, [esi+18h]
.text:00361FD6                 add     esp, 4
.text:00361FD9                 sub     edi, edx
.text:00361FDB                 movups  xmm0, xmmword ptr [edi+ecx]
.text:00361FDB
.text:00361FDF
.text:00361FDF loc_361FDF:                             ; CODE XREF: sub_360480+1B41↑j
.text:00361FDF                 movups  xmmword ptr [eax], xmm0
.text:00361FDF
.text:00361FE2
.text:00361FE2 loc_361FE2:                             ; CODE XREF: sub_360480+1AED↑j
.text:00361FE2                 inc     dword ptr [ebp-44h]
.text:00361FE5                 add     ecx, 10h
.text:00361FE8                 sub     dword ptr [ebp-34h], 1
.text:00361FEC                 mov     [ebp-24h], ecx
.text:00361FEF                 jnz     loc_361F62
.text:00361FEF
.text:00361FF5                 mov     al, [esi+1]
.text:00361FF8                 mov     edi, [ebp-50h]
.text:00361FFB                 mov     [ebp-1], al
.text:00361FFE                 cmp     edi, 0FFFFFFFh
.text:00362004                 ja      loc_376089
.text:00362004
.text:0036200A                 mov     eax, [edx]
.text:0036200C                 mov     ecx, [ebp-14h]
.text:0036200F                 sub     eax, edx
.text:00362011                 mov     [ebp-2Ch], eax
.text:00362014                 mov     eax, [ebp-54h]
.text:00362017                 shl     eax, 4
.text:0036201A                 mov     [ebp-50h], eax
.text:0036201D                 mov     eax, [ebp-64h]
.text:00362020                 mov     edx, [eax]
.text:00362022                 sub     edx, eax
.text:00362024                 lea     eax, [ecx-1]
.text:00362027                 mov     [ebp-24h], edx
.text:0036202A                 cmp     eax, 200h
.text:0036202F                 jnb     short loc_36203D
.text:0036202F
.text:00362031                 movsx   eax, byte_2AB8E08[ecx]
.text:00362038                 mov     [ebp-44h], eax
.text:0036203B                 jmp     short loc_362044
.text:0036203B
.text:0036203D ; ---------------------------------------------------------------------------
.text:0036203D
.text:0036203D loc_36203D:                             ; CODE XREF: sub_360480+1BAF↑j
.text:0036203D                 mov     dword ptr [ebp-44h], 0FFFFFFFFh
.text:0036203D
.text:00362044
.text:00362044 loc_362044:                             ; CODE XREF: sub_360480+1BBB↑j
.text:00362044                 mov     eax, [ebp-50h]
.text:00362047                 dec     eax
.text:00362048                 cmp     eax, 200h
.text:0036204D                 jnb     short loc_36205B
.text:0036204D
.text:0036204F                 mov     eax, [ebp-50h]
.text:00362052                 movsx   eax, byte_2AB8E08[eax]
.text:00362059                 jmp     short loc_36205E
.text:00362059
.text:0036205B ; ---------------------------------------------------------------------------
.text:0036205B
.text:0036205B loc_36205B:                             ; CODE XREF: sub_360480+1BCD↑j
.text:0036205B                 or      eax, 0FFFFFFFFh
.text:0036205B
.text:0036205E
.text:0036205E loc_36205E:                             ; CODE XREF: sub_360480+1BD9↑j
.text:0036205E                 cmp     dword ptr [ebp-44h], 0
.text:00362062                 mov     [ebp-34h], eax
.text:00362065                 jge     loc_36215E
.text:00362065
.text:0036206B                 test    eax, eax
.text:0036206D                 mov     eax, [edx+0Ch]
.text:00362070                 push    ecx
.text:00362071                 jns     loc_36214B
.text:00362071
.text:00362077                 push    dword ptr [ebp-50h]
.text:0036207A                 mov     edi, [ebp-2Ch]
.text:0036207D                 push    edi
.text:0036207E                 push    dword ptr [edx+10h]
.text:00362081                 call    eax
.text:00362081
.text:00362083                 mov     ecx, [ebp-14h]
.text:00362086                 add     esp, 10h
.text:00362089                 mov     [ebp-44h], eax
.text:0036208C                 test    eax, eax
.text:0036208E                 jnz     short loc_362098
.text:0036208E
.text:00362090                 test    ecx, ecx
.text:00362092                 jnz     loc_3760A9
.text:00362092
.text:00362098
.text:00362098 loc_362098:                             ; CODE XREF: sub_360480+1C0E↑j
.text:00362098                                         ; sub_360480+1D3D↓j
.text:00362098                 mov     edi, [ebp-24h]
.text:00362098
.text:0036209B
.text:0036209B loc_36209B:                             ; CODE XREF: sub_360480+1D57↓j
.text:0036209B                 mov     eax, ecx
.text:0036209D                 sub     ecx, [ebp-50h]
.text:003620A0                 sub     eax, [ebp-50h]
.text:003620A3                 add     [edi+38h], eax
.text:003620A6                 movzx   eax, byte ptr [ebp-1]
.text:003620AA                 add     [edi+eax*4+144h], ecx
.text:003620B1                 mov     eax, [ebp-44h]
.text:003620B4                 add     eax, 18h
.text:003620B7                 add     eax, esi
.text:003620B9                 mov     [esi+18h], eax
.text:003620B9
.text:003620BC
.text:003620BC loc_3620BC:                             ; CODE XREF: sub_360480+1AB8↑j
.text:003620BC                 mov     ecx, [ebp-4Ch]
.text:003620BF                 mov     edx, 1
.text:003620C4                 shl     edx, cl
.text:003620C6                 cmp     byte_2AB2004, 0
.text:003620CD                 mov     [ebp-2Ch], edx
.text:003620D0                 lea     edi, [edx-1]
.text:003620D3                 jz      loc_3621DC
.text:003620D3
.text:003620D9                 test    edi, edi
.text:003620DB                 js      loc_362248
.text:003620DB
.text:003620E1                 mov     edx, [ebp-58h]
.text:003620E4                 mov     eax, edi
.text:003620E6                 shl     eax, 5
.text:003620E9                 add     edx, 10h
.text:003620EC                 add     edx, eax
.text:003620EE                 mov     [ebp-54h], edx
.text:003620EE
.text:003620F1
.text:003620F1 loc_3620F1:                             ; CODE XREF: sub_360480+1CC4↓j
.text:003620F1                 cmp     dword ptr [edx-4], 0
.text:003620F5                 jz      short loc_36213B
.text:003620F5
.text:003620F7                 mov     eax, [edx]
.text:003620F9                 mov     ecx, [edx+4]
.text:003620FC                 mov     [ebp-330h], eax
.text:00362102                 mov     [ebp-32Ch], ecx
.text:00362108                 mov     eax, [edx+8]
.text:0036210B                 mov     ecx, [ebp-74h]
.text:0036210E                 mov     [ebp-328h], eax
.text:00362114                 mov     eax, [edx+0Ch]
.text:00362117                 mov     edx, esi
.text:00362119                 and     eax, 0Fh
.text:0036211C                 mov     [ebp-324h], eax
.text:00362122                 lea     eax, [ebp-330h]
.text:00362128                 push    eax
.text:00362129                 call    sub_13B40E0
.text:00362129
.text:0036212E                 mov     edx, [ebp-54h]
.text:00362131                 add     esp, 4
.text:00362134                 movups  xmm0, xmmword ptr [edx-10h]
.text:00362138                 movups  xmmword ptr [eax], xmm0
.text:00362138
.text:0036213B
.text:0036213B loc_36213B:                             ; CODE XREF: sub_360480+1C75↑j
.text:0036213B                 sub     edx, 20h ; ' '
.text:0036213E                 sub     edi, 1
.text:00362141                 mov     [ebp-54h], edx
.text:00362144                 jns     short loc_3620F1
.text:00362144
.text:00362146                 jmp     loc_362245
.text:00362146
.text:0036214B ; ---------------------------------------------------------------------------
.text:0036214B
.text:0036214B loc_36214B:                             ; CODE XREF: sub_360480+1BF1↑j
.text:0036214B                 push    0
.text:0036214D                 push    0
.text:0036214F                 push    dword ptr [edx+10h]
.text:00362152                 call    eax
.text:00362152
.text:00362154                 mov     edx, eax
.text:00362156                 add     esp, 10h
.text:00362159                 mov     [ebp-44h], edx
.text:0036215C                 jmp     short loc_36216E
.text:0036215C
.text:0036215E ; ---------------------------------------------------------------------------
.text:0036215E
.text:0036215E loc_36215E:                             ; CODE XREF: sub_360480+1BE5↑j
.text:0036215E                 mov     edx, [ebp-44h]
.text:00362161                 mov     ecx, [ebp-74h]
.text:00362164                 call    sub_13C08C0
.text:00362164
.text:00362169                 mov     edx, eax
.text:0036216B                 mov     [ebp-44h], eax
.text:0036216B
.text:0036216E
.text:0036216E loc_36216E:                             ; CODE XREF: sub_360480+1CDC↑j
.text:0036216E                 mov     eax, [ebp-14h]
.text:00362171                 test    edx, edx
.text:00362173                 jnz     short loc_36217D
.text:00362173
.text:00362175                 test    eax, eax
.text:00362177                 jnz     loc_3760A9
.text:00362177
.text:0036217D
.text:0036217D loc_36217D:                             ; CODE XREF: sub_360480+1CF3↑j
.text:0036217D                 mov     ecx, [ebp-50h]
.text:00362180                 test    ecx, ecx
.text:00362182                 jz      short loc_3621A4
.text:00362182
.text:00362184                 test    eax, eax
.text:00362186                 jz      short loc_3621A4
.text:00362186
.text:00362188                 cmp     ecx, eax
.text:0036218A                 cmovb   edi, [ebp-54h]
.text:0036218E                 shl     edi, 4
.text:00362191                 push    edi
.text:00362192                 mov     edi, [ebp-2Ch]
.text:00362195                 push    edi
.text:00362196                 push    edx
.text:00362197                 call    sub_1B7EE40
.text:00362197
.text:0036219C                 mov     ecx, [ebp-50h]
.text:0036219F                 add     esp, 0Ch
.text:003621A2                 jmp     short loc_3621A7
.text:003621A2
.text:003621A4 ; ---------------------------------------------------------------------------
.text:003621A4
.text:003621A4 loc_3621A4:                             ; CODE XREF: sub_360480+1D02↑j
.text:003621A4                                         ; sub_360480+1D06↑j
.text:003621A4                 mov     edi, [ebp-2Ch]
.text:003621A4
.text:003621A7
.text:003621A7 loc_3621A7:                             ; CODE XREF: sub_360480+1D22↑j
.text:003621A7                 mov     edx, [ebp-34h]
.text:003621AA                 test    edx, edx
.text:003621AC                 js      short loc_3621C2
.text:003621AC
.text:003621AE                 mov     ecx, [ebp-74h]
.text:003621B1                 push    edi
.text:003621B2                 call    sub_13C0A60
.text:003621B2
.text:003621B7                 mov     ecx, [ebp-14h]
.text:003621BA                 add     esp, 4
.text:003621BD                 jmp     loc_362098
.text:003621BD
.text:003621C2 ; ---------------------------------------------------------------------------
.text:003621C2
.text:003621C2 loc_3621C2:                             ; CODE XREF: sub_360480+1D2C↑j
.text:003621C2                 push    0
.text:003621C4                 push    ecx
.text:003621C5                 push    edi
.text:003621C6                 mov     edi, [ebp-24h]
.text:003621C9                 push    dword ptr [edi+10h]
.text:003621CC                 mov     eax, [edi+0Ch]
.text:003621CF                 call    eax
.text:003621CF
.text:003621D1                 mov     ecx, [ebp-14h]
.text:003621D4                 add     esp, 10h
.text:003621D7                 jmp     loc_36209B
.text:003621D7
.text:003621DC ; ---------------------------------------------------------------------------
.text:003621DC
.text:003621DC loc_3621DC:                             ; CODE XREF: sub_360480+1C53↑j
.text:003621DC                 test    edi, edi
.text:003621DE                 js      short loc_362248
.text:003621DE
.text:003621E0                 mov     edx, [ebp-58h]
.text:003621E3                 mov     eax, edi
.text:003621E5                 shl     eax, 5
.text:003621E8                 add     edx, 10h
.text:003621EB                 add     edx, eax
.text:003621ED                 mov     [ebp-54h], edx
.text:003621ED
.text:003621F0
.text:003621F0 loc_3621F0:                             ; CODE XREF: sub_360480+1DC3↓j
.text:003621F0                 cmp     dword ptr [edx-4], 0
.text:003621F4                 jz      short loc_36223A
.text:003621F4
.text:003621F6                 mov     eax, [edx]
.text:003621F8                 mov     ecx, [edx+4]
.text:003621FB                 mov     [ebp-340h], eax
.text:00362201                 mov     [ebp-33Ch], ecx
.text:00362207                 mov     eax, [edx+8]
.text:0036220A                 mov     ecx, [ebp-74h]
.text:0036220D                 mov     [ebp-338h], eax
.text:00362213                 mov     eax, [edx+0Ch]
.text:00362216                 mov     edx, esi
.text:00362218                 and     eax, 0Fh
.text:0036221B                 mov     [ebp-334h], eax
.text:00362221                 lea     eax, [ebp-340h]
.text:00362227                 push    eax
.text:00362228                 call    sub_13BA4F0
.text:00362228
.text:0036222D                 mov     edx, [ebp-54h]
.text:00362230                 add     esp, 4
.text:00362233                 movups  xmm0, xmmword ptr [edx-10h]
.text:00362237                 movups  xmmword ptr [eax], xmm0
.text:00362237
.text:0036223A
.text:0036223A loc_36223A:                             ; CODE XREF: sub_360480+1D74↑j
.text:0036223A                 sub     edx, 20h ; ' '
.text:0036223D                 sub     edi, 1
.text:00362240                 mov     [ebp-54h], edx
.text:00362243                 jns     short loc_3621F0
.text:00362243
.text:00362245
.text:00362245 loc_362245:                             ; CODE XREF: sub_360480+1CC6↑j
.text:00362245                 mov     edx, [ebp-2Ch]
.text:00362245
.text:00362248
.text:00362248 loc_362248:                             ; CODE XREF: sub_360480+1C5B↑j
.text:00362248                                         ; sub_360480+1D5E↑j
.text:00362248                 mov     ecx, [ebp-58h]
.text:0036224B                 mov     edi, [ebp-74h]
.text:0036224E                 cmp     ecx, offset dword_1EA0808
.text:00362254                 jz      short loc_36226B
.text:00362254
.text:00362256                 movzx   eax, byte ptr [esi+1]
.text:0036225A                 shl     edx, 5
.text:0036225D                 push    eax
.text:0036225E                 push    edx
.text:0036225F                 mov     edx, ecx
.text:00362261                 mov     ecx, edi
.text:00362263                 call    sub_13C0AF0
.text:00362263
.text:00362268                 add     esp, 8
.text:00362268
.text:0036226B
.text:0036226B loc_36226B:                             ; CODE XREF: sub_360480+1DD4↑j
.text:0036226B                 cmp     byte_2AB2004, 0
.text:00362272                 mov     edx, esi
.text:00362274                 push    dword ptr [ebp-8]
.text:00362277                 mov     ecx, edi
.text:00362279                 jnz     loc_3618D1
.text:00362279
.text:0036227F                 call    sub_13BA4F0
.text:0036227F
.text:00362284                 mov     edi, eax
.text:00362286                 jmp     loc_3624F9
.text:00362286
.text:0036228B ; ---------------------------------------------------------------------------
.text:0036228B
.text:0036228B loc_36228B:                             ; CODE XREF: sub_360480+15CF↑j
.text:0036228B                 mov     eax, [edi+14h]
.text:0036228E                 mov     edx, [edi+10h]
.text:00362291                 mov     ecx, edx
.text:00362293                 mov     [ebp-50h], eax
.text:00362296                 mov     [ebp-34Ch], eax
.text:0036229C                 mov     eax, [edi+18h]
.text:0036229F                 mov     [ebp-4Ch], eax
.text:003622A2                 mov     [ebp-348h], eax
.text:003622A8                 mov     eax, [edi+1Ch]
.text:003622AB                 and     eax, 0Fh
.text:003622AE                 mov     [ebp-54h], edx
.text:003622B1                 dec     eax             ; switch 5 cases
.text:003622B2                 mov     [ebp-350h], edx
.text:003622B8                 cmp     eax, 4
.text:003622BB                 ja      def_3622C1      ; jumptable 003622C1 default case
.text:003622BB
.text:003622C1                 jmp     ds:jpt_3622C1[eax*4] ; switch jump
.text:003622C1
.text:003622C8 ; ---------------------------------------------------------------------------
.text:003622C8
.text:003622C8 loc_3622C8:                             ; CODE XREF: sub_360480+1E41↑j
.text:003622C8                                         ; DATA XREF: .text:jpt_3622C1↓o
.text:003622C8                 movsd   xmm1, qword ptr [ebp-350h] ; jumptable 003622C1 case 4
.text:003622D0                 xorps   xmm1, xmmword_2C87C80
.text:003622D7                 movsd   qword ptr [ebp-20h], xmm1
.text:003622DC                 mov     ecx, [ebp-1Ch]
.text:003622DF                 and     ecx, 7FFFFFFFh
.text:003622E5                 mov     eax, ecx
.text:003622E7                 shr     eax, 12h
.text:003622EA                 xor     eax, [ebp-20h]
.text:003622ED                 imul    edx, eax, 5BD1E995h
.text:003622F3                 mov     eax, edx
.text:003622F5                 shr     eax, 16h
.text:003622F8                 xor     eax, ecx
.text:003622FA                 imul    ecx, eax, 5BD1E995h
.text:00362300                 mov     eax, ecx
.text:00362302                 shr     eax, 11h
.text:00362305                 xor     eax, edx
.text:00362307                 imul    eax, 5BD1E995h
.text:0036230D                 shr     eax, 13h
.text:00362310                 xor     eax, ecx
.text:00362312                 imul    edx, eax, 5BD1E995h
.text:00362318                 jmp     loc_3623DE
.text:00362318
.text:0036231D ; ---------------------------------------------------------------------------
.text:0036231D
.text:0036231D loc_36231D:                             ; CODE XREF: sub_360480+1E41↑j
.text:0036231D                                         ; DATA XREF: .text:jpt_3622C1↓o
.text:0036231D                 mov     eax, [ebp-50h]  ; jumptable 003622C1 case 3
.text:00362320                 mov     [ebp-54h], eax
.text:00362323                 cmp     edx, 8000000h
.text:00362329                 jnz     short loc_362335
.text:00362329
.text:0036232B                 xor     edx, edx
.text:0036232D                 mov     [ebp-1Ch], edx
.text:00362330                 mov     [ebp-1Ch], edx
.text:00362333                 jmp     short loc_362343
.text:00362333
.text:00362335 ; ---------------------------------------------------------------------------
.text:00362335
.text:00362335 loc_362335:                             ; CODE XREF: sub_360480+1EA9↑j
.text:00362335                 mov     dword ptr [ebp-1Ch], 0
.text:0036233C                 mov     dword ptr [ebp-1Ch], 0
.text:0036233C
.text:00362343
.text:00362343 loc_362343:                             ; CODE XREF: sub_360480+1EB3↑j
.text:00362343                 xor     ecx, ecx
.text:00362345                 cmp     dword ptr [ebp-54h], 8000000h
.text:0036234C                 mov     dword ptr [ebp-54h], 0
.text:00362353                 cmovnz  ecx, eax
.text:00362356                 mov     eax, [ebp-4Ch]
.text:00362359                 cmp     eax, 8000000h
.text:0036235E                 cmovz   eax, [ebp-54h]
.text:00362362                 mov     [ebp-4Ch], eax
.text:00362365                 mov     eax, edx
.text:00362367                 shr     eax, 11h
.text:0036236A                 xor     eax, edx
.text:0036236C                 imul    edx, eax, 466F45Dh
.text:00362372                 mov     eax, [ebp-4Ch]
.text:00362375                 shr     eax, 11h
.text:00362378                 xor     eax, [ebp-4Ch]
.text:0036237B                 imul    eax, 4F9FFB7h
.text:00362381                 xor     edx, eax
.text:00362383                 mov     eax, ecx
.text:00362385                 shr     eax, 11h
.text:00362388                 xor     eax, ecx
.text:0036238A                 imul    eax, 127409Fh
.text:00362390                 jmp     short loc_3623DC
.text:00362390
.text:00362392 ; ---------------------------------------------------------------------------
.text:00362392
.text:00362392 loc_362392:                             ; CODE XREF: sub_360480+1E41↑j
.text:00362392                                         ; DATA XREF: .text:jpt_3622C1↓o
.text:00362392                 mov     cl, [esi+5]     ; jumptable 003622C1 case 5
.text:00362395                 lea     eax, [edx+0Ch]
.text:00362398                 mov     edx, 1
.text:0036239D                 shl     edx, cl
.text:0036239F                 dec     edx
.text:003623A0                 sub     eax, [eax]
.text:003623A2                 jmp     short loc_3623E9
.text:003623A2
.text:003623A4 ; ---------------------------------------------------------------------------
.text:003623A4
.text:003623A4 loc_3623A4:                             ; CODE XREF: sub_360480+1E41↑j
.text:003623A4                                         ; DATA XREF: .text:jpt_3622C1↓o
.text:003623A4                 mov     cl, [esi+5]     ; jumptable 003622C1 case 1
.text:003623A7                 mov     edx, 1
.text:003623AC                 shl     edx, cl
.text:003623AE                 dec     edx
.text:003623AF                 and     edx, [ebp-54h]
.text:003623B2                 jmp     short loc_3623EB
.text:003623B2
.text:003623B4 ; ---------------------------------------------------------------------------
.text:003623B4
.text:003623B4 loc_3623B4:                             ; CODE XREF: sub_360480+1E41↑j
.text:003623B4                                         ; DATA XREF: .text:jpt_3622C1↓o
.text:003623B4                 mov     eax, edx        ; jumptable 003622C1 case 2
.text:003623B6                 shr     eax, 10h
.text:003623B9                 xor     eax, edx
.text:003623BB                 jmp     short loc_3623C4
.text:003623BB
.text:003623BD ; ---------------------------------------------------------------------------
.text:003623BD
.text:003623BD def_3622C1:                             ; CODE XREF: sub_360480+1E3B↑j
.text:003623BD                 mov     eax, ecx        ; jumptable 003622C1 default case
.text:003623BF                 shr     eax, 10h
.text:003623C2                 xor     eax, ecx
.text:003623C2
.text:003623C4
.text:003623C4 loc_3623C4:                             ; CODE XREF: sub_360480+1F3B↑j
.text:003623C4                 imul    ecx, eax, 85EBCA6Bh
.text:003623CA                 mov     eax, ecx
.text:003623CC                 shr     eax, 0Dh
.text:003623CF                 xor     eax, ecx
.text:003623D1                 imul    eax, 0C2B2AE35h
.text:003623D7                 mov     edx, eax
.text:003623D9                 shr     edx, 10h
.text:003623D9
.text:003623DC
.text:003623DC loc_3623DC:                             ; CODE XREF: sub_360480+1F10↑j
.text:003623DC                 xor     edx, eax
.text:003623DC
.text:003623DE
.text:003623DE loc_3623DE:                             ; CODE XREF: sub_360480+1E98↑j
.text:003623DE                 mov     cl, [esi+5]
.text:003623E1                 mov     eax, 1
.text:003623E6                 shl     eax, cl
.text:003623E8                 dec     eax
.text:003623E8
.text:003623E9
.text:003623E9 loc_3623E9:                             ; CODE XREF: sub_360480+1F22↑j
.text:003623E9                 and     edx, eax
.text:003623E9
.text:003623EB
.text:003623EB loc_3623EB:                             ; CODE XREF: sub_360480+1F32↑j
.text:003623EB                 shl     edx, 5
.text:003623EE                 lea     eax, [esi+14h]
.text:003623F1                 sub     edx, eax
.text:003623F3                 add     edx, [eax]
.text:003623F5                 cmp     edx, edi
.text:003623F7                 jz      short loc_36246E
.text:003623F7
.text:003623F9                 mov     eax, [edx+1Ch]
.text:003623FC                 sar     eax, 4
.text:003623FF                 shl     eax, 5
.text:00362402                 add     eax, edx
.text:00362404                 cmp     eax, edi
.text:00362406                 jz      short loc_362419
.text:00362406
.text:00362408
.text:00362408 loc_362408:                             ; CODE XREF: sub_360480+1F97↓j
.text:00362408                 mov     edx, eax
.text:0036240A                 mov     eax, [edx+1Ch]
.text:0036240D                 sar     eax, 4
.text:00362410                 shl     eax, 5
.text:00362413                 add     eax, edx
.text:00362415                 cmp     eax, edi
.text:00362417                 jnz     short loc_362408
.text:00362417
.text:00362419
.text:00362419 loc_362419:                             ; CODE XREF: sub_360480+1F86↑j
.text:00362419                 mov     eax, [ebp-2Ch]
.text:0036241C                 mov     ecx, eax
.text:0036241E                 sub     ecx, edx
.text:00362420                 sub     eax, edx
.text:00362422                 sar     ecx, 1
.text:00362424                 xor     ecx, [edx+1Ch]
.text:00362427                 and     ecx, 0Fh
.text:0036242A                 sar     eax, 1
.text:0036242C                 xor     ecx, eax
.text:0036242E                 mov     [edx+1Ch], ecx
.text:00362431                 movups  xmm0, xmmword ptr [edi]
.text:00362434                 mov     edx, [ebp-2Ch]
.text:00362437                 movups  xmmword ptr [edx], xmm0
.text:0036243A                 movups  xmm0, xmmword ptr [edi+10h]
.text:0036243E                 movups  xmmword ptr [edx+10h], xmm0
.text:00362442                 test    dword ptr [edi+1Ch], 0FFFFFFF0h
.text:00362449                 jz      short loc_362465
.text:00362449
.text:0036244B                 mov     eax, edi
.text:0036244D                 xor     ecx, ecx
.text:0036244F                 sub     eax, edx
.text:00362451                 and     ecx, 0Fh
.text:00362454                 sar     eax, 1
.text:00362456                 and     eax, 0FFFFFFF0h
.text:00362459                 add     eax, [edx+1Ch]
.text:0036245C                 xor     eax, ecx
.text:0036245E                 mov     [edx+1Ch], eax
.text:00362461                 and     dword ptr [edi+1Ch], 0Fh
.text:00362461
.text:00362465
.text:00362465 loc_362465:                             ; CODE XREF: sub_360480+1FC9↑j
.text:00362465                 mov     dword ptr [edi+0Ch], 0
.text:0036246C                 jmp     short loc_3624B7
.text:0036246C
.text:0036246E ; ---------------------------------------------------------------------------
.text:0036246E
.text:0036246E loc_36246E:                             ; CODE XREF: sub_360480+1F77↑j
.text:0036246E                 mov     eax, [edi+1Ch]
.text:00362471                 mov     ecx, eax
.text:00362473                 mov     edx, [ebp-2Ch]
.text:00362476                 sar     ecx, 4
.text:00362479                 test    ecx, ecx
.text:0036247B                 jz      short loc_36249F
.text:0036247B
.text:0036247D                 mov     eax, ecx
.text:0036247F                 shl     ecx, 5
.text:00362482                 shl     eax, 5
.text:00362485                 sub     ecx, edx
.text:00362487                 sub     eax, edx
.text:00362489                 add     ecx, edi
.text:0036248B                 add     eax, edi
.text:0036248D                 sar     ecx, 1
.text:0036248F                 sar     eax, 1
.text:00362491                 xor     eax, [edx+1Ch]
.text:00362494                 and     eax, 0Fh
.text:00362497                 xor     eax, ecx
.text:00362499                 mov     [edx+1Ch], eax
.text:0036249C                 mov     eax, [edi+1Ch]
.text:0036249C
.text:0036249F
.text:0036249F loc_36249F:                             ; CODE XREF: sub_360480+1FFB↑j
.text:0036249F                 mov     ecx, edx
.text:003624A1                 sub     ecx, edi
.text:003624A3                 sar     ecx, 1
.text:003624A5                 xor     ecx, eax
.text:003624A7                 mov     eax, edx
.text:003624A9                 sub     eax, edi
.text:003624AB                 and     ecx, 0Fh
.text:003624AE                 sar     eax, 1
.text:003624B0                 xor     ecx, eax
.text:003624B2                 mov     [edi+1Ch], ecx
.text:003624B5                 mov     edi, edx
.text:003624B5
.text:003624B7
.text:003624B7 loc_3624B7:                             ; CODE XREF: sub_360480+15BD↑j
.text:003624B7                                         ; sub_360480+1FEC↑j
.text:003624B7                 mov     edx, [ebp-8]
.text:003624BA                 mov     eax, [edx]
.text:003624BC                 mov     ecx, [edx+4]
.text:003624BF                 mov     [edi+10h], eax
.text:003624C2                 mov     [edi+14h], ecx
.text:003624C5                 mov     ecx, [ebp-30h]
.text:003624C8                 mov     eax, [ecx-18h]
.text:003624CB                 mov     [edi+18h], eax
.text:003624CE                 mov     eax, [edi+1Ch]
.text:003624D1                 xor     eax, [ecx-14h]
.text:003624D4                 and     eax, 0Fh
.text:003624D7                 xor     [edi+1Ch], eax
.text:003624DA                 cmp     dword ptr [ecx-14h], 5
.text:003624DE                 jl      short loc_3624FC
.text:003624DE
.text:003624E0                 test    byte ptr [esi+2], 4
.text:003624E4                 jz      short loc_3624FC
.text:003624E4
.text:003624E6                 mov     eax, [edx]
.text:003624E8                 test    byte ptr [eax+2], 3
.text:003624EC                 jz      short loc_3624FC
.text:003624EC
.text:003624EE                 mov     ecx, [ebp-74h]
.text:003624F1                 mov     edx, esi
.text:003624F3                 push    eax
.text:003624F4                 call    sub_1376B10
.text:003624F4
.text:003624F9
.text:003624F9 loc_3624F9:                             ; CODE XREF: sub_360480+1458↑j
.text:003624F9                                         ; sub_360480+1E06↑j
.text:003624F9                 add     esp, 4
.text:003624F9
.text:003624FC
.text:003624FC loc_3624FC:                             ; CODE XREF: sub_360480+864↑j
.text:003624FC                                         ; sub_360480+205E↑j ...
.text:003624FC                 mov     ecx, [ebp-74h]
.text:003624FF                 lea     eax, [esi+14h]
.text:00362502                 sub     eax, [eax]
.text:00362504                 add     eax, edi
.text:00362506                 sar     eax, 5
.text:00362509                 mov     [ecx+34h], eax
.text:0036250C                 cmp     dword ptr [edi+0Ch], 0
.text:00362510                 jnz     loc_36268F
.text:00362510
.text:00362516                 mov     edx, [esi+10h]
.text:00362519                 lea     ecx, [esi+10h]
.text:0036251C                 mov     eax, edx
.text:0036251E                 sub     eax, ecx
.text:00362520                 jz      loc_36268F
.text:00362520
.text:00362526                 sub     edx, esi
.text:00362528                 mov     [ebp-2Ch], edx
.text:0036252B                 mov     al, [edx-0Ah]
.text:0036252E                 mov     [ebp-1], al
.text:00362531                 test    al, 4
.text:00362533                 jnz     loc_36268F
.text:00362533
.text:00362539                 mov     ecx, [ebp-64h]
.text:0036253C                 mov     esi, 1
.text:00362541                 add     edx, 4
.text:00362544                 mov     eax, [ecx]
.text:00362546                 sub     eax, ecx
.text:00362548                 mov     ecx, [eax+574h]
.text:0036254E                 add     eax, 574h
.text:00362553                 sub     ecx, eax
.text:00362555                 mov     [ebp-54h], ecx
.text:00362558                 lea     eax, [ecx+0Ch]
.text:0036255B                 mov     ecx, [ebp-2Ch]
.text:0036255E                 sub     eax, [eax]
.text:00362560                 mov     cl, [ecx-0Bh]
.text:00362563                 shl     esi, cl
.text:00362565                 dec     esi
.text:00362566                 and     esi, eax
.text:00362568                 shl     esi, 5
.text:0036256B                 sub     esi, edx
.text:0036256D                 add     esi, [edx]
.text:0036256F                 mov     edx, [ebp-54h]
.text:0036256F
.text:00362572
.text:00362572 loc_362572:                             ; CODE XREF: sub_360480+210F↓j
.text:00362572                 mov     ecx, [esi+1Ch]
.text:00362575                 mov     eax, ecx
.text:00362577                 and     eax, 0Fh
.text:0036257A                 cmp     al, 5
.text:0036257C                 jnz     short loc_362583
.text:0036257C
.text:0036257E                 cmp     [esi+10h], edx
.text:00362581                 jz      short loc_362596
.text:00362581
.text:00362583
.text:00362583 loc_362583:                             ; CODE XREF: sub_360480+20FC↑j
.text:00362583                 sar     ecx, 4
.text:00362586                 test    ecx, ecx
.text:00362588                 jz      short loc_362591
.text:00362588
.text:0036258A                 shl     ecx, 5
.text:0036258D                 add     esi, ecx
.text:0036258F                 jmp     short loc_362572
.text:0036258F
.text:00362591 ; ---------------------------------------------------------------------------
.text:00362591
.text:00362591 loc_362591:                             ; CODE XREF: sub_360480+2108↑j
.text:00362591                 mov     esi, offset luao_nilobject
.text:00362591
.text:00362596
.text:00362596 loc_362596:                             ; CODE XREF: sub_360480+2101↑j
.text:00362596                 cmp     dword ptr [esi+0Ch], 0
.text:0036259A                 jz      loc_362680
.text:0036259A
.text:003625A0                 test    esi, esi
.text:003625A2                 jz      loc_36268C
.text:003625A2
.text:003625A8                 jmp     loc_36264C
.text:003625A8
.text:003625AD ; ---------------------------------------------------------------------------
.text:003625AD
.text:003625AD loc_3625AD:                             ; CODE XREF: sub_360480+7D6↑j
.text:003625AD                 mov     esi, [ebp-64h]
.text:003625B0                 mov     eax, ecx
.text:003625B2                 sub     eax, 6
.text:003625B5                 jz      short loc_3625D3
.text:003625B5
.text:003625B7                 sub     eax, 1
.text:003625BA                 jz      short loc_3625CC
.text:003625BA
.text:003625BC                 mov     eax, [esi]
.text:003625BE                 lea     ecx, ds:544h[ecx*4]
.text:003625C5                 sub     ecx, esi
.text:003625C7                 mov     ecx, [ecx+eax]
.text:003625CA                 jmp     short loc_3625DC
.text:003625CA
.text:003625CC ; ---------------------------------------------------------------------------
.text:003625CC
.text:003625CC loc_3625CC:                             ; CODE XREF: sub_360480+213A↑j
.text:003625CC                 mov     eax, [edx]
.text:003625CE                 add     eax, 8
.text:003625D1                 jmp     short loc_3625D8
.text:003625D1
.text:003625D3 ; ---------------------------------------------------------------------------
.text:003625D3
.text:003625D3 loc_3625D3:                             ; CODE XREF: sub_360480+2135↑j
.text:003625D3                 mov     eax, [edx]
.text:003625D5                 add     eax, 10h
.text:003625D5
.text:003625D8
.text:003625D8 loc_3625D8:                             ; CODE XREF: sub_360480+2151↑j
.text:003625D8                 mov     ecx, [eax]
.text:003625DA                 sub     ecx, eax
.text:003625DA
.text:003625DC
.text:003625DC loc_3625DC:                             ; CODE XREF: sub_360480+214A↑j
.text:003625DC                 test    ecx, ecx
.text:003625DE                 jz      short loc_36263D
.text:003625DE
.text:003625E0                 mov     eax, [esi]
.text:003625E2                 lea     edx, [ecx+14h]
.text:003625E5                 mov     cl, [ecx+5]
.text:003625E8                 sub     eax, esi
.text:003625EA                 add     eax, 574h
.text:003625EF                 mov     esi, 1
.text:003625F4                 shl     esi, cl
.text:003625F6                 dec     esi
.text:003625F7                 mov     edi, [eax]
.text:003625F9                 sub     edi, eax
.text:003625FB                 lea     eax, [edi+0Ch]
.text:003625FE                 sub     eax, [eax]
.text:00362600                 and     esi, eax
.text:00362602                 shl     esi, 5
.text:00362605                 sub     esi, edx
.text:00362607                 add     esi, [edx]
.text:00362609                 nop     dword ptr [eax+00000000h]
.text:00362609
.text:00362610
.text:00362610 loc_362610:                             ; CODE XREF: sub_360480+21AD↓j
.text:00362610                 mov     ecx, [esi+1Ch]
.text:00362613                 mov     eax, ecx
.text:00362615                 and     eax, 0Fh
.text:00362618                 cmp     al, 5
.text:0036261A                 jnz     short loc_362621
.text:0036261A
.text:0036261C                 cmp     [esi+10h], edi
.text:0036261F                 jz      short loc_36262F
.text:0036261F
.text:00362621
.text:00362621 loc_362621:                             ; CODE XREF: sub_360480+219A↑j
.text:00362621                 sar     ecx, 4
.text:00362624                 test    ecx, ecx
.text:00362626                 jz      short loc_362637
.text:00362626
.text:00362628                 shl     ecx, 5
.text:0036262B                 add     esi, ecx
.text:0036262D                 jmp     short loc_362610
.text:0036262D
.text:0036262F ; ---------------------------------------------------------------------------
.text:0036262F
.text:0036262F loc_36262F:                             ; CODE XREF: sub_360480+219F↑j
.text:0036262F                 mov     edi, [ebp-8]
.text:00362632                 mov     edx, [ebp-0Ch]
.text:00362635                 jmp     short loc_362642
.text:00362635
.text:00362637 ; ---------------------------------------------------------------------------
.text:00362637
.text:00362637 loc_362637:                             ; CODE XREF: sub_360480+21A6↑j
.text:00362637                 mov     edi, [ebp-8]
.text:0036263A                 mov     edx, [ebp-0Ch]
.text:0036263A
.text:0036263D
.text:0036263D loc_36263D:                             ; CODE XREF: sub_360480+215E↑j
.text:0036263D                 mov     esi, offset luao_nilobject
.text:0036263D
.text:00362642
.text:00362642 loc_362642:                             ; CODE XREF: sub_360480+21B5↑j
.text:00362642                 cmp     dword ptr [esi+0Ch], 0
.text:00362646                 jz      loc_3761EE
.text:00362646
.text:0036264C
.text:0036264C loc_36264C:                             ; CODE XREF: sub_360480+2128↑j
.text:0036264C                 cmp     dword ptr [esi+0Ch], 8
.text:00362650                 jz      short loc_3626BE
.text:00362650
.text:00362652                 movups  xmm0, xmmword ptr [esi]
.text:00362655                 mov     esi, [ebp-38h]
.text:00362658                 lea     edx, [ebp-360h]
.text:0036265E                 inc     esi
.text:0036265F                 mov     [ebp-0Ch], edx
.text:00362662                 mov     [ebp-38h], esi
.text:00362665                 movups  xmmword ptr [ebp-360h], xmm0
.text:0036266C                 cmp     esi, 64h ; 'd'
.text:0036266F                 jge     loc_37612E
.text:0036266F
.text:00362675                 mov     edi, [ebp-8]
.text:00362678                 mov     eax, [ebp-30h]
.text:0036267B                 jmp     loc_360C50
.text:0036267B
.text:00362680 ; ---------------------------------------------------------------------------
.text:00362680
.text:00362680 loc_362680:                             ; CODE XREF: sub_360480+211A↑j
.text:00362680                 mov     eax, [ebp-2Ch]
.text:00362683                 mov     cl, [ebp-1]
.text:00362686                 or      cl, 4
.text:00362689                 mov     [eax-0Ah], cl
.text:00362689
.text:0036268C
.text:0036268C loc_36268C:                             ; CODE XREF: sub_360480+2122↑j
.text:0036268C                 mov     esi, [ebp-5Ch]
.text:0036268C
.text:0036268F
.text:0036268F loc_36268F:                             ; CODE XREF: sub_360480+2090↑j
.text:0036268F                                         ; sub_360480+20A0↑j ...
.text:0036268F                 mov     eax, [ebp-10h]
.text:00362692                 movups  xmm0, xmmword ptr [eax]
.text:00362695                 movups  xmmword ptr [edi], xmm0
.text:00362698                 cmp     dword ptr [eax+0Ch], 5
.text:0036269C                 jl      short loc_3626D8
.text:0036269C
.text:0036269E                 test    byte ptr [esi+2], 4
.text:003626A2                 jz      short loc_3626D8
.text:003626A2
.text:003626A4                 mov     eax, [eax]
.text:003626A6                 test    byte ptr [eax+2], 3
.text:003626AA                 jz      short loc_3626D8
.text:003626AA
.text:003626AC                 mov     edx, esi
.text:003626AE                 mov     esi, [ebp-74h]
.text:003626B1                 push    eax
.text:003626B2                 mov     ecx, esi
.text:003626B4                 call    sub_1376B10
.text:003626B4
.text:003626B9                 add     esp, 4
.text:003626BC                 jmp     short loc_3626DB
.text:003626BC
.text:003626BE ; ---------------------------------------------------------------------------
.text:003626BE
.text:003626BE loc_3626BE:                             ; CODE XREF: sub_360480+21D0↑j
.text:003626BE                 push    dword ptr [ebp-10h]
.text:003626C1                 mov     edx, esi
.text:003626C3                 mov     esi, [ebp-74h]
.text:003626C6                 push    dword ptr [ebp-8]
.text:003626C9                 mov     ecx, esi
.text:003626CB                 push    dword ptr [ebp-0Ch]
.text:003626CE                 call    sub_13B2F80
.text:003626CE
.text:003626D3                 add     esp, 0Ch
.text:003626D6                 jmp     short loc_3626DB
.text:003626D6
.text:003626D8 ; ---------------------------------------------------------------------------
.text:003626D8
.text:003626D8 loc_3626D8:                             ; CODE XREF: sub_360480+221C↑j
.text:003626D8                                         ; sub_360480+2222↑j ...
.text:003626D8                 mov     esi, [ebp-74h]
.text:003626D8
.text:003626DB
.text:003626DB loc_3626DB:                             ; CODE XREF: sub_360480+223C↑j
.text:003626DB                                         ; sub_360480+2256↑j
.text:003626DB                 add     dword ptr [esi+18h], 0FFFFFFE0h
.text:003626DF                 mov     eax, ds:off_2F43004
.text:003626E4                 mov     ecx, [ebx+4]
.text:003626E7                 sub     ecx, eax
.text:003626E9                 cmp     ecx, ds:off_2F43000
.text:003626EF                 jb      short loc_36270A
.text:003626EF
.text:003626F1                 mov     eax, ds:lpAddress
.text:003626F6                 mov     ecx, [ebx+4]
.text:003626F9                 sub     ecx, eax
.text:003626FB                 cmp     ecx, ds:dwSize
.text:00362701                 jb      short loc_36270A
.text:00362701
.text:00362703                 mov     ecx, esi
.text:00362705                 call    retcheck
.text:00362705
.text:0036270A
.text:0036270A loc_36270A:                             ; CODE XREF: sub_360480+226F↑j
.text:0036270A                                         ; sub_360480+2281↑j
.text:0036270A                 mov     eax, [ebx+0Ch]
.text:0036270D                 cmp     dword ptr [eax], 0
.text:00362710                 jz      loc_364644
.text:00362710
.text:00362716                 mov     ecx, [esi+8]
.text:00362719                 lea     edx, [esi+8]
.text:0036271C                 mov     eax, ecx
.text:0036271E                 sub     ecx, esi
.text:00362720                 sub     eax, edx
.text:00362722                 mov     eax, [eax+38h]
.text:00362725                 cmp     eax, [ecx+2Ch]
.text:00362728                 jb      short loc_362733
.text:00362728
.text:0036272A                 mov     dl, 1
.text:0036272C                 mov     ecx, esi
.text:0036272E                 call    sub_1376710
.text:0036272E
.text:00362733
.text:00362733 loc_362733:                             ; CODE XREF: sub_360480+22A8↑j
.text:00362733                 test    byte ptr [esi+5], 2
.text:00362737                 jz      short loc_362740
.text:00362737
.text:00362739                 mov     ecx, esi
.text:0036273B                 call    sub_1376B90
.text:0036273B
.text:00362740
.text:00362740 loc_362740:                             ; CODE XREF: sub_360480+22B7↑j
.text:00362740                 mov     eax, [esi+18h]
.text:00362743                 mov     edi, 7
.text:00362748                 mov     [ebp-2Ch], eax
.text:0036274B                 mov     edx, edi
.text:0036274D                 nop     dword ptr [eax]
.text:0036274D
.text:00362750
.text:00362750 loc_362750:                             ; CODE XREF: sub_360480+22EA↓j
.text:00362750                 movzx   ecx, ds:byte_2641403[edx]
.text:00362757                 mov     eax, edi
.text:00362759                 shl     eax, 5
.text:0036275C                 add     ecx, eax
.text:0036275E                 mov     eax, edi
.text:00362760                 shr     eax, 2
.text:00362763                 add     ecx, eax
.text:00362765                 xor     edi, ecx
.text:00362767                 sub     edx, 1
.text:0036276A                 jnz     short loc_362750
.text:0036276A
.text:0036276C                 mov     edx, [esi+8]
.text:0036276F                 lea     ecx, [esi+8]
.text:00362772                 mov     eax, edx
.text:00362774                 sub     edx, esi
.text:00362776                 sub     eax, ecx
.text:00362778                 mov     ecx, [eax+4]
.text:0036277B                 mov     eax, [edx-8]
.text:0036277E                 dec     ecx
.text:0036277F                 and     ecx, edi
.text:00362781                 mov     esi, [eax+ecx*4]
.text:00362784                 test    esi, esi
.text:00362786                 jz      short loc_3627BE
.text:00362786
.text:00362788                 mov     edx, 6564h
.text:0036278D                 nop     dword ptr [eax]
.text:0036278D
.text:00362790
.text:00362790 loc_362790:                             ; CODE XREF: sub_360480+233C↓j
.text:00362790                 mov     eax, [esi+10h]
.text:00362793                 lea     ecx, [esi+10h]
.text:00362796                 sub     eax, ecx
.text:00362798                 cmp     eax, 7
.text:0036279B                 jnz     short loc_3627B7
.text:0036279B
.text:0036279D                 mov     eax, 6E695F5Fh
.text:003627A2                 cmp     eax, [esi+14h]
.text:003627A5                 jnz     short loc_3627B7
.text:003627A5
.text:003627A7                 cmp     dx, [esi+18h]
.text:003627AB                 jnz     short loc_3627B7
.text:003627AB
.text:003627AD                 mov     eax, 78h ; 'x'
.text:003627B2                 cmp     al, [esi+1Ah]
.text:003627B5                 jz      short loc_3627E5
.text:003627B5
.text:003627B7
.text:003627B7 loc_3627B7:                             ; CODE XREF: sub_360480+231B↑j
.text:003627B7                                         ; sub_360480+2325↑j ...
.text:003627B7                 mov     esi, [esi+8]
.text:003627BA                 test    esi, esi
.text:003627BC                 jnz     short loc_362790
.text:003627BC
.text:003627BE
.text:003627BE loc_3627BE:                             ; CODE XREF: sub_360480+2306↑j
.text:003627BE                 mov     ecx, [ebp-74h]
.text:003627C1                 lea     edx, [ecx+8]
.text:003627C4                 mov     al, [ecx+4]
.text:003627C7                 mov     [ebp-1], al
.text:003627CA                 mov     eax, [edx]
.text:003627CC                 sub     eax, edx
.text:003627CE                 movsx   edx, byte_2AB8E24
.text:003627D5                 mov     [ebp-54h], eax
.text:003627D8                 test    edx, edx
.text:003627DA                 js      short loc_362811
.text:003627DA
.text:003627DC                 call    loc_13C09C0
.text:003627DC
.text:003627E1                 mov     esi, eax
.text:003627E3                 jmp     short loc_362831
.text:003627E3
.text:003627E5 ; ---------------------------------------------------------------------------
.text:003627E5
.text:003627E5 loc_3627E5:                             ; CODE XREF: sub_360480+2335↑j
.text:003627E5                 mov     edi, [ebp-64h]
.text:003627E8                 mov     dl, [esi+2]
.text:003627EB                 mov     eax, [edi]
.text:003627ED                 sub     eax, edi
.text:003627EF                 movzx   ecx, byte ptr [eax+14h]
.text:003627F3                 not     ecx
.text:003627F5                 movzx   eax, dl
.text:003627F8                 and     ecx, 3
.text:003627FB                 xor     ecx, eax
.text:003627FD                 test    cl, 0Bh
.text:00362800                 jnz     loc_362A04
.text:00362800
.text:00362806                 xor     dl, 3
.text:00362809                 mov     [esi+2], dl
.text:0036280C                 jmp     loc_362A04
.text:0036280C
.text:00362811 ; ---------------------------------------------------------------------------
.text:00362811
.text:00362811 loc_362811:                             ; CODE XREF: sub_360480+235A↑j
.text:00362811                 push    1
.text:00362813                 push    1Ch
.text:00362815                 push    44h ; 'D'
.text:00362817                 lea     edx, [eax+13Ch]
.text:0036281D                 call    sub_13C07B0
.text:0036281D
.text:00362822                 add     esp, 0Ch
.text:00362825                 mov     ecx, [eax+14h]
.text:00362828                 lea     esi, [eax+28h]
.text:0036282B                 sub     [eax+1Ch], ecx
.text:0036282E                 inc     dword ptr [eax+20h]
.text:0036282E
.text:00362831
.text:00362831 loc_362831:                             ; CODE XREF: sub_360480+2363↑j
.text:00362831                 mov     [ebp-50h], esi
.text:00362834                 test    esi, esi
.text:00362836                 jz      loc_3760A9
.text:00362836
.text:0036283C                 mov     ecx, [ebp-54h]
.text:0036283F                 movzx   eax, byte ptr [ebp-1]
.text:00362843                 mov     edx, [ebp-64h]
.text:00362846                 add     dword ptr [ecx+38h], 1Ch
.text:0036284A                 add     dword ptr [ecx+eax*4+144h], 1Ch
.text:00362852                 lea     eax, [esi+17h]
.text:00362855                 mov     [esi+10h], eax
.text:00362858                 lea     ecx, [esi+14h]
.text:0036285B                 lea     eax, [esi+0Ch]
.text:0036285E                 sub     eax, edi
.text:00362860                 mov     [esi+0Ch], eax
.text:00362863                 mov     eax, [edx]
.text:00362865                 sub     eax, edx
.text:00362867                 mov     al, [eax+14h]
.text:0036286A                 and     al, 3
.text:0036286C                 mov     [esi+2], al
.text:0036286F                 mov     eax, [ebp-74h]
.text:00362872                 mov     byte ptr [esi], 5
.text:00362875                 mov     al, [eax+4]
.text:00362878                 mov     [esi+1], al
.text:0036287B                 mov     eax, ds:dword_2641404
.text:00362880                 mov     [ecx], eax
.text:00362882                 mov     ax, ds:word_2641408
.text:00362888                 mov     [ecx+4], ax
.text:0036288C                 mov     al, ds:byte_264140A
.text:00362891                 mov     [ecx+6], al
.text:00362894                 mov     byte ptr [esi+1Bh], 0
.text:00362898                 mov     eax, [edx]
.text:0036289A                 sub     eax, edx
.text:0036289C                 mov     eax, [eax+858h]
.text:003628A2                 test    eax, eax
.text:003628A4                 jz      short loc_3628B6
.text:003628A4
.text:003628A6                 push    7
.text:003628A8                 push    ecx
.text:003628A9                 call    eax
.text:003628A9
.text:003628AB                 mov     edx, [ebp-64h]
.text:003628AE                 add     esp, 8
.text:003628B1                 movzx   eax, ax
.text:003628B4                 jmp     short loc_3628B9
.text:003628B4
.text:003628B6 ; ---------------------------------------------------------------------------
.text:003628B6
.text:003628B6 loc_3628B6:                             ; CODE XREF: sub_360480+2424↑j
.text:003628B6                 or      eax, 0FFFFFFFFh
.text:003628B6
.text:003628B9
.text:003628B9 loc_3628B9:                             ; CODE XREF: sub_360480+2434↑j
.text:003628B9                 mov     [esi+4], ax
.text:003628BD                 mov     edx, [edx]
.text:003628BF                 sub     edx, [ebp-64h]
.text:003628C2                 mov     ecx, [edx+4]
.text:003628C5                 mov     eax, [edx]
.text:003628C7                 dec     ecx
.text:003628C8                 and     ecx, edi
.text:003628CA                 mov     eax, [eax+ecx*4]
.text:003628CD                 mov     [esi+8], eax
.text:003628D0                 mov     eax, [edx]
.text:003628D2                 mov     [eax+ecx*4], esi
.text:003628D5                 inc     dword ptr [edx+8]
.text:003628D8                 mov     eax, [edx+4]
.text:003628DB                 mov     [ebp-54h], eax
.text:003628DE                 cmp     [edx+8], eax
.text:003628E1                 jbe     loc_362A01
.text:003628E1
.text:003628E7                 cmp     eax, 3FFFFFFFh
.text:003628EC                 jg      loc_362A01
.text:003628EC
.text:003628F2                 add     eax, eax
.text:003628F4                 cmp     eax, 3FFFFFFFh
.text:003628F9                 ja      loc_376089
.text:003628F9
.text:003628FF                 lea     ecx, ds:0[eax*4]
.text:00362906                 mov     eax, [ebp-64h]
.text:00362909                 mov     [ebp-4Ch], ecx
.text:0036290C                 mov     edx, [eax]
.text:0036290E                 sub     edx, eax
.text:00362910                 lea     eax, [ecx-1]
.text:00362913                 mov     [ebp-58h], edx
.text:00362916                 cmp     eax, 200h
.text:0036291B                 jnb     short loc_362939
.text:0036291B
.text:0036291D                 movsx   eax, byte_2AB8E08[ecx]
.text:00362924                 test    eax, eax
.text:00362926                 js      short loc_362939
.text:00362926
.text:00362928                 mov     ecx, [ebp-74h]
.text:0036292B                 mov     edx, eax
.text:0036292D                 call    sub_13C08C0
.text:0036292D
.text:00362932                 mov     edi, eax
.text:00362934                 mov     [ebp-14h], edi
.text:00362937                 jmp     short loc_36294E
.text:00362937
.text:00362939 ; ---------------------------------------------------------------------------
.text:00362939
.text:00362939 loc_362939:                             ; CODE XREF: sub_360480+249B↑j
.text:00362939                                         ; sub_360480+24A6↑j
.text:00362939                 mov     eax, [edx+0Ch]
.text:0036293C                 push    ecx
.text:0036293D                 push    0
.text:0036293F                 push    0
.text:00362941                 push    dword ptr [edx+10h]
.text:00362944                 call    eax
.text:00362944
.text:00362946                 add     esp, 10h
.text:00362949                 mov     [ebp-14h], eax
.text:0036294C                 mov     edi, eax
.text:0036294C
.text:0036294E
.text:0036294E loc_36294E:                             ; CODE XREF: sub_360480+24B7↑j
.text:0036294E                 mov     eax, [ebp-4Ch]
.text:00362951                 test    edi, edi
.text:00362953                 jnz     short loc_36295D
.text:00362953
.text:00362955                 test    eax, eax
.text:00362957                 jnz     loc_3760A9
.text:00362957
.text:0036295D
.text:0036295D loc_36295D:                             ; CODE XREF: sub_360480+24D3↑j
.text:0036295D                 mov     ecx, [ebp-58h]
.text:00362960                 mov     edi, [ebp-54h]
.text:00362963                 add     [ecx+38h], eax
.text:00362966                 add     [ecx+144h], eax
.text:0036296C                 mov     ecx, [ebp-64h]
.text:0036296F                 mov     edx, [ecx]
.text:00362971                 sub     edx, ecx
.text:00362973                 lea     ecx, [edi+edi]
.text:00362976                 mov     edi, [ebp-14h]
.text:00362979                 mov     [ebp-4Ch], edx
.text:0036297C                 test    ecx, ecx
.text:0036297E                 jle     short loc_36298C
.text:0036297E
.text:00362980                 shr     eax, 2
.text:00362983                 mov     ecx, eax
.text:00362985                 xor     eax, eax
.text:00362987                 rep stosd
.text:00362989                 mov     edi, [ebp-14h]
.text:00362989
.text:0036298C
.text:0036298C loc_36298C:                             ; CODE XREF: sub_360480+24FE↑j
.text:0036298C                 mov     eax, [edx+4]
.text:0036298F                 xor     ecx, ecx
.text:00362991                 mov     [ebp-58h], ecx
.text:00362994                 test    eax, eax
.text:00362996                 jle     short loc_3629E0
.text:00362996
.text:00362998
.text:00362998 loc_362998:                             ; CODE XREF: sub_360480+255B↓j
.text:00362998                 mov     eax, [edx]
.text:0036299A                 mov     esi, [eax+ecx*4]
.text:0036299D                 test    esi, esi
.text:0036299F                 jz      short loc_3629D2
.text:0036299F
.text:003629A1                 mov     ecx, [ebp-54h]
.text:003629A4                 lea     eax, ds:0FFFFFFFFh[ecx*2]
.text:003629AB                 mov     [ebp-14h], eax
.text:003629AE                 xchg    ax, ax
.text:003629AE
.text:003629B0
.text:003629B0 loc_3629B0:                             ; CODE XREF: sub_360480+254A↓j
.text:003629B0                                         ; FE4E042B↓?
.text:003629B0                 mov     edx, [esi+8]
.text:003629B3                 lea     ecx, [esi+0Ch]
.text:003629B6                 sub     ecx, [ecx]
.text:003629B8                 and     ecx, eax
.text:003629BA                 mov     eax, [edi+ecx*4]
.text:003629BD                 mov     [esi+8], eax
.text:003629C0                 mov     eax, [ebp-14h]
.text:003629C3                 mov     [edi+ecx*4], esi
.text:003629C6                 mov     esi, edx
.text:003629C8                 test    edx, edx
.text:003629CA                 jnz     short loc_3629B0
.text:003629CA
.text:003629CC                 mov     ecx, [ebp-58h]
.text:003629CF                 mov     edx, [ebp-4Ch]
.text:003629CF
.text:003629D2
.text:003629D2 loc_3629D2:                             ; CODE XREF: sub_360480+251F↑j
.text:003629D2                 mov     eax, [edx+4]
.text:003629D5                 inc     ecx
.text:003629D6                 mov     [ebp-58h], ecx
.text:003629D9                 cmp     ecx, eax
.text:003629DB                 jl      short loc_362998
.text:003629DB
.text:003629DD                 mov     esi, [ebp-50h]
.text:003629DD
.text:003629E0
.text:003629E0 loc_3629E0:                             ; CODE XREF: sub_360480+2516↑j
.text:003629E0                 mov     edx, [edx]
.text:003629E2                 mov     ecx, [ebp-74h]
.text:003629E5                 shl     eax, 2
.text:003629E8                 push    0
.text:003629EA                 push    eax
.text:003629EB                 call    sub_13C0AF0
.text:003629EB
.text:003629F0                 mov     edx, [ebp-54h]
.text:003629F3                 add     esp, 8
.text:003629F6                 mov     eax, [ebp-4Ch]
.text:003629F9                 lea     ecx, [edx+edx]
.text:003629FC                 mov     [eax+4], ecx
.text:003629FF                 mov     [eax], edi
.text:003629FF
.text:00362A01
.text:00362A01 loc_362A01:                             ; CODE XREF: sub_360480+2461↑j
.text:00362A01                                         ; sub_360480+246C↑j
.text:00362A01                 mov     edi, [ebp-64h]
.text:00362A01
.text:00362A04
.text:00362A04 loc_362A04:                             ; CODE XREF: sub_360480+2380↑j
.text:00362A04                                         ; sub_360480+238C↑j
.text:00362A04                 mov     eax, [ebp-2Ch]
.text:00362A07                 mov     [eax], esi
.text:00362A09                 mov     esi, [ebp-74h]
.text:00362A0C                 mov     dword ptr [eax+0Ch], 5
.text:00362A13                 add     dword ptr [esi+18h], 10h
.text:00362A17                 mov     eax, ds:off_2F43004
.text:00362A1C                 mov     ecx, [ebx+4]
.text:00362A1F                 sub     ecx, eax
.text:00362A21                 cmp     ecx, ds:off_2F43000
.text:00362A27                 jb      short loc_362A42
.text:00362A27
.text:00362A29                 mov     eax, ds:lpAddress
.text:00362A2E                 mov     ecx, [ebx+4]
.text:00362A31                 sub     ecx, eax
.text:00362A33                 cmp     ecx, ds:dwSize
.text:00362A39                 jb      short loc_362A42
.text:00362A39
.text:00362A3B                 mov     ecx, esi
.text:00362A3D                 call    retcheck
.text:00362A3D
.text:00362A42
.text:00362A42 loc_362A42:                             ; CODE XREF: sub_360480+25A7↑j
.text:00362A42                                         ; sub_360480+25B9↑j
.text:00362A42                 mov     eax, [ebx+0Ch]
.text:00362A45                 mov     ecx, [edi]
.text:00362A47                 mov     eax, [eax]
.text:00362A49                 mov     [ebp-2Ch], eax
.text:00362A4C                 mov     eax, ecx
.text:00362A4E                 sub     eax, edi
.text:00362A50                 sub     ecx, esi
.text:00362A52                 mov     eax, [eax+38h]
.text:00362A55                 cmp     eax, [ecx+2Ch]
.text:00362A58                 jb      short loc_362A63
.text:00362A58
.text:00362A5A                 mov     dl, 1
.text:00362A5C                 mov     ecx, esi
.text:00362A5E                 call    sub_1376710
.text:00362A5E
.text:00362A63
.text:00362A63 loc_362A63:                             ; CODE XREF: sub_360480+25D8↑j
.text:00362A63                 test    byte ptr [esi+5], 2
.text:00362A67                 jz      short loc_362A70
.text:00362A67
.text:00362A69                 mov     ecx, esi
.text:00362A6B                 call    sub_1376B90
.text:00362A6B
.text:00362A70
.text:00362A70 loc_362A70:                             ; CODE XREF: sub_360480+25E7↑j
.text:00362A70                 mov     ecx, esi
.text:00362A72                 call    sub_1318BB0
.text:00362A72
.text:00362A77                 mov     edi, [edi]
.text:00362A79                 movsx   edx, byte_2AB8E28
.text:00362A80                 mov     [ebp-54h], eax
.text:00362A83                 mov     al, [esi+4]
.text:00362A86                 mov     [ebp-1], al
.text:00362A89                 lea     eax, [esi+8]
.text:00362A8C                 sub     edi, eax
.text:00362A8E                 test    edx, edx
.text:00362A90                 js      short loc_362A9B
.text:00362A90
.text:00362A92                 call    loc_13C09C0
.text:00362A92
.text:00362A97                 mov     esi, eax
.text:00362A99                 jmp     short loc_362ABB
.text:00362A99
.text:00362A9B ; ---------------------------------------------------------------------------
.text:00362A9B
.text:00362A9B loc_362A9B:                             ; CODE XREF: sub_360480+2610↑j
.text:00362A9B                 push    1
.text:00362A9D                 push    20h ; ' '
.text:00362A9F                 push    48h ; 'H'
.text:00362AA1                 lea     edx, [edi+13Ch]
.text:00362AA7                 call    sub_13C07B0
.text:00362AA7
.text:00362AAC                 add     esp, 0Ch
.text:00362AAF                 mov     ecx, [eax+14h]
.text:00362AB2                 lea     esi, [eax+28h]
.text:00362AB5                 sub     [eax+1Ch], ecx
.text:00362AB8                 inc     dword ptr [eax+20h]
.text:00362AB8
.text:00362ABB
.text:00362ABB loc_362ABB:                             ; CODE XREF: sub_360480+2619↑j
.text:00362ABB                 test    esi, esi
.text:00362ABD                 jz      loc_3760A9
.text:00362ABD
.text:00362AC3                 movzx   eax, byte ptr [ebp-1]
.text:00362AC7                 mov     edx, esi
.text:00362AC9                 add     dword ptr [edi+38h], 20h ; ' '
.text:00362ACD                 push    8
.text:00362ACF                 add     dword ptr [edi+eax*4+144h], 20h ; ' '
.text:00362AD7                 mov     edi, [ebp-74h]
.text:00362ADA                 mov     ecx, edi
.text:00362ADC                 call    sub_1376B60
.text:00362ADC
.text:00362AE1                 mov     eax, [ebp-54h]
.text:00362AE4                 lea     ecx, [esi+14h]
.text:00362AE7                 mov     byte ptr [esi+3], 1
.text:00362AEB                 add     esp, 4
.text:00362AEE                 mov     [esi+0Ch], eax
.text:00362AF1                 mov     eax, [ebp-2Ch]
.text:00362AF4                 mov     byte ptr [esi+4], 0
.text:00362AF8                 add     eax, 10h
.text:00362AFB                 mov     byte ptr [esi+5], 14h
.text:00362AFF                 add     eax, esi
.text:00362B01                 mov     byte ptr [esi+6], 0
.text:00362B05                 mov     [esi+10h], eax
.text:00362B08                 lea     eax, [esi+18h]
.text:00362B0B                 mov     [ecx], ecx
.text:00362B0D                 neg     eax
.text:00362B0F                 mov     [esi+18h], eax
.text:00362B12                 mov     eax, [edi+18h]
.text:00362B15                 mov     [eax], esi
.text:00362B17                 mov     dword ptr [eax+0Ch], 8
.text:00362B1E                 add     dword ptr [edi+18h], 10h
.text:00362B22                 mov     eax, ds:off_2F43004
.text:00362B27                 mov     ecx, [ebx+4]
.text:00362B2A                 sub     ecx, eax
.text:00362B2C                 cmp     ecx, ds:off_2F43000
.text:00362B32                 jb      short loc_362B4D
.text:00362B32
.text:00362B34                 mov     eax, ds:lpAddress
.text:00362B39                 mov     ecx, [ebx+4]
.text:00362B3C                 sub     ecx, eax
.text:00362B3E                 cmp     ecx, ds:dwSize
.text:00362B44                 jb      short loc_362B4D
.text:00362B44
.text:00362B46                 mov     ecx, edi
.text:00362B48                 call    retcheck
.text:00362B48
.text:00362B4D
.text:00362B4D loc_362B4D:                             ; CODE XREF: sub_360480+26B2↑j
.text:00362B4D                                         ; sub_360480+26C4↑j
.text:00362B4D                 mov     eax, [edi+18h]
.text:00362B50                 mov     [ebp-2Ch], eax
.text:00362B53                 mov     dword ptr [ebp-58h], 0
.text:00362B5A                 lea     ecx, [eax-10h]
.text:00362B5D                 lea     edi, [eax-20h]
.text:00362B60                 mov     [ebp-54h], ecx
.text:00362B63                 lea     edx, [eax-30h]
.text:00362B66                 mov     [ebp-50h], edi
.text:00362B69                 mov     [ebp-4Ch], edx
.text:00362B6C                 nop     dword ptr [eax+00h]
.text:00362B6C
.text:00362B70
.text:00362B70 loc_362B70:                             ; CODE XREF: sub_360480+4132↓j
.text:00362B70                 mov     ecx, [edx+0Ch]
.text:00362B73                 cmp     ecx, 6
.text:00362B76                 jnz     loc_3644EB
.text:00362B76
.text:00362B7C                 mov     esi, [edx]
.text:00362B7E                 mov     [ebp-14h], esi
.text:00362B81                 cmp     byte ptr [esi+7], 0
.text:00362B85                 jnz     loc_3761BE
.text:00362B85
.text:00362B8B                 mov     edx, [eax-14h]
.text:00362B8E                 mov     eax, edx
.text:00362B90                 sub     eax, 0
.text:00362B93                 jz      loc_362F4D
.text:00362B93
.text:00362B99                 movaps  xmm3, xmmword_2C87C80
.text:00362BA0                 sub     eax, 4
.text:00362BA3                 jz      loc_362C45
.text:00362BA3
.text:00362BA9                 sub     eax, 1
.text:00362BAC                 jnz     loc_362D36
.text:00362BAC
.text:00362BB2                 mov     eax, [edi]
.text:00362BB4                 lea     edx, [esi+14h]
.text:00362BB7                 mov     cl, [esi+5]
.text:00362BBA                 mov     edi, 1
.text:00362BBF                 mov     [ebp-24h], eax
.text:00362BC2                 add     eax, 0Ch
.text:00362BC5                 shl     edi, cl
.text:00362BC7                 dec     edi
.text:00362BC8                 sub     eax, [eax]
.text:00362BCA                 and     edi, eax
.text:00362BCC                 shl     edi, 5
.text:00362BCF                 sub     edi, edx
.text:00362BD1                 add     edi, [edx]
.text:00362BD3                 mov     edx, [ebp-24h]
.text:00362BD3
.text:00362BD6
.text:00362BD6 loc_362BD6:                             ; CODE XREF: sub_360480+2773↓j
.text:00362BD6                 mov     ecx, [edi+1Ch]
.text:00362BD9                 mov     eax, ecx
.text:00362BDB                 and     eax, 0Fh
.text:00362BDE                 cmp     al, 5
.text:00362BE0                 jnz     short loc_362BE7
.text:00362BE0
.text:00362BE2                 cmp     [edi+10h], edx
.text:00362BE5                 jz      short loc_362BFA ; jumptable 00362EE9 case 0
.text:00362BE5
.text:00362BE7
.text:00362BE7 loc_362BE7:                             ; CODE XREF: sub_360480+2760↑j
.text:00362BE7                 sar     ecx, 4
.text:00362BEA                 test    ecx, ecx
.text:00362BEC                 jz      short loc_362BF5
.text:00362BEC
.text:00362BEE                 shl     ecx, 5
.text:00362BF1                 add     edi, ecx
.text:00362BF3                 jmp     short loc_362BD6
.text:00362BF3
.text:00362BF5 ; ---------------------------------------------------------------------------
.text:00362BF5
.text:00362BF5 loc_362BF5:                             ; CODE XREF: sub_360480+276C↑j
.text:00362BF5                                         ; sub_360480+2813↓j ...
.text:00362BF5                 mov     edi, offset luao_nilobject
.text:00362BF5
.text:00362BFA
.text:00362BFA loc_362BFA:                             ; CODE XREF: sub_360480+2765↑j
.text:00362BFA                                         ; sub_360480+27FE↓j ...
.text:00362BFA                 mov     byte ptr [esi+6], 0 ; jumptable 00362EE9 case 0
.text:00362BFE                 cmp     edi, offset luao_nilobject
.text:00362C04                 jnz     loc_364434
.text:00362C04
.text:00362C0A
.text:00362C0A loc_362C0A:                             ; CODE XREF: sub_360480+2AC8↓j
.text:00362C0A                 mov     edi, [ebp-50h]
.text:00362C0A
.text:00362C0D
.text:00362C0D loc_362C0D:                             ; CODE XREF: sub_360480+2AD1↓j
.text:00362C0D                 mov     ecx, [ebp-2Ch]
.text:00362C10                 mov     eax, [ecx-14h]
.text:00362C13                 test    eax, eax
.text:00362C15                 jz      loc_3761A6
.text:00362C15
.text:00362C1B                 cmp     eax, 4
.text:00362C1E                 jnz     loc_362F56
.text:00362C1E
.text:00362C24                 movsd   xmm1, qword ptr [edi]
.text:00362C28                 movaps  xmm2, xmmword_2C87C80
.text:00362C2F                 xorps   xmm1, xmm2
.text:00362C32                 ucomisd xmm1, xmm1
.text:00362C36                 lahf
.text:00362C37                 test    ah, 44h
.text:00362C3A                 jp      loc_376146
.text:00362C3A
.text:00362C40                 jmp     loc_362F74
.text:00362C40
.text:00362C45 ; ---------------------------------------------------------------------------
.text:00362C45
.text:00362C45 loc_362C45:                             ; CODE XREF: sub_360480+2723↑j
.text:00362C45                 movsd   xmm1, qword ptr [edi]
.text:00362C49                 xorps   xmm1, xmm3
.text:00362C4C                 cvttsd2si ecx, xmm1
.text:00362C50                 movd    xmm2, ecx
.text:00362C54                 cvtdq2pd xmm2, xmm2
.text:00362C58                 ucomisd xmm2, xmm1
.text:00362C5C                 lahf
.text:00362C5D                 test    ah, 44h
.text:00362C60                 jp      loc_362D36
.text:00362C60
.text:00362C66                 lea     eax, [ecx-1]
.text:00362C69                 cmp     eax, [esi+8]
.text:00362C6C                 jnb     short loc_362C83
.text:00362C6C
.text:00362C6E                 mov     edi, [esi+18h]
.text:00362C71                 lea     eax, [esi+18h]
.text:00362C74                 shl     ecx, 4
.text:00362C77                 add     edi, 0FFFFFFF0h
.text:00362C7A                 sub     ecx, eax
.text:00362C7C                 add     edi, ecx
.text:00362C7E                 jmp     loc_362BFA      ; jumptable 00362EE9 case 0
.text:00362C7E
.text:00362C83 ; ---------------------------------------------------------------------------
.text:00362C83
.text:00362C83 loc_362C83:                             ; CODE XREF: sub_360480+27EC↑j
.text:00362C83                 mov     eax, [esi+14h]
.text:00362C86                 lea     ecx, [esi+14h]
.text:00362C89                 mov     [ebp-24h], eax
.text:00362C8C                 sub     eax, ecx
.text:00362C8E                 cmp     eax, offset dword_1EA0808
.text:00362C93                 jz      loc_362BF5
.text:00362C93
.text:00362C99                 movsd   qword ptr [ebp-0E0h], xmm2
.text:00362CA1                 mov     edi, 1
.text:00362CA6                 mov     ecx, [ebp-0DCh]
.text:00362CAC                 and     ecx, 7FFFFFFFh
.text:00362CB2                 mov     eax, ecx
.text:00362CB4                 shr     eax, 12h
.text:00362CB7                 xor     eax, [ebp-0E0h]
.text:00362CBD                 imul    esi, eax, 5BD1E995h
.text:00362CC3                 mov     eax, esi
.text:00362CC5                 shr     eax, 16h
.text:00362CC8                 xor     eax, ecx
.text:00362CCA                 imul    edx, eax, 5BD1E995h
.text:00362CD0                 mov     eax, [ebp-14h]
.text:00362CD3                 mov     cl, [eax+5]
.text:00362CD6                 mov     eax, edx
.text:00362CD8                 shr     eax, 11h
.text:00362CDB                 xor     eax, esi
.text:00362CDD                 shl     edi, cl
.text:00362CDF                 mov     esi, [ebp-14h]
.text:00362CE2                 dec     edi
.text:00362CE3                 imul    eax, 5BD1E995h
.text:00362CE9                 shr     eax, 13h
.text:00362CEC                 xor     eax, edx
.text:00362CEE                 imul    eax, 5BD1E995h
.text:00362CF4                 and     edi, eax
.text:00362CF6                 mov     eax, [ebp-24h]
.text:00362CF9                 shl     edi, 5
.text:00362CFC                 add     eax, 0FFFFFFECh
.text:00362CFF                 sub     edi, esi
.text:00362D01                 add     edi, eax
.text:00362D01
.text:00362D03
.text:00362D03 loc_362D03:                             ; CODE XREF: sub_360480+28B4↓j
.text:00362D03                 mov     ecx, [edi+1Ch]
.text:00362D06                 mov     eax, ecx
.text:00362D08                 and     al, 0Fh
.text:00362D0A                 cmp     al, 4
.text:00362D0C                 jnz     short loc_362D24
.text:00362D0C
.text:00362D0E                 movsd   xmm1, qword ptr [edi+10h]
.text:00362D13                 xorps   xmm1, xmm3
.text:00362D16                 ucomisd xmm1, xmm2
.text:00362D1A                 lahf
.text:00362D1B                 test    ah, 44h
.text:00362D1E                 jnp     loc_362BFA      ; jumptable 00362EE9 case 0
.text:00362D1E
.text:00362D24
.text:00362D24 loc_362D24:                             ; CODE XREF: sub_360480+288C↑j
.text:00362D24                 sar     ecx, 4
.text:00362D27                 test    ecx, ecx
.text:00362D29                 jz      loc_362BF5
.text:00362D29
.text:00362D2F                 shl     ecx, 5
.text:00362D32                 add     edi, ecx
.text:00362D34                 jmp     short loc_362D03
.text:00362D34
.text:00362D36 ; ---------------------------------------------------------------------------
.text:00362D36
.text:00362D36 loc_362D36:                             ; CODE XREF: sub_360480+272C↑j
.text:00362D36                                         ; sub_360480+27E0↑j
.text:00362D36                 lea     eax, [edx-1]    ; switch 5 cases
.text:00362D39                 cmp     eax, 4
.text:00362D3C                 ja      def_362D42      ; jumptable 00362D42 default case, case 2
.text:00362D3C
.text:00362D42                 jmp     ds:jpt_362D42[eax*4] ; switch jump
.text:00362D42
.text:00362D49 ; ---------------------------------------------------------------------------
.text:00362D49
.text:00362D49 loc_362D49:                             ; CODE XREF: sub_360480+28C2↑j
.text:00362D49                                         ; DATA XREF: .text:jpt_362D42↓o
.text:00362D49                 movsd   xmm1, qword ptr [edi] ; jumptable 00362D42 case 4
.text:00362D4D                 xorps   xmm1, xmm3
.text:00362D50                 movsd   qword ptr [ebp-20h], xmm1
.text:00362D55                 mov     ecx, [ebp-1Ch]
.text:00362D58                 and     ecx, 7FFFFFFFh
.text:00362D5E                 mov     eax, ecx
.text:00362D60                 shr     eax, 12h
.text:00362D63                 xor     eax, [ebp-20h]
.text:00362D66                 imul    esi, eax, 5BD1E995h
.text:00362D6C                 mov     eax, esi
.text:00362D6E                 shr     eax, 16h
.text:00362D71                 xor     eax, ecx
.text:00362D73                 mov     ecx, [ebp-14h]
.text:00362D76                 imul    edx, eax, 5BD1E995h
.text:00362D7C                 mov     eax, 1
.text:00362D81                 lea     edi, [ecx+14h]
.text:00362D84                 mov     cl, [ecx+5]
.text:00362D87                 shl     eax, cl
.text:00362D89                 mov     [ebp-24h], eax
.text:00362D8C                 mov     ecx, eax
.text:00362D8E                 mov     eax, edx
.text:00362D90                 dec     ecx
.text:00362D91                 shr     eax, 11h
.text:00362D94                 xor     eax, esi
.text:00362D96                 imul    eax, 5BD1E995h
.text:00362D9C                 shr     eax, 13h
.text:00362D9F                 xor     eax, edx
.text:00362DA1                 imul    eax, 5BD1E995h
.text:00362DA7                 and     ecx, eax
.text:00362DA9                 shl     ecx, 5
.text:00362DAC                 sub     ecx, edi
.text:00362DAE                 add     ecx, [edi]
.text:00362DB0                 mov     [ebp-24h], ecx
.text:00362DB3                 mov     edi, ecx
.text:00362DB5                 jmp     loc_362EC6
.text:00362DB5
.text:00362DBA ; ---------------------------------------------------------------------------
.text:00362DBA
.text:00362DBA loc_362DBA:                             ; CODE XREF: sub_360480+28C2↑j
.text:00362DBA                                         ; DATA XREF: .text:jpt_362D42↓o
.text:00362DBA                 movq    xmm0, qword ptr [edi] ; jumptable 00362D42 case 3
.text:00362DBE                 xor     eax, eax
.text:00362DC0                 mov     edx, [edi+8]
.text:00362DC3                 movq    qword ptr [ebp-1F8h], xmm0
.text:00362DCB                 mov     ecx, [ebp-1F8h]
.text:00362DD1                 cmp     ecx, 8000000h
.text:00362DD7                 cmovz   ecx, eax
.text:00362DDA                 mov     eax, [ebp-1F4h]
.text:00362DE0                 xor     esi, esi
.text:00362DE2                 cmp     eax, 8000000h
.text:00362DE7                 cmovz   eax, esi
.text:00362DEA                 cmp     edx, 8000000h
.text:00362DF0                 cmovz   edx, esi
.text:00362DF3                 mov     esi, ecx
.text:00362DF5                 shr     esi, 11h
.text:00362DF8                 xor     esi, ecx
.text:00362DFA                 mov     ecx, eax
.text:00362DFC                 shr     ecx, 11h
.text:00362DFF                 xor     ecx, eax
.text:00362E01                 mov     [ebp-1F8h], esi
.text:00362E07                 mov     eax, edx
.text:00362E09                 imul    edi, ecx, 127409Fh
.text:00362E0F                 shr     eax, 11h
.text:00362E12                 xor     eax, edx
.text:00362E14                 mov     [ebp-1F4h], ecx
.text:00362E1A                 mov     edx, [ebp-14h]
.text:00362E1D                 mov     [ebp-1F0h], eax
.text:00362E23                 add     edx, 14h
.text:00362E26                 imul    eax, 4F9FFB7h
.text:00362E2C                 xor     edi, eax
.text:00362E2E                 imul    eax, esi, 466F45Dh
.text:00362E34                 mov     esi, [ebp-14h]
.text:00362E37                 mov     cl, [esi+5]
.text:00362E3A                 xor     edi, eax
.text:00362E3C                 mov     eax, 1
.text:00362E41                 shl     eax, cl
.text:00362E43                 dec     eax
.text:00362E44                 and     edi, eax
.text:00362E46                 shl     edi, 5
.text:00362E49                 sub     edi, edx
.text:00362E4B                 add     edi, [edx]
.text:00362E4D                 jmp     short loc_362EC6
.text:00362E4D
.text:00362E4F ; ---------------------------------------------------------------------------
.text:00362E4F
.text:00362E4F loc_362E4F:                             ; CODE XREF: sub_360480+28C2↑j
.text:00362E4F                                         ; DATA XREF: .text:jpt_362D42↓o
.text:00362E4F                 mov     eax, [edi]      ; jumptable 00362D42 case 5
.text:00362E51                 lea     edx, [esi+14h]
.text:00362E54                 mov     cl, [esi+5]
.text:00362E57                 add     eax, 0Ch
.text:00362E5A                 mov     edi, 1
.text:00362E5F                 shl     edi, cl
.text:00362E61                 dec     edi
.text:00362E62                 sub     eax, [eax]
.text:00362E64                 and     edi, eax
.text:00362E66                 shl     edi, 5
.text:00362E69                 sub     edi, edx
.text:00362E6B                 add     edi, [edx]
.text:00362E6D                 jmp     short loc_362EC6
.text:00362E6D
.text:00362E6F ; ---------------------------------------------------------------------------
.text:00362E6F
.text:00362E6F loc_362E6F:                             ; CODE XREF: sub_360480+28C2↑j
.text:00362E6F                                         ; DATA XREF: .text:jpt_362D42↓o
.text:00362E6F                 mov     cl, [esi+5]     ; jumptable 00362D42 case 1
.text:00362E72                 lea     eax, [esi+14h]
.text:00362E75                 mov     edx, [ebp-50h]
.text:00362E78                 mov     edi, 1
.text:00362E7D                 shl     edi, cl
.text:00362E7F                 dec     edi
.text:00362E80                 and     edi, [edx]
.text:00362E82                 shl     edi, 5
.text:00362E85                 sub     edi, eax
.text:00362E87                 add     edi, [eax]
.text:00362E89                 jmp     short loc_362ED0
.text:00362E89
.text:00362E8B ; ---------------------------------------------------------------------------
.text:00362E8B
.text:00362E8B def_362D42:                             ; CODE XREF: sub_360480+28BC↑j
.text:00362E8B                                         ; sub_360480+28C2↑j
.text:00362E8B                                         ; DATA XREF: ...
.text:00362E8B                 mov     ecx, [edi]      ; jumptable 00362D42 default case, case 2
.text:00362E8D                 add     esi, 14h
.text:00362E90                 shr     ecx, 10h
.text:00362E93                 xor     ecx, [edi]
.text:00362E95                 mov     edi, 1
.text:00362E9A                 imul    ecx, 85EBCA6Bh
.text:00362EA0                 mov     eax, ecx
.text:00362EA2                 shr     eax, 0Dh
.text:00362EA5                 xor     eax, ecx
.text:00362EA7                 imul    edx, eax, 0C2B2AE35h
.text:00362EAD                 mov     eax, [ebp-14h]
.text:00362EB0                 mov     cl, [eax+5]
.text:00362EB3                 mov     eax, edx
.text:00362EB5                 shl     edi, cl
.text:00362EB7                 shr     eax, 10h
.text:00362EBA                 dec     edi
.text:00362EBB                 xor     eax, edx
.text:00362EBD                 and     edi, eax
.text:00362EBF                 shl     edi, 5
.text:00362EC2                 sub     edi, esi
.text:00362EC4                 add     edi, [esi]
.text:00362EC4
.text:00362EC6
.text:00362EC6 loc_362EC6:                             ; CODE XREF: sub_360480+2935↑j
.text:00362EC6                                         ; sub_360480+29CD↑j ...
.text:00362EC6                 mov     edx, [ebp-50h]
.text:00362EC9                 nop     dword ptr [eax+00000000h]
.text:00362EC9
.text:00362ED0
.text:00362ED0 loc_362ED0:                             ; CODE XREF: sub_360480+2A09↑j
.text:00362ED0                                         ; sub_360480+2AC2↓j
.text:00362ED0                 mov     esi, [ebp-2Ch]
.text:00362ED3                 lea     ecx, [edi+10h]
.text:00362ED6                 mov     eax, [ecx+0Ch]
.text:00362ED9                 and     eax, 0Fh
.text:00362EDC                 cmp     eax, [esi-14h]
.text:00362EDF                 mov     esi, [ebp-14h]
.text:00362EE2                 jnz     short loc_362F33
.text:00362EE2
.text:00362EE4                 cmp     eax, 4          ; switch 5 cases
.text:00362EE7                 ja      short def_362EE9 ; jumptable 00362EE9 default case, cases 1,2
.text:00362EE7
.text:00362EE9                 jmp     ds:jpt_362EE9[eax*4] ; switch jump
.text:00362EE9
.text:00362EF0 ; ---------------------------------------------------------------------------
.text:00362EF0
.text:00362EF0 loc_362EF0:                             ; CODE XREF: sub_360480+2A69↑j
.text:00362EF0                                         ; DATA XREF: .text:jpt_362EE9↓o
.text:00362EF0                 movsd   xmm2, qword ptr [ecx] ; jumptable 00362EE9 case 4
.text:00362EF4                 movsd   xmm1, qword ptr [edx]
.text:00362EF8                 xorps   xmm2, xmm3
.text:00362EFB                 xorps   xmm1, xmm3
.text:00362EFE                 ucomisd xmm2, xmm1
.text:00362F02                 lahf
.text:00362F03                 test    ah, 44h
.text:00362F06                 jnp     loc_362BFA      ; jumptable 00362EE9 case 0
.text:00362F06
.text:00362F0C                 jmp     short loc_362F33
.text:00362F0C
.text:00362F0E ; ---------------------------------------------------------------------------
.text:00362F0E
.text:00362F0E loc_362F0E:                             ; CODE XREF: sub_360480+2A69↑j
.text:00362F0E                                         ; DATA XREF: .text:jpt_362EE9↓o
.text:00362F0E                 call    sub_13180D0     ; jumptable 00362EE9 case 3
.text:00362F0E
.text:00362F13                 movaps  xmm3, xmmword_2C87C80
.text:00362F1A                 mov     edx, [ebp-50h]
.text:00362F1D                 movzx   ecx, al
.text:00362F20                 jmp     short loc_362F2B
.text:00362F20
.text:00362F22 ; ---------------------------------------------------------------------------
.text:00362F22
.text:00362F22 def_362EE9:                             ; CODE XREF: sub_360480+2A67↑j
.text:00362F22                                         ; sub_360480+2A69↑j
.text:00362F22                                         ; DATA XREF: ...
.text:00362F22                 mov     eax, [ecx]      ; jumptable 00362EE9 default case, cases 1,2
.text:00362F24                 xor     ecx, ecx
.text:00362F26                 cmp     eax, [edx]
.text:00362F28                 setz    cl
.text:00362F28
.text:00362F2B
.text:00362F2B loc_362F2B:                             ; CODE XREF: sub_360480+2AA0↑j
.text:00362F2B                 test    ecx, ecx
.text:00362F2D                 jnz     loc_362BFA      ; jumptable 00362EE9 case 0
.text:00362F2D
.text:00362F33
.text:00362F33 loc_362F33:                             ; CODE XREF: sub_360480+2A62↑j
.text:00362F33                                         ; sub_360480+2A8C↑j
.text:00362F33                 mov     eax, [edi+1Ch]
.text:00362F36                 sar     eax, 4
.text:00362F39                 test    eax, eax
.text:00362F3B                 jz      short loc_362F44
.text:00362F3B
.text:00362F3D                 shl     eax, 5
.text:00362F40                 add     edi, eax
.text:00362F42                 jmp     short loc_362ED0
.text:00362F42
.text:00362F44 ; ---------------------------------------------------------------------------
.text:00362F44
.text:00362F44 loc_362F44:                             ; CODE XREF: sub_360480+2ABB↑j
.text:00362F44                 mov     byte ptr [esi+6], 0
.text:00362F48                 jmp     loc_362C0A
.text:00362F48
.text:00362F4D ; ---------------------------------------------------------------------------
.text:00362F4D
.text:00362F4D loc_362F4D:                             ; CODE XREF: sub_360480+2713↑j
.text:00362F4D                 mov     byte ptr [esi+6], 0
.text:00362F51                 jmp     loc_362C0D
.text:00362F51
.text:00362F56 ; ---------------------------------------------------------------------------
.text:00362F56
.text:00362F56 loc_362F56:                             ; CODE XREF: sub_360480+279E↑j
.text:00362F56                 cmp     eax, 3
.text:00362F59                 jnz     short loc_362F6D
.text:00362F59
.text:00362F5B                 mov     ecx, edi
.text:00362F5D                 call    sub_13B3E20
.text:00362F5D
.text:00362F62                 test    al, al
.text:00362F64                 jnz     loc_37615E
.text:00362F64
.text:00362F6A                 mov     ecx, [ebp-2Ch]
.text:00362F6A
.text:00362F6D
.text:00362F6D loc_362F6D:                             ; CODE XREF: sub_360480+2AD9↑j
.text:00362F6D                 movaps  xmm2, xmmword_2C87C80
.text:00362F6D
.text:00362F74
.text:00362F74 loc_362F74:                             ; CODE XREF: sub_360480+27C0↑j
.text:00362F74                 cmp     byte_2AB209C, 0
.text:00362F7B                 jz      loc_3637FD
.text:00362F7B
.text:00362F81                 cmp     dword ptr [ecx-14h], 4
.text:00362F85                 jnz     loc_3637FD
.text:00362F85
.text:00362F8B                 mov     eax, [esi+8]
.text:00362F8E                 movsd   xmm1, qword ptr [edi]
.text:00362F92                 inc     eax
.text:00362F93                 xorps   xmm1, xmm2
.text:00362F96                 movd    xmm0, eax
.text:00362F9A                 cvtdq2pd xmm0, xmm0
.text:00362F9E                 ucomisd xmm1, xmm0
.text:00362FA2                 lahf
.text:00362FA3                 test    ah, 44h
.text:00362FA6                 jp      loc_3637FD
.text:00362FA6
.text:00362FAC                 xorps   xmm0, xmm0
.text:00362FAF                 mov     dword ptr [ebp-948h], 0
.text:00362FB9                 lea     edx, [ebp-9B0h]
.text:00362FBF                 movaps  xmmword ptr [ebp-9B0h], xmm0
.text:00362FC6                 mov     ecx, esi
.text:00362FC8                 movaps  xmmword ptr [ebp-9A0h], xmm0
.text:00362FCF                 movaps  xmmword ptr [ebp-990h], xmm0
.text:00362FD6                 movaps  xmmword ptr [ebp-980h], xmm0
.text:00362FDD                 movaps  xmmword ptr [ebp-970h], xmm0
.text:00362FE4                 movaps  xmmword ptr [ebp-960h], xmm0
.text:00362FEB                 movq    qword ptr [ebp-950h], xmm0
.text:00362FF3                 call    sub_13B3F30
.text:00362FF3
.text:00362FF8                 mov     edi, eax
.text:00362FFA                 lea     edx, [ebp-9B0h]
.text:00363000                 lea     eax, [ebp-70h]
.text:00363003                 mov     [ebp-70h], edi
.text:00363006                 push    eax
.text:00363007                 mov     ecx, esi
.text:00363009                 call    sub_13B3FF0
.text:00363009
.text:0036300E                 add     edi, eax
.text:00363010                 add     esp, 4
.text:00363013                 mov     eax, [ebp-2Ch]
.text:00363016                 cmp     dword ptr [eax-14h], 4
.text:0036301A                 jnz     short loc_363036
.text:0036301A
.text:0036301C                 movsd   xmm1, qword ptr [eax-20h]
.text:00363021                 lea     ecx, [ebp-9B0h]
.text:00363027                 xorps   xmm1, xmmword_2C87C80
.text:0036302E                 call    sub_13B3EE0
.text:0036302E
.text:00363033                 add     [ebp-70h], eax
.text:00363033
.text:00363036
.text:00363036 loc_363036:                             ; CODE XREF: sub_360480+2B9A↑j
.text:00363036                 inc     edi
.text:00363037                 lea     edx, [ebp-70h]
.text:0036303A                 lea     ecx, [ebp-9B0h]
.text:00363040                 mov     [ebp-24h], edi
.text:00363043                 call    sub_13B3E70
.text:00363043
.text:00363048                 cmp     byte_2AB209C, 0
.text:0036304F                 mov     edi, [ebp-70h]
.text:00363052                 mov     [ebp-44h], eax
.text:00363055                 mov     [ebp-34h], edi
.text:00363058                 jz      loc_3631CB
.text:00363058
.text:0036305E                 mov     ecx, [esi+14h]
.text:00363061                 lea     edx, [esi+14h]
.text:00363064                 sub     ecx, edx
.text:00363066                 cmp     ecx, offset dword_1EA0808
.text:0036306C                 jnz     short loc_363077
.text:0036306C
.text:0036306E                 mov     byte ptr [ebp-1], 0
.text:00363072                 cmp     edi, [esi+8]
.text:00363075                 jge     short loc_36307B
.text:00363075
.text:00363077
.text:00363077 loc_363077:                             ; CODE XREF: sub_360480+2BEC↑j
.text:00363077                 mov     byte ptr [ebp-1], 1
.text:00363077
.text:0036307B
.text:0036307B loc_36307B:                             ; CODE XREF: sub_360480+2BF5↑j
.text:0036307B                 mov     ecx, [ebp-2Ch]
.text:0036307E                 movaps  xmm3, xmmword_2C87C80
.text:00363085                 cmp     dword ptr [ecx-14h], 4
.text:00363089                 jnz     short loc_3630AF
.text:00363089
.text:0036308B                 movsd   xmm1, qword ptr [ecx-20h]
.text:00363090                 xorps   xmm1, xmm3
.text:00363093                 cvttsd2si ecx, xmm1
.text:00363097                 mov     [ebp-3Ch], ecx
.text:0036309A                 movd    xmm0, ecx
.text:0036309E                 cvtdq2pd xmm0, xmm0
.text:003630A2                 ucomisd xmm0, xmm1
.text:003630A6                 lahf
.text:003630A7                 test    ah, 44h
.text:003630AA                 mov     eax, [ebp-44h]
.text:003630AD                 jnp     short loc_3630B6
.text:003630AD
.text:003630AF
.text:003630AF loc_3630AF:                             ; CODE XREF: sub_360480+2C09↑j
.text:003630AF                 mov     dword ptr [ebp-3Ch], 0FFFFFFFFh
.text:003630AF
.text:003630B6
.text:003630B6 loc_3630B6:                             ; CODE XREF: sub_360480+2C2D↑j
.text:003630B6                                         ; sub_360480+2D46↓j
.text:003630B6                 lea     ecx, [edi+1]
.text:003630B9                 mov     [ebp-30h], ecx
.text:003630BC                 cmp     ecx, [ebp-3Ch]
.text:003630BF                 jz      loc_3631BA
.text:003630BF
.text:003630C5                 cmp     byte ptr [ebp-1], 0
.text:003630C9                 jz      loc_3631CB
.text:003630C9
.text:003630CF                 lea     eax, [ecx-1]
.text:003630D2                 cmp     eax, [esi+8]
.text:003630D5                 jnb     short loc_3630EF
.text:003630D5
.text:003630D7                 mov     edx, [esi+18h]
.text:003630DA                 lea     eax, [esi+18h]
.text:003630DD                 shl     ecx, 4
.text:003630E0                 sub     ecx, eax
.text:003630E2                 add     ecx, 0FFFFFFF0h
.text:003630E5                 add     edx, ecx
.text:003630E7                 mov     ecx, [ebp-30h]
.text:003630EA                 jmp     loc_3631AE
.text:003630EA
.text:003630EF ; ---------------------------------------------------------------------------
.text:003630EF
.text:003630EF loc_3630EF:                             ; CODE XREF: sub_360480+2C55↑j
.text:003630EF                 mov     eax, [edx]
.text:003630F1                 sub     eax, edx
.text:003630F3                 cmp     eax, offset dword_1EA0808
.text:003630F8                 jz      loc_3631A9
.text:003630F8
.text:003630FE                 movd    xmm2, ecx
.text:00363102                 mov     edi, 1
.text:00363107                 cvtdq2pd xmm2, xmm2
.text:0036310B                 movsd   qword ptr [ebp-0E8h], xmm2
.text:00363113                 mov     ecx, [ebp-0E4h]
.text:00363119                 and     ecx, 7FFFFFFFh
.text:0036311F                 mov     eax, ecx
.text:00363121                 shr     eax, 12h
.text:00363124                 xor     eax, [ebp-0E8h]
.text:0036312A                 imul    esi, eax, 5BD1E995h
.text:00363130                 mov     eax, esi
.text:00363132                 shr     eax, 16h
.text:00363135                 xor     eax, ecx
.text:00363137                 imul    edx, eax, 5BD1E995h
.text:0036313D                 mov     eax, [ebp-14h]
.text:00363140                 mov     cl, [eax+5]
.text:00363143                 mov     eax, edx
.text:00363145                 shr     eax, 11h
.text:00363148                 xor     eax, esi
.text:0036314A                 shl     edi, cl
.text:0036314C                 mov     esi, [ebp-14h]
.text:0036314F                 dec     edi
.text:00363150                 imul    eax, 5BD1E995h
.text:00363156                 shr     eax, 13h
.text:00363159                 xor     eax, edx
.text:0036315B                 mov     edx, [esi+14h]
.text:0036315E                 imul    eax, 5BD1E995h
.text:00363164                 add     edx, 0FFFFFFECh
.text:00363167                 and     edi, eax
.text:00363169                 shl     edi, 5
.text:0036316C                 sub     edi, esi
.text:0036316E                 add     edx, edi
.text:0036316E
.text:00363170
.text:00363170 loc_363170:                             ; CODE XREF: sub_360480+2D19↓j
.text:00363170                 mov     ecx, [edx+1Ch]
.text:00363173                 mov     eax, ecx
.text:00363175                 and     al, 0Fh
.text:00363177                 cmp     al, 4
.text:00363179                 jnz     short loc_36318D
.text:00363179
.text:0036317B                 movsd   xmm1, qword ptr [edx+10h]
.text:00363180                 xorps   xmm1, xmm3
.text:00363183                 ucomisd xmm1, xmm2
.text:00363187                 lahf
.text:00363188                 test    ah, 44h
.text:0036318B                 jnp     short loc_36319B
.text:0036318B
.text:0036318D
.text:0036318D loc_36318D:                             ; CODE XREF: sub_360480+2CF9↑j
.text:0036318D                 sar     ecx, 4
.text:00363190                 test    ecx, ecx
.text:00363192                 jz      short loc_3631A3
.text:00363192
.text:00363194                 shl     ecx, 5
.text:00363197                 add     edx, ecx
.text:00363199                 jmp     short loc_363170
.text:00363199
.text:0036319B ; ---------------------------------------------------------------------------
.text:0036319B
.text:0036319B loc_36319B:                             ; CODE XREF: sub_360480+2D0B↑j
.text:0036319B                 mov     edi, [ebp-34h]
.text:0036319E                 mov     ecx, [ebp-30h]
.text:003631A1                 jmp     short loc_3631AE
.text:003631A1
.text:003631A3 ; ---------------------------------------------------------------------------
.text:003631A3
.text:003631A3 loc_3631A3:                             ; CODE XREF: sub_360480+2D12↑j
.text:003631A3                 mov     edi, [ebp-34h]
.text:003631A6                 mov     ecx, [ebp-30h]
.text:003631A6
.text:003631A9
.text:003631A9 loc_3631A9:                             ; CODE XREF: sub_360480+2C78↑j
.text:003631A9                 mov     edx, offset luao_nilobject
.text:003631A9
.text:003631AE
.text:003631AE loc_3631AE:                             ; CODE XREF: sub_360480+2C6A↑j
.text:003631AE                                         ; sub_360480+2D21↑j
.text:003631AE                 cmp     dword ptr [edx+0Ch], 0
.text:003631B2                 jz      short loc_3631CB
.text:003631B2
.text:003631B4                 mov     eax, [ebp-44h]
.text:003631B7                 lea     edx, [esi+14h]
.text:003631B7
.text:003631BA
.text:003631BA loc_3631BA:                             ; CODE XREF: sub_360480+2C3F↑j
.text:003631BA                 mov     edi, ecx
.text:003631BC                 inc     eax
.text:003631BD                 mov     [ebp-34h], edi
.text:003631C0                 mov     [ebp-70h], edi
.text:003631C3                 mov     [ebp-44h], eax
.text:003631C6                 jmp     loc_3630B6
.text:003631C6
.text:003631CB ; ---------------------------------------------------------------------------
.text:003631CB
.text:003631CB loc_3631CB:                             ; CODE XREF: sub_360480+2BD8↑j
.text:003631CB                                         ; sub_360480+2C49↑j ...
.text:003631CB                 mov     eax, [ebp-24h]
.text:003631CE                 sub     eax, [ebp-44h]
.text:003631D1                 mov     [ebp-24h], eax
.text:003631D4                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:003631DA                 jg      loc_37618E
.text:003631DA
.text:003631E0                 cmp     eax, (offset dword_3FFF948+6B8h)
.text:003631E5                 jg      loc_37618E
.text:003631E5
.text:003631EB                 movzx   ecx, byte ptr [esi+5]
.text:003631EF                 mov     edx, [esi+8]
.text:003631F2                 mov     [ebp-44h], edx
.text:003631F5                 mov     edx, [esi+14h]
.text:003631F8                 mov     [ebp-3Ch], ecx
.text:003631FB                 lea     ecx, [esi+14h]
.text:003631FE                 sub     edx, ecx
.text:00363200                 mov     [ebp-30h], ecx
.text:00363203                 mov     [ebp-10h], edx
.text:00363206                 mov     edx, [ebp-44h]
.text:00363209                 cmp     edi, edx
.text:0036320B                 jle     loc_363397
.text:0036320B
.text:00363211                 mov     al, [esi+1]
.text:00363214                 mov     [ebp-1], al
.text:00363217                 cmp     edi, 0FFFFFFFh
.text:0036321D                 ja      loc_376089
.text:0036321D
.text:00363223                 mov     eax, edx
.text:00363225                 mov     ecx, edi
.text:00363227                 shl     eax, 4
.text:0036322A                 lea     edx, [esi+18h]
.text:0036322D                 mov     [ebp-0Ch], eax
.text:00363230                 mov     eax, [edx]
.text:00363232                 sub     eax, edx
.text:00363234                 shl     ecx, 4
.text:00363237                 mov     [ebp-38h], eax
.text:0036323A                 mov     eax, [ebp-64h]
.text:0036323D                 mov     [ebp-8], ecx
.text:00363240                 mov     edx, [eax]
.text:00363242                 sub     edx, eax
.text:00363244                 lea     eax, [ecx-1]
.text:00363247                 mov     [ebp-5Ch], edx
.text:0036324A                 cmp     eax, 200h
.text:0036324F                 jnb     short loc_36325D
.text:0036324F
.text:00363251                 movsx   eax, byte_2AB8E08[ecx]
.text:00363258                 mov     [ebp-60h], eax
.text:0036325B                 jmp     short loc_363264
.text:0036325B
.text:0036325D ; ---------------------------------------------------------------------------
.text:0036325D
.text:0036325D loc_36325D:                             ; CODE XREF: sub_360480+2DCF↑j
.text:0036325D                 mov     dword ptr [ebp-60h], 0FFFFFFFFh
.text:0036325D
.text:00363264
.text:00363264 loc_363264:                             ; CODE XREF: sub_360480+2DDB↑j
.text:00363264                 mov     eax, [ebp-0Ch]
.text:00363267                 dec     eax
.text:00363268                 cmp     eax, 200h
.text:0036326D                 jnb     short loc_36327B
.text:0036326D
.text:0036326F                 mov     eax, [ebp-0Ch]
.text:00363272                 movsx   eax, byte_2AB8E08[eax]
.text:00363279                 jmp     short loc_36327E
.text:00363279
.text:0036327B ; ---------------------------------------------------------------------------
.text:0036327B
.text:0036327B loc_36327B:                             ; CODE XREF: sub_360480+2DED↑j
.text:0036327B                 or      eax, 0FFFFFFFFh
.text:0036327B
.text:0036327E
.text:0036327E loc_36327E:                             ; CODE XREF: sub_360480+2DF9↑j
.text:0036327E                 cmp     dword ptr [ebp-60h], 0
.text:00363282                 mov     [ebp-1Ch], eax
.text:00363285                 jge     short loc_3632C6
.text:00363285
.text:00363287                 test    eax, eax
.text:00363289                 mov     eax, [edx+0Ch]
.text:0036328C                 push    ecx
.text:0036328D                 jns     short loc_3632B8
.text:0036328D
.text:0036328F                 push    dword ptr [ebp-0Ch]
.text:00363292                 push    dword ptr [ebp-38h]
.text:00363295                 push    dword ptr [edx+10h]
.text:00363298                 call    eax
.text:00363298
.text:0036329A                 mov     ecx, [ebp-8]
.text:0036329D                 add     esp, 10h
.text:003632A0                 mov     [ebp-60h], eax
.text:003632A3                 test    eax, eax
.text:003632A5                 jnz     loc_36333B
.text:003632A5
.text:003632AB                 test    ecx, ecx
.text:003632AD                 jnz     loc_3760A9
.text:003632AD
.text:003632B3                 jmp     loc_36333B
.text:003632B3
.text:003632B8 ; ---------------------------------------------------------------------------
.text:003632B8
.text:003632B8 loc_3632B8:                             ; CODE XREF: sub_360480+2E0D↑j
.text:003632B8                 push    0
.text:003632BA                 push    0
.text:003632BC                 push    dword ptr [edx+10h]
.text:003632BF                 call    eax
.text:003632BF
.text:003632C1                 add     esp, 10h
.text:003632C4                 jmp     short loc_3632D1
.text:003632C4
.text:003632C6 ; ---------------------------------------------------------------------------
.text:003632C6
.text:003632C6 loc_3632C6:                             ; CODE XREF: sub_360480+2E05↑j
.text:003632C6                 mov     edx, [ebp-60h]
.text:003632C9                 mov     ecx, [ebp-74h]
.text:003632CC                 call    sub_13C08C0
.text:003632CC
.text:003632D1
.text:003632D1 loc_3632D1:                             ; CODE XREF: sub_360480+2E44↑j
.text:003632D1                 mov     ecx, [ebp-8]
.text:003632D4                 mov     [ebp-60h], eax
.text:003632D7                 test    eax, eax
.text:003632D9                 jnz     short loc_3632E3
.text:003632D9
.text:003632DB                 test    ecx, ecx
.text:003632DD                 jnz     loc_3760A9
.text:003632DD
.text:003632E3
.text:003632E3 loc_3632E3:                             ; CODE XREF: sub_360480+2E59↑j
.text:003632E3                 mov     edx, [ebp-0Ch]
.text:003632E6                 test    edx, edx
.text:003632E8                 jz      short loc_36330B
.text:003632E8
.text:003632EA                 test    ecx, ecx
.text:003632EC                 jz      short loc_36330B
.text:003632EC
.text:003632EE                 cmp     edx, ecx
.text:003632F0                 mov     eax, edi
.text:003632F2                 cmovb   eax, [ebp-44h]
.text:003632F6                 shl     eax, 4
.text:003632F9                 push    eax
.text:003632FA                 push    dword ptr [ebp-38h]
.text:003632FD                 push    dword ptr [ebp-60h]
.text:00363300                 call    sub_1B7EE40
.text:00363300
.text:00363305                 mov     edx, [ebp-0Ch]
.text:00363308                 add     esp, 0Ch
.text:00363308
.text:0036330B
.text:0036330B loc_36330B:                             ; CODE XREF: sub_360480+2E68↑j
.text:0036330B                                         ; sub_360480+2E6C↑j
.text:0036330B                 mov     eax, [ebp-1Ch]
.text:0036330E                 test    eax, eax
.text:00363310                 js      short loc_363324
.text:00363310
.text:00363312                 push    dword ptr [ebp-38h]
.text:00363315                 mov     ecx, [ebp-74h]
.text:00363318                 mov     edx, eax
.text:0036331A                 call    sub_13C0A60
.text:0036331A
.text:0036331F                 add     esp, 4
.text:00363322                 jmp     short loc_363338
.text:00363322
.text:00363324 ; ---------------------------------------------------------------------------
.text:00363324
.text:00363324 loc_363324:                             ; CODE XREF: sub_360480+2E90↑j
.text:00363324                 mov     eax, [ebp-5Ch]
.text:00363327                 push    0
.text:00363329                 push    edx
.text:0036332A                 push    dword ptr [ebp-38h]
.text:0036332D                 push    dword ptr [eax+10h]
.text:00363330                 mov     eax, [eax+0Ch]
.text:00363333                 call    eax
.text:00363333
.text:00363335                 add     esp, 10h
.text:00363335
.text:00363338
.text:00363338 loc_363338:                             ; CODE XREF: sub_360480+2EA2↑j
.text:00363338                 mov     ecx, [ebp-8]
.text:00363338
.text:0036333B
.text:0036333B loc_36333B:                             ; CODE XREF: sub_360480+2E25↑j
.text:0036333B                                         ; sub_360480+2E33↑j
.text:0036333B                 mov     edx, [ebp-5Ch]
.text:0036333E                 mov     eax, ecx
.text:00363340                 sub     eax, [ebp-0Ch]
.text:00363343                 sub     ecx, [ebp-0Ch]
.text:00363346                 add     [edx+38h], eax
.text:00363349                 movzx   eax, byte ptr [ebp-1]
.text:0036334D                 add     [edx+eax*4+144h], ecx
.text:00363354                 mov     ecx, [ebp-60h]
.text:00363357                 add     ecx, 18h
.text:0036335A                 add     ecx, esi
.text:0036335C                 mov     [esi+18h], ecx
.text:0036335F                 sub     ecx, esi
.text:00363361                 mov     edx, [esi+8]
.text:00363364                 cmp     edx, edi
.text:00363366                 jge     short loc_36338E
.text:00363366
.text:00363368                 mov     eax, edx
.text:0036336A                 add     ecx, 0FFFFFFF4h
.text:0036336D                 shl     eax, 4
.text:00363370                 add     eax, ecx
.text:00363372                 mov     ecx, edi
.text:00363374                 sub     ecx, edx
.text:00363376                 db      66h, 66h
.text:00363376                 nop     word ptr [eax+eax+00000000h]
.text:00363376
.text:00363380
.text:00363380 loc_363380:                             ; CODE XREF: sub_360480+2F0C↓j
.text:00363380                 mov     dword ptr [eax], 0
.text:00363386                 lea     eax, [eax+10h]
.text:00363389                 sub     ecx, 1
.text:0036338C                 jnz     short loc_363380
.text:0036338C
.text:0036338E
.text:0036338E loc_36338E:                             ; CODE XREF: sub_360480+2EE6↑j
.text:0036338E                 mov     eax, [ebp-24h]
.text:00363391                 lea     ecx, [esi+14h]
.text:00363394                 mov     [esi+8], edi
.text:00363394
.text:00363397
.text:00363397 loc_363397:                             ; CODE XREF: sub_360480+2D8B↑j
.text:00363397                 test    eax, eax
.text:00363399                 jnz     short loc_3633AA
.text:00363399
.text:0036339B                 lea     eax, dword_1EA0808[ecx]
.text:003633A1                 mov     [ecx], eax
.text:003633A3                 xor     ecx, ecx
.text:003633A5                 jmp     loc_363492
.text:003633A5
.text:003633AA ; ---------------------------------------------------------------------------
.text:003633AA
.text:003633AA loc_3633AA:                             ; CODE XREF: sub_360480+2F19↑j
.text:003633AA                 dec     eax
.text:003633AB                 or      ecx, 0FFFFFFFFh
.text:003633AE                 cmp     eax, 100h
.text:003633B3                 jb      short loc_3633C2
.text:003633B3
.text:003633B5
.text:003633B5 loc_3633B5:                             ; CODE XREF: sub_360480+2F40↓j
.text:003633B5                 shr     eax, 8
.text:003633B8                 add     ecx, 8
.text:003633BB                 cmp     eax, 100h
.text:003633C0                 jnb     short loc_3633B5
.text:003633C0
.text:003633C2
.text:003633C2 loc_3633C2:                             ; CODE XREF: sub_360480+2F33↑j
.text:003633C2                 movzx   eax, ds:byte_278DF30[eax]
.text:003633C9                 inc     eax
.text:003633CA                 add     eax, ecx
.text:003633CC                 mov     [ebp-1Ch], eax
.text:003633CF                 cmp     eax, 1Ah
.text:003633D2                 jg      loc_376176
.text:003633D2
.text:003633D8                 mov     ecx, eax
.text:003633DA                 mov     edx, 1
.text:003633DF                 mov     al, [esi+1]
.text:003633E2                 shl     edx, cl
.text:003633E4                 mov     [ebp-24h], edx
.text:003633E7                 mov     [ebp-1], al
.text:003633EA                 cmp     edx, 7FFFFFFh
.text:003633F0                 ja      loc_376089
.text:003633F0
.text:003633F6                 mov     eax, [ebp-64h]
.text:003633F9                 mov     ecx, edx
.text:003633FB                 shl     ecx, 5
.text:003633FE                 mov     [ebp-8], ecx
.text:00363401                 mov     edx, [eax]
.text:00363403                 sub     edx, eax
.text:00363405                 lea     eax, [ecx-1]
.text:00363408                 mov     [ebp-0Ch], edx
.text:0036340B                 cmp     eax, 200h
.text:00363410                 jnb     short loc_363429
.text:00363410
.text:00363412                 movsx   eax, byte_2AB8E08[ecx]
.text:00363419                 test    eax, eax
.text:0036341B                 js      short loc_363429
.text:0036341B
.text:0036341D                 mov     ecx, [ebp-74h]
.text:00363420                 mov     edx, eax
.text:00363422                 call    sub_13C08C0
.text:00363422
.text:00363427                 jmp     short loc_363439
.text:00363427
.text:00363429 ; ---------------------------------------------------------------------------
.text:00363429
.text:00363429 loc_363429:                             ; CODE XREF: sub_360480+2F90↑j
.text:00363429                                         ; sub_360480+2F9B↑j
.text:00363429                 mov     eax, [edx+0Ch]
.text:0036342C                 push    ecx
.text:0036342D                 push    0
.text:0036342F                 push    0
.text:00363431                 push    dword ptr [edx+10h]
.text:00363434                 call    eax
.text:00363434
.text:00363436                 add     esp, 10h
.text:00363436
.text:00363439
.text:00363439 loc_363439:                             ; CODE XREF: sub_360480+2FA7↑j
.text:00363439                 mov     ecx, [ebp-8]
.text:0036343C                 mov     [ebp-38h], eax
.text:0036343F                 test    eax, eax
.text:00363441                 jnz     short loc_36344B
.text:00363441
.text:00363443                 test    ecx, ecx
.text:00363445                 jnz     loc_3760A9
.text:00363445
.text:0036344B
.text:0036344B loc_36344B:                             ; CODE XREF: sub_360480+2FC1↑j
.text:0036344B                 mov     edx, [ebp-0Ch]
.text:0036344E                 movzx   eax, byte ptr [ebp-1]
.text:00363452                 add     [edx+38h], ecx
.text:00363455                 add     [edx+eax*4+144h], ecx
.text:0036345C                 lea     ecx, [esi+14h]
.text:0036345F                 mov     eax, [ebp-38h]
.text:00363462                 add     eax, ecx
.text:00363464                 mov     [ecx], eax
.text:00363466                 mov     eax, [ebp-24h]
.text:00363469                 test    eax, eax
.text:0036346B                 jle     short loc_36348F
.text:0036346B
.text:0036346D                 xor     edx, edx
.text:0036346F                 mov     ecx, eax
.text:0036346F
.text:00363471
.text:00363471 loc_363471:                             ; CODE XREF: sub_360480+300D↓j
.text:00363471                 mov     eax, edx
.text:00363473                 add     edx, 20h ; ' '
.text:00363476                 sub     eax, [ebp-30h]
.text:00363479                 add     eax, [esi+14h]
.text:0036347C                 mov     dword ptr [eax+1Ch], 0
.text:00363483                 mov     dword ptr [eax+0Ch], 0
.text:0036348A                 sub     ecx, 1
.text:0036348D                 jnz     short loc_363471
.text:0036348D
.text:0036348F
.text:0036348F loc_36348F:                             ; CODE XREF: sub_360480+2FEB↑j
.text:0036348F                 mov     ecx, [ebp-1Ch]
.text:0036348F
.text:00363492
.text:00363492 loc_363492:                             ; CODE XREF: sub_360480+2F25↑j
.text:00363492                 mov     al, 1
.text:00363494                 mov     [esi+5], cl
.text:00363497                 shl     al, cl
.text:00363499                 dec     al
.text:0036349B                 mov     [esi+4], al
.text:0036349E                 mov     eax, [ebp-24h]
.text:003634A1                 mov     [esi+0Ch], eax
.text:003634A4                 cmp     edi, [ebp-44h]
.text:003634A7                 jge     loc_363636
.text:003634A7
.text:003634AD                 mov     eax, edi
.text:003634AF                 mov     [esi+8], edi
.text:003634B2                 shl     eax, 4
.text:003634B5                 lea     ecx, [esi+18h]
.text:003634B8                 mov     [ebp-24h], eax
.text:003634BB                 mov     edi, eax
.text:003634BD                 mov     eax, [ebp-34h]
.text:003634C0                 mov     [ebp-1Ch], ecx
.text:003634C3                 lea     edx, [eax+1]
.text:003634C6                 mov     [ebp-30h], edx
.text:003634C9                 mov     edx, [ebp-44h]
.text:003634CC                 mov     [ebp-8], edx
.text:003634CF                 sub     [ebp-8], eax
.text:003634D2                 mov     edx, [ebp-30h]
.text:003634D2
.text:003634D5
.text:003634D5 loc_3634D5:                             ; CODE XREF: sub_360480+30EA↓j
.text:003634D5                 mov     eax, [ecx]
.text:003634D7                 mov     [ebp-0Ch], eax
.text:003634DA                 mov     eax, edi
.text:003634DC                 mov     esi, [ebp-0Ch]
.text:003634DF                 sub     eax, ecx
.text:003634E1                 cmp     dword ptr [eax+esi+0Ch], 0
.text:003634E6                 mov     esi, [ebp-14h]
.text:003634E9                 jz      short loc_36355F
.text:003634E9
.text:003634EB                 cmp     byte_2AB2004, 0
.text:003634F2                 jz      short loc_36353B
.text:003634F2
.text:003634F4                 movd    xmm0, edx
.text:003634F8                 lea     eax, [ebp-370h]
.text:003634FE                 mov     edx, [ebp-14h]
.text:00363501                 mov     esi, edi
.text:00363503                 cvtdq2pd xmm1, xmm0
.text:00363507                 sub     esi, ecx
.text:00363509                 mov     dword ptr [ebp-364h], 4
.text:00363513                 push    eax
.text:00363514                 xorps   xmm1, xmmword_2C87C80
.text:0036351B                 movsd   qword ptr [ebp-370h], xmm1
.text:00363523                 add     esi, [ecx]
.text:00363525                 mov     ecx, [ebp-74h]
.text:00363528                 call    sub_13B83C0
.text:00363528
.text:0036352D                 movups  xmm0, xmmword ptr [esi]
.text:00363530                 mov     esi, [ebp-14h]
.text:00363533                 add     esp, 4
.text:00363536                 mov     ecx, [ebp-1Ch]
.text:00363539                 jmp     short loc_363559
.text:00363539
.text:0036353B ; ---------------------------------------------------------------------------
.text:0036353B
.text:0036353B loc_36353B:                             ; CODE XREF: sub_360480+3072↑j
.text:0036353B                 mov     ecx, [ebp-74h]
.text:0036353E                 push    edx
.text:0036353F                 mov     edx, esi
.text:00363541                 call    sub_13BBE20
.text:00363541
.text:00363546                 mov     ecx, edi
.text:00363548                 lea     edx, [esi+18h]
.text:0036354B                 sub     ecx, edx
.text:0036354D                 add     esp, 4
.text:00363550                 add     ecx, [ebp-0Ch]
.text:00363553                 movups  xmm0, xmmword ptr [ecx]
.text:00363556                 lea     ecx, [esi+18h]
.text:00363556
.text:00363559
.text:00363559 loc_363559:                             ; CODE XREF: sub_360480+30B9↑j
.text:00363559                 mov     edx, [ebp-30h]
.text:0036355C                 movups  xmmword ptr [eax], xmm0
.text:0036355C
.text:0036355F
.text:0036355F loc_36355F:                             ; CODE XREF: sub_360480+3069↑j
.text:0036355F                 inc     edx
.text:00363560                 add     edi, 10h
.text:00363563                 sub     dword ptr [ebp-8], 1
.text:00363567                 mov     [ebp-30h], edx
.text:0036356A                 jnz     loc_3634D5
.text:0036356A
.text:00363570                 mov     al, [esi+1]
.text:00363573                 mov     edi, [ebp-34h]
.text:00363576                 mov     [ebp-1], al
.text:00363579                 cmp     edi, 0FFFFFFFh
.text:0036357F                 ja      loc_376089
.text:0036357F
.text:00363585                 mov     eax, [ecx]
.text:00363587                 sub     eax, ecx
.text:00363589                 mov     ecx, [ebp-24h]
.text:0036358C                 mov     [ebp-1Ch], eax
.text:0036358F                 mov     eax, [ebp-44h]
.text:00363592                 shl     eax, 4
.text:00363595                 mov     [ebp-34h], eax
.text:00363598                 mov     eax, [ebp-64h]
.text:0036359B                 mov     edx, [eax]
.text:0036359D                 sub     edx, eax
.text:0036359F                 lea     eax, [ecx-1]
.text:003635A2                 mov     [ebp-30h], edx
.text:003635A5                 cmp     eax, 200h
.text:003635AA                 jnb     short loc_3635B8
.text:003635AA
.text:003635AC                 movsx   eax, byte_2AB8E08[ecx]
.text:003635B3                 mov     [ebp-8], eax
.text:003635B6                 jmp     short loc_3635BF
.text:003635B6
.text:003635B8 ; ---------------------------------------------------------------------------
.text:003635B8
.text:003635B8 loc_3635B8:                             ; CODE XREF: sub_360480+312A↑j
.text:003635B8                 mov     dword ptr [ebp-8], 0FFFFFFFFh
.text:003635B8
.text:003635BF
.text:003635BF loc_3635BF:                             ; CODE XREF: sub_360480+3136↑j
.text:003635BF                 mov     eax, [ebp-34h]
.text:003635C2                 dec     eax
.text:003635C3                 cmp     eax, 200h
.text:003635C8                 jnb     short loc_3635D6
.text:003635C8
.text:003635CA                 mov     eax, [ebp-34h]
.text:003635CD                 movsx   eax, byte_2AB8E08[eax]
.text:003635D4                 jmp     short loc_3635D9
.text:003635D4
.text:003635D6 ; ---------------------------------------------------------------------------
.text:003635D6
.text:003635D6 loc_3635D6:                             ; CODE XREF: sub_360480+3148↑j
.text:003635D6                 or      eax, 0FFFFFFFFh
.text:003635D6
.text:003635D9
.text:003635D9 loc_3635D9:                             ; CODE XREF: sub_360480+3154↑j
.text:003635D9                 cmp     dword ptr [ebp-8], 0
.text:003635DD                 mov     [ebp-0Ch], eax
.text:003635E0                 jge     loc_3636DD
.text:003635E0
.text:003635E6                 test    eax, eax
.text:003635E8                 mov     eax, [edx+0Ch]
.text:003635EB                 push    ecx
.text:003635EC                 jns     loc_3636CA
.text:003635EC
.text:003635F2                 push    dword ptr [ebp-34h]
.text:003635F5                 mov     edi, [ebp-1Ch]
.text:003635F8                 push    edi
.text:003635F9                 push    dword ptr [edx+10h]
.text:003635FC                 call    eax
.text:003635FC
.text:003635FE                 mov     ecx, [ebp-24h]
.text:00363601                 add     esp, 10h
.text:00363604                 mov     [ebp-8], eax
.text:00363607                 test    eax, eax
.text:00363609                 jnz     short loc_363613
.text:00363609
.text:0036360B                 test    ecx, ecx
.text:0036360D                 jnz     loc_3760A9
.text:0036360D
.text:00363613
.text:00363613 loc_363613:                             ; CODE XREF: sub_360480+3189↑j
.text:00363613                                         ; sub_360480+32BC↓j
.text:00363613                 mov     edi, [ebp-30h]
.text:00363613
.text:00363616
.text:00363616 loc_363616:                             ; CODE XREF: sub_360480+32D6↓j
.text:00363616                 mov     eax, ecx
.text:00363618                 lea     edx, [esi+18h]
.text:0036361B                 sub     eax, [ebp-34h]
.text:0036361E                 add     [edi+38h], eax
.text:00363621                 movzx   eax, byte ptr [ebp-1]
.text:00363625                 sub     ecx, [ebp-34h]
.text:00363628                 add     [edi+eax*4+144h], ecx
.text:0036362F                 mov     eax, [ebp-8]
.text:00363632                 add     eax, edx
.text:00363634                 mov     [edx], eax
.text:00363634
.text:00363636
.text:00363636 loc_363636:                             ; CODE XREF: sub_360480+3027↑j
.text:00363636                 mov     ecx, [ebp-3Ch]
.text:00363639                 mov     edx, 1
.text:0036363E                 shl     edx, cl
.text:00363640                 cmp     byte_2AB2004, 0
.text:00363647                 mov     [ebp-1Ch], edx
.text:0036364A                 lea     edi, [edx-1]
.text:0036364D                 jz      loc_36375B
.text:0036364D
.text:00363653                 test    edi, edi
.text:00363655                 js      loc_3637C8
.text:00363655
.text:0036365B                 mov     edx, [ebp-10h]
.text:0036365E                 mov     eax, edi
.text:00363660                 shl     eax, 5
.text:00363663                 add     edx, 10h
.text:00363666                 add     edx, eax
.text:00363668                 mov     [ebp-24h], edx
.text:0036366B                 nop     dword ptr [eax+eax+00h]
.text:0036366B
.text:00363670
.text:00363670 loc_363670:                             ; CODE XREF: sub_360480+3243↓j
.text:00363670                 cmp     dword ptr [edx-4], 0
.text:00363674                 jz      short loc_3636BA
.text:00363674
.text:00363676                 mov     eax, [edx]
.text:00363678                 mov     ecx, [edx+4]
.text:0036367B                 mov     [ebp-380h], eax
.text:00363681                 mov     [ebp-37Ch], ecx
.text:00363687                 mov     eax, [edx+8]
.text:0036368A                 mov     ecx, [ebp-74h]
.text:0036368D                 mov     [ebp-378h], eax
.text:00363693                 mov     eax, [edx+0Ch]
.text:00363696                 mov     edx, esi
.text:00363698                 and     eax, 0Fh
.text:0036369B                 mov     [ebp-374h], eax
.text:003636A1                 lea     eax, [ebp-380h]
.text:003636A7                 push    eax
.text:003636A8                 call    sub_13B40E0
.text:003636A8
.text:003636AD                 mov     edx, [ebp-24h]
.text:003636B0                 add     esp, 4
.text:003636B3                 movups  xmm0, xmmword ptr [edx-10h]
.text:003636B7                 movups  xmmword ptr [eax], xmm0
.text:003636B7
.text:003636BA
.text:003636BA loc_3636BA:                             ; CODE XREF: sub_360480+31F4↑j
.text:003636BA                 sub     edx, 20h ; ' '
.text:003636BD                 sub     edi, 1
.text:003636C0                 mov     [ebp-24h], edx
.text:003636C3                 jns     short loc_363670
.text:003636C3
.text:003636C5                 jmp     loc_3637C5
.text:003636C5
.text:003636CA ; ---------------------------------------------------------------------------
.text:003636CA
.text:003636CA loc_3636CA:                             ; CODE XREF: sub_360480+316C↑j
.text:003636CA                 push    0
.text:003636CC                 push    0
.text:003636CE                 push    dword ptr [edx+10h]
.text:003636D1                 call    eax
.text:003636D1
.text:003636D3                 mov     edx, eax
.text:003636D5                 add     esp, 10h
.text:003636D8                 mov     [ebp-8], edx
.text:003636DB                 jmp     short loc_3636ED
.text:003636DB
.text:003636DD ; ---------------------------------------------------------------------------
.text:003636DD
.text:003636DD loc_3636DD:                             ; CODE XREF: sub_360480+3160↑j
.text:003636DD                 mov     edx, [ebp-8]
.text:003636E0                 mov     ecx, [ebp-74h]
.text:003636E3                 call    sub_13C08C0
.text:003636E3
.text:003636E8                 mov     edx, eax
.text:003636EA                 mov     [ebp-8], eax
.text:003636EA
.text:003636ED
.text:003636ED loc_3636ED:                             ; CODE XREF: sub_360480+325B↑j
.text:003636ED                 mov     eax, [ebp-24h]
.text:003636F0                 test    edx, edx
.text:003636F2                 jnz     short loc_3636FC
.text:003636F2
.text:003636F4                 test    eax, eax
.text:003636F6                 jnz     loc_3760A9
.text:003636F6
.text:003636FC
.text:003636FC loc_3636FC:                             ; CODE XREF: sub_360480+3272↑j
.text:003636FC                 mov     ecx, [ebp-34h]
.text:003636FF                 test    ecx, ecx
.text:00363701                 jz      short loc_363723
.text:00363701
.text:00363703                 test    eax, eax
.text:00363705                 jz      short loc_363723
.text:00363705
.text:00363707                 cmp     ecx, eax
.text:00363709                 cmovb   edi, [ebp-44h]
.text:0036370D                 shl     edi, 4
.text:00363710                 push    edi
.text:00363711                 mov     edi, [ebp-1Ch]
.text:00363714                 push    edi
.text:00363715                 push    edx
.text:00363716                 call    sub_1B7EE40
.text:00363716
.text:0036371B                 mov     ecx, [ebp-34h]
.text:0036371E                 add     esp, 0Ch
.text:00363721                 jmp     short loc_363726
.text:00363721
.text:00363723 ; ---------------------------------------------------------------------------
.text:00363723
.text:00363723 loc_363723:                             ; CODE XREF: sub_360480+3281↑j
.text:00363723                                         ; sub_360480+3285↑j
.text:00363723                 mov     edi, [ebp-1Ch]
.text:00363723
.text:00363726
.text:00363726 loc_363726:                             ; CODE XREF: sub_360480+32A1↑j
.text:00363726                 mov     edx, [ebp-0Ch]
.text:00363729                 test    edx, edx
.text:0036372B                 js      short loc_363741
.text:0036372B
.text:0036372D                 mov     ecx, [ebp-74h]
.text:00363730                 push    edi
.text:00363731                 call    sub_13C0A60
.text:00363731
.text:00363736                 mov     ecx, [ebp-24h]
.text:00363739                 add     esp, 4
.text:0036373C                 jmp     loc_363613
.text:0036373C
.text:00363741 ; ---------------------------------------------------------------------------
.text:00363741
.text:00363741 loc_363741:                             ; CODE XREF: sub_360480+32AB↑j
.text:00363741                 push    0
.text:00363743                 push    ecx
.text:00363744                 push    edi
.text:00363745                 mov     edi, [ebp-30h]
.text:00363748                 push    dword ptr [edi+10h]
.text:0036374B                 mov     eax, [edi+0Ch]
.text:0036374E                 call    eax
.text:0036374E
.text:00363750                 mov     ecx, [ebp-24h]
.text:00363753                 add     esp, 10h
.text:00363756                 jmp     loc_363616
.text:00363756
.text:0036375B ; ---------------------------------------------------------------------------
.text:0036375B
.text:0036375B loc_36375B:                             ; CODE XREF: sub_360480+31CD↑j
.text:0036375B                 test    edi, edi
.text:0036375D                 js      short loc_3637C8
.text:0036375D
.text:0036375F                 mov     edx, [ebp-10h]
.text:00363762                 mov     eax, edi
.text:00363764                 shl     eax, 5
.text:00363767                 add     edx, 10h
.text:0036376A                 add     edx, eax
.text:0036376C                 mov     [ebp-24h], edx
.text:0036376F                 nop
.text:0036376F
.text:00363770
.text:00363770 loc_363770:                             ; CODE XREF: sub_360480+3343↓j
.text:00363770                 cmp     dword ptr [edx-4], 0
.text:00363774                 jz      short loc_3637BA
.text:00363774
.text:00363776                 mov     eax, [edx]
.text:00363778                 mov     ecx, [edx+4]
.text:0036377B                 mov     [ebp-390h], eax
.text:00363781                 mov     [ebp-38Ch], ecx
.text:00363787                 mov     eax, [edx+8]
.text:0036378A                 mov     ecx, [ebp-74h]
.text:0036378D                 mov     [ebp-388h], eax
.text:00363793                 mov     eax, [edx+0Ch]
.text:00363796                 mov     edx, esi
.text:00363798                 and     eax, 0Fh
.text:0036379B                 mov     [ebp-384h], eax
.text:003637A1                 lea     eax, [ebp-390h]
.text:003637A7                 push    eax
.text:003637A8                 call    sub_13BA4F0
.text:003637A8
.text:003637AD                 mov     edx, [ebp-24h]
.text:003637B0                 add     esp, 4
.text:003637B3                 movups  xmm0, xmmword ptr [edx-10h]
.text:003637B7                 movups  xmmword ptr [eax], xmm0
.text:003637B7
.text:003637BA
.text:003637BA loc_3637BA:                             ; CODE XREF: sub_360480+32F4↑j
.text:003637BA                 sub     edx, 20h ; ' '
.text:003637BD                 sub     edi, 1
.text:003637C0                 mov     [ebp-24h], edx
.text:003637C3                 jns     short loc_363770
.text:003637C3
.text:003637C5
.text:003637C5 loc_3637C5:                             ; CODE XREF: sub_360480+3245↑j
.text:003637C5                 mov     edx, [ebp-1Ch]
.text:003637C5
.text:003637C8
.text:003637C8 loc_3637C8:                             ; CODE XREF: sub_360480+31D5↑j
.text:003637C8                                         ; sub_360480+32DD↑j
.text:003637C8                 mov     ecx, [ebp-10h]
.text:003637CB                 cmp     ecx, offset dword_1EA0808
.text:003637D1                 jz      short loc_3637E9
.text:003637D1
.text:003637D3                 movzx   eax, byte ptr [esi+1]
.text:003637D7                 shl     edx, 5
.text:003637DA                 push    eax
.text:003637DB                 push    edx
.text:003637DC                 mov     edx, ecx
.text:003637DE                 mov     ecx, [ebp-74h]
.text:003637E1                 call    sub_13C0AF0
.text:003637E1
.text:003637E6                 add     esp, 8
.text:003637E6
.text:003637E9
.text:003637E9 loc_3637E9:                             ; CODE XREF: sub_360480+3351↑j
.text:003637E9                 push    dword ptr [ebp-50h]
.text:003637EC                 mov     ecx, [ebp-74h]
.text:003637EF                 mov     edx, esi
.text:003637EF
.text:003637F1
.text:003637F1 loc_3637F1:                             ; CODE XREF: sub_360480+3D39↓j
.text:003637F1                 call    sub_13B40E0
.text:003637F1
.text:003637F6                 mov     edi, eax
.text:003637F8                 jmp     loc_364431
.text:003637F8
.text:003637FD ; ---------------------------------------------------------------------------
.text:003637FD
.text:003637FD loc_3637FD:                             ; CODE XREF: sub_360480+2AFB↑j
.text:003637FD                                         ; sub_360480+2B05↑j ...
.text:003637FD                 mov     eax, [ecx-14h]
.text:00363800                 dec     eax             ; switch 5 cases
.text:00363801                 cmp     eax, 4
.text:00363804                 ja      def_36380A      ; jumptable 0036380A default case, case 2
.text:00363804
.text:0036380A                 jmp     ds:jpt_36380A[eax*4] ; switch jump
.text:0036380A
.text:00363811 ; ---------------------------------------------------------------------------
.text:00363811
.text:00363811 loc_363811:                             ; CODE XREF: sub_360480+338A↑j
.text:00363811                                         ; DATA XREF: .text:jpt_36380A↓o
.text:00363811                 movsd   xmm1, qword ptr [edi] ; jumptable 0036380A case 4
.text:00363815                 xorps   xmm1, xmm2
.text:00363818                 movsd   qword ptr [ebp-20h], xmm1
.text:0036381D                 mov     ecx, [ebp-1Ch]
.text:00363820                 and     ecx, 7FFFFFFFh
.text:00363826                 mov     eax, ecx
.text:00363828                 shr     eax, 12h
.text:0036382B                 xor     eax, [ebp-20h]
.text:0036382E                 imul    edx, eax, 5BD1E995h
.text:00363834                 mov     eax, edx
.text:00363836                 shr     eax, 16h
.text:00363839                 xor     eax, ecx
.text:0036383B                 imul    ecx, eax, 5BD1E995h
.text:00363841                 mov     eax, ecx
.text:00363843                 shr     eax, 11h
.text:00363846                 xor     eax, edx
.text:00363848                 imul    eax, 5BD1E995h
.text:0036384E                 shr     eax, 13h
.text:00363851                 xor     eax, ecx
.text:00363853                 imul    edi, eax, 5BD1E995h
.text:00363853
.text:00363859
.text:00363859 loc_363859:                             ; CODE XREF: sub_360480+346E↓j
.text:00363859                 mov     cl, [esi+5]
.text:0036385C                 mov     eax, 1
.text:00363861                 shl     eax, cl
.text:00363863                 dec     eax
.text:00363864                 and     edi, eax
.text:00363866                 lea     eax, [esi+14h]
.text:00363869                 shl     edi, 5
.text:0036386C                 sub     edi, eax
.text:0036386E                 add     edi, [eax]
.text:00363870                 jmp     loc_363951
.text:00363870
.text:00363875 ; ---------------------------------------------------------------------------
.text:00363875
.text:00363875 loc_363875:                             ; CODE XREF: sub_360480+338A↑j
.text:00363875                                         ; DATA XREF: .text:jpt_36380A↓o
.text:00363875                 movq    xmm0, qword ptr [edi] ; jumptable 0036380A case 3
.text:00363879                 xor     eax, eax
.text:0036387B                 mov     esi, [edi+8]
.text:0036387E                 movq    qword ptr [ebp-204h], xmm0
.text:00363886                 mov     ecx, [ebp-204h]
.text:0036388C                 cmp     ecx, 8000000h
.text:00363892                 cmovz   ecx, eax
.text:00363895                 mov     eax, [ebp-200h]
.text:0036389B                 xor     edx, edx
.text:0036389D                 cmp     eax, 8000000h
.text:003638A2                 cmovz   eax, edx
.text:003638A5                 cmp     esi, 8000000h
.text:003638AB                 cmovz   esi, edx
.text:003638AE                 mov     edx, ecx
.text:003638B0                 shr     edx, 11h
.text:003638B3                 xor     edx, ecx
.text:003638B5                 mov     ecx, eax
.text:003638B7                 shr     ecx, 11h
.text:003638BA                 xor     ecx, eax
.text:003638BC                 mov     [ebp-204h], edx
.text:003638C2                 mov     eax, esi
.text:003638C4                 imul    edi, ecx, 127409Fh
.text:003638CA                 shr     eax, 11h
.text:003638CD                 xor     eax, esi
.text:003638CF                 mov     [ebp-200h], ecx
.text:003638D5                 mov     esi, [ebp-14h]
.text:003638D8                 mov     [ebp-1FCh], eax
.text:003638DE                 imul    eax, 4F9FFB7h
.text:003638E4                 xor     edi, eax
.text:003638E6                 imul    eax, edx, 466F45Dh
.text:003638EC                 xor     edi, eax
.text:003638EE                 jmp     loc_363859
.text:003638EE
.text:003638F3 ; ---------------------------------------------------------------------------
.text:003638F3
.text:003638F3 loc_3638F3:                             ; CODE XREF: sub_360480+338A↑j
.text:003638F3                                         ; DATA XREF: .text:jpt_36380A↓o
.text:003638F3                 mov     eax, [edi]      ; jumptable 0036380A case 5
.text:003638F5                 mov     edi, 1
.text:003638FA                 mov     cl, [esi+5]
.text:003638FD                 add     eax, 0Ch
.text:00363900                 shl     edi, cl
.text:00363902                 dec     edi
.text:00363903                 sub     eax, [eax]
.text:00363905                 jmp     short loc_363945
.text:00363905
.text:00363907 ; ---------------------------------------------------------------------------
.text:00363907
.text:00363907 loc_363907:                             ; CODE XREF: sub_360480+338A↑j
.text:00363907                                         ; DATA XREF: .text:jpt_36380A↓o
.text:00363907                 mov     cl, [esi+5]     ; jumptable 0036380A case 1
.text:0036390A                 mov     edi, 1
.text:0036390F                 mov     eax, [ebp-50h]
.text:00363912                 shl     edi, cl
.text:00363914                 dec     edi
.text:00363915                 and     edi, [eax]
.text:00363917                 jmp     short loc_363947
.text:00363917
.text:00363919 ; ---------------------------------------------------------------------------
.text:00363919
.text:00363919 def_36380A:                             ; CODE XREF: sub_360480+3384↑j
.text:00363919                                         ; sub_360480+338A↑j
.text:00363919                                         ; DATA XREF: ...
.text:00363919                 mov     ecx, [edi]      ; jumptable 0036380A default case, case 2
.text:0036391B                 shr     ecx, 10h
.text:0036391E                 xor     ecx, [edi]
.text:00363920                 imul    ecx, 85EBCA6Bh
.text:00363926                 mov     eax, ecx
.text:00363928                 shr     eax, 0Dh
.text:0036392B                 xor     eax, ecx
.text:0036392D                 mov     cl, [esi+5]
.text:00363930                 imul    eax, 0C2B2AE35h
.text:00363936                 mov     edi, eax
.text:00363938                 shr     edi, 10h
.text:0036393B                 xor     edi, eax
.text:0036393D                 mov     eax, 1
.text:00363942                 shl     eax, cl
.text:00363944                 dec     eax
.text:00363944
.text:00363945
.text:00363945 loc_363945:                             ; CODE XREF: sub_360480+3485↑j
.text:00363945                 and     edi, eax
.text:00363945
.text:00363947
.text:00363947 loc_363947:                             ; CODE XREF: sub_360480+3497↑j
.text:00363947                 lea     edx, [esi+14h]
.text:0036394A                 shl     edi, 5
.text:0036394D                 sub     edi, edx
.text:0036394F                 add     edi, [edx]
.text:0036394F
.text:00363951
.text:00363951 loc_363951:                             ; CODE XREF: sub_360480+33F0↑j
.text:00363951                 cmp     dword ptr [edi+0Ch], 0
.text:00363955                 jnz     short loc_363963
.text:00363955
.text:00363957                 cmp     edi, offset dword_1EA0808
.text:0036395D                 jnz     loc_3643EF
.text:0036395D
.text:00363963
.text:00363963 loc_363963:                             ; CODE XREF: sub_360480+34D5↑j
.text:00363963                 mov     ecx, esi
.text:00363965                 call    sub_13B8380
.text:00363965
.text:0036396A                 mov     [ebp-1Ch], eax
.text:0036396D                 test    eax, eax
.text:0036396F                 jnz     loc_3641CB
.text:0036396F
.text:00363975                 xorps   xmm0, xmm0
.text:00363978                 mov     [ebp-9B8h], eax
.text:0036397E                 lea     edx, [ebp-0A20h]
.text:00363984                 movaps  xmmword ptr [ebp-0A20h], xmm0
.text:0036398B                 mov     ecx, esi
.text:0036398D                 movaps  xmmword ptr [ebp-0A10h], xmm0
.text:00363994                 movaps  xmmword ptr [ebp-0A00h], xmm0
.text:0036399B                 movaps  xmmword ptr [ebp-9F0h], xmm0
.text:003639A2                 movaps  xmmword ptr [ebp-9E0h], xmm0
.text:003639A9                 movaps  xmmword ptr [ebp-9D0h], xmm0
.text:003639B0                 movq    qword ptr [ebp-9C0h], xmm0
.text:003639B8                 call    sub_13B3F30
.text:003639B8
.text:003639BD                 mov     edi, eax
.text:003639BF                 lea     edx, [ebp-0A20h]
.text:003639C5                 lea     eax, [ebp-78h]
.text:003639C8                 mov     [ebp-78h], edi
.text:003639CB                 push    eax
.text:003639CC                 mov     ecx, esi
.text:003639CE                 call    sub_13B3FF0
.text:003639CE
.text:003639D3                 add     edi, eax
.text:003639D5                 add     esp, 4
.text:003639D8                 mov     eax, [ebp-2Ch]
.text:003639DB                 cmp     dword ptr [eax-14h], 4
.text:003639DF                 jnz     short loc_3639FD
.text:003639DF
.text:003639E1                 mov     eax, [ebp-50h]
.text:003639E4                 lea     ecx, [ebp-0A20h]
.text:003639EA                 movsd   xmm1, qword ptr [eax]
.text:003639EE                 xorps   xmm1, xmmword_2C87C80
.text:003639F5                 call    sub_13B3EE0
.text:003639F5
.text:003639FA                 add     [ebp-78h], eax
.text:003639FA
.text:003639FD
.text:003639FD loc_3639FD:                             ; CODE XREF: sub_360480+355F↑j
.text:003639FD                 inc     edi
.text:003639FE                 lea     edx, [ebp-78h]
.text:00363A01                 lea     ecx, [ebp-0A20h]
.text:00363A07                 mov     [ebp-1Ch], edi
.text:00363A0A                 call    sub_13B3E70
.text:00363A0A
.text:00363A0F                 cmp     byte_2AB209C, 0
.text:00363A16                 lea     edx, [esi+14h]
.text:00363A19                 mov     edi, [ebp-78h]
.text:00363A1C                 mov     [ebp-24h], eax
.text:00363A1F                 mov     [ebp-44h], edi
.text:00363A22                 jz      loc_363B8B
.text:00363A22
.text:00363A28                 mov     ecx, [edx]
.text:00363A2A                 sub     ecx, edx
.text:00363A2C                 cmp     ecx, offset dword_1EA0808
.text:00363A32                 jnz     short loc_363A3D
.text:00363A32
.text:00363A34                 mov     byte ptr [ebp-1], 0
.text:00363A38                 cmp     edi, [esi+8]
.text:00363A3B                 jge     short loc_363A41
.text:00363A3B
.text:00363A3D
.text:00363A3D loc_363A3D:                             ; CODE XREF: sub_360480+35B2↑j
.text:00363A3D                 mov     byte ptr [ebp-1], 1
.text:00363A3D
.text:00363A41
.text:00363A41 loc_363A41:                             ; CODE XREF: sub_360480+35BB↑j
.text:00363A41                 mov     ecx, [ebp-2Ch]
.text:00363A44                 movaps  xmm3, xmmword_2C87C80
.text:00363A4B                 cmp     dword ptr [ecx-14h], 4
.text:00363A4F                 jnz     short loc_363A77
.text:00363A4F
.text:00363A51                 mov     eax, [ebp-50h]
.text:00363A54                 movsd   xmm1, qword ptr [eax]
.text:00363A58                 xorps   xmm1, xmm3
.text:00363A5B                 cvttsd2si ecx, xmm1
.text:00363A5F                 mov     [ebp-34h], ecx
.text:00363A62                 movd    xmm0, ecx
.text:00363A66                 cvtdq2pd xmm0, xmm0
.text:00363A6A                 ucomisd xmm0, xmm1
.text:00363A6E                 lahf
.text:00363A6F                 test    ah, 44h
.text:00363A72                 mov     eax, [ebp-24h]
.text:00363A75                 jnp     short loc_363A80
.text:00363A75
.text:00363A77
.text:00363A77 loc_363A77:                             ; CODE XREF: sub_360480+35CF↑j
.text:00363A77                 mov     dword ptr [ebp-34h], 0FFFFFFFFh
.text:00363A7E                 xchg    ax, ax
.text:00363A7E
.text:00363A80
.text:00363A80 loc_363A80:                             ; CODE XREF: sub_360480+35F5↑j
.text:00363A80                                         ; sub_360480+3706↓j
.text:00363A80                 lea     ecx, [edi+1]
.text:00363A83                 mov     [ebp-3Ch], ecx
.text:00363A86                 cmp     ecx, [ebp-34h]
.text:00363A89                 jz      loc_363B7A
.text:00363A89
.text:00363A8F                 cmp     byte ptr [ebp-1], 0
.text:00363A93                 jz      loc_363B8B
.text:00363A93
.text:00363A99                 lea     eax, [ecx-1]
.text:00363A9C                 cmp     eax, [esi+8]
.text:00363A9F                 jnb     short loc_363AB9
.text:00363A9F
.text:00363AA1                 mov     edx, [esi+18h]
.text:00363AA4                 lea     eax, [esi+18h]
.text:00363AA7                 shl     ecx, 4
.text:00363AAA                 sub     ecx, eax
.text:00363AAC                 add     ecx, 0FFFFFFF0h
.text:00363AAF                 add     edx, ecx
.text:00363AAF
.text:00363AB1
.text:00363AB1 loc_363AB1:                             ; CODE XREF: sub_360480+36D2↓j
.text:00363AB1                 mov     ecx, [ebp-3Ch]
.text:00363AB4                 jmp     loc_363B6E
.text:00363AB4
.text:00363AB9 ; ---------------------------------------------------------------------------
.text:00363AB9
.text:00363AB9 loc_363AB9:                             ; CODE XREF: sub_360480+361F↑j
.text:00363AB9                 mov     eax, [edx]
.text:00363ABB                 mov     [ebp-30h], eax
.text:00363ABE                 sub     eax, edx
.text:00363AC0                 cmp     eax, offset dword_1EA0808
.text:00363AC5                 jz      loc_363B69
.text:00363AC5
.text:00363ACB                 movd    xmm2, ecx
.text:00363ACF                 cvtdq2pd xmm2, xmm2
.text:00363AD3                 movsd   qword ptr [ebp-0F0h], xmm2
.text:00363ADB                 mov     ecx, [ebp-0ECh]
.text:00363AE1                 and     ecx, 7FFFFFFFh
.text:00363AE7                 mov     eax, ecx
.text:00363AE9                 shr     eax, 12h
.text:00363AEC                 xor     eax, [ebp-0F0h]
.text:00363AF2                 imul    edx, eax, 5BD1E995h
.text:00363AF8                 mov     eax, edx
.text:00363AFA                 shr     eax, 16h
.text:00363AFD                 xor     eax, ecx
.text:00363AFF                 imul    ecx, eax, 5BD1E995h
.text:00363B05                 mov     eax, ecx
.text:00363B07                 shr     eax, 11h
.text:00363B0A                 xor     eax, edx
.text:00363B0C                 imul    eax, 5BD1E995h
.text:00363B12                 shr     eax, 13h
.text:00363B15                 xor     eax, ecx
.text:00363B17                 mov     cl, [esi+5]
.text:00363B1A                 imul    edx, eax, 5BD1E995h
.text:00363B20                 mov     eax, 1
.text:00363B25                 shl     eax, cl
.text:00363B27                 dec     eax
.text:00363B28                 and     edx, eax
.text:00363B2A                 mov     eax, [ebp-30h]
.text:00363B2D                 shl     edx, 5
.text:00363B30                 add     eax, 0FFFFFFECh
.text:00363B33                 sub     edx, esi
.text:00363B35                 add     edx, eax
.text:00363B35
.text:00363B37
.text:00363B37 loc_363B37:                             ; CODE XREF: sub_360480+36E4↓j
.text:00363B37                 mov     ecx, [edx+1Ch]
.text:00363B3A                 mov     eax, ecx
.text:00363B3C                 and     al, 0Fh
.text:00363B3E                 cmp     al, 4
.text:00363B40                 jnz     short loc_363B58
.text:00363B40
.text:00363B42                 movsd   xmm1, qword ptr [edx+10h]
.text:00363B47                 xorps   xmm1, xmm3
.text:00363B4A                 ucomisd xmm1, xmm2
.text:00363B4E                 lahf
.text:00363B4F                 test    ah, 44h
.text:00363B52                 jnp     loc_363AB1
.text:00363B52
.text:00363B58
.text:00363B58 loc_363B58:                             ; CODE XREF: sub_360480+36C0↑j
.text:00363B58                 sar     ecx, 4
.text:00363B5B                 test    ecx, ecx
.text:00363B5D                 jz      short loc_363B66
.text:00363B5D
.text:00363B5F                 shl     ecx, 5
.text:00363B62                 add     edx, ecx
.text:00363B64                 jmp     short loc_363B37
.text:00363B64
.text:00363B66 ; ---------------------------------------------------------------------------
.text:00363B66
.text:00363B66 loc_363B66:                             ; CODE XREF: sub_360480+36DD↑j
.text:00363B66                 mov     ecx, [ebp-3Ch]
.text:00363B66
.text:00363B69
.text:00363B69 loc_363B69:                             ; CODE XREF: sub_360480+3645↑j
.text:00363B69                 mov     edx, offset luao_nilobject
.text:00363B69
.text:00363B6E
.text:00363B6E loc_363B6E:                             ; CODE XREF: sub_360480+3634↑j
.text:00363B6E                 cmp     dword ptr [edx+0Ch], 0
.text:00363B72                 lea     edx, [esi+14h]
.text:00363B75                 jz      short loc_363B8B
.text:00363B75
.text:00363B77                 mov     eax, [ebp-24h]
.text:00363B77
.text:00363B7A
.text:00363B7A loc_363B7A:                             ; CODE XREF: sub_360480+3609↑j
.text:00363B7A                 mov     edi, ecx
.text:00363B7C                 inc     eax
.text:00363B7D                 mov     [ebp-44h], edi
.text:00363B80                 mov     [ebp-78h], edi
.text:00363B83                 mov     [ebp-24h], eax
.text:00363B86                 jmp     loc_363A80
.text:00363B86
.text:00363B8B ; ---------------------------------------------------------------------------
.text:00363B8B
.text:00363B8B loc_363B8B:                             ; CODE XREF: sub_360480+35A2↑j
.text:00363B8B                                         ; sub_360480+3613↑j ...
.text:00363B8B                 mov     eax, [ebp-1Ch]
.text:00363B8E                 sub     eax, [ebp-24h]
.text:00363B91                 mov     [ebp-1Ch], eax
.text:00363B94                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:00363B9A                 jg      loc_37618E
.text:00363B9A
.text:00363BA0                 cmp     eax, (offset dword_3FFF948+6B8h)
.text:00363BA5                 jg      loc_37618E
.text:00363BA5
.text:00363BAB                 mov     ecx, [esi+8]
.text:00363BAE                 mov     [ebp-24h], ecx
.text:00363BB1                 movzx   ecx, byte ptr [esi+5]
.text:00363BB5                 mov     esi, [edx]
.text:00363BB7                 sub     esi, edx
.text:00363BB9                 mov     [ebp-34h], ecx
.text:00363BBC                 mov     [ebp-3Ch], esi
.text:00363BBF                 mov     esi, [ebp-14h]
.text:00363BC2                 cmp     edi, [ebp-24h]
.text:00363BC5                 jle     loc_363D48
.text:00363BC5
.text:00363BCB                 mov     al, [esi+1]
.text:00363BCE                 mov     [ebp-1], al
.text:00363BD1                 cmp     edi, 0FFFFFFFh
.text:00363BD7                 ja      loc_376089
.text:00363BD7
.text:00363BDD                 mov     eax, [ebp-24h]
.text:00363BE0                 lea     edx, [esi+18h]
.text:00363BE3                 shl     eax, 4
.text:00363BE6                 mov     ecx, edi
.text:00363BE8                 mov     [ebp-10h], eax
.text:00363BEB                 mov     eax, [edx]
.text:00363BED                 sub     eax, edx
.text:00363BEF                 shl     ecx, 4
.text:00363BF2                 mov     [ebp-8], eax
.text:00363BF5                 mov     eax, [ebp-64h]
.text:00363BF8                 mov     [ebp-30h], ecx
.text:00363BFB                 mov     edx, [eax]
.text:00363BFD                 sub     edx, eax
.text:00363BFF                 lea     eax, [ecx-1]
.text:00363C02                 mov     [ebp-0Ch], edx
.text:00363C05                 cmp     eax, 200h
.text:00363C0A                 jnb     short loc_363C18
.text:00363C0A
.text:00363C0C                 movsx   eax, byte_2AB8E08[ecx]
.text:00363C13                 mov     [ebp-38h], eax
.text:00363C16                 jmp     short loc_363C1F
.text:00363C16
.text:00363C18 ; ---------------------------------------------------------------------------
.text:00363C18
.text:00363C18 loc_363C18:                             ; CODE XREF: sub_360480+378A↑j
.text:00363C18                 mov     dword ptr [ebp-38h], 0FFFFFFFFh
.text:00363C18
.text:00363C1F
.text:00363C1F loc_363C1F:                             ; CODE XREF: sub_360480+3796↑j
.text:00363C1F                 mov     eax, [ebp-10h]
.text:00363C22                 dec     eax
.text:00363C23                 cmp     eax, 200h
.text:00363C28                 jnb     short loc_363C36
.text:00363C28
.text:00363C2A                 mov     eax, [ebp-10h]
.text:00363C2D                 movsx   eax, byte_2AB8E08[eax]
.text:00363C34                 jmp     short loc_363C39
.text:00363C34
.text:00363C36 ; ---------------------------------------------------------------------------
.text:00363C36
.text:00363C36 loc_363C36:                             ; CODE XREF: sub_360480+37A8↑j
.text:00363C36                 or      eax, 0FFFFFFFFh
.text:00363C36
.text:00363C39
.text:00363C39 loc_363C39:                             ; CODE XREF: sub_360480+37B4↑j
.text:00363C39                 cmp     dword ptr [ebp-38h], 0
.text:00363C3D                 mov     [ebp-5Ch], eax
.text:00363C40                 jge     short loc_363C81
.text:00363C40
.text:00363C42                 test    eax, eax
.text:00363C44                 mov     eax, [edx+0Ch]
.text:00363C47                 push    ecx
.text:00363C48                 jns     short loc_363C73
.text:00363C48
.text:00363C4A                 push    dword ptr [ebp-10h]
.text:00363C4D                 push    dword ptr [ebp-8]
.text:00363C50                 push    dword ptr [edx+10h]
.text:00363C53                 call    eax
.text:00363C53
.text:00363C55                 mov     ecx, [ebp-30h]
.text:00363C58                 add     esp, 10h
.text:00363C5B                 mov     [ebp-38h], eax
.text:00363C5E                 test    eax, eax
.text:00363C60                 jnz     loc_363CF6
.text:00363C60
.text:00363C66                 test    ecx, ecx
.text:00363C68                 jnz     loc_3760A9
.text:00363C68
.text:00363C6E                 jmp     loc_363CF6
.text:00363C6E
.text:00363C73 ; ---------------------------------------------------------------------------
.text:00363C73
.text:00363C73 loc_363C73:                             ; CODE XREF: sub_360480+37C8↑j
.text:00363C73                 push    0
.text:00363C75                 push    0
.text:00363C77                 push    dword ptr [edx+10h]
.text:00363C7A                 call    eax
.text:00363C7A
.text:00363C7C                 add     esp, 10h
.text:00363C7F                 jmp     short loc_363C8C
.text:00363C7F
.text:00363C81 ; ---------------------------------------------------------------------------
.text:00363C81
.text:00363C81 loc_363C81:                             ; CODE XREF: sub_360480+37C0↑j
.text:00363C81                 mov     edx, [ebp-38h]
.text:00363C84                 mov     ecx, [ebp-74h]
.text:00363C87                 call    sub_13C08C0
.text:00363C87
.text:00363C8C
.text:00363C8C loc_363C8C:                             ; CODE XREF: sub_360480+37FF↑j
.text:00363C8C                 mov     ecx, [ebp-30h]
.text:00363C8F                 mov     [ebp-38h], eax
.text:00363C92                 test    eax, eax
.text:00363C94                 jnz     short loc_363C9E
.text:00363C94
.text:00363C96                 test    ecx, ecx
.text:00363C98                 jnz     loc_3760A9
.text:00363C98
.text:00363C9E
.text:00363C9E loc_363C9E:                             ; CODE XREF: sub_360480+3814↑j
.text:00363C9E                 mov     edx, [ebp-10h]
.text:00363CA1                 test    edx, edx
.text:00363CA3                 jz      short loc_363CC6
.text:00363CA3
.text:00363CA5                 test    ecx, ecx
.text:00363CA7                 jz      short loc_363CC6
.text:00363CA7
.text:00363CA9                 cmp     edx, ecx
.text:00363CAB                 mov     eax, edi
.text:00363CAD                 cmovb   eax, [ebp-24h]
.text:00363CB1                 shl     eax, 4
.text:00363CB4                 push    eax
.text:00363CB5                 push    dword ptr [ebp-8]
.text:00363CB8                 push    dword ptr [ebp-38h]
.text:00363CBB                 call    sub_1B7EE40
.text:00363CBB
.text:00363CC0                 mov     edx, [ebp-10h]
.text:00363CC3                 add     esp, 0Ch
.text:00363CC3
.text:00363CC6
.text:00363CC6 loc_363CC6:                             ; CODE XREF: sub_360480+3823↑j
.text:00363CC6                                         ; sub_360480+3827↑j
.text:00363CC6                 mov     eax, [ebp-5Ch]
.text:00363CC9                 test    eax, eax
.text:00363CCB                 js      short loc_363CDF
.text:00363CCB
.text:00363CCD                 push    dword ptr [ebp-8]
.text:00363CD0                 mov     ecx, [ebp-74h]
.text:00363CD3                 mov     edx, eax
.text:00363CD5                 call    sub_13C0A60
.text:00363CD5
.text:00363CDA                 add     esp, 4
.text:00363CDD                 jmp     short loc_363CF3
.text:00363CDD
.text:00363CDF ; ---------------------------------------------------------------------------
.text:00363CDF
.text:00363CDF loc_363CDF:                             ; CODE XREF: sub_360480+384B↑j
.text:00363CDF                 mov     eax, [ebp-0Ch]
.text:00363CE2                 push    0
.text:00363CE4                 push    edx
.text:00363CE5                 push    dword ptr [ebp-8]
.text:00363CE8                 push    dword ptr [eax+10h]
.text:00363CEB                 mov     eax, [eax+0Ch]
.text:00363CEE                 call    eax
.text:00363CEE
.text:00363CF0                 add     esp, 10h
.text:00363CF0
.text:00363CF3
.text:00363CF3 loc_363CF3:                             ; CODE XREF: sub_360480+385D↑j
.text:00363CF3                 mov     ecx, [ebp-30h]
.text:00363CF3
.text:00363CF6
.text:00363CF6 loc_363CF6:                             ; CODE XREF: sub_360480+37E0↑j
.text:00363CF6                                         ; sub_360480+37EE↑j
.text:00363CF6                 mov     edx, [ebp-0Ch]
.text:00363CF9                 mov     eax, ecx
.text:00363CFB                 sub     eax, [ebp-10h]
.text:00363CFE                 sub     ecx, [ebp-10h]
.text:00363D01                 add     [edx+38h], eax
.text:00363D04                 movzx   eax, byte ptr [ebp-1]
.text:00363D08                 add     [edx+eax*4+144h], ecx
.text:00363D0F                 mov     ecx, [ebp-38h]
.text:00363D12                 add     ecx, 18h
.text:00363D15                 add     ecx, esi
.text:00363D17                 mov     [esi+18h], ecx
.text:00363D1A                 sub     ecx, esi
.text:00363D1C                 mov     edx, [esi+8]
.text:00363D1F                 cmp     edx, edi
.text:00363D21                 jge     short loc_363D3F
.text:00363D21
.text:00363D23                 mov     eax, edx
.text:00363D25                 add     ecx, 0FFFFFFF4h
.text:00363D28                 shl     eax, 4
.text:00363D2B                 add     eax, ecx
.text:00363D2D                 mov     ecx, edi
.text:00363D2F                 sub     ecx, edx
.text:00363D2F
.text:00363D31
.text:00363D31 loc_363D31:                             ; CODE XREF: sub_360480+38BD↓j
.text:00363D31                 mov     dword ptr [eax], 0
.text:00363D37                 lea     eax, [eax+10h]
.text:00363D3A                 sub     ecx, 1
.text:00363D3D                 jnz     short loc_363D31
.text:00363D3D
.text:00363D3F
.text:00363D3F loc_363D3F:                             ; CODE XREF: sub_360480+38A1↑j
.text:00363D3F                 mov     eax, [ebp-1Ch]
.text:00363D42                 lea     edx, [esi+14h]
.text:00363D45                 mov     [esi+8], edi
.text:00363D45
.text:00363D48
.text:00363D48 loc_363D48:                             ; CODE XREF: sub_360480+3745↑j
.text:00363D48                 test    eax, eax
.text:00363D4A                 jnz     short loc_363D5B
.text:00363D4A
.text:00363D4C                 lea     eax, dword_1EA0808[edx]
.text:00363D52                 xor     ecx, ecx
.text:00363D54                 mov     [edx], eax
.text:00363D56                 jmp     loc_363E52
.text:00363D56
.text:00363D5B ; ---------------------------------------------------------------------------
.text:00363D5B
.text:00363D5B loc_363D5B:                             ; CODE XREF: sub_360480+38CA↑j
.text:00363D5B                 dec     eax
.text:00363D5C                 or      ecx, 0FFFFFFFFh
.text:00363D5F                 cmp     eax, 100h
.text:00363D64                 jb      short loc_363D7D
.text:00363D64
.text:00363D66                 db      66h, 66h
.text:00363D66                 nop     word ptr [eax+eax+00000000h]
.text:00363D66
.text:00363D70
.text:00363D70 loc_363D70:                             ; CODE XREF: sub_360480+38FB↓j
.text:00363D70                                         ; FE4E042B↓?
.text:00363D70                 shr     eax, 8
.text:00363D73                 add     ecx, 8
.text:00363D76                 cmp     eax, 100h
.text:00363D7B                 jnb     short loc_363D70
.text:00363D7B
.text:00363D7D
.text:00363D7D loc_363D7D:                             ; CODE XREF: sub_360480+38E4↑j
.text:00363D7D                 movzx   eax, ds:byte_278DF30[eax]
.text:00363D84                 inc     eax
.text:00363D85                 add     eax, ecx
.text:00363D87                 mov     [ebp-30h], eax
.text:00363D8A                 cmp     eax, 1Ah
.text:00363D8D                 jg      loc_376176
.text:00363D8D
.text:00363D93                 mov     ecx, eax
.text:00363D95                 mov     edx, 1
.text:00363D9A                 mov     al, [esi+1]
.text:00363D9D                 shl     edx, cl
.text:00363D9F                 mov     [ebp-1Ch], edx
.text:00363DA2                 mov     [ebp-1], al
.text:00363DA5                 cmp     edx, 7FFFFFFh
.text:00363DAB                 ja      loc_376089
.text:00363DAB
.text:00363DB1                 mov     eax, [ebp-64h]
.text:00363DB4                 mov     ecx, edx
.text:00363DB6                 shl     ecx, 5
.text:00363DB9                 mov     [ebp-10h], ecx
.text:00363DBC                 mov     edx, [eax]
.text:00363DBE                 sub     edx, eax
.text:00363DC0                 lea     eax, [ecx-1]
.text:00363DC3                 mov     [ebp-8], edx
.text:00363DC6                 cmp     eax, 200h
.text:00363DCB                 jnb     short loc_363DE4
.text:00363DCB
.text:00363DCD                 movsx   eax, byte_2AB8E08[ecx]
.text:00363DD4                 test    eax, eax
.text:00363DD6                 js      short loc_363DE4
.text:00363DD6
.text:00363DD8                 mov     ecx, [ebp-74h]
.text:00363DDB                 mov     edx, eax
.text:00363DDD                 call    sub_13C08C0
.text:00363DDD
.text:00363DE2                 jmp     short loc_363DF4
.text:00363DE2
.text:00363DE4 ; ---------------------------------------------------------------------------
.text:00363DE4
.text:00363DE4 loc_363DE4:                             ; CODE XREF: sub_360480+394B↑j
.text:00363DE4                                         ; sub_360480+3956↑j
.text:00363DE4                 mov     eax, [edx+0Ch]
.text:00363DE7                 push    ecx
.text:00363DE8                 push    0
.text:00363DEA                 push    0
.text:00363DEC                 push    dword ptr [edx+10h]
.text:00363DEF                 call    eax
.text:00363DEF
.text:00363DF1                 add     esp, 10h
.text:00363DF1
.text:00363DF4
.text:00363DF4 loc_363DF4:                             ; CODE XREF: sub_360480+3962↑j
.text:00363DF4                 mov     ecx, [ebp-10h]
.text:00363DF7                 mov     [ebp-0Ch], eax
.text:00363DFA                 test    eax, eax
.text:00363DFC                 jnz     short loc_363E06
.text:00363DFC
.text:00363DFE                 test    ecx, ecx
.text:00363E00                 jnz     loc_3760A9
.text:00363E00
.text:00363E06
.text:00363E06 loc_363E06:                             ; CODE XREF: sub_360480+397C↑j
.text:00363E06                 mov     edx, [ebp-8]
.text:00363E09                 movzx   eax, byte ptr [ebp-1]
.text:00363E0D                 add     [edx+38h], ecx
.text:00363E10                 add     [edx+eax*4+144h], ecx
.text:00363E17                 lea     ecx, [esi+14h]
.text:00363E1A                 mov     eax, [ebp-0Ch]
.text:00363E1D                 add     eax, ecx
.text:00363E1F                 mov     [ecx], eax
.text:00363E21                 mov     eax, [ebp-1Ch]
.text:00363E24                 test    eax, eax
.text:00363E26                 jle     short loc_363E4F
.text:00363E26
.text:00363E28                 xor     edx, edx
.text:00363E2A                 mov     esi, eax
.text:00363E2C                 nop     dword ptr [eax+00h]
.text:00363E2C
.text:00363E30
.text:00363E30 loc_363E30:                             ; CODE XREF: sub_360480+39CA↓j
.text:00363E30                 mov     eax, edx
.text:00363E32                 add     edx, 20h ; ' '
.text:00363E35                 sub     eax, ecx
.text:00363E37                 add     eax, [ecx]
.text:00363E39                 mov     dword ptr [eax+1Ch], 0
.text:00363E40                 mov     dword ptr [eax+0Ch], 0
.text:00363E47                 sub     esi, 1
.text:00363E4A                 jnz     short loc_363E30
.text:00363E4A
.text:00363E4C                 mov     esi, [ebp-14h]
.text:00363E4C
.text:00363E4F
.text:00363E4F loc_363E4F:                             ; CODE XREF: sub_360480+39A6↑j
.text:00363E4F                 mov     ecx, [ebp-30h]
.text:00363E4F
.text:00363E52
.text:00363E52 loc_363E52:                             ; CODE XREF: sub_360480+38D6↑j
.text:00363E52                 mov     al, 1
.text:00363E54                 mov     [esi+5], cl
.text:00363E57                 shl     al, cl
.text:00363E59                 dec     al
.text:00363E5B                 mov     [esi+4], al
.text:00363E5E                 mov     eax, [ebp-1Ch]
.text:00363E61                 mov     [esi+0Ch], eax
.text:00363E64                 cmp     edi, [ebp-24h]
.text:00363E67                 jge     loc_363FF6
.text:00363E67
.text:00363E6D                 mov     eax, edi
.text:00363E6F                 mov     [esi+8], edi
.text:00363E72                 shl     eax, 4
.text:00363E75                 lea     ecx, [esi+18h]
.text:00363E78                 mov     [ebp-30h], eax
.text:00363E7B                 mov     edi, eax
.text:00363E7D                 mov     eax, [ebp-44h]
.text:00363E80                 mov     [ebp-1Ch], ecx
.text:00363E83                 lea     edx, [eax+1]
.text:00363E86                 mov     [ebp-10h], edx
.text:00363E89                 mov     edx, [ebp-24h]
.text:00363E8C                 mov     [ebp-8], edx
.text:00363E8F                 sub     [ebp-8], eax
.text:00363E92                 mov     edx, [ebp-10h]
.text:00363E92
.text:00363E95
.text:00363E95 loc_363E95:                             ; CODE XREF: sub_360480+3AAA↓j
.text:00363E95                 mov     eax, [ecx]
.text:00363E97                 mov     [ebp-0Ch], eax
.text:00363E9A                 mov     eax, edi
.text:00363E9C                 mov     esi, [ebp-0Ch]
.text:00363E9F                 sub     eax, ecx
.text:00363EA1                 cmp     dword ptr [eax+esi+0Ch], 0
.text:00363EA6                 mov     esi, [ebp-14h]
.text:00363EA9                 jz      short loc_363F1F
.text:00363EA9
.text:00363EAB                 cmp     byte_2AB2004, 0
.text:00363EB2                 jz      short loc_363EFB
.text:00363EB2
.text:00363EB4                 movd    xmm0, edx
.text:00363EB8                 lea     eax, [ebp-3A0h]
.text:00363EBE                 mov     edx, [ebp-14h]
.text:00363EC1                 mov     esi, edi
.text:00363EC3                 cvtdq2pd xmm1, xmm0
.text:00363EC7                 sub     esi, ecx
.text:00363EC9                 mov     dword ptr [ebp-394h], 4
.text:00363ED3                 push    eax
.text:00363ED4                 xorps   xmm1, xmmword_2C87C80
.text:00363EDB                 movsd   qword ptr [ebp-3A0h], xmm1
.text:00363EE3                 add     esi, [ecx]
.text:00363EE5                 mov     ecx, [ebp-74h]
.text:00363EE8                 call    sub_13B83C0
.text:00363EE8
.text:00363EED                 movups  xmm0, xmmword ptr [esi]
.text:00363EF0                 mov     esi, [ebp-14h]
.text:00363EF3                 add     esp, 4
.text:00363EF6                 mov     ecx, [ebp-1Ch]
.text:00363EF9                 jmp     short loc_363F19
.text:00363EF9
.text:00363EFB ; ---------------------------------------------------------------------------
.text:00363EFB
.text:00363EFB loc_363EFB:                             ; CODE XREF: sub_360480+3A32↑j
.text:00363EFB                 mov     ecx, [ebp-74h]
.text:00363EFE                 push    edx
.text:00363EFF                 mov     edx, esi
.text:00363F01                 call    sub_13BBE20
.text:00363F01
.text:00363F06                 mov     ecx, edi
.text:00363F08                 lea     edx, [esi+18h]
.text:00363F0B                 sub     ecx, edx
.text:00363F0D                 add     esp, 4
.text:00363F10                 add     ecx, [ebp-0Ch]
.text:00363F13                 movups  xmm0, xmmword ptr [ecx]
.text:00363F16                 lea     ecx, [esi+18h]
.text:00363F16
.text:00363F19
.text:00363F19 loc_363F19:                             ; CODE XREF: sub_360480+3A79↑j
.text:00363F19                 mov     edx, [ebp-10h]
.text:00363F1C                 movups  xmmword ptr [eax], xmm0
.text:00363F1C
.text:00363F1F
.text:00363F1F loc_363F1F:                             ; CODE XREF: sub_360480+3A29↑j
.text:00363F1F                 inc     edx
.text:00363F20                 add     edi, 10h
.text:00363F23                 sub     dword ptr [ebp-8], 1
.text:00363F27                 mov     [ebp-10h], edx
.text:00363F2A                 jnz     loc_363E95
.text:00363F2A
.text:00363F30                 mov     al, [esi+1]
.text:00363F33                 mov     edi, [ebp-44h]
.text:00363F36                 mov     [ebp-1], al
.text:00363F39                 cmp     edi, 0FFFFFFFh
.text:00363F3F                 ja      loc_376089
.text:00363F3F
.text:00363F45                 mov     eax, [ecx]
.text:00363F47                 sub     eax, ecx
.text:00363F49                 mov     ecx, [ebp-30h]
.text:00363F4C                 mov     [ebp-1Ch], eax
.text:00363F4F                 mov     eax, [ebp-24h]
.text:00363F52                 shl     eax, 4
.text:00363F55                 mov     [ebp-44h], eax
.text:00363F58                 mov     eax, [ebp-64h]
.text:00363F5B                 mov     edx, [eax]
.text:00363F5D                 sub     edx, eax
.text:00363F5F                 lea     eax, [ecx-1]
.text:00363F62                 mov     [ebp-10h], edx
.text:00363F65                 cmp     eax, 200h
.text:00363F6A                 jnb     short loc_363F78
.text:00363F6A
.text:00363F6C                 movsx   eax, byte_2AB8E08[ecx]
.text:00363F73                 mov     [ebp-8], eax
.text:00363F76                 jmp     short loc_363F7F
.text:00363F76
.text:00363F78 ; ---------------------------------------------------------------------------
.text:00363F78
.text:00363F78 loc_363F78:                             ; CODE XREF: sub_360480+3AEA↑j
.text:00363F78                 mov     dword ptr [ebp-8], 0FFFFFFFFh
.text:00363F78
.text:00363F7F
.text:00363F7F loc_363F7F:                             ; CODE XREF: sub_360480+3AF6↑j
.text:00363F7F                 mov     eax, [ebp-44h]
.text:00363F82                 dec     eax
.text:00363F83                 cmp     eax, 200h
.text:00363F88                 jnb     short loc_363F96
.text:00363F88
.text:00363F8A                 mov     eax, [ebp-44h]
.text:00363F8D                 movsx   eax, byte_2AB8E08[eax]
.text:00363F94                 jmp     short loc_363F99
.text:00363F94
.text:00363F96 ; ---------------------------------------------------------------------------
.text:00363F96
.text:00363F96 loc_363F96:                             ; CODE XREF: sub_360480+3B08↑j
.text:00363F96                 or      eax, 0FFFFFFFFh
.text:00363F96
.text:00363F99
.text:00363F99 loc_363F99:                             ; CODE XREF: sub_360480+3B14↑j
.text:00363F99                 cmp     dword ptr [ebp-8], 0
.text:00363F9D                 mov     [ebp-0Ch], eax
.text:00363FA0                 jge     loc_36409D
.text:00363FA0
.text:00363FA6                 test    eax, eax
.text:00363FA8                 mov     eax, [edx+0Ch]
.text:00363FAB                 push    ecx
.text:00363FAC                 jns     loc_36408A
.text:00363FAC
.text:00363FB2                 push    dword ptr [ebp-44h]
.text:00363FB5                 mov     edi, [ebp-1Ch]
.text:00363FB8                 push    edi
.text:00363FB9                 push    dword ptr [edx+10h]
.text:00363FBC                 call    eax
.text:00363FBC
.text:00363FBE                 mov     ecx, [ebp-30h]
.text:00363FC1                 add     esp, 10h
.text:00363FC4                 mov     [ebp-8], eax
.text:00363FC7                 test    eax, eax
.text:00363FC9                 jnz     short loc_363FD3
.text:00363FC9
.text:00363FCB                 test    ecx, ecx
.text:00363FCD                 jnz     loc_3760A9
.text:00363FCD
.text:00363FD3
.text:00363FD3 loc_363FD3:                             ; CODE XREF: sub_360480+3B49↑j
.text:00363FD3                                         ; sub_360480+3C7C↓j
.text:00363FD3                 mov     edi, [ebp-10h]
.text:00363FD3
.text:00363FD6
.text:00363FD6 loc_363FD6:                             ; CODE XREF: sub_360480+3C96↓j
.text:00363FD6                 mov     eax, ecx
.text:00363FD8                 lea     edx, [esi+18h]
.text:00363FDB                 sub     eax, [ebp-44h]
.text:00363FDE                 add     [edi+38h], eax
.text:00363FE1                 movzx   eax, byte ptr [ebp-1]
.text:00363FE5                 sub     ecx, [ebp-44h]
.text:00363FE8                 add     [edi+eax*4+144h], ecx
.text:00363FEF                 mov     eax, [ebp-8]
.text:00363FF2                 add     eax, edx
.text:00363FF4                 mov     [edx], eax
.text:00363FF4
.text:00363FF6
.text:00363FF6 loc_363FF6:                             ; CODE XREF: sub_360480+39E7↑j
.text:00363FF6                 mov     ecx, [ebp-34h]
.text:00363FF9                 mov     edx, 1
.text:00363FFE                 shl     edx, cl
.text:00364000                 cmp     byte_2AB2004, 0
.text:00364007                 mov     [ebp-1Ch], edx
.text:0036400A                 lea     edi, [edx-1]
.text:0036400D                 jz      loc_36411B
.text:0036400D
.text:00364013                 test    edi, edi
.text:00364015                 js      loc_364188
.text:00364015
.text:0036401B                 mov     edx, [ebp-3Ch]
.text:0036401E                 mov     eax, edi
.text:00364020                 shl     eax, 5
.text:00364023                 add     edx, 10h
.text:00364026                 add     edx, eax
.text:00364028                 mov     [ebp-24h], edx
.text:0036402B                 nop     dword ptr [eax+eax+00h]
.text:0036402B
.text:00364030
.text:00364030 loc_364030:                             ; CODE XREF: sub_360480+3C03↓j
.text:00364030                 cmp     dword ptr [edx-4], 0
.text:00364034                 jz      short loc_36407A
.text:00364034
.text:00364036                 mov     eax, [edx]
.text:00364038                 mov     ecx, [edx+4]
.text:0036403B                 mov     [ebp-3B0h], eax
.text:00364041                 mov     [ebp-3ACh], ecx
.text:00364047                 mov     eax, [edx+8]
.text:0036404A                 mov     ecx, [ebp-74h]
.text:0036404D                 mov     [ebp-3A8h], eax
.text:00364053                 mov     eax, [edx+0Ch]
.text:00364056                 mov     edx, esi
.text:00364058                 and     eax, 0Fh
.text:0036405B                 mov     [ebp-3A4h], eax
.text:00364061                 lea     eax, [ebp-3B0h]
.text:00364067                 push    eax
.text:00364068                 call    sub_13B40E0
.text:00364068
.text:0036406D                 mov     edx, [ebp-24h]
.text:00364070                 add     esp, 4
.text:00364073                 movups  xmm0, xmmword ptr [edx-10h]
.text:00364077                 movups  xmmword ptr [eax], xmm0
.text:00364077
.text:0036407A
.text:0036407A loc_36407A:                             ; CODE XREF: sub_360480+3BB4↑j
.text:0036407A                 sub     edx, 20h ; ' '
.text:0036407D                 sub     edi, 1
.text:00364080                 mov     [ebp-24h], edx
.text:00364083                 jns     short loc_364030
.text:00364083
.text:00364085                 jmp     loc_364185
.text:00364085
.text:0036408A ; ---------------------------------------------------------------------------
.text:0036408A
.text:0036408A loc_36408A:                             ; CODE XREF: sub_360480+3B2C↑j
.text:0036408A                 push    0
.text:0036408C                 push    0
.text:0036408E                 push    dword ptr [edx+10h]
.text:00364091                 call    eax
.text:00364091
.text:00364093                 mov     edx, eax
.text:00364095                 add     esp, 10h
.text:00364098                 mov     [ebp-8], edx
.text:0036409B                 jmp     short loc_3640AD
.text:0036409B
.text:0036409D ; ---------------------------------------------------------------------------
.text:0036409D
.text:0036409D loc_36409D:                             ; CODE XREF: sub_360480+3B20↑j
.text:0036409D                 mov     edx, [ebp-8]
.text:003640A0                 mov     ecx, [ebp-74h]
.text:003640A3                 call    sub_13C08C0
.text:003640A3
.text:003640A8                 mov     edx, eax
.text:003640AA                 mov     [ebp-8], eax
.text:003640AA
.text:003640AD
.text:003640AD loc_3640AD:                             ; CODE XREF: sub_360480+3C1B↑j
.text:003640AD                 mov     eax, [ebp-30h]
.text:003640B0                 test    edx, edx
.text:003640B2                 jnz     short loc_3640BC
.text:003640B2
.text:003640B4                 test    eax, eax
.text:003640B6                 jnz     loc_3760A9
.text:003640B6
.text:003640BC
.text:003640BC loc_3640BC:                             ; CODE XREF: sub_360480+3C32↑j
.text:003640BC                 mov     ecx, [ebp-44h]
.text:003640BF                 test    ecx, ecx
.text:003640C1                 jz      short loc_3640E3
.text:003640C1
.text:003640C3                 test    eax, eax
.text:003640C5                 jz      short loc_3640E3
.text:003640C5
.text:003640C7                 cmp     ecx, eax
.text:003640C9                 cmovb   edi, [ebp-24h]
.text:003640CD                 shl     edi, 4
.text:003640D0                 push    edi
.text:003640D1                 mov     edi, [ebp-1Ch]
.text:003640D4                 push    edi
.text:003640D5                 push    edx
.text:003640D6                 call    sub_1B7EE40
.text:003640D6
.text:003640DB                 mov     ecx, [ebp-44h]
.text:003640DE                 add     esp, 0Ch
.text:003640E1                 jmp     short loc_3640E6
.text:003640E1
.text:003640E3 ; ---------------------------------------------------------------------------
.text:003640E3
.text:003640E3 loc_3640E3:                             ; CODE XREF: sub_360480+3C41↑j
.text:003640E3                                         ; sub_360480+3C45↑j
.text:003640E3                 mov     edi, [ebp-1Ch]
.text:003640E3
.text:003640E6
.text:003640E6 loc_3640E6:                             ; CODE XREF: sub_360480+3C61↑j
.text:003640E6                 mov     edx, [ebp-0Ch]
.text:003640E9                 test    edx, edx
.text:003640EB                 js      short loc_364101
.text:003640EB
.text:003640ED                 mov     ecx, [ebp-74h]
.text:003640F0                 push    edi
.text:003640F1                 call    sub_13C0A60
.text:003640F1
.text:003640F6                 mov     ecx, [ebp-30h]
.text:003640F9                 add     esp, 4
.text:003640FC                 jmp     loc_363FD3
.text:003640FC
.text:00364101 ; ---------------------------------------------------------------------------
.text:00364101
.text:00364101 loc_364101:                             ; CODE XREF: sub_360480+3C6B↑j
.text:00364101                 push    0
.text:00364103                 push    ecx
.text:00364104                 push    edi
.text:00364105                 mov     edi, [ebp-10h]
.text:00364108                 push    dword ptr [edi+10h]
.text:0036410B                 mov     eax, [edi+0Ch]
.text:0036410E                 call    eax
.text:0036410E
.text:00364110                 mov     ecx, [ebp-30h]
.text:00364113                 add     esp, 10h
.text:00364116                 jmp     loc_363FD6
.text:00364116
.text:0036411B ; ---------------------------------------------------------------------------
.text:0036411B
.text:0036411B loc_36411B:                             ; CODE XREF: sub_360480+3B8D↑j
.text:0036411B                 test    edi, edi
.text:0036411D                 js      short loc_364188
.text:0036411D
.text:0036411F                 mov     edx, [ebp-3Ch]
.text:00364122                 mov     eax, edi
.text:00364124                 shl     eax, 5
.text:00364127                 add     edx, 10h
.text:0036412A                 add     edx, eax
.text:0036412C                 mov     [ebp-24h], edx
.text:0036412F                 nop
.text:0036412F
.text:00364130
.text:00364130 loc_364130:                             ; CODE XREF: sub_360480+3D03↓j
.text:00364130                 cmp     dword ptr [edx-4], 0
.text:00364134                 jz      short loc_36417A
.text:00364134
.text:00364136                 mov     eax, [edx]
.text:00364138                 mov     ecx, [edx+4]
.text:0036413B                 mov     [ebp-3C0h], eax
.text:00364141                 mov     [ebp-3BCh], ecx
.text:00364147                 mov     eax, [edx+8]
.text:0036414A                 mov     ecx, [ebp-74h]
.text:0036414D                 mov     [ebp-3B8h], eax
.text:00364153                 mov     eax, [edx+0Ch]
.text:00364156                 mov     edx, esi
.text:00364158                 and     eax, 0Fh
.text:0036415B                 mov     [ebp-3B4h], eax
.text:00364161                 lea     eax, [ebp-3C0h]
.text:00364167                 push    eax
.text:00364168                 call    sub_13BA4F0
.text:00364168
.text:0036416D                 mov     edx, [ebp-24h]
.text:00364170                 add     esp, 4
.text:00364173                 movups  xmm0, xmmword ptr [edx-10h]
.text:00364177                 movups  xmmword ptr [eax], xmm0
.text:00364177
.text:0036417A
.text:0036417A loc_36417A:                             ; CODE XREF: sub_360480+3CB4↑j
.text:0036417A                 sub     edx, 20h ; ' '
.text:0036417D                 sub     edi, 1
.text:00364180                 mov     [ebp-24h], edx
.text:00364183                 jns     short loc_364130
.text:00364183
.text:00364185
.text:00364185 loc_364185:                             ; CODE XREF: sub_360480+3C05↑j
.text:00364185                 mov     edx, [ebp-1Ch]
.text:00364185
.text:00364188
.text:00364188 loc_364188:                             ; CODE XREF: sub_360480+3B95↑j
.text:00364188                                         ; sub_360480+3C9D↑j
.text:00364188                 mov     ecx, [ebp-3Ch]
.text:0036418B                 mov     edi, [ebp-74h]
.text:0036418E                 cmp     ecx, offset dword_1EA0808
.text:00364194                 jz      short loc_3641AB
.text:00364194
.text:00364196                 movzx   eax, byte ptr [esi+1]
.text:0036419A                 shl     edx, 5
.text:0036419D                 push    eax
.text:0036419E                 push    edx
.text:0036419F                 mov     edx, ecx
.text:003641A1                 mov     ecx, edi
.text:003641A3                 call    sub_13C0AF0
.text:003641A3
.text:003641A8                 add     esp, 8
.text:003641A8
.text:003641AB
.text:003641AB loc_3641AB:                             ; CODE XREF: sub_360480+3D14↑j
.text:003641AB                 cmp     byte_2AB2004, 0
.text:003641B2                 mov     edx, esi
.text:003641B4                 push    dword ptr [ebp-50h]
.text:003641B7                 mov     ecx, edi
.text:003641B9                 jnz     loc_3637F1
.text:003641B9
.text:003641BF                 call    sub_13BA4F0
.text:003641BF
.text:003641C4                 mov     edi, eax
.text:003641C6                 jmp     loc_364431
.text:003641C6
.text:003641CB ; ---------------------------------------------------------------------------
.text:003641CB
.text:003641CB loc_3641CB:                             ; CODE XREF: sub_360480+34EF↑j
.text:003641CB                 mov     eax, [edi+14h]
.text:003641CE                 mov     ecx, [edi+10h]
.text:003641D1                 mov     edx, ecx
.text:003641D3                 mov     [ebp-44h], eax
.text:003641D6                 mov     [ebp-3CCh], eax
.text:003641DC                 mov     eax, [edi+18h]
.text:003641DF                 mov     [ebp-34h], eax
.text:003641E2                 mov     [ebp-3C8h], eax
.text:003641E8                 mov     eax, [edi+1Ch]
.text:003641EB                 and     eax, 0Fh
.text:003641EE                 mov     [ebp-24h], ecx
.text:003641F1                 dec     eax             ; switch 5 cases
.text:003641F2                 mov     [ebp-3D0h], ecx
.text:003641F8                 cmp     eax, 4
.text:003641FB                 ja      def_364201      ; jumptable 00364201 default case
.text:003641FB
.text:00364201                 jmp     ds:jpt_364201[eax*4] ; switch jump
.text:00364201
.text:00364208 ; ---------------------------------------------------------------------------
.text:00364208
.text:00364208 loc_364208:                             ; CODE XREF: sub_360480+3D81↑j
.text:00364208                                         ; DATA XREF: .text:jpt_364201↓o
.text:00364208                 movsd   xmm1, qword ptr [ebp-3D0h] ; jumptable 00364201 case 4
.text:00364210                 xorps   xmm1, xmmword_2C87C80
.text:00364217                 movsd   qword ptr [ebp-28h], xmm1
.text:0036421C                 mov     ecx, [ebp-24h]
.text:0036421F                 and     ecx, 7FFFFFFFh
.text:00364225                 mov     eax, ecx
.text:00364227                 shr     eax, 12h
.text:0036422A                 xor     eax, [ebp-28h]
.text:0036422D                 imul    edx, eax, 5BD1E995h
.text:00364233                 mov     eax, edx
.text:00364235                 shr     eax, 16h
.text:00364238                 xor     eax, ecx
.text:0036423A                 imul    ecx, eax, 5BD1E995h
.text:00364240                 mov     eax, ecx
.text:00364242                 shr     eax, 11h
.text:00364245                 xor     eax, edx
.text:00364247                 imul    eax, 5BD1E995h
.text:0036424D                 shr     eax, 13h
.text:00364250                 xor     eax, ecx
.text:00364252                 imul    edx, eax, 5BD1E995h
.text:00364258                 jmp     loc_364311
.text:00364258
.text:0036425D ; ---------------------------------------------------------------------------
.text:0036425D
.text:0036425D loc_36425D:                             ; CODE XREF: sub_360480+3D81↑j
.text:0036425D                                         ; DATA XREF: .text:jpt_364201↓o
.text:0036425D                 mov     eax, [ebp-44h]  ; jumptable 00364201 case 3
.text:00364260                 mov     edx, eax
.text:00364262                 mov     dword ptr [ebp-44h], 0
.text:00364269                 mov     dword ptr [ebp-44h], 0
.text:00364270                 cmp     ecx, 8000000h
.text:00364276                 jnz     short loc_36427F
.text:00364276
.text:00364278                 mov     dword ptr [ebp-24h], 0
.text:00364278
.text:0036427F
.text:0036427F loc_36427F:                             ; CODE XREF: sub_360480+3DF6↑j
.text:0036427F                 xor     ecx, ecx
.text:00364281                 cmp     edx, 8000000h
.text:00364287                 mov     edx, [ebp-34h]
.text:0036428A                 cmovnz  ecx, eax
.text:0036428D                 xor     eax, eax
.text:0036428F                 cmp     edx, 8000000h
.text:00364295                 cmovz   edx, eax
.text:00364298                 mov     eax, edx
.text:0036429A                 shr     eax, 11h
.text:0036429D                 xor     eax, edx
.text:0036429F                 imul    edx, eax, 4F9FFB7h
.text:003642A5                 mov     eax, ecx
.text:003642A7                 shr     eax, 11h
.text:003642AA                 xor     eax, ecx
.text:003642AC                 imul    eax, 127409Fh
.text:003642B2                 xor     edx, eax
.text:003642B4                 mov     eax, [ebp-24h]
.text:003642B7                 shr     eax, 11h
.text:003642BA                 xor     eax, [ebp-24h]
.text:003642BD                 imul    eax, 466F45Dh
.text:003642C3                 jmp     short loc_36430F
.text:003642C3
.text:003642C5 ; ---------------------------------------------------------------------------
.text:003642C5
.text:003642C5 loc_3642C5:                             ; CODE XREF: sub_360480+3D81↑j
.text:003642C5                                         ; DATA XREF: .text:jpt_364201↓o
.text:003642C5                 lea     eax, [ecx+0Ch]  ; jumptable 00364201 case 5
.text:003642C8                 mov     edx, 1
.text:003642CD                 mov     cl, [esi+5]
.text:003642D0                 shl     edx, cl
.text:003642D2                 dec     edx
.text:003642D3                 sub     eax, [eax]
.text:003642D5                 jmp     short loc_36431C
.text:003642D5
.text:003642D7 ; ---------------------------------------------------------------------------
.text:003642D7
.text:003642D7 loc_3642D7:                             ; CODE XREF: sub_360480+3D81↑j
.text:003642D7                                         ; DATA XREF: .text:jpt_364201↓o
.text:003642D7                 mov     cl, [esi+5]     ; jumptable 00364201 case 1
.text:003642DA                 mov     edx, 1
.text:003642DF                 shl     edx, cl
.text:003642E1                 dec     edx
.text:003642E2                 and     edx, [ebp-24h]
.text:003642E5                 jmp     short loc_36431E
.text:003642E5
.text:003642E7 ; ---------------------------------------------------------------------------
.text:003642E7
.text:003642E7 loc_3642E7:                             ; CODE XREF: sub_360480+3D81↑j
.text:003642E7                                         ; DATA XREF: .text:jpt_364201↓o
.text:003642E7                 mov     eax, ecx        ; jumptable 00364201 case 2
.text:003642E9                 shr     eax, 10h
.text:003642EC                 xor     eax, ecx
.text:003642EE                 jmp     short loc_3642F7
.text:003642EE
.text:003642F0 ; ---------------------------------------------------------------------------
.text:003642F0
.text:003642F0 def_364201:                             ; CODE XREF: sub_360480+3D7B↑j
.text:003642F0                 mov     eax, edx        ; jumptable 00364201 default case
.text:003642F2                 shr     eax, 10h
.text:003642F5                 xor     eax, edx
.text:003642F5
.text:003642F7
.text:003642F7 loc_3642F7:                             ; CODE XREF: sub_360480+3E6E↑j
.text:003642F7                 imul    ecx, eax, 85EBCA6Bh
.text:003642FD                 mov     eax, ecx
.text:003642FF                 shr     eax, 0Dh
.text:00364302                 xor     eax, ecx
.text:00364304                 imul    eax, 0C2B2AE35h
.text:0036430A                 mov     edx, eax
.text:0036430C                 shr     edx, 10h
.text:0036430C
.text:0036430F
.text:0036430F loc_36430F:                             ; CODE XREF: sub_360480+3E43↑j
.text:0036430F                 xor     edx, eax
.text:0036430F
.text:00364311
.text:00364311 loc_364311:                             ; CODE XREF: sub_360480+3DD8↑j
.text:00364311                 mov     cl, [esi+5]
.text:00364314                 mov     eax, 1
.text:00364319                 shl     eax, cl
.text:0036431B                 dec     eax
.text:0036431B
.text:0036431C
.text:0036431C loc_36431C:                             ; CODE XREF: sub_360480+3E55↑j
.text:0036431C                 and     edx, eax
.text:0036431C
.text:0036431E
.text:0036431E loc_36431E:                             ; CODE XREF: sub_360480+3E65↑j
.text:0036431E                 shl     edx, 5
.text:00364321                 lea     eax, [esi+14h]
.text:00364324                 sub     edx, eax
.text:00364326                 add     edx, [eax]
.text:00364328                 cmp     edx, edi
.text:0036432A                 jz      short loc_3643A6
.text:0036432A
.text:0036432C                 mov     eax, [edx+1Ch]
.text:0036432F                 sar     eax, 4
.text:00364332                 shl     eax, 5
.text:00364335                 add     eax, edx
.text:00364337                 cmp     eax, edi
.text:00364339                 jz      short loc_364351
.text:00364339
.text:0036433B                 nop     dword ptr [eax+eax+00h]
.text:0036433B
.text:00364340
.text:00364340 loc_364340:                             ; CODE XREF: sub_360480+3ECF↓j
.text:00364340                 mov     edx, eax
.text:00364342                 mov     eax, [edx+1Ch]
.text:00364345                 sar     eax, 4
.text:00364348                 shl     eax, 5
.text:0036434B                 add     eax, edx
.text:0036434D                 cmp     eax, edi
.text:0036434F                 jnz     short loc_364340
.text:0036434F
.text:00364351
.text:00364351 loc_364351:                             ; CODE XREF: sub_360480+3EB9↑j
.text:00364351                 mov     eax, [ebp-1Ch]
.text:00364354                 mov     ecx, eax
.text:00364356                 sub     ecx, edx
.text:00364358                 sub     eax, edx
.text:0036435A                 sar     ecx, 1
.text:0036435C                 xor     ecx, [edx+1Ch]
.text:0036435F                 and     ecx, 0Fh
.text:00364362                 sar     eax, 1
.text:00364364                 xor     ecx, eax
.text:00364366                 mov     [edx+1Ch], ecx
.text:00364369                 movups  xmm0, xmmword ptr [edi]
.text:0036436C                 mov     edx, [ebp-1Ch]
.text:0036436F                 movups  xmmword ptr [edx], xmm0
.text:00364372                 movups  xmm0, xmmword ptr [edi+10h]
.text:00364376                 movups  xmmword ptr [edx+10h], xmm0
.text:0036437A                 test    dword ptr [edi+1Ch], 0FFFFFFF0h
.text:00364381                 jz      short loc_36439D
.text:00364381
.text:00364383                 mov     eax, edi
.text:00364385                 xor     ecx, ecx
.text:00364387                 sub     eax, edx
.text:00364389                 and     ecx, 0Fh
.text:0036438C                 sar     eax, 1
.text:0036438E                 and     eax, 0FFFFFFF0h
.text:00364391                 add     eax, [edx+1Ch]
.text:00364394                 xor     eax, ecx
.text:00364396                 mov     [edx+1Ch], eax
.text:00364399                 and     dword ptr [edi+1Ch], 0Fh
.text:00364399
.text:0036439D
.text:0036439D loc_36439D:                             ; CODE XREF: sub_360480+3F01↑j
.text:0036439D                 mov     dword ptr [edi+0Ch], 0
.text:003643A4                 jmp     short loc_3643EF
.text:003643A4
.text:003643A6 ; ---------------------------------------------------------------------------
.text:003643A6
.text:003643A6 loc_3643A6:                             ; CODE XREF: sub_360480+3EAA↑j
.text:003643A6                 mov     eax, [edi+1Ch]
.text:003643A9                 mov     ecx, eax
.text:003643AB                 mov     edx, [ebp-1Ch]
.text:003643AE                 sar     ecx, 4
.text:003643B1                 test    ecx, ecx
.text:003643B3                 jz      short loc_3643D7
.text:003643B3
.text:003643B5                 mov     eax, ecx
.text:003643B7                 shl     ecx, 5
.text:003643BA                 shl     eax, 5
.text:003643BD                 sub     ecx, edx
.text:003643BF                 sub     eax, edx
.text:003643C1                 add     ecx, edi
.text:003643C3                 add     eax, edi
.text:003643C5                 sar     ecx, 1
.text:003643C7                 sar     eax, 1
.text:003643C9                 xor     eax, [edx+1Ch]
.text:003643CC                 and     eax, 0Fh
.text:003643CF                 xor     eax, ecx
.text:003643D1                 mov     [edx+1Ch], eax
.text:003643D4                 mov     eax, [edi+1Ch]
.text:003643D4
.text:003643D7
.text:003643D7 loc_3643D7:                             ; CODE XREF: sub_360480+3F33↑j
.text:003643D7                 mov     ecx, edx
.text:003643D9                 sub     ecx, edi
.text:003643DB                 sar     ecx, 1
.text:003643DD                 xor     ecx, eax
.text:003643DF                 mov     eax, edx
.text:003643E1                 sub     eax, edi
.text:003643E3                 and     ecx, 0Fh
.text:003643E6                 sar     eax, 1
.text:003643E8                 xor     ecx, eax
.text:003643EA                 mov     [edi+1Ch], ecx
.text:003643ED                 mov     edi, edx
.text:003643ED
.text:003643EF
.text:003643EF loc_3643EF:                             ; CODE XREF: sub_360480+34DD↑j
.text:003643EF                                         ; sub_360480+3F24↑j
.text:003643EF                 mov     edx, [ebp-50h]
.text:003643F2                 mov     eax, [edx]
.text:003643F4                 mov     ecx, [edx+4]
.text:003643F7                 mov     [edi+10h], eax
.text:003643FA                 mov     [edi+14h], ecx
.text:003643FD                 mov     ecx, [ebp-2Ch]
.text:00364400                 mov     eax, [ecx-18h]
.text:00364403                 mov     [edi+18h], eax
.text:00364406                 mov     eax, [edi+1Ch]
.text:00364409                 xor     eax, [ecx-14h]
.text:0036440C                 and     eax, 0Fh
.text:0036440F                 xor     [edi+1Ch], eax
.text:00364412                 cmp     dword ptr [ecx-14h], 5
.text:00364416                 jl      short loc_364434
.text:00364416
.text:00364418                 test    byte ptr [esi+2], 4
.text:0036441C                 jz      short loc_364434
.text:0036441C
.text:0036441E                 mov     eax, [edx]
.text:00364420                 test    byte ptr [eax+2], 3
.text:00364424                 jz      short loc_364434
.text:00364424
.text:00364426                 mov     ecx, [ebp-74h]
.text:00364429                 mov     edx, esi
.text:0036442B                 push    eax
.text:0036442C                 call    sub_1376B10
.text:0036442C
.text:00364431
.text:00364431 loc_364431:                             ; CODE XREF: sub_360480+3378↑j
.text:00364431                                         ; sub_360480+3D46↑j
.text:00364431                 add     esp, 4
.text:00364431
.text:00364434
.text:00364434 loc_364434:                             ; CODE XREF: sub_360480+2784↑j
.text:00364434                                         ; sub_360480+3F96↑j ...
.text:00364434                 lea     eax, [esi+14h]
.text:00364437                 mov     ecx, edi
.text:00364439                 sub     ecx, [eax]
.text:0036443B                 add     ecx, eax
.text:0036443D                 mov     eax, [ebp-74h]
.text:00364440                 sar     ecx, 5
.text:00364443                 mov     [eax+34h], ecx
.text:00364446                 cmp     dword ptr [edi+0Ch], 0
.text:0036444A                 jnz     loc_3645C6
.text:0036444A
.text:00364450                 mov     edx, [esi+10h]
.text:00364453                 lea     ecx, [esi+10h]
.text:00364456                 mov     eax, edx
.text:00364458                 sub     eax, ecx
.text:0036445A                 jz      loc_3645C6
.text:0036445A
.text:00364460                 sub     edx, esi
.text:00364462                 mov     [ebp-1Ch], edx
.text:00364465                 mov     al, [edx-0Ah]
.text:00364468                 mov     [ebp-1], al
.text:0036446B                 test    al, 4
.text:0036446D                 jnz     loc_3645C6
.text:0036446D
.text:00364473                 mov     ecx, [ebp-64h]
.text:00364476                 mov     esi, 1
.text:0036447B                 add     edx, 4
.text:0036447E                 mov     eax, [ecx]
.text:00364480                 sub     eax, ecx
.text:00364482                 mov     ecx, [eax+574h]
.text:00364488                 add     eax, 574h
.text:0036448D                 sub     ecx, eax
.text:0036448F                 mov     [ebp-24h], ecx
.text:00364492                 lea     eax, [ecx+0Ch]
.text:00364495                 mov     ecx, [ebp-1Ch]
.text:00364498                 sub     eax, [eax]
.text:0036449A                 mov     cl, [ecx-0Bh]
.text:0036449D                 shl     esi, cl
.text:0036449F                 dec     esi
.text:003644A0                 and     esi, eax
.text:003644A2                 shl     esi, 5
.text:003644A5                 sub     esi, edx
.text:003644A7                 add     esi, [edx]
.text:003644A9                 mov     edx, [ebp-24h]
.text:003644AC                 nop     dword ptr [eax+00h]
.text:003644AC
.text:003644B0
.text:003644B0 loc_3644B0:                             ; CODE XREF: sub_360480+404D↓j
.text:003644B0                 mov     ecx, [esi+1Ch]
.text:003644B3                 mov     eax, ecx
.text:003644B5                 and     eax, 0Fh
.text:003644B8                 cmp     al, 5
.text:003644BA                 jnz     short loc_3644C1
.text:003644BA
.text:003644BC                 cmp     [esi+10h], edx
.text:003644BF                 jz      short loc_3644D4
.text:003644BF
.text:003644C1
.text:003644C1 loc_3644C1:                             ; CODE XREF: sub_360480+403A↑j
.text:003644C1                 sar     ecx, 4
.text:003644C4                 test    ecx, ecx
.text:003644C6                 jz      short loc_3644CF
.text:003644C6
.text:003644C8                 shl     ecx, 5
.text:003644CB                 add     esi, ecx
.text:003644CD                 jmp     short loc_3644B0
.text:003644CD
.text:003644CF ; ---------------------------------------------------------------------------
.text:003644CF
.text:003644CF loc_3644CF:                             ; CODE XREF: sub_360480+4046↑j
.text:003644CF                 mov     esi, offset luao_nilobject
.text:003644CF
.text:003644D4
.text:003644D4 loc_3644D4:                             ; CODE XREF: sub_360480+403F↑j
.text:003644D4                 cmp     dword ptr [esi+0Ch], 0
.text:003644D8                 jz      loc_3645B7
.text:003644D8
.text:003644DE                 test    esi, esi
.text:003644E0                 jz      loc_3645C3
.text:003644E0
.text:003644E6                 jmp     loc_364583
.text:003644E6
.text:003644EB ; ---------------------------------------------------------------------------
.text:003644EB
.text:003644EB loc_3644EB:                             ; CODE XREF: sub_360480+26F6↑j
.text:003644EB                 mov     esi, [ebp-64h]
.text:003644EE                 mov     eax, ecx
.text:003644F0                 sub     eax, 6
.text:003644F3                 jz      short loc_364511
.text:003644F3
.text:003644F5                 sub     eax, 1
.text:003644F8                 jz      short loc_36450A
.text:003644F8
.text:003644FA                 mov     eax, [esi]
.text:003644FC                 lea     ecx, ds:544h[ecx*4]
.text:00364503                 sub     ecx, esi
.text:00364505                 mov     ecx, [ecx+eax]
.text:00364508                 jmp     short loc_36451A
.text:00364508
.text:0036450A ; ---------------------------------------------------------------------------
.text:0036450A
.text:0036450A loc_36450A:                             ; CODE XREF: sub_360480+4078↑j
.text:0036450A                 mov     eax, [edx]
.text:0036450C                 add     eax, 8
.text:0036450F                 jmp     short loc_364516
.text:0036450F
.text:00364511 ; ---------------------------------------------------------------------------
.text:00364511
.text:00364511 loc_364511:                             ; CODE XREF: sub_360480+4073↑j
.text:00364511                 mov     eax, [edx]
.text:00364513                 add     eax, 10h
.text:00364513
.text:00364516
.text:00364516 loc_364516:                             ; CODE XREF: sub_360480+408F↑j
.text:00364516                 mov     ecx, [eax]
.text:00364518                 sub     ecx, eax
.text:00364518
.text:0036451A
.text:0036451A loc_36451A:                             ; CODE XREF: sub_360480+4088↑j
.text:0036451A                 test    ecx, ecx
.text:0036451C                 jz      short loc_364574
.text:0036451C
.text:0036451E                 mov     eax, [esi]
.text:00364520                 lea     edx, [ecx+14h]
.text:00364523                 mov     cl, [ecx+5]
.text:00364526                 sub     eax, esi
.text:00364528                 add     eax, 574h
.text:0036452D                 mov     esi, 1
.text:00364532                 shl     esi, cl
.text:00364534                 dec     esi
.text:00364535                 mov     edi, [eax]
.text:00364537                 sub     edi, eax
.text:00364539                 lea     eax, [edi+0Ch]
.text:0036453C                 sub     eax, [eax]
.text:0036453E                 and     esi, eax
.text:00364540                 shl     esi, 5
.text:00364543                 sub     esi, edx
.text:00364545                 add     esi, [edx]
.text:00364545
.text:00364547
.text:00364547 loc_364547:                             ; CODE XREF: sub_360480+40E4↓j
.text:00364547                 mov     ecx, [esi+1Ch]
.text:0036454A                 mov     eax, ecx
.text:0036454C                 and     eax, 0Fh
.text:0036454F                 cmp     al, 5
.text:00364551                 jnz     short loc_364558
.text:00364551
.text:00364553                 cmp     [esi+10h], edi
.text:00364556                 jz      short loc_364566
.text:00364556
.text:00364558
.text:00364558 loc_364558:                             ; CODE XREF: sub_360480+40D1↑j
.text:00364558                 sar     ecx, 4
.text:0036455B                 test    ecx, ecx
.text:0036455D                 jz      short loc_36456E
.text:0036455D
.text:0036455F                 shl     ecx, 5
.text:00364562                 add     esi, ecx
.text:00364564                 jmp     short loc_364547
.text:00364564
.text:00364566 ; ---------------------------------------------------------------------------
.text:00364566
.text:00364566 loc_364566:                             ; CODE XREF: sub_360480+40D6↑j
.text:00364566                 mov     edi, [ebp-50h]
.text:00364569                 mov     edx, [ebp-4Ch]
.text:0036456C                 jmp     short loc_364579
.text:0036456C
.text:0036456E ; ---------------------------------------------------------------------------
.text:0036456E
.text:0036456E loc_36456E:                             ; CODE XREF: sub_360480+40DD↑j
.text:0036456E                 mov     edi, [ebp-50h]
.text:00364571                 mov     edx, [ebp-4Ch]
.text:00364571
.text:00364574
.text:00364574 loc_364574:                             ; CODE XREF: sub_360480+409C↑j
.text:00364574                 mov     esi, offset luao_nilobject
.text:00364574
.text:00364579
.text:00364579 loc_364579:                             ; CODE XREF: sub_360480+40EC↑j
.text:00364579                 cmp     dword ptr [esi+0Ch], 0
.text:0036457D                 jz      loc_3761EE
.text:0036457D
.text:00364583
.text:00364583 loc_364583:                             ; CODE XREF: sub_360480+4066↑j
.text:00364583                 cmp     dword ptr [esi+0Ch], 8
.text:00364587                 jz      short loc_3645F5
.text:00364587
.text:00364589                 movups  xmm0, xmmword ptr [esi]
.text:0036458C                 mov     esi, [ebp-58h]
.text:0036458F                 lea     edx, [ebp-3E0h]
.text:00364595                 inc     esi
.text:00364596                 mov     [ebp-4Ch], edx
.text:00364599                 mov     [ebp-58h], esi
.text:0036459C                 movups  xmmword ptr [ebp-3E0h], xmm0
.text:003645A3                 cmp     esi, 64h ; 'd'
.text:003645A6                 jge     loc_3761D6
.text:003645A6
.text:003645AC                 mov     edi, [ebp-50h]
.text:003645AF                 mov     eax, [ebp-2Ch]
.text:003645B2                 jmp     loc_362B70
.text:003645B2
.text:003645B7 ; ---------------------------------------------------------------------------
.text:003645B7
.text:003645B7 loc_3645B7:                             ; CODE XREF: sub_360480+4058↑j
.text:003645B7                 mov     eax, [ebp-1Ch]
.text:003645BA                 mov     cl, [ebp-1]
.text:003645BD                 or      cl, 4
.text:003645C0                 mov     [eax-0Ah], cl
.text:003645C0
.text:003645C3
.text:003645C3 loc_3645C3:                             ; CODE XREF: sub_360480+4060↑j
.text:003645C3                 mov     esi, [ebp-14h]
.text:003645C3
.text:003645C6
.text:003645C6 loc_3645C6:                             ; CODE XREF: sub_360480+3FCA↑j
.text:003645C6                                         ; sub_360480+3FDA↑j ...
.text:003645C6                 mov     eax, [ebp-54h]
.text:003645C9                 movups  xmm0, xmmword ptr [eax]
.text:003645CC                 movups  xmmword ptr [edi], xmm0
.text:003645CF                 cmp     dword ptr [eax+0Ch], 5
.text:003645D3                 jl      short loc_36460F
.text:003645D3
.text:003645D5                 test    byte ptr [esi+2], 4
.text:003645D9                 jz      short loc_36460F
.text:003645D9
.text:003645DB                 mov     eax, [eax]
.text:003645DD                 test    byte ptr [eax+2], 3
.text:003645E1                 jz      short loc_36460F
.text:003645E1
.text:003645E3                 mov     edx, esi
.text:003645E5                 mov     esi, [ebp-74h]
.text:003645E8                 push    eax
.text:003645E9                 mov     ecx, esi
.text:003645EB                 call    sub_1376B10
.text:003645EB
.text:003645F0                 add     esp, 4
.text:003645F3                 jmp     short loc_364612
.text:003645F3
.text:003645F5 ; ---------------------------------------------------------------------------
.text:003645F5
.text:003645F5 loc_3645F5:                             ; CODE XREF: sub_360480+4107↑j
.text:003645F5                 push    dword ptr [ebp-54h]
.text:003645F8                 mov     edx, esi
.text:003645FA                 mov     esi, [ebp-74h]
.text:003645FD                 push    dword ptr [ebp-50h]
.text:00364600                 mov     ecx, esi
.text:00364602                 push    dword ptr [ebp-4Ch]
.text:00364605                 call    sub_13B2F80
.text:00364605
.text:0036460A                 add     esp, 0Ch
.text:0036460D                 jmp     short loc_364612
.text:0036460D
.text:0036460F ; ---------------------------------------------------------------------------
.text:0036460F
.text:0036460F loc_36460F:                             ; CODE XREF: sub_360480+4153↑j
.text:0036460F                                         ; sub_360480+4159↑j ...
.text:0036460F                 mov     esi, [ebp-74h]
.text:0036460F
.text:00364612
.text:00364612 loc_364612:                             ; CODE XREF: sub_360480+4173↑j
.text:00364612                                         ; sub_360480+418D↑j
.text:00364612                 add     dword ptr [esi+18h], 0FFFFFFE0h
.text:00364616                 mov     eax, ds:off_2F43004
.text:0036461B                 mov     ecx, [ebx+4]
.text:0036461E                 sub     ecx, eax
.text:00364620                 cmp     ecx, ds:off_2F43000
.text:00364626                 jb      short loc_364641
.text:00364626
.text:00364628                 mov     eax, ds:lpAddress
.text:0036462D                 mov     ecx, [ebx+4]
.text:00364630                 sub     ecx, eax
.text:00364632                 cmp     ecx, ds:dwSize
.text:00364638                 jb      short loc_364641
.text:00364638
.text:0036463A                 mov     ecx, esi
.text:0036463C                 call    retcheck
.text:0036463C
.text:00364641
.text:00364641 loc_364641:                             ; CODE XREF: sub_360480+41A6↑j
.text:00364641                                         ; sub_360480+41B8↑j
.text:00364641                 mov     eax, [ebx+0Ch]
.text:00364641
.text:00364644
.text:00364644 loc_364644:                             ; CODE XREF: sub_360480+2290↑j
.text:00364644                 cmp     dword ptr [eax+4], 0
.text:00364648                 jz      loc_366564
.text:00364648
.text:0036464E                 mov     eax, [esi+8]
.text:00364651                 lea     edx, [esi+8]
.text:00364654                 mov     ecx, eax
.text:00364656                 sub     eax, esi
.text:00364658                 sub     ecx, edx
.text:0036465A                 mov     eax, [eax+30h]
.text:0036465D                 cmp     eax, [ecx+34h]
.text:00364660                 jb      short loc_36466B
.text:00364660
.text:00364662                 mov     dl, 1
.text:00364664                 mov     ecx, esi
.text:00364666                 call    sub_1376710
.text:00364666
.text:0036466B
.text:0036466B loc_36466B:                             ; CODE XREF: sub_360480+41E0↑j
.text:0036466B                 test    byte ptr [esi+5], 2
.text:0036466F                 jz      short loc_364678
.text:0036466F
.text:00364671                 mov     ecx, esi
.text:00364673                 call    sub_1376B90
.text:00364673
.text:00364678
.text:00364678 loc_364678:                             ; CODE XREF: sub_360480+41EF↑j
.text:00364678                 mov     eax, [esi+18h]
.text:0036467B                 mov     edi, 0Ah
.text:00364680                 mov     [ebp-1Ch], eax
.text:00364683                 mov     edx, edi
.text:00364685                 db      66h, 66h
.text:00364685                 nop     word ptr [eax+eax+00000000h]
.text:00364685
.text:00364690
.text:00364690 loc_364690:                             ; CODE XREF: sub_360480+422A↓j
.text:00364690                 movzx   ecx, ds:byte_26413F7[edx]
.text:00364697                 mov     eax, edi
.text:00364699                 shl     eax, 5
.text:0036469C                 add     ecx, eax
.text:0036469E                 mov     eax, edi
.text:003646A0                 shr     eax, 2
.text:003646A3                 add     ecx, eax
.text:003646A5                 xor     edi, ecx
.text:003646A7                 sub     edx, 1
.text:003646AA                 jnz     short loc_364690
.text:003646AA
.text:003646AC                 mov     edx, [esi+8]
.text:003646AF                 lea     ecx, [esi+8]
.text:003646B2                 mov     eax, edx
.text:003646B4                 sub     edx, esi
.text:003646B6                 sub     eax, ecx
.text:003646B8                 mov     ecx, [eax+4]
.text:003646BB                 mov     eax, [edx-8]
.text:003646BE                 dec     ecx
.text:003646BF                 and     ecx, edi
.text:003646C1                 mov     esi, [eax+ecx*4]
.text:003646C4                 test    esi, esi
.text:003646C6                 jz      short loc_3646FE
.text:003646C6
.text:003646C8                 mov     edx, 646E6977h
.text:003646CD                 nop     dword ptr [eax]
.text:003646CD
.text:003646D0
.text:003646D0 loc_3646D0:                             ; CODE XREF: sub_360480+427C↓j
.text:003646D0                 mov     eax, [esi+10h]
.text:003646D3                 lea     ecx, [esi+10h]
.text:003646D6                 sub     eax, ecx
.text:003646D8                 cmp     eax, 0Ah
.text:003646DB                 jnz     short loc_3646F7
.text:003646DB
.text:003646DD                 mov     eax, 656E5F5Fh
.text:003646E2                 cmp     eax, [esi+14h]
.text:003646E5                 jnz     short loc_3646F7
.text:003646E5
.text:003646E7                 cmp     edx, [esi+18h]
.text:003646EA                 jnz     short loc_3646F7
.text:003646EA
.text:003646EC                 mov     eax, 7865h
.text:003646F1                 cmp     ax, [esi+1Ch]
.text:003646F5                 jz      short loc_364725
.text:003646F5
.text:003646F7
.text:003646F7 loc_3646F7:                             ; CODE XREF: sub_360480+425B↑j
.text:003646F7                                         ; sub_360480+4265↑j ...
.text:003646F7                 mov     esi, [esi+8]
.text:003646FA                 test    esi, esi
.text:003646FC                 jnz     short loc_3646D0
.text:003646FC
.text:003646FE
.text:003646FE loc_3646FE:                             ; CODE XREF: sub_360480+4246↑j
.text:003646FE                 mov     ecx, [ebp-74h]
.text:00364701                 lea     edx, [ecx+8]
.text:00364704                 mov     al, [ecx+4]
.text:00364707                 mov     [ebp-1], al
.text:0036470A                 mov     eax, [edx]
.text:0036470C                 sub     eax, edx
.text:0036470E                 movsx   edx, byte_2AB8E27
.text:00364715                 mov     [ebp-2Ch], eax
.text:00364718                 test    edx, edx
.text:0036471A                 js      short loc_364751
.text:0036471A
.text:0036471C                 call    loc_13C09C0
.text:0036471C
.text:00364721                 mov     esi, eax
.text:00364723                 jmp     short loc_364771
.text:00364723
.text:00364725 ; ---------------------------------------------------------------------------
.text:00364725
.text:00364725 loc_364725:                             ; CODE XREF: sub_360480+4275↑j
.text:00364725                 mov     edi, [ebp-64h]
.text:00364728                 mov     dl, [esi+2]
.text:0036472B                 mov     eax, [edi]
.text:0036472D                 sub     eax, edi
.text:0036472F                 movzx   ecx, byte ptr [eax+14h]
.text:00364733                 not     ecx
.text:00364735                 movzx   eax, dl
.text:00364738                 and     ecx, 3
.text:0036473B                 xor     ecx, eax
.text:0036473D                 test    cl, 0Bh
.text:00364740                 jnz     loc_364944
.text:00364740
.text:00364746                 xor     dl, 3
.text:00364749                 mov     [esi+2], dl
.text:0036474C                 jmp     loc_364944
.text:0036474C
.text:00364751 ; ---------------------------------------------------------------------------
.text:00364751
.text:00364751 loc_364751:                             ; CODE XREF: sub_360480+429A↑j
.text:00364751                 push    1
.text:00364753                 push    1Fh
.text:00364755                 push    47h ; 'G'
.text:00364757                 lea     edx, [eax+13Ch]
.text:0036475D                 call    sub_13C07B0
.text:0036475D
.text:00364762                 add     esp, 0Ch
.text:00364765                 mov     ecx, [eax+14h]
.text:00364768                 lea     esi, [eax+28h]
.text:0036476B                 sub     [eax+1Ch], ecx
.text:0036476E                 inc     dword ptr [eax+20h]
.text:0036476E
.text:00364771
.text:00364771 loc_364771:                             ; CODE XREF: sub_360480+42A3↑j
.text:00364771                 mov     [ebp-54h], esi
.text:00364774                 test    esi, esi
.text:00364776                 jz      loc_3760A9
.text:00364776
.text:0036477C                 mov     ecx, [ebp-2Ch]
.text:0036477F                 movzx   eax, byte ptr [ebp-1]
.text:00364783                 mov     edx, [ebp-64h]
.text:00364786                 add     dword ptr [ecx+38h], 1Fh
.text:0036478A                 add     dword ptr [ecx+eax*4+144h], 1Fh
.text:00364792                 lea     eax, [esi+1Ah]
.text:00364795                 mov     [esi+10h], eax
.text:00364798                 lea     ecx, [esi+14h]
.text:0036479B                 lea     eax, [esi+0Ch]
.text:0036479E                 sub     eax, edi
.text:003647A0                 mov     [esi+0Ch], eax
.text:003647A3                 mov     eax, [edx]
.text:003647A5                 sub     eax, edx
.text:003647A7                 mov     al, [eax+14h]
.text:003647AA                 and     al, 3
.text:003647AC                 mov     [esi+2], al
.text:003647AF                 mov     eax, [ebp-74h]
.text:003647B2                 mov     byte ptr [esi], 5
.text:003647B5                 mov     al, [eax+4]
.text:003647B8                 mov     [esi+1], al
.text:003647BB                 movq    xmm0, ds:qword_26413F8
.text:003647C3                 movq    qword ptr [ecx], xmm0
.text:003647C7                 mov     ax, ds:word_2641400
.text:003647CD                 mov     [ecx+8], ax
.text:003647D1                 mov     byte ptr [esi+1Eh], 0
.text:003647D5                 mov     eax, [edx]
.text:003647D7                 sub     eax, edx
.text:003647D9                 mov     eax, [eax+858h]
.text:003647DF                 test    eax, eax
.text:003647E1                 jz      short loc_3647F3
.text:003647E1
.text:003647E3                 push    0Ah
.text:003647E5                 push    ecx
.text:003647E6                 call    eax
.text:003647E6
.text:003647E8                 mov     edx, [ebp-64h]
.text:003647EB                 add     esp, 8
.text:003647EE                 movzx   eax, ax
.text:003647F1                 jmp     short loc_3647F6
.text:003647F1
.text:003647F3 ; ---------------------------------------------------------------------------
.text:003647F3
.text:003647F3 loc_3647F3:                             ; CODE XREF: sub_360480+4361↑j
.text:003647F3                 or      eax, 0FFFFFFFFh
.text:003647F3
.text:003647F6
.text:003647F6 loc_3647F6:                             ; CODE XREF: sub_360480+4371↑j
.text:003647F6                 mov     [esi+4], ax
.text:003647FA                 mov     edx, [edx]
.text:003647FC                 sub     edx, [ebp-64h]
.text:003647FF                 mov     ecx, [edx+4]
.text:00364802                 mov     eax, [edx]
.text:00364804                 dec     ecx
.text:00364805                 and     ecx, edi
.text:00364807                 mov     eax, [eax+ecx*4]
.text:0036480A                 mov     [esi+8], eax
.text:0036480D                 mov     eax, [edx]
.text:0036480F                 mov     [eax+ecx*4], esi
.text:00364812                 inc     dword ptr [edx+8]
.text:00364815                 mov     eax, [edx+4]
.text:00364818                 mov     [ebp-2Ch], eax
.text:0036481B                 cmp     [edx+8], eax
.text:0036481E                 jbe     loc_364941
.text:0036481E
.text:00364824                 cmp     eax, 3FFFFFFFh
.text:00364829                 jg      loc_364941
.text:00364829
.text:0036482F                 add     eax, eax
.text:00364831                 cmp     eax, 3FFFFFFFh
.text:00364836                 ja      loc_376089
.text:00364836
.text:0036483C                 lea     ecx, ds:0[eax*4]
.text:00364843                 mov     eax, [ebp-64h]
.text:00364846                 mov     [ebp-50h], ecx
.text:00364849                 mov     edx, [eax]
.text:0036484B                 sub     edx, eax
.text:0036484D                 lea     eax, [ecx-1]
.text:00364850                 mov     [ebp-4Ch], edx
.text:00364853                 cmp     eax, 200h
.text:00364858                 jnb     short loc_364876
.text:00364858
.text:0036485A                 movsx   eax, byte_2AB8E08[ecx]
.text:00364861                 test    eax, eax
.text:00364863                 js      short loc_364876
.text:00364863
.text:00364865                 mov     ecx, [ebp-74h]
.text:00364868                 mov     edx, eax
.text:0036486A                 call    sub_13C08C0
.text:0036486A
.text:0036486F                 mov     edi, eax
.text:00364871                 mov     [ebp-58h], edi
.text:00364874                 jmp     short loc_36488B
.text:00364874
.text:00364876 ; ---------------------------------------------------------------------------
.text:00364876
.text:00364876 loc_364876:                             ; CODE XREF: sub_360480+43D8↑j
.text:00364876                                         ; sub_360480+43E3↑j
.text:00364876                 mov     eax, [edx+0Ch]
.text:00364879                 push    ecx
.text:0036487A                 push    0
.text:0036487C                 push    0
.text:0036487E                 push    dword ptr [edx+10h]
.text:00364881                 call    eax
.text:00364881
.text:00364883                 add     esp, 10h
.text:00364886                 mov     [ebp-58h], eax
.text:00364889                 mov     edi, eax
.text:00364889
.text:0036488B
.text:0036488B loc_36488B:                             ; CODE XREF: sub_360480+43F4↑j
.text:0036488B                 mov     eax, [ebp-50h]
.text:0036488E                 test    edi, edi
.text:00364890                 jnz     short loc_36489A
.text:00364890
.text:00364892                 test    eax, eax
.text:00364894                 jnz     loc_3760A9
.text:00364894
.text:0036489A
.text:0036489A loc_36489A:                             ; CODE XREF: sub_360480+4410↑j
.text:0036489A                 mov     ecx, [ebp-4Ch]
.text:0036489D                 mov     edi, [ebp-2Ch]
.text:003648A0                 add     [ecx+38h], eax
.text:003648A3                 add     [ecx+144h], eax
.text:003648A9                 mov     ecx, [ebp-64h]
.text:003648AC                 mov     edx, [ecx]
.text:003648AE                 sub     edx, ecx
.text:003648B0                 lea     ecx, [edi+edi]
.text:003648B3                 mov     edi, [ebp-58h]
.text:003648B6                 mov     [ebp-50h], edx
.text:003648B9                 test    ecx, ecx
.text:003648BB                 jle     short loc_3648C9
.text:003648BB
.text:003648BD                 shr     eax, 2
.text:003648C0                 mov     ecx, eax
.text:003648C2                 xor     eax, eax
.text:003648C4                 rep stosd
.text:003648C6                 mov     edi, [ebp-58h]
.text:003648C6
.text:003648C9
.text:003648C9 loc_3648C9:                             ; CODE XREF: sub_360480+443B↑j
.text:003648C9                 mov     eax, [edx+4]
.text:003648CC                 xor     ecx, ecx
.text:003648CE                 mov     [ebp-4Ch], ecx
.text:003648D1                 test    eax, eax
.text:003648D3                 jle     short loc_364920
.text:003648D3
.text:003648D5
.text:003648D5 loc_3648D5:                             ; CODE XREF: sub_360480+449B↓j
.text:003648D5                 mov     eax, [edx]
.text:003648D7                 mov     esi, [eax+ecx*4]
.text:003648DA                 test    esi, esi
.text:003648DC                 jz      short loc_364912
.text:003648DC
.text:003648DE                 mov     ecx, [ebp-2Ch]
.text:003648E1                 lea     eax, ds:0FFFFFFFFh[ecx*2]
.text:003648E8                 mov     [ebp-58h], eax
.text:003648EB                 nop     dword ptr [eax+eax+00h]
.text:003648EB
.text:003648F0
.text:003648F0 loc_3648F0:                             ; CODE XREF: sub_360480+448A↓j
.text:003648F0                 mov     edx, [esi+8]
.text:003648F3                 lea     ecx, [esi+0Ch]
.text:003648F6                 sub     ecx, [ecx]
.text:003648F8                 and     ecx, eax
.text:003648FA                 mov     eax, [edi+ecx*4]
.text:003648FD                 mov     [esi+8], eax
.text:00364900                 mov     eax, [ebp-58h]
.text:00364903                 mov     [edi+ecx*4], esi
.text:00364906                 mov     esi, edx
.text:00364908                 test    edx, edx
.text:0036490A                 jnz     short loc_3648F0
.text:0036490A
.text:0036490C                 mov     ecx, [ebp-4Ch]
.text:0036490F                 mov     edx, [ebp-50h]
.text:0036490F
.text:00364912
.text:00364912 loc_364912:                             ; CODE XREF: sub_360480+445C↑j
.text:00364912                 mov     eax, [edx+4]
.text:00364915                 inc     ecx
.text:00364916                 mov     [ebp-4Ch], ecx
.text:00364919                 cmp     ecx, eax
.text:0036491B                 jl      short loc_3648D5
.text:0036491B
.text:0036491D                 mov     esi, [ebp-54h]
.text:0036491D
.text:00364920
.text:00364920 loc_364920:                             ; CODE XREF: sub_360480+4453↑j
.text:00364920                 mov     edx, [edx]
.text:00364922                 mov     ecx, [ebp-74h]
.text:00364925                 shl     eax, 2
.text:00364928                 push    0
.text:0036492A                 push    eax
.text:0036492B                 call    sub_13C0AF0
.text:0036492B
.text:00364930                 mov     edx, [ebp-2Ch]
.text:00364933                 add     esp, 8
.text:00364936                 mov     eax, [ebp-50h]
.text:00364939                 lea     ecx, [edx+edx]
.text:0036493C                 mov     [eax+4], ecx
.text:0036493F                 mov     [eax], edi
.text:0036493F
.text:00364941
.text:00364941 loc_364941:                             ; CODE XREF: sub_360480+439E↑j
.text:00364941                                         ; sub_360480+43A9↑j
.text:00364941                 mov     edi, [ebp-64h]
.text:00364941
.text:00364944
.text:00364944 loc_364944:                             ; CODE XREF: sub_360480+42C0↑j
.text:00364944                                         ; sub_360480+42CC↑j
.text:00364944                 mov     eax, [ebp-1Ch]
.text:00364947                 mov     [eax], esi
.text:00364949                 mov     esi, [ebp-74h]
.text:0036494C                 mov     dword ptr [eax+0Ch], 5
.text:00364953                 add     dword ptr [esi+18h], 10h
.text:00364957                 mov     eax, ds:off_2F43004
.text:0036495C                 mov     ecx, [ebx+4]
.text:0036495F                 sub     ecx, eax
.text:00364961                 cmp     ecx, ds:off_2F43000
.text:00364967                 jb      short loc_364982
.text:00364967
.text:00364969                 mov     eax, ds:lpAddress
.text:0036496E                 mov     ecx, [ebx+4]
.text:00364971                 sub     ecx, eax
.text:00364973                 cmp     ecx, ds:dwSize
.text:00364979                 jb      short loc_364982
.text:00364979
.text:0036497B                 mov     ecx, esi
.text:0036497D                 call    retcheck
.text:0036497D
.text:00364982
.text:00364982 loc_364982:                             ; CODE XREF: sub_360480+44E7↑j
.text:00364982                                         ; sub_360480+44F9↑j
.text:00364982                 mov     eax, [ebx+0Ch]
.text:00364985                 mov     ecx, [edi]
.text:00364987                 mov     eax, [eax+4]
.text:0036498A                 mov     [ebp-1Ch], eax
.text:0036498D                 mov     eax, ecx
.text:0036498F                 sub     eax, edi
.text:00364991                 sub     ecx, esi
.text:00364993                 mov     eax, [eax+38h]
.text:00364996                 cmp     eax, [ecx+2Ch]
.text:00364999                 jb      short loc_3649A4
.text:00364999
.text:0036499B                 mov     dl, 1
.text:0036499D                 mov     ecx, esi
.text:0036499F                 call    sub_1376710
.text:0036499F
.text:003649A4
.text:003649A4 loc_3649A4:                             ; CODE XREF: sub_360480+4519↑j
.text:003649A4                 test    byte ptr [esi+5], 2
.text:003649A8                 jz      short loc_3649B1
.text:003649A8
.text:003649AA                 mov     ecx, esi
.text:003649AC                 call    sub_1376B90
.text:003649AC
.text:003649B1
.text:003649B1 loc_3649B1:                             ; CODE XREF: sub_360480+4528↑j
.text:003649B1                 mov     ecx, esi
.text:003649B3                 call    sub_1318BB0
.text:003649B3
.text:003649B8                 mov     edi, [edi]
.text:003649BA                 movsx   edx, byte_2AB8E28
.text:003649C1                 mov     [ebp-2Ch], eax
.text:003649C4                 mov     al, [esi+4]
.text:003649C7                 mov     [ebp-1], al
.text:003649CA                 lea     eax, [esi+8]
.text:003649CD                 sub     edi, eax
.text:003649CF                 test    edx, edx
.text:003649D1                 js      short loc_3649DC
.text:003649D1
.text:003649D3                 call    loc_13C09C0
.text:003649D3
.text:003649D8                 mov     esi, eax
.text:003649DA                 jmp     short loc_3649FC
.text:003649DA
.text:003649DC ; ---------------------------------------------------------------------------
.text:003649DC
.text:003649DC loc_3649DC:                             ; CODE XREF: sub_360480+4551↑j
.text:003649DC                 push    1
.text:003649DE                 push    20h ; ' '
.text:003649E0                 push    48h ; 'H'
.text:003649E2                 lea     edx, [edi+13Ch]
.text:003649E8                 call    sub_13C07B0
.text:003649E8
.text:003649ED                 add     esp, 0Ch
.text:003649F0                 mov     ecx, [eax+14h]
.text:003649F3                 lea     esi, [eax+28h]
.text:003649F6                 sub     [eax+1Ch], ecx
.text:003649F9                 inc     dword ptr [eax+20h]
.text:003649F9
.text:003649FC
.text:003649FC loc_3649FC:                             ; CODE XREF: sub_360480+455A↑j
.text:003649FC                 test    esi, esi
.text:003649FE                 jz      loc_3760A9
.text:003649FE
.text:00364A04                 movzx   eax, byte ptr [ebp-1]
.text:00364A08                 mov     edx, esi
.text:00364A0A                 add     dword ptr [edi+38h], 20h ; ' '
.text:00364A0E                 push    8
.text:00364A10                 add     dword ptr [edi+eax*4+144h], 20h ; ' '
.text:00364A18                 mov     edi, [ebp-74h]
.text:00364A1B                 mov     ecx, edi
.text:00364A1D                 call    sub_1376B60
.text:00364A1D
.text:00364A22                 mov     eax, [ebp-2Ch]
.text:00364A25                 lea     ecx, [esi+14h]
.text:00364A28                 mov     byte ptr [esi+3], 1
.text:00364A2C                 add     esp, 4
.text:00364A2F                 mov     [esi+0Ch], eax
.text:00364A32                 mov     eax, [ebp-1Ch]
.text:00364A35                 mov     byte ptr [esi+4], 0
.text:00364A39                 add     eax, 10h
.text:00364A3C                 mov     byte ptr [esi+5], 14h
.text:00364A40                 add     eax, esi
.text:00364A42                 mov     byte ptr [esi+6], 0
.text:00364A46                 mov     [esi+10h], eax
.text:00364A49                 lea     eax, [esi+18h]
.text:00364A4C                 mov     [ecx], ecx
.text:00364A4E                 neg     eax
.text:00364A50                 mov     [esi+18h], eax
.text:00364A53                 mov     eax, [edi+18h]
.text:00364A56                 mov     [eax], esi
.text:00364A58                 mov     dword ptr [eax+0Ch], 8
.text:00364A5F                 add     dword ptr [edi+18h], 10h
.text:00364A63                 mov     eax, ds:off_2F43004
.text:00364A68                 mov     ecx, [ebx+4]
.text:00364A6B                 sub     ecx, eax
.text:00364A6D                 cmp     ecx, ds:off_2F43000
.text:00364A73                 jb      short loc_364A8E
.text:00364A73
.text:00364A75                 mov     eax, ds:lpAddress
.text:00364A7A                 mov     ecx, [ebx+4]
.text:00364A7D                 sub     ecx, eax
.text:00364A7F                 cmp     ecx, ds:dwSize
.text:00364A85                 jb      short loc_364A8E
.text:00364A85
.text:00364A87                 mov     ecx, edi
.text:00364A89                 call    retcheck
.text:00364A89
.text:00364A8E
.text:00364A8E loc_364A8E:                             ; CODE XREF: sub_360480+45F3↑j
.text:00364A8E                                         ; sub_360480+4605↑j
.text:00364A8E                 mov     eax, [edi+18h]
.text:00364A91                 mov     [ebp-1Ch], eax
.text:00364A94                 mov     dword ptr [ebp-4Ch], 0
.text:00364A9B                 lea     ecx, [eax-10h]
.text:00364A9E                 lea     edi, [eax-20h]
.text:00364AA1                 mov     [ebp-2Ch], ecx
.text:00364AA4                 lea     edx, [eax-30h]
.text:00364AA7                 mov     [ebp-54h], edi
.text:00364AAA                 mov     [ebp-50h], edx
.text:00364AAD                 nop     dword ptr [eax]
.text:00364AAD
.text:00364AB0
.text:00364AB0 loc_364AB0:                             ; CODE XREF: sub_360480+6052↓j
.text:00364AB0                 mov     ecx, [edx+0Ch]
.text:00364AB3                 cmp     ecx, 6
.text:00364AB6                 jnz     loc_36640B
.text:00364AB6
.text:00364ABC                 mov     esi, [edx]
.text:00364ABE                 mov     [ebp-58h], esi
.text:00364AC1                 cmp     byte ptr [esi+7], 0
.text:00364AC5                 jnz     loc_3761BE
.text:00364AC5
.text:00364ACB                 mov     edx, [eax-14h]
.text:00364ACE                 mov     eax, edx
.text:00364AD0                 sub     eax, 0
.text:00364AD3                 jz      loc_364E8D
.text:00364AD3
.text:00364AD9                 movaps  xmm3, xmmword_2C87C80
.text:00364AE0                 sub     eax, 4
.text:00364AE3                 jz      loc_364B85
.text:00364AE3
.text:00364AE9                 sub     eax, 1
.text:00364AEC                 jnz     loc_364C76
.text:00364AEC
.text:00364AF2                 mov     eax, [edi]
.text:00364AF4                 lea     edx, [esi+14h]
.text:00364AF7                 mov     cl, [esi+5]
.text:00364AFA                 mov     edi, 1
.text:00364AFF                 mov     [ebp-14h], eax
.text:00364B02                 add     eax, 0Ch
.text:00364B05                 shl     edi, cl
.text:00364B07                 dec     edi
.text:00364B08                 sub     eax, [eax]
.text:00364B0A                 and     edi, eax
.text:00364B0C                 shl     edi, 5
.text:00364B0F                 sub     edi, edx
.text:00364B11                 add     edi, [edx]
.text:00364B13                 mov     edx, [ebp-14h]
.text:00364B13
.text:00364B16
.text:00364B16 loc_364B16:                             ; CODE XREF: sub_360480+46B3↓j
.text:00364B16                 mov     ecx, [edi+1Ch]
.text:00364B19                 mov     eax, ecx
.text:00364B1B                 and     eax, 0Fh
.text:00364B1E                 cmp     al, 5
.text:00364B20                 jnz     short loc_364B27
.text:00364B20
.text:00364B22                 cmp     [edi+10h], edx
.text:00364B25                 jz      short loc_364B3A ; jumptable 00364E29 case 0
.text:00364B25
.text:00364B27
.text:00364B27 loc_364B27:                             ; CODE XREF: sub_360480+46A0↑j
.text:00364B27                 sar     ecx, 4
.text:00364B2A                 test    ecx, ecx
.text:00364B2C                 jz      short loc_364B35
.text:00364B2C
.text:00364B2E                 shl     ecx, 5
.text:00364B31                 add     edi, ecx
.text:00364B33                 jmp     short loc_364B16
.text:00364B33
.text:00364B35 ; ---------------------------------------------------------------------------
.text:00364B35
.text:00364B35 loc_364B35:                             ; CODE XREF: sub_360480+46AC↑j
.text:00364B35                                         ; sub_360480+4753↓j ...
.text:00364B35                 mov     edi, offset luao_nilobject
.text:00364B35
.text:00364B3A
.text:00364B3A loc_364B3A:                             ; CODE XREF: sub_360480+46A5↑j
.text:00364B3A                                         ; sub_360480+473E↓j ...
.text:00364B3A                 mov     byte ptr [esi+6], 0 ; jumptable 00364E29 case 0
.text:00364B3E                 cmp     edi, offset luao_nilobject
.text:00364B44                 jnz     loc_366357
.text:00364B44
.text:00364B4A
.text:00364B4A loc_364B4A:                             ; CODE XREF: sub_360480+4A08↓j
.text:00364B4A                 mov     edi, [ebp-54h]
.text:00364B4A
.text:00364B4D
.text:00364B4D loc_364B4D:                             ; CODE XREF: sub_360480+4A11↓j
.text:00364B4D                 mov     ecx, [ebp-1Ch]
.text:00364B50                 mov     eax, [ecx-14h]
.text:00364B53                 test    eax, eax
.text:00364B55                 jz      loc_3761A6
.text:00364B55
.text:00364B5B                 cmp     eax, 4
.text:00364B5E                 jnz     loc_364E96
.text:00364B5E
.text:00364B64                 movsd   xmm1, qword ptr [edi]
.text:00364B68                 movaps  xmm2, xmmword_2C87C80
.text:00364B6F                 xorps   xmm1, xmm2
.text:00364B72                 ucomisd xmm1, xmm1
.text:00364B76                 lahf
.text:00364B77                 test    ah, 44h
.text:00364B7A                 jp      loc_376146
.text:00364B7A
.text:00364B80                 jmp     loc_364EB4
.text:00364B80
.text:00364B85 ; ---------------------------------------------------------------------------
.text:00364B85
.text:00364B85 loc_364B85:                             ; CODE XREF: sub_360480+4663↑j
.text:00364B85                 movsd   xmm1, qword ptr [edi]
.text:00364B89                 xorps   xmm1, xmm3
.text:00364B8C                 cvttsd2si ecx, xmm1
.text:00364B90                 movd    xmm2, ecx
.text:00364B94                 cvtdq2pd xmm2, xmm2
.text:00364B98                 ucomisd xmm2, xmm1
.text:00364B9C                 lahf
.text:00364B9D                 test    ah, 44h
.text:00364BA0                 jp      loc_364C76
.text:00364BA0
.text:00364BA6                 lea     eax, [ecx-1]
.text:00364BA9                 cmp     eax, [esi+8]
.text:00364BAC                 jnb     short loc_364BC3
.text:00364BAC
.text:00364BAE                 mov     edi, [esi+18h]
.text:00364BB1                 lea     eax, [esi+18h]
.text:00364BB4                 shl     ecx, 4
.text:00364BB7                 add     edi, 0FFFFFFF0h
.text:00364BBA                 sub     ecx, eax
.text:00364BBC                 add     edi, ecx
.text:00364BBE                 jmp     loc_364B3A      ; jumptable 00364E29 case 0
.text:00364BBE
.text:00364BC3 ; ---------------------------------------------------------------------------
.text:00364BC3
.text:00364BC3 loc_364BC3:                             ; CODE XREF: sub_360480+472C↑j
.text:00364BC3                 mov     eax, [esi+14h]
.text:00364BC6                 lea     ecx, [esi+14h]
.text:00364BC9                 mov     [ebp-14h], eax
.text:00364BCC                 sub     eax, ecx
.text:00364BCE                 cmp     eax, offset dword_1EA0808
.text:00364BD3                 jz      loc_364B35
.text:00364BD3
.text:00364BD9                 movsd   qword ptr [ebp-0F8h], xmm2
.text:00364BE1                 mov     edi, 1
.text:00364BE6                 mov     ecx, [ebp-0F4h]
.text:00364BEC                 and     ecx, 7FFFFFFFh
.text:00364BF2                 mov     eax, ecx
.text:00364BF4                 shr     eax, 12h
.text:00364BF7                 xor     eax, [ebp-0F8h]
.text:00364BFD                 imul    esi, eax, 5BD1E995h
.text:00364C03                 mov     eax, esi
.text:00364C05                 shr     eax, 16h
.text:00364C08                 xor     eax, ecx
.text:00364C0A                 imul    edx, eax, 5BD1E995h
.text:00364C10                 mov     eax, [ebp-58h]
.text:00364C13                 mov     cl, [eax+5]
.text:00364C16                 mov     eax, edx
.text:00364C18                 shr     eax, 11h
.text:00364C1B                 xor     eax, esi
.text:00364C1D                 shl     edi, cl
.text:00364C1F                 mov     esi, [ebp-58h]
.text:00364C22                 dec     edi
.text:00364C23                 imul    eax, 5BD1E995h
.text:00364C29                 shr     eax, 13h
.text:00364C2C                 xor     eax, edx
.text:00364C2E                 imul    eax, 5BD1E995h
.text:00364C34                 and     edi, eax
.text:00364C36                 mov     eax, [ebp-14h]
.text:00364C39                 shl     edi, 5
.text:00364C3C                 add     eax, 0FFFFFFECh
.text:00364C3F                 sub     edi, esi
.text:00364C41                 add     edi, eax
.text:00364C41
.text:00364C43
.text:00364C43 loc_364C43:                             ; CODE XREF: sub_360480+47F4↓j
.text:00364C43                 mov     ecx, [edi+1Ch]
.text:00364C46                 mov     eax, ecx
.text:00364C48                 and     al, 0Fh
.text:00364C4A                 cmp     al, 4
.text:00364C4C                 jnz     short loc_364C64
.text:00364C4C
.text:00364C4E                 movsd   xmm1, qword ptr [edi+10h]
.text:00364C53                 xorps   xmm1, xmm3
.text:00364C56                 ucomisd xmm1, xmm2
.text:00364C5A                 lahf
.text:00364C5B                 test    ah, 44h
.text:00364C5E                 jnp     loc_364B3A      ; jumptable 00364E29 case 0
.text:00364C5E
.text:00364C64
.text:00364C64 loc_364C64:                             ; CODE XREF: sub_360480+47CC↑j
.text:00364C64                 sar     ecx, 4
.text:00364C67                 test    ecx, ecx
.text:00364C69                 jz      loc_364B35
.text:00364C69
.text:00364C6F                 shl     ecx, 5
.text:00364C72                 add     edi, ecx
.text:00364C74                 jmp     short loc_364C43
.text:00364C74
.text:00364C76 ; ---------------------------------------------------------------------------
.text:00364C76
.text:00364C76 loc_364C76:                             ; CODE XREF: sub_360480+466C↑j
.text:00364C76                                         ; sub_360480+4720↑j
.text:00364C76                 lea     eax, [edx-1]    ; switch 5 cases
.text:00364C79                 cmp     eax, 4
.text:00364C7C                 ja      def_364C82      ; jumptable 00364C82 default case, case 2
.text:00364C7C
.text:00364C82                 jmp     ds:jpt_364C82[eax*4] ; switch jump
.text:00364C82
.text:00364C89 ; ---------------------------------------------------------------------------
.text:00364C89
.text:00364C89 loc_364C89:                             ; CODE XREF: sub_360480+4802↑j
.text:00364C89                                         ; DATA XREF: .text:jpt_364C82↓o
.text:00364C89                 movsd   xmm1, qword ptr [edi] ; jumptable 00364C82 case 4
.text:00364C8D                 xorps   xmm1, xmm3
.text:00364C90                 movsd   qword ptr [ebp-18h], xmm1
.text:00364C95                 mov     ecx, [ebp-14h]
.text:00364C98                 and     ecx, 7FFFFFFFh
.text:00364C9E                 mov     eax, ecx
.text:00364CA0                 shr     eax, 12h
.text:00364CA3                 xor     eax, [ebp-18h]
.text:00364CA6                 imul    esi, eax, 5BD1E995h
.text:00364CAC                 mov     eax, esi
.text:00364CAE                 shr     eax, 16h
.text:00364CB1                 xor     eax, ecx
.text:00364CB3                 mov     ecx, [ebp-58h]
.text:00364CB6                 imul    edx, eax, 5BD1E995h
.text:00364CBC                 mov     eax, 1
.text:00364CC1                 lea     edi, [ecx+14h]
.text:00364CC4                 mov     cl, [ecx+5]
.text:00364CC7                 shl     eax, cl
.text:00364CC9                 mov     [ebp-14h], eax
.text:00364CCC                 mov     ecx, eax
.text:00364CCE                 mov     eax, edx
.text:00364CD0                 dec     ecx
.text:00364CD1                 shr     eax, 11h
.text:00364CD4                 xor     eax, esi
.text:00364CD6                 imul    eax, 5BD1E995h
.text:00364CDC                 shr     eax, 13h
.text:00364CDF                 xor     eax, edx
.text:00364CE1                 imul    eax, 5BD1E995h
.text:00364CE7                 and     ecx, eax
.text:00364CE9                 shl     ecx, 5
.text:00364CEC                 sub     ecx, edi
.text:00364CEE                 add     ecx, [edi]
.text:00364CF0                 mov     [ebp-14h], ecx
.text:00364CF3                 mov     edi, ecx
.text:00364CF5                 jmp     loc_364E06
.text:00364CF5
.text:00364CFA ; ---------------------------------------------------------------------------
.text:00364CFA
.text:00364CFA loc_364CFA:                             ; CODE XREF: sub_360480+4802↑j
.text:00364CFA                                         ; DATA XREF: .text:jpt_364C82↓o
.text:00364CFA                 movq    xmm0, qword ptr [edi] ; jumptable 00364C82 case 3
.text:00364CFE                 xor     eax, eax
.text:00364D00                 mov     edx, [edi+8]
.text:00364D03                 movq    qword ptr [ebp-210h], xmm0
.text:00364D0B                 mov     ecx, [ebp-210h]
.text:00364D11                 cmp     ecx, 8000000h
.text:00364D17                 cmovz   ecx, eax
.text:00364D1A                 mov     eax, [ebp-20Ch]
.text:00364D20                 xor     esi, esi
.text:00364D22                 cmp     eax, 8000000h
.text:00364D27                 cmovz   eax, esi
.text:00364D2A                 cmp     edx, 8000000h
.text:00364D30                 cmovz   edx, esi
.text:00364D33                 mov     esi, ecx
.text:00364D35                 shr     esi, 11h
.text:00364D38                 xor     esi, ecx
.text:00364D3A                 mov     ecx, eax
.text:00364D3C                 shr     ecx, 11h
.text:00364D3F                 xor     ecx, eax
.text:00364D41                 mov     [ebp-210h], esi
.text:00364D47                 mov     eax, edx
.text:00364D49                 imul    edi, ecx, 127409Fh
.text:00364D4F                 shr     eax, 11h
.text:00364D52                 xor     eax, edx
.text:00364D54                 mov     [ebp-20Ch], ecx
.text:00364D5A                 mov     edx, [ebp-58h]
.text:00364D5D                 mov     [ebp-208h], eax
.text:00364D63                 add     edx, 14h
.text:00364D66                 imul    eax, 4F9FFB7h
.text:00364D6C                 xor     edi, eax
.text:00364D6E                 imul    eax, esi, 466F45Dh
.text:00364D74                 mov     esi, [ebp-58h]
.text:00364D77                 mov     cl, [esi+5]
.text:00364D7A                 xor     edi, eax
.text:00364D7C                 mov     eax, 1
.text:00364D81                 shl     eax, cl
.text:00364D83                 dec     eax
.text:00364D84                 and     edi, eax
.text:00364D86                 shl     edi, 5
.text:00364D89                 sub     edi, edx
.text:00364D8B                 add     edi, [edx]
.text:00364D8D                 jmp     short loc_364E06
.text:00364D8D
.text:00364D8F ; ---------------------------------------------------------------------------
.text:00364D8F
.text:00364D8F loc_364D8F:                             ; CODE XREF: sub_360480+4802↑j
.text:00364D8F                                         ; DATA XREF: .text:jpt_364C82↓o
.text:00364D8F                 mov     eax, [edi]      ; jumptable 00364C82 case 5
.text:00364D91                 lea     edx, [esi+14h]
.text:00364D94                 mov     cl, [esi+5]
.text:00364D97                 add     eax, 0Ch
.text:00364D9A                 mov     edi, 1
.text:00364D9F                 shl     edi, cl
.text:00364DA1                 dec     edi
.text:00364DA2                 sub     eax, [eax]
.text:00364DA4                 and     edi, eax
.text:00364DA6                 shl     edi, 5
.text:00364DA9                 sub     edi, edx
.text:00364DAB                 add     edi, [edx]
.text:00364DAD                 jmp     short loc_364E06
.text:00364DAD
.text:00364DAF ; ---------------------------------------------------------------------------
.text:00364DAF
.text:00364DAF loc_364DAF:                             ; CODE XREF: sub_360480+4802↑j
.text:00364DAF                                         ; DATA XREF: .text:jpt_364C82↓o
.text:00364DAF                 mov     cl, [esi+5]     ; jumptable 00364C82 case 1
.text:00364DB2                 lea     eax, [esi+14h]
.text:00364DB5                 mov     edx, [ebp-54h]
.text:00364DB8                 mov     edi, 1
.text:00364DBD                 shl     edi, cl
.text:00364DBF                 dec     edi
.text:00364DC0                 and     edi, [edx]
.text:00364DC2                 shl     edi, 5
.text:00364DC5                 sub     edi, eax
.text:00364DC7                 add     edi, [eax]
.text:00364DC9                 jmp     short loc_364E10
.text:00364DC9
.text:00364DCB ; ---------------------------------------------------------------------------
.text:00364DCB
.text:00364DCB def_364C82:                             ; CODE XREF: sub_360480+47FC↑j
.text:00364DCB                                         ; sub_360480+4802↑j
.text:00364DCB                                         ; DATA XREF: ...
.text:00364DCB                 mov     ecx, [edi]      ; jumptable 00364C82 default case, case 2
.text:00364DCD                 add     esi, 14h
.text:00364DD0                 shr     ecx, 10h
.text:00364DD3                 xor     ecx, [edi]
.text:00364DD5                 mov     edi, 1
.text:00364DDA                 imul    ecx, 85EBCA6Bh
.text:00364DE0                 mov     eax, ecx
.text:00364DE2                 shr     eax, 0Dh
.text:00364DE5                 xor     eax, ecx
.text:00364DE7                 imul    edx, eax, 0C2B2AE35h
.text:00364DED                 mov     eax, [ebp-58h]
.text:00364DF0                 mov     cl, [eax+5]
.text:00364DF3                 mov     eax, edx
.text:00364DF5                 shl     edi, cl
.text:00364DF7                 shr     eax, 10h
.text:00364DFA                 dec     edi
.text:00364DFB                 xor     eax, edx
.text:00364DFD                 and     edi, eax
.text:00364DFF                 shl     edi, 5
.text:00364E02                 sub     edi, esi
.text:00364E04                 add     edi, [esi]
.text:00364E04
.text:00364E06
.text:00364E06 loc_364E06:                             ; CODE XREF: sub_360480+4875↑j
.text:00364E06                                         ; sub_360480+490D↑j ...
.text:00364E06                 mov     edx, [ebp-54h]
.text:00364E09                 nop     dword ptr [eax+00000000h]
.text:00364E09
.text:00364E10
.text:00364E10 loc_364E10:                             ; CODE XREF: sub_360480+4949↑j
.text:00364E10                                         ; sub_360480+4A02↓j
.text:00364E10                 mov     esi, [ebp-1Ch]
.text:00364E13                 lea     ecx, [edi+10h]
.text:00364E16                 mov     eax, [ecx+0Ch]
.text:00364E19                 and     eax, 0Fh
.text:00364E1C                 cmp     eax, [esi-14h]
.text:00364E1F                 mov     esi, [ebp-58h]
.text:00364E22                 jnz     short loc_364E73
.text:00364E22
.text:00364E24                 cmp     eax, 4          ; switch 5 cases
.text:00364E27                 ja      short def_364E29 ; jumptable 00364E29 default case, cases 1,2
.text:00364E27
.text:00364E29                 jmp     ds:jpt_364E29[eax*4] ; switch jump
.text:00364E29
.text:00364E30 ; ---------------------------------------------------------------------------
.text:00364E30
.text:00364E30 loc_364E30:                             ; CODE XREF: sub_360480+49A9↑j
.text:00364E30                                         ; DATA XREF: .text:jpt_364E29↓o
.text:00364E30                 movsd   xmm2, qword ptr [ecx] ; jumptable 00364E29 case 4
.text:00364E34                 movsd   xmm1, qword ptr [edx]
.text:00364E38                 xorps   xmm2, xmm3
.text:00364E3B                 xorps   xmm1, xmm3
.text:00364E3E                 ucomisd xmm2, xmm1
.text:00364E42                 lahf
.text:00364E43                 test    ah, 44h
.text:00364E46                 jnp     loc_364B3A      ; jumptable 00364E29 case 0
.text:00364E46
.text:00364E4C                 jmp     short loc_364E73
.text:00364E4C
.text:00364E4E ; ---------------------------------------------------------------------------
.text:00364E4E
.text:00364E4E loc_364E4E:                             ; CODE XREF: sub_360480+49A9↑j
.text:00364E4E                                         ; DATA XREF: .text:jpt_364E29↓o
.text:00364E4E                 call    sub_13180D0     ; jumptable 00364E29 case 3
.text:00364E4E
.text:00364E53                 movaps  xmm3, xmmword_2C87C80
.text:00364E5A                 mov     edx, [ebp-54h]
.text:00364E5D                 movzx   ecx, al
.text:00364E60                 jmp     short loc_364E6B
.text:00364E60
.text:00364E62 ; ---------------------------------------------------------------------------
.text:00364E62
.text:00364E62 def_364E29:                             ; CODE XREF: sub_360480+49A7↑j
.text:00364E62                                         ; sub_360480+49A9↑j
.text:00364E62                                         ; DATA XREF: ...
.text:00364E62                 mov     eax, [ecx]      ; jumptable 00364E29 default case, cases 1,2
.text:00364E64                 xor     ecx, ecx
.text:00364E66                 cmp     eax, [edx]
.text:00364E68                 setz    cl
.text:00364E68
.text:00364E6B
.text:00364E6B loc_364E6B:                             ; CODE XREF: sub_360480+49E0↑j
.text:00364E6B                 test    ecx, ecx
.text:00364E6D                 jnz     loc_364B3A      ; jumptable 00364E29 case 0
.text:00364E6D
.text:00364E73
.text:00364E73 loc_364E73:                             ; CODE XREF: sub_360480+49A2↑j
.text:00364E73                                         ; sub_360480+49CC↑j
.text:00364E73                 mov     eax, [edi+1Ch]
.text:00364E76                 sar     eax, 4
.text:00364E79                 test    eax, eax
.text:00364E7B                 jz      short loc_364E84
.text:00364E7B
.text:00364E7D                 shl     eax, 5
.text:00364E80                 add     edi, eax
.text:00364E82                 jmp     short loc_364E10
.text:00364E82
.text:00364E84 ; ---------------------------------------------------------------------------
.text:00364E84
.text:00364E84 loc_364E84:                             ; CODE XREF: sub_360480+49FB↑j
.text:00364E84                 mov     byte ptr [esi+6], 0
.text:00364E88                 jmp     loc_364B4A
.text:00364E88
.text:00364E8D ; ---------------------------------------------------------------------------
.text:00364E8D
.text:00364E8D loc_364E8D:                             ; CODE XREF: sub_360480+4653↑j
.text:00364E8D                 mov     byte ptr [esi+6], 0
.text:00364E91                 jmp     loc_364B4D
.text:00364E91
.text:00364E96 ; ---------------------------------------------------------------------------
.text:00364E96
.text:00364E96 loc_364E96:                             ; CODE XREF: sub_360480+46DE↑j
.text:00364E96                 cmp     eax, 3
.text:00364E99                 jnz     short loc_364EAD
.text:00364E99
.text:00364E9B                 mov     ecx, edi
.text:00364E9D                 call    sub_13B3E20
.text:00364E9D
.text:00364EA2                 test    al, al
.text:00364EA4                 jnz     loc_37615E
.text:00364EA4
.text:00364EAA                 mov     ecx, [ebp-1Ch]
.text:00364EAA
.text:00364EAD
.text:00364EAD loc_364EAD:                             ; CODE XREF: sub_360480+4A19↑j
.text:00364EAD                 movaps  xmm2, xmmword_2C87C80
.text:00364EAD
.text:00364EB4
.text:00364EB4 loc_364EB4:                             ; CODE XREF: sub_360480+4700↑j
.text:00364EB4                 cmp     byte_2AB209C, 0
.text:00364EBB                 jz      loc_365730
.text:00364EBB
.text:00364EC1                 cmp     dword ptr [ecx-14h], 4
.text:00364EC5                 jnz     loc_365730
.text:00364EC5
.text:00364ECB                 mov     eax, [esi+8]
.text:00364ECE                 movsd   xmm1, qword ptr [edi]
.text:00364ED2                 inc     eax
.text:00364ED3                 xorps   xmm1, xmm2
.text:00364ED6                 movd    xmm0, eax
.text:00364EDA                 cvtdq2pd xmm0, xmm0
.text:00364EDE                 ucomisd xmm1, xmm0
.text:00364EE2                 lahf
.text:00364EE3                 test    ah, 44h
.text:00364EE6                 jp      loc_365730
.text:00364EE6
.text:00364EEC                 xorps   xmm0, xmm0
.text:00364EEF                 mov     dword ptr [ebp-0A28h], 0
.text:00364EF9                 lea     edx, [ebp-0A90h]
.text:00364EFF                 movaps  xmmword ptr [ebp-0A90h], xmm0
.text:00364F06                 mov     ecx, esi
.text:00364F08                 movaps  xmmword ptr [ebp-0A80h], xmm0
.text:00364F0F                 movaps  xmmword ptr [ebp-0A70h], xmm0
.text:00364F16                 movaps  xmmword ptr [ebp-0A60h], xmm0
.text:00364F1D                 movaps  xmmword ptr [ebp-0A50h], xmm0
.text:00364F24                 movaps  xmmword ptr [ebp-0A40h], xmm0
.text:00364F2B                 movq    qword ptr [ebp-0A30h], xmm0
.text:00364F33                 call    sub_13B3F30
.text:00364F33
.text:00364F38                 mov     edi, eax
.text:00364F3A                 lea     edx, [ebp-0A90h]
.text:00364F40                 lea     eax, [ebp-7Ch]
.text:00364F43                 mov     [ebp-7Ch], edi
.text:00364F46                 push    eax
.text:00364F47                 mov     ecx, esi
.text:00364F49                 call    sub_13B3FF0
.text:00364F49
.text:00364F4E                 add     edi, eax
.text:00364F50                 add     esp, 4
.text:00364F53                 mov     eax, [ebp-1Ch]
.text:00364F56                 cmp     dword ptr [eax-14h], 4
.text:00364F5A                 jnz     short loc_364F76
.text:00364F5A
.text:00364F5C                 movsd   xmm1, qword ptr [eax-20h]
.text:00364F61                 lea     ecx, [ebp-0A90h]
.text:00364F67                 xorps   xmm1, xmmword_2C87C80
.text:00364F6E                 call    sub_13B3EE0
.text:00364F6E
.text:00364F73                 add     [ebp-7Ch], eax
.text:00364F73
.text:00364F76
.text:00364F76 loc_364F76:                             ; CODE XREF: sub_360480+4ADA↑j
.text:00364F76                 inc     edi
.text:00364F77                 lea     edx, [ebp-7Ch]
.text:00364F7A                 lea     ecx, [ebp-0A90h]
.text:00364F80                 mov     [ebp-14h], edi
.text:00364F83                 call    sub_13B3E70
.text:00364F83
.text:00364F88                 cmp     byte_2AB209C, 0
.text:00364F8F                 mov     edi, [ebp-7Ch]
.text:00364F92                 mov     [ebp-24h], eax
.text:00364F95                 mov     [ebp-44h], edi
.text:00364F98                 jz      loc_36510B
.text:00364F98
.text:00364F9E                 mov     ecx, [esi+14h]
.text:00364FA1                 lea     edx, [esi+14h]
.text:00364FA4                 sub     ecx, edx
.text:00364FA6                 cmp     ecx, offset dword_1EA0808
.text:00364FAC                 jnz     short loc_364FB7
.text:00364FAC
.text:00364FAE                 mov     byte ptr [ebp-1], 0
.text:00364FB2                 cmp     edi, [esi+8]
.text:00364FB5                 jge     short loc_364FBB
.text:00364FB5
.text:00364FB7
.text:00364FB7 loc_364FB7:                             ; CODE XREF: sub_360480+4B2C↑j
.text:00364FB7                 mov     byte ptr [ebp-1], 1
.text:00364FB7
.text:00364FBB
.text:00364FBB loc_364FBB:                             ; CODE XREF: sub_360480+4B35↑j
.text:00364FBB                 mov     ecx, [ebp-1Ch]
.text:00364FBE                 movaps  xmm3, xmmword_2C87C80
.text:00364FC5                 cmp     dword ptr [ecx-14h], 4
.text:00364FC9                 jnz     short loc_364FEF
.text:00364FC9
.text:00364FCB                 movsd   xmm1, qword ptr [ecx-20h]
.text:00364FD0                 xorps   xmm1, xmm3
.text:00364FD3                 cvttsd2si ecx, xmm1
.text:00364FD7                 mov     [ebp-34h], ecx
.text:00364FDA                 movd    xmm0, ecx
.text:00364FDE                 cvtdq2pd xmm0, xmm0
.text:00364FE2                 ucomisd xmm0, xmm1
.text:00364FE6                 lahf
.text:00364FE7                 test    ah, 44h
.text:00364FEA                 mov     eax, [ebp-24h]
.text:00364FED                 jnp     short loc_364FF6
.text:00364FED
.text:00364FEF
.text:00364FEF loc_364FEF:                             ; CODE XREF: sub_360480+4B49↑j
.text:00364FEF                 mov     dword ptr [ebp-34h], 0FFFFFFFFh
.text:00364FEF
.text:00364FF6
.text:00364FF6 loc_364FF6:                             ; CODE XREF: sub_360480+4B6D↑j
.text:00364FF6                                         ; sub_360480+4C86↓j
.text:00364FF6                 lea     ecx, [edi+1]
.text:00364FF9                 mov     [ebp-3Ch], ecx
.text:00364FFC                 cmp     ecx, [ebp-34h]
.text:00364FFF                 jz      loc_3650FA
.text:00364FFF
.text:00365005                 cmp     byte ptr [ebp-1], 0
.text:00365009                 jz      loc_36510B
.text:00365009
.text:0036500F                 lea     eax, [ecx-1]
.text:00365012                 cmp     eax, [esi+8]
.text:00365015                 jnb     short loc_36502F
.text:00365015
.text:00365017                 mov     edx, [esi+18h]
.text:0036501A                 lea     eax, [esi+18h]
.text:0036501D                 shl     ecx, 4
.text:00365020                 sub     ecx, eax
.text:00365022                 add     ecx, 0FFFFFFF0h
.text:00365025                 add     edx, ecx
.text:00365027                 mov     ecx, [ebp-3Ch]
.text:0036502A                 jmp     loc_3650EE
.text:0036502A
.text:0036502F ; ---------------------------------------------------------------------------
.text:0036502F
.text:0036502F loc_36502F:                             ; CODE XREF: sub_360480+4B95↑j
.text:0036502F                 mov     eax, [edx]
.text:00365031                 sub     eax, edx
.text:00365033                 cmp     eax, offset dword_1EA0808
.text:00365038                 jz      loc_3650E9
.text:00365038
.text:0036503E                 movd    xmm2, ecx
.text:00365042                 mov     edi, 1
.text:00365047                 cvtdq2pd xmm2, xmm2
.text:0036504B                 movsd   qword ptr [ebp-100h], xmm2
.text:00365053                 mov     ecx, [ebp-0FCh]
.text:00365059                 and     ecx, 7FFFFFFFh
.text:0036505F                 mov     eax, ecx
.text:00365061                 shr     eax, 12h
.text:00365064                 xor     eax, [ebp-100h]
.text:0036506A                 imul    esi, eax, 5BD1E995h
.text:00365070                 mov     eax, esi
.text:00365072                 shr     eax, 16h
.text:00365075                 xor     eax, ecx
.text:00365077                 imul    edx, eax, 5BD1E995h
.text:0036507D                 mov     eax, [ebp-58h]
.text:00365080                 mov     cl, [eax+5]
.text:00365083                 mov     eax, edx
.text:00365085                 shr     eax, 11h
.text:00365088                 xor     eax, esi
.text:0036508A                 shl     edi, cl
.text:0036508C                 mov     esi, [ebp-58h]
.text:0036508F                 dec     edi
.text:00365090                 imul    eax, 5BD1E995h
.text:00365096                 shr     eax, 13h
.text:00365099                 xor     eax, edx
.text:0036509B                 mov     edx, [esi+14h]
.text:0036509E                 imul    eax, 5BD1E995h
.text:003650A4                 add     edx, 0FFFFFFECh
.text:003650A7                 and     edi, eax
.text:003650A9                 shl     edi, 5
.text:003650AC                 sub     edi, esi
.text:003650AE                 add     edx, edi
.text:003650AE
.text:003650B0
.text:003650B0 loc_3650B0:                             ; CODE XREF: sub_360480+4C59↓j
.text:003650B0                 mov     ecx, [edx+1Ch]
.text:003650B3                 mov     eax, ecx
.text:003650B5                 and     al, 0Fh
.text:003650B7                 cmp     al, 4
.text:003650B9                 jnz     short loc_3650CD
.text:003650B9
.text:003650BB                 movsd   xmm1, qword ptr [edx+10h]
.text:003650C0                 xorps   xmm1, xmm3
.text:003650C3                 ucomisd xmm1, xmm2
.text:003650C7                 lahf
.text:003650C8                 test    ah, 44h
.text:003650CB                 jnp     short loc_3650DB
.text:003650CB
.text:003650CD
.text:003650CD loc_3650CD:                             ; CODE XREF: sub_360480+4C39↑j
.text:003650CD                 sar     ecx, 4
.text:003650D0                 test    ecx, ecx
.text:003650D2                 jz      short loc_3650E3
.text:003650D2
.text:003650D4                 shl     ecx, 5
.text:003650D7                 add     edx, ecx
.text:003650D9                 jmp     short loc_3650B0
.text:003650D9
.text:003650DB ; ---------------------------------------------------------------------------
.text:003650DB
.text:003650DB loc_3650DB:                             ; CODE XREF: sub_360480+4C4B↑j
.text:003650DB                 mov     edi, [ebp-44h]
.text:003650DE                 mov     ecx, [ebp-3Ch]
.text:003650E1                 jmp     short loc_3650EE
.text:003650E1
.text:003650E3 ; ---------------------------------------------------------------------------
.text:003650E3
.text:003650E3 loc_3650E3:                             ; CODE XREF: sub_360480+4C52↑j
.text:003650E3                 mov     edi, [ebp-44h]
.text:003650E6                 mov     ecx, [ebp-3Ch]
.text:003650E6
.text:003650E9
.text:003650E9 loc_3650E9:                             ; CODE XREF: sub_360480+4BB8↑j
.text:003650E9                 mov     edx, offset luao_nilobject
.text:003650E9
.text:003650EE
.text:003650EE loc_3650EE:                             ; CODE XREF: sub_360480+4BAA↑j
.text:003650EE                                         ; sub_360480+4C61↑j
.text:003650EE                 cmp     dword ptr [edx+0Ch], 0
.text:003650F2                 jz      short loc_36510B
.text:003650F2
.text:003650F4                 mov     eax, [ebp-24h]
.text:003650F7                 lea     edx, [esi+14h]
.text:003650F7
.text:003650FA
.text:003650FA loc_3650FA:                             ; CODE XREF: sub_360480+4B7F↑j
.text:003650FA                 mov     edi, ecx
.text:003650FC                 inc     eax
.text:003650FD                 mov     [ebp-44h], edi
.text:00365100                 mov     [ebp-7Ch], edi
.text:00365103                 mov     [ebp-24h], eax
.text:00365106                 jmp     loc_364FF6
.text:00365106
.text:0036510B ; ---------------------------------------------------------------------------
.text:0036510B
.text:0036510B loc_36510B:                             ; CODE XREF: sub_360480+4B18↑j
.text:0036510B                                         ; sub_360480+4B89↑j ...
.text:0036510B                 mov     eax, [ebp-14h]
.text:0036510E                 sub     eax, [ebp-24h]
.text:00365111                 mov     [ebp-14h], eax
.text:00365114                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:0036511A                 jg      loc_37618E
.text:0036511A
.text:00365120                 cmp     eax, (offset dword_3FFF948+6B8h)
.text:00365125                 jg      loc_37618E
.text:00365125
.text:0036512B                 movzx   ecx, byte ptr [esi+5]
.text:0036512F                 mov     edx, [esi+8]
.text:00365132                 mov     [ebp-24h], edx
.text:00365135                 mov     edx, [esi+14h]
.text:00365138                 mov     [ebp-34h], ecx
.text:0036513B                 lea     ecx, [esi+14h]
.text:0036513E                 sub     edx, ecx
.text:00365140                 mov     [ebp-3Ch], ecx
.text:00365143                 mov     [ebp-30h], edx
.text:00365146                 mov     edx, [ebp-24h]
.text:00365149                 cmp     edi, edx
.text:0036514B                 jle     loc_3652D7
.text:0036514B
.text:00365151                 mov     al, [esi+1]
.text:00365154                 mov     [ebp-1], al
.text:00365157                 cmp     edi, 0FFFFFFFh
.text:0036515D                 ja      loc_376089
.text:0036515D
.text:00365163                 mov     eax, edx
.text:00365165                 mov     ecx, edi
.text:00365167                 shl     eax, 4
.text:0036516A                 lea     edx, [esi+18h]
.text:0036516D                 mov     [ebp-8], eax
.text:00365170                 mov     eax, [edx]
.text:00365172                 sub     eax, edx
.text:00365174                 shl     ecx, 4
.text:00365177                 mov     [ebp-0Ch], eax
.text:0036517A                 mov     eax, [ebp-64h]
.text:0036517D                 mov     [ebp-10h], ecx
.text:00365180                 mov     edx, [eax]
.text:00365182                 sub     edx, eax
.text:00365184                 lea     eax, [ecx-1]
.text:00365187                 mov     [ebp-38h], edx
.text:0036518A                 cmp     eax, 200h
.text:0036518F                 jnb     short loc_36519D
.text:0036518F
.text:00365191                 movsx   eax, byte_2AB8E08[ecx]
.text:00365198                 mov     [ebp-5Ch], eax
.text:0036519B                 jmp     short loc_3651A4
.text:0036519B
.text:0036519D ; ---------------------------------------------------------------------------
.text:0036519D
.text:0036519D loc_36519D:                             ; CODE XREF: sub_360480+4D0F↑j
.text:0036519D                 mov     dword ptr [ebp-5Ch], 0FFFFFFFFh
.text:0036519D
.text:003651A4
.text:003651A4 loc_3651A4:                             ; CODE XREF: sub_360480+4D1B↑j
.text:003651A4                 mov     eax, [ebp-8]
.text:003651A7                 dec     eax
.text:003651A8                 cmp     eax, 200h
.text:003651AD                 jnb     short loc_3651BB
.text:003651AD
.text:003651AF                 mov     eax, [ebp-8]
.text:003651B2                 movsx   eax, byte_2AB8E08[eax]
.text:003651B9                 jmp     short loc_3651BE
.text:003651B9
.text:003651BB ; ---------------------------------------------------------------------------
.text:003651BB
.text:003651BB loc_3651BB:                             ; CODE XREF: sub_360480+4D2D↑j
.text:003651BB                 or      eax, 0FFFFFFFFh
.text:003651BB
.text:003651BE
.text:003651BE loc_3651BE:                             ; CODE XREF: sub_360480+4D39↑j
.text:003651BE                 cmp     dword ptr [ebp-5Ch], 0
.text:003651C2                 mov     [ebp-60h], eax
.text:003651C5                 jge     short loc_365206
.text:003651C5
.text:003651C7                 test    eax, eax
.text:003651C9                 mov     eax, [edx+0Ch]
.text:003651CC                 push    ecx
.text:003651CD                 jns     short loc_3651F8
.text:003651CD
.text:003651CF                 push    dword ptr [ebp-8]
.text:003651D2                 push    dword ptr [ebp-0Ch]
.text:003651D5                 push    dword ptr [edx+10h]
.text:003651D8                 call    eax
.text:003651D8
.text:003651DA                 mov     ecx, [ebp-10h]
.text:003651DD                 add     esp, 10h
.text:003651E0                 mov     [ebp-5Ch], eax
.text:003651E3                 test    eax, eax
.text:003651E5                 jnz     loc_36527B
.text:003651E5
.text:003651EB                 test    ecx, ecx
.text:003651ED                 jnz     loc_3760A9
.text:003651ED
.text:003651F3                 jmp     loc_36527B
.text:003651F3
.text:003651F8 ; ---------------------------------------------------------------------------
.text:003651F8
.text:003651F8 loc_3651F8:                             ; CODE XREF: sub_360480+4D4D↑j
.text:003651F8                 push    0
.text:003651FA                 push    0
.text:003651FC                 push    dword ptr [edx+10h]
.text:003651FF                 call    eax
.text:003651FF
.text:00365201                 add     esp, 10h
.text:00365204                 jmp     short loc_365211
.text:00365204
.text:00365206 ; ---------------------------------------------------------------------------
.text:00365206
.text:00365206 loc_365206:                             ; CODE XREF: sub_360480+4D45↑j
.text:00365206                 mov     edx, [ebp-5Ch]
.text:00365209                 mov     ecx, [ebp-74h]
.text:0036520C                 call    sub_13C08C0
.text:0036520C
.text:00365211
.text:00365211 loc_365211:                             ; CODE XREF: sub_360480+4D84↑j
.text:00365211                 mov     ecx, [ebp-10h]
.text:00365214                 mov     [ebp-5Ch], eax
.text:00365217                 test    eax, eax
.text:00365219                 jnz     short loc_365223
.text:00365219
.text:0036521B                 test    ecx, ecx
.text:0036521D                 jnz     loc_3760A9
.text:0036521D
.text:00365223
.text:00365223 loc_365223:                             ; CODE XREF: sub_360480+4D99↑j
.text:00365223                 mov     edx, [ebp-8]
.text:00365226                 test    edx, edx
.text:00365228                 jz      short loc_36524B
.text:00365228
.text:0036522A                 test    ecx, ecx
.text:0036522C                 jz      short loc_36524B
.text:0036522C
.text:0036522E                 cmp     edx, ecx
.text:00365230                 mov     eax, edi
.text:00365232                 cmovb   eax, [ebp-24h]
.text:00365236                 shl     eax, 4
.text:00365239                 push    eax
.text:0036523A                 push    dword ptr [ebp-0Ch]
.text:0036523D                 push    dword ptr [ebp-5Ch]
.text:00365240                 call    sub_1B7EE40
.text:00365240
.text:00365245                 mov     edx, [ebp-8]
.text:00365248                 add     esp, 0Ch
.text:00365248
.text:0036524B
.text:0036524B loc_36524B:                             ; CODE XREF: sub_360480+4DA8↑j
.text:0036524B                                         ; sub_360480+4DAC↑j
.text:0036524B                 mov     eax, [ebp-60h]
.text:0036524E                 test    eax, eax
.text:00365250                 js      short loc_365264
.text:00365250
.text:00365252                 push    dword ptr [ebp-0Ch]
.text:00365255                 mov     ecx, [ebp-74h]
.text:00365258                 mov     edx, eax
.text:0036525A                 call    sub_13C0A60
.text:0036525A
.text:0036525F                 add     esp, 4
.text:00365262                 jmp     short loc_365278
.text:00365262
.text:00365264 ; ---------------------------------------------------------------------------
.text:00365264
.text:00365264 loc_365264:                             ; CODE XREF: sub_360480+4DD0↑j
.text:00365264                 mov     eax, [ebp-38h]
.text:00365267                 push    0
.text:00365269                 push    edx
.text:0036526A                 push    dword ptr [ebp-0Ch]
.text:0036526D                 push    dword ptr [eax+10h]
.text:00365270                 mov     eax, [eax+0Ch]
.text:00365273                 call    eax
.text:00365273
.text:00365275                 add     esp, 10h
.text:00365275
.text:00365278
.text:00365278 loc_365278:                             ; CODE XREF: sub_360480+4DE2↑j
.text:00365278                 mov     ecx, [ebp-10h]
.text:00365278
.text:0036527B
.text:0036527B loc_36527B:                             ; CODE XREF: sub_360480+4D65↑j
.text:0036527B                                         ; sub_360480+4D73↑j
.text:0036527B                 mov     edx, [ebp-38h]
.text:0036527E                 mov     eax, ecx
.text:00365280                 sub     eax, [ebp-8]
.text:00365283                 sub     ecx, [ebp-8]
.text:00365286                 add     [edx+38h], eax
.text:00365289                 movzx   eax, byte ptr [ebp-1]
.text:0036528D                 add     [edx+eax*4+144h], ecx
.text:00365294                 mov     ecx, [ebp-5Ch]
.text:00365297                 add     ecx, 18h
.text:0036529A                 add     ecx, esi
.text:0036529C                 mov     [esi+18h], ecx
.text:0036529F                 sub     ecx, esi
.text:003652A1                 mov     edx, [esi+8]
.text:003652A4                 cmp     edx, edi
.text:003652A6                 jge     short loc_3652CE
.text:003652A6
.text:003652A8                 mov     eax, edx
.text:003652AA                 add     ecx, 0FFFFFFF4h
.text:003652AD                 shl     eax, 4
.text:003652B0                 add     eax, ecx
.text:003652B2                 mov     ecx, edi
.text:003652B4                 sub     ecx, edx
.text:003652B6                 db      66h, 66h
.text:003652B6                 nop     word ptr [eax+eax+00000000h]
.text:003652B6
.text:003652C0
.text:003652C0 loc_3652C0:                             ; CODE XREF: sub_360480+4E4C↓j
.text:003652C0                 mov     dword ptr [eax], 0
.text:003652C6                 lea     eax, [eax+10h]
.text:003652C9                 sub     ecx, 1
.text:003652CC                 jnz     short loc_3652C0
.text:003652CC
.text:003652CE
.text:003652CE loc_3652CE:                             ; CODE XREF: sub_360480+4E26↑j
.text:003652CE                 mov     eax, [ebp-14h]
.text:003652D1                 lea     ecx, [esi+14h]
.text:003652D4                 mov     [esi+8], edi
.text:003652D4
.text:003652D7
.text:003652D7 loc_3652D7:                             ; CODE XREF: sub_360480+4CCB↑j
.text:003652D7                 test    eax, eax
.text:003652D9                 jnz     short loc_3652EA
.text:003652D9
.text:003652DB                 lea     eax, dword_1EA0808[ecx]
.text:003652E1                 mov     [ecx], eax
.text:003652E3                 xor     ecx, ecx
.text:003652E5                 jmp     loc_3653D6
.text:003652E5
.text:003652EA ; ---------------------------------------------------------------------------
.text:003652EA
.text:003652EA loc_3652EA:                             ; CODE XREF: sub_360480+4E59↑j
.text:003652EA                 dec     eax
.text:003652EB                 or      ecx, 0FFFFFFFFh
.text:003652EE                 cmp     eax, 100h
.text:003652F3                 jb      short loc_365302
.text:003652F3
.text:003652F5
.text:003652F5 loc_3652F5:                             ; CODE XREF: sub_360480+4E80↓j
.text:003652F5                 shr     eax, 8
.text:003652F8                 add     ecx, 8
.text:003652FB                 cmp     eax, 100h
.text:00365300                 jnb     short loc_3652F5
.text:00365300
.text:00365302
.text:00365302 loc_365302:                             ; CODE XREF: sub_360480+4E73↑j
.text:00365302                 movzx   eax, ds:byte_278DF30[eax]
.text:00365309                 inc     eax
.text:0036530A                 add     eax, ecx
.text:0036530C                 mov     [ebp-10h], eax
.text:0036530F                 cmp     eax, 1Ah
.text:00365312                 jg      loc_376176
.text:00365312
.text:00365318                 mov     ecx, eax
.text:0036531A                 mov     edx, 1
.text:0036531F                 mov     al, [esi+1]
.text:00365322                 shl     edx, cl
.text:00365324                 mov     [ebp-14h], edx
.text:00365327                 mov     [ebp-1], al
.text:0036532A                 cmp     edx, 7FFFFFFh
.text:00365330                 ja      loc_376089
.text:00365330
.text:00365336                 mov     eax, [ebp-64h]
.text:00365339                 mov     ecx, edx
.text:0036533B                 shl     ecx, 5
.text:0036533E                 mov     [ebp-8], ecx
.text:00365341                 mov     edx, [eax]
.text:00365343                 sub     edx, eax
.text:00365345                 lea     eax, [ecx-1]
.text:00365348                 mov     [ebp-0Ch], edx
.text:0036534B                 cmp     eax, 200h
.text:00365350                 jnb     short loc_365369
.text:00365350
.text:00365352                 movsx   eax, byte_2AB8E08[ecx]
.text:00365359                 test    eax, eax
.text:0036535B                 js      short loc_365369
.text:0036535B
.text:0036535D                 mov     ecx, [ebp-74h]
.text:00365360                 mov     edx, eax
.text:00365362                 call    sub_13C08C0
.text:00365362
.text:00365367                 jmp     short loc_365379
.text:00365367
.text:00365369 ; ---------------------------------------------------------------------------
.text:00365369
.text:00365369 loc_365369:                             ; CODE XREF: sub_360480+4ED0↑j
.text:00365369                                         ; sub_360480+4EDB↑j
.text:00365369                 mov     eax, [edx+0Ch]
.text:0036536C                 push    ecx
.text:0036536D                 push    0
.text:0036536F                 push    0
.text:00365371                 push    dword ptr [edx+10h]
.text:00365374                 call    eax
.text:00365374
.text:00365376                 add     esp, 10h
.text:00365376
.text:00365379
.text:00365379 loc_365379:                             ; CODE XREF: sub_360480+4EE7↑j
.text:00365379                 mov     ecx, [ebp-8]
.text:0036537C                 mov     [ebp-38h], eax
.text:0036537F                 test    eax, eax
.text:00365381                 jnz     short loc_36538B
.text:00365381
.text:00365383                 test    ecx, ecx
.text:00365385                 jnz     loc_3760A9
.text:00365385
.text:0036538B
.text:0036538B loc_36538B:                             ; CODE XREF: sub_360480+4F01↑j
.text:0036538B                 mov     edx, [ebp-0Ch]
.text:0036538E                 movzx   eax, byte ptr [ebp-1]
.text:00365392                 add     [edx+38h], ecx
.text:00365395                 add     [edx+eax*4+144h], ecx
.text:0036539C                 lea     ecx, [esi+14h]
.text:0036539F                 mov     eax, [ebp-38h]
.text:003653A2                 add     eax, ecx
.text:003653A4                 mov     [ecx], eax
.text:003653A6                 mov     eax, [ebp-14h]
.text:003653A9                 test    eax, eax
.text:003653AB                 jle     short loc_3653D3
.text:003653AB
.text:003653AD                 mov     esi, [ebp-3Ch]
.text:003653B0                 xor     edx, edx
.text:003653B2                 mov     ecx, eax
.text:003653B2
.text:003653B4
.text:003653B4 loc_3653B4:                             ; CODE XREF: sub_360480+4F4E↓j
.text:003653B4                 mov     eax, [esi]
.text:003653B6                 lea     edx, [edx+20h]
.text:003653B9                 sub     eax, esi
.text:003653BB                 mov     dword ptr [eax+edx-4], 0
.text:003653C3                 mov     dword ptr [eax+edx-14h], 0
.text:003653CB                 sub     ecx, 1
.text:003653CE                 jnz     short loc_3653B4
.text:003653CE
.text:003653D0                 mov     esi, [ebp-58h]
.text:003653D0
.text:003653D3
.text:003653D3 loc_3653D3:                             ; CODE XREF: sub_360480+4F2B↑j
.text:003653D3                 mov     ecx, [ebp-10h]
.text:003653D3
.text:003653D6
.text:003653D6 loc_3653D6:                             ; CODE XREF: sub_360480+4E65↑j
.text:003653D6                 mov     al, 1
.text:003653D8                 mov     [esi+5], cl
.text:003653DB                 shl     al, cl
.text:003653DD                 dec     al
.text:003653DF                 mov     [esi+4], al
.text:003653E2                 mov     eax, [ebp-14h]
.text:003653E5                 mov     [esi+0Ch], eax
.text:003653E8                 cmp     edi, [ebp-24h]
.text:003653EB                 jge     loc_36556F
.text:003653EB
.text:003653F1                 mov     eax, edi
.text:003653F3                 mov     [esi+8], edi
.text:003653F6                 shl     eax, 4
.text:003653F9                 lea     edx, [esi+18h]
.text:003653FC                 mov     ecx, eax
.text:003653FE                 mov     [ebp-3Ch], eax
.text:00365401                 lea     eax, [edi+1]
.text:00365404                 mov     [ebp-14h], edx
.text:00365407                 mov     [ebp-8], eax
.text:0036540A                 mov     eax, [ebp-24h]
.text:0036540D                 sub     eax, edi
.text:0036540F                 mov     [ebp-10h], ecx
.text:00365412                 mov     [ebp-0Ch], eax
.text:00365412
.text:00365415
.text:00365415 loc_365415:                             ; CODE XREF: sub_360480+5022↓j
.text:00365415                 mov     edi, [edx]
.text:00365417                 mov     eax, edi
.text:00365419                 sub     eax, edx
.text:0036541B                 cmp     dword ptr [eax+ecx+0Ch], 0
.text:00365420                 jz      short loc_365495
.text:00365420
.text:00365422                 cmp     byte_2AB2004, 0
.text:00365429                 jz      short loc_365476
.text:00365429
.text:0036542B                 movd    xmm0, dword ptr [ebp-8]
.text:00365430                 lea     eax, [ebp-3F0h]
.text:00365436                 cvtdq2pd xmm1, xmm0
.text:0036543A                 mov     esi, ecx
.text:0036543C                 mov     dword ptr [ebp-3E4h], 4
.text:00365446                 mov     ecx, [ebp-74h]
.text:00365449                 sub     esi, edx
.text:0036544B                 push    eax
.text:0036544C                 xorps   xmm1, xmmword_2C87C80
.text:00365453                 movsd   qword ptr [ebp-3F0h], xmm1
.text:0036545B                 add     esi, [edx]
.text:0036545D                 mov     edx, [ebp-58h]
.text:00365460                 call    sub_13B83C0
.text:00365460
.text:00365465                 movups  xmm0, xmmword ptr [esi]
.text:00365468                 mov     esi, [ebp-58h]
.text:0036546B                 add     esp, 4
.text:0036546E                 mov     ecx, [ebp-10h]
.text:00365471                 mov     edx, [ebp-14h]
.text:00365474                 jmp     short loc_365492
.text:00365474
.text:00365476 ; ---------------------------------------------------------------------------
.text:00365476
.text:00365476 loc_365476:                             ; CODE XREF: sub_360480+4FA9↑j
.text:00365476                 push    dword ptr [ebp-8]
.text:00365479                 mov     ecx, [ebp-74h]
.text:0036547C                 mov     edx, esi
.text:0036547E                 call    sub_13BBE20
.text:0036547E
.text:00365483                 mov     ecx, [ebp-10h]
.text:00365486                 lea     edx, [esi+18h]
.text:00365489                 add     esp, 4
.text:0036548C                 sub     edi, edx
.text:0036548E                 movups  xmm0, xmmword ptr [edi+ecx]
.text:0036548E
.text:00365492
.text:00365492 loc_365492:                             ; CODE XREF: sub_360480+4FF4↑j
.text:00365492                 movups  xmmword ptr [eax], xmm0
.text:00365492
.text:00365495
.text:00365495 loc_365495:                             ; CODE XREF: sub_360480+4FA0↑j
.text:00365495                 inc     dword ptr [ebp-8]
.text:00365498                 add     ecx, 10h
.text:0036549B                 sub     dword ptr [ebp-0Ch], 1
.text:0036549F                 mov     [ebp-10h], ecx
.text:003654A2                 jnz     loc_365415
.text:003654A2
.text:003654A8                 mov     al, [esi+1]
.text:003654AB                 mov     edi, [ebp-44h]
.text:003654AE                 mov     [ebp-1], al
.text:003654B1                 cmp     edi, 0FFFFFFFh
.text:003654B7                 ja      loc_376089
.text:003654B7
.text:003654BD                 mov     eax, [edx]
.text:003654BF                 mov     ecx, [ebp-3Ch]
.text:003654C2                 sub     eax, edx
.text:003654C4                 mov     [ebp-14h], eax
.text:003654C7                 mov     eax, [ebp-24h]
.text:003654CA                 shl     eax, 4
.text:003654CD                 mov     [ebp-44h], eax
.text:003654D0                 mov     eax, [ebp-64h]
.text:003654D3                 mov     edx, [eax]
.text:003654D5                 sub     edx, eax
.text:003654D7                 lea     eax, [ecx-1]
.text:003654DA                 mov     [ebp-10h], edx
.text:003654DD                 cmp     eax, 200h
.text:003654E2                 jnb     short loc_3654F0
.text:003654E2
.text:003654E4                 movsx   eax, byte_2AB8E08[ecx]
.text:003654EB                 mov     [ebp-8], eax
.text:003654EE                 jmp     short loc_3654F7
.text:003654EE
.text:003654F0 ; ---------------------------------------------------------------------------
.text:003654F0
.text:003654F0 loc_3654F0:                             ; CODE XREF: sub_360480+5062↑j
.text:003654F0                 mov     dword ptr [ebp-8], 0FFFFFFFFh
.text:003654F0
.text:003654F7
.text:003654F7 loc_3654F7:                             ; CODE XREF: sub_360480+506E↑j
.text:003654F7                 mov     eax, [ebp-44h]
.text:003654FA                 dec     eax
.text:003654FB                 cmp     eax, 200h
.text:00365500                 jnb     short loc_36550E
.text:00365500
.text:00365502                 mov     eax, [ebp-44h]
.text:00365505                 movsx   eax, byte_2AB8E08[eax]
.text:0036550C                 jmp     short loc_365511
.text:0036550C
.text:0036550E ; ---------------------------------------------------------------------------
.text:0036550E
.text:0036550E loc_36550E:                             ; CODE XREF: sub_360480+5080↑j
.text:0036550E                 or      eax, 0FFFFFFFFh
.text:0036550E
.text:00365511
.text:00365511 loc_365511:                             ; CODE XREF: sub_360480+508C↑j
.text:00365511                 cmp     dword ptr [ebp-8], 0
.text:00365515                 mov     [ebp-0Ch], eax
.text:00365518                 jge     loc_365611
.text:00365518
.text:0036551E                 test    eax, eax
.text:00365520                 mov     eax, [edx+0Ch]
.text:00365523                 push    ecx
.text:00365524                 jns     loc_3655FE
.text:00365524
.text:0036552A                 push    dword ptr [ebp-44h]
.text:0036552D                 mov     edi, [ebp-14h]
.text:00365530                 push    edi
.text:00365531                 push    dword ptr [edx+10h]
.text:00365534                 call    eax
.text:00365534
.text:00365536                 mov     ecx, [ebp-3Ch]
.text:00365539                 add     esp, 10h
.text:0036553C                 mov     [ebp-8], eax
.text:0036553F                 test    eax, eax
.text:00365541                 jnz     short loc_36554B
.text:00365541
.text:00365543                 test    ecx, ecx
.text:00365545                 jnz     loc_3760A9
.text:00365545
.text:0036554B
.text:0036554B loc_36554B:                             ; CODE XREF: sub_360480+50C1↑j
.text:0036554B                                         ; sub_360480+51F0↓j
.text:0036554B                 mov     edi, [ebp-10h]
.text:0036554B
.text:0036554E
.text:0036554E loc_36554E:                             ; CODE XREF: sub_360480+520A↓j
.text:0036554E                 mov     eax, ecx
.text:00365550                 sub     ecx, [ebp-44h]
.text:00365553                 sub     eax, [ebp-44h]
.text:00365556                 add     [edi+38h], eax
.text:00365559                 movzx   eax, byte ptr [ebp-1]
.text:0036555D                 add     [edi+eax*4+144h], ecx
.text:00365564                 mov     eax, [ebp-8]
.text:00365567                 add     eax, 18h
.text:0036556A                 add     eax, esi
.text:0036556C                 mov     [esi+18h], eax
.text:0036556C
.text:0036556F
.text:0036556F loc_36556F:                             ; CODE XREF: sub_360480+4F6B↑j
.text:0036556F                 mov     ecx, [ebp-34h]
.text:00365572                 mov     edx, 1
.text:00365577                 shl     edx, cl
.text:00365579                 cmp     byte_2AB2004, 0
.text:00365580                 mov     [ebp-14h], edx
.text:00365583                 lea     edi, [edx-1]
.text:00365586                 jz      loc_36568F
.text:00365586
.text:0036558C                 test    edi, edi
.text:0036558E                 js      loc_3656FB
.text:0036558E
.text:00365594                 mov     edx, [ebp-30h]
.text:00365597                 mov     eax, edi
.text:00365599                 shl     eax, 5
.text:0036559C                 add     edx, 10h
.text:0036559F                 add     edx, eax
.text:003655A1                 mov     [ebp-24h], edx
.text:003655A1
.text:003655A4
.text:003655A4 loc_3655A4:                             ; CODE XREF: sub_360480+5177↓j
.text:003655A4                 cmp     dword ptr [edx-4], 0
.text:003655A8                 jz      short loc_3655EE
.text:003655A8
.text:003655AA                 mov     eax, [edx]
.text:003655AC                 mov     ecx, [edx+4]
.text:003655AF                 mov     [ebp-400h], eax
.text:003655B5                 mov     [ebp-3FCh], ecx
.text:003655BB                 mov     eax, [edx+8]
.text:003655BE                 mov     ecx, [ebp-74h]
.text:003655C1                 mov     [ebp-3F8h], eax
.text:003655C7                 mov     eax, [edx+0Ch]
.text:003655CA                 mov     edx, esi
.text:003655CC                 and     eax, 0Fh
.text:003655CF                 mov     [ebp-3F4h], eax
.text:003655D5                 lea     eax, [ebp-400h]
.text:003655DB                 push    eax
.text:003655DC                 call    sub_13B40E0
.text:003655DC
.text:003655E1                 mov     edx, [ebp-24h]
.text:003655E4                 add     esp, 4
.text:003655E7                 movups  xmm0, xmmword ptr [edx-10h]
.text:003655EB                 movups  xmmword ptr [eax], xmm0
.text:003655EB
.text:003655EE
.text:003655EE loc_3655EE:                             ; CODE XREF: sub_360480+5128↑j
.text:003655EE                 sub     edx, 20h ; ' '
.text:003655F1                 sub     edi, 1
.text:003655F4                 mov     [ebp-24h], edx
.text:003655F7                 jns     short loc_3655A4
.text:003655F7
.text:003655F9                 jmp     loc_3656F8
.text:003655F9
.text:003655FE ; ---------------------------------------------------------------------------
.text:003655FE
.text:003655FE loc_3655FE:                             ; CODE XREF: sub_360480+50A4↑j
.text:003655FE                 push    0
.text:00365600                 push    0
.text:00365602                 push    dword ptr [edx+10h]
.text:00365605                 call    eax
.text:00365605
.text:00365607                 mov     edx, eax
.text:00365609                 add     esp, 10h
.text:0036560C                 mov     [ebp-8], edx
.text:0036560F                 jmp     short loc_365621
.text:0036560F
.text:00365611 ; ---------------------------------------------------------------------------
.text:00365611
.text:00365611 loc_365611:                             ; CODE XREF: sub_360480+5098↑j
.text:00365611                 mov     edx, [ebp-8]
.text:00365614                 mov     ecx, [ebp-74h]
.text:00365617                 call    sub_13C08C0
.text:00365617
.text:0036561C                 mov     edx, eax
.text:0036561E                 mov     [ebp-8], eax
.text:0036561E
.text:00365621
.text:00365621 loc_365621:                             ; CODE XREF: sub_360480+518F↑j
.text:00365621                 mov     eax, [ebp-3Ch]
.text:00365624                 test    edx, edx
.text:00365626                 jnz     short loc_365630
.text:00365626
.text:00365628                 test    eax, eax
.text:0036562A                 jnz     loc_3760A9
.text:0036562A
.text:00365630
.text:00365630 loc_365630:                             ; CODE XREF: sub_360480+51A6↑j
.text:00365630                 mov     ecx, [ebp-44h]
.text:00365633                 test    ecx, ecx
.text:00365635                 jz      short loc_365657
.text:00365635
.text:00365637                 test    eax, eax
.text:00365639                 jz      short loc_365657
.text:00365639
.text:0036563B                 cmp     ecx, eax
.text:0036563D                 cmovb   edi, [ebp-24h]
.text:00365641                 shl     edi, 4
.text:00365644                 push    edi
.text:00365645                 mov     edi, [ebp-14h]
.text:00365648                 push    edi
.text:00365649                 push    edx
.text:0036564A                 call    sub_1B7EE40
.text:0036564A
.text:0036564F                 mov     ecx, [ebp-44h]
.text:00365652                 add     esp, 0Ch
.text:00365655                 jmp     short loc_36565A
.text:00365655
.text:00365657 ; ---------------------------------------------------------------------------
.text:00365657
.text:00365657 loc_365657:                             ; CODE XREF: sub_360480+51B5↑j
.text:00365657                                         ; sub_360480+51B9↑j
.text:00365657                 mov     edi, [ebp-14h]
.text:00365657
.text:0036565A
.text:0036565A loc_36565A:                             ; CODE XREF: sub_360480+51D5↑j
.text:0036565A                 mov     edx, [ebp-0Ch]
.text:0036565D                 test    edx, edx
.text:0036565F                 js      short loc_365675
.text:0036565F
.text:00365661                 mov     ecx, [ebp-74h]
.text:00365664                 push    edi
.text:00365665                 call    sub_13C0A60
.text:00365665
.text:0036566A                 mov     ecx, [ebp-3Ch]
.text:0036566D                 add     esp, 4
.text:00365670                 jmp     loc_36554B
.text:00365670
.text:00365675 ; ---------------------------------------------------------------------------
.text:00365675
.text:00365675 loc_365675:                             ; CODE XREF: sub_360480+51DF↑j
.text:00365675                 push    0
.text:00365677                 push    ecx
.text:00365678                 push    edi
.text:00365679                 mov     edi, [ebp-10h]
.text:0036567C                 push    dword ptr [edi+10h]
.text:0036567F                 mov     eax, [edi+0Ch]
.text:00365682                 call    eax
.text:00365682
.text:00365684                 mov     ecx, [ebp-3Ch]
.text:00365687                 add     esp, 10h
.text:0036568A                 jmp     loc_36554E
.text:0036568A
.text:0036568F ; ---------------------------------------------------------------------------
.text:0036568F
.text:0036568F loc_36568F:                             ; CODE XREF: sub_360480+5106↑j
.text:0036568F                 test    edi, edi
.text:00365691                 js      short loc_3656FB
.text:00365691
.text:00365693                 mov     edx, [ebp-30h]
.text:00365696                 mov     eax, edi
.text:00365698                 shl     eax, 5
.text:0036569B                 add     edx, 10h
.text:0036569E                 add     edx, eax
.text:003656A0                 mov     [ebp-24h], edx
.text:003656A0
.text:003656A3
.text:003656A3 loc_3656A3:                             ; CODE XREF: sub_360480+5276↓j
.text:003656A3                 cmp     dword ptr [edx-4], 0
.text:003656A7                 jz      short loc_3656ED
.text:003656A7
.text:003656A9                 mov     eax, [edx]
.text:003656AB                 mov     ecx, [edx+4]
.text:003656AE                 mov     [ebp-410h], eax
.text:003656B4                 mov     [ebp-40Ch], ecx
.text:003656BA                 mov     eax, [edx+8]
.text:003656BD                 mov     ecx, [ebp-74h]
.text:003656C0                 mov     [ebp-408h], eax
.text:003656C6                 mov     eax, [edx+0Ch]
.text:003656C9                 mov     edx, esi
.text:003656CB                 and     eax, 0Fh
.text:003656CE                 mov     [ebp-404h], eax
.text:003656D4                 lea     eax, [ebp-410h]
.text:003656DA                 push    eax
.text:003656DB                 call    sub_13BA4F0
.text:003656DB
.text:003656E0                 mov     edx, [ebp-24h]
.text:003656E3                 add     esp, 4
.text:003656E6                 movups  xmm0, xmmword ptr [edx-10h]
.text:003656EA                 movups  xmmword ptr [eax], xmm0
.text:003656EA
.text:003656ED
.text:003656ED loc_3656ED:                             ; CODE XREF: sub_360480+5227↑j
.text:003656ED                 sub     edx, 20h ; ' '
.text:003656F0                 sub     edi, 1
.text:003656F3                 mov     [ebp-24h], edx
.text:003656F6                 jns     short loc_3656A3
.text:003656F6
.text:003656F8
.text:003656F8 loc_3656F8:                             ; CODE XREF: sub_360480+5179↑j
.text:003656F8                 mov     edx, [ebp-14h]
.text:003656F8
.text:003656FB
.text:003656FB loc_3656FB:                             ; CODE XREF: sub_360480+510E↑j
.text:003656FB                                         ; sub_360480+5211↑j
.text:003656FB                 mov     ecx, [ebp-30h]
.text:003656FE                 cmp     ecx, offset dword_1EA0808
.text:00365704                 jz      short loc_36571C
.text:00365704
.text:00365706                 movzx   eax, byte ptr [esi+1]
.text:0036570A                 shl     edx, 5
.text:0036570D                 push    eax
.text:0036570E                 push    edx
.text:0036570F                 mov     edx, ecx
.text:00365711                 mov     ecx, [ebp-74h]
.text:00365714                 call    sub_13C0AF0
.text:00365714
.text:00365719                 add     esp, 8
.text:00365719
.text:0036571C
.text:0036571C loc_36571C:                             ; CODE XREF: sub_360480+5284↑j
.text:0036571C                 push    dword ptr [ebp-54h]
.text:0036571F                 mov     ecx, [ebp-74h]
.text:00365722                 mov     edx, esi
.text:00365722
.text:00365724
.text:00365724 loc_365724:                             ; CODE XREF: sub_360480+5C5D↓j
.text:00365724                 call    sub_13B40E0
.text:00365724
.text:00365729                 mov     edi, eax
.text:0036572B                 jmp     loc_366354
.text:0036572B
.text:00365730 ; ---------------------------------------------------------------------------
.text:00365730
.text:00365730 loc_365730:                             ; CODE XREF: sub_360480+4A3B↑j
.text:00365730                                         ; sub_360480+4A45↑j ...
.text:00365730                 mov     eax, [ecx-14h]
.text:00365733                 dec     eax             ; switch 5 cases
.text:00365734                 cmp     eax, 4
.text:00365737                 ja      def_36573D      ; jumptable 0036573D default case, case 2
.text:00365737
.text:0036573D                 jmp     ds:jpt_36573D[eax*4] ; switch jump
.text:0036573D
.text:00365744 ; ---------------------------------------------------------------------------
.text:00365744
.text:00365744 loc_365744:                             ; CODE XREF: sub_360480+52BD↑j
.text:00365744                                         ; DATA XREF: .text:jpt_36573D↓o
.text:00365744                 movsd   xmm1, qword ptr [edi] ; jumptable 0036573D case 4
.text:00365748                 xorps   xmm1, xmm2
.text:0036574B                 movsd   qword ptr [ebp-18h], xmm1
.text:00365750                 mov     ecx, [ebp-14h]
.text:00365753                 and     ecx, 7FFFFFFFh
.text:00365759                 mov     eax, ecx
.text:0036575B                 shr     eax, 12h
.text:0036575E                 xor     eax, [ebp-18h]
.text:00365761                 imul    edx, eax, 5BD1E995h
.text:00365767                 mov     eax, edx
.text:00365769                 shr     eax, 16h
.text:0036576C                 xor     eax, ecx
.text:0036576E                 imul    ecx, eax, 5BD1E995h
.text:00365774                 mov     eax, ecx
.text:00365776                 shr     eax, 11h
.text:00365779                 xor     eax, edx
.text:0036577B                 imul    eax, 5BD1E995h
.text:00365781                 shr     eax, 13h
.text:00365784                 xor     eax, ecx
.text:00365786                 imul    edi, eax, 5BD1E995h
.text:00365786
.text:0036578C
.text:0036578C loc_36578C:                             ; CODE XREF: sub_360480+53A1↓j
.text:0036578C                 mov     cl, [esi+5]
.text:0036578F                 mov     eax, 1
.text:00365794                 shl     eax, cl
.text:00365796                 dec     eax
.text:00365797                 and     edi, eax
.text:00365799                 lea     eax, [esi+14h]
.text:0036579C                 shl     edi, 5
.text:0036579F                 sub     edi, eax
.text:003657A1                 add     edi, [eax]
.text:003657A3                 jmp     loc_365884
.text:003657A3
.text:003657A8 ; ---------------------------------------------------------------------------
.text:003657A8
.text:003657A8 loc_3657A8:                             ; CODE XREF: sub_360480+52BD↑j
.text:003657A8                                         ; DATA XREF: .text:jpt_36573D↓o
.text:003657A8                 movq    xmm0, qword ptr [edi] ; jumptable 0036573D case 3
.text:003657AC                 xor     eax, eax
.text:003657AE                 mov     esi, [edi+8]
.text:003657B1                 movq    qword ptr [ebp-21Ch], xmm0
.text:003657B9                 mov     ecx, [ebp-21Ch]
.text:003657BF                 cmp     ecx, 8000000h
.text:003657C5                 cmovz   ecx, eax
.text:003657C8                 mov     eax, [ebp-218h]
.text:003657CE                 xor     edx, edx
.text:003657D0                 cmp     eax, 8000000h
.text:003657D5                 cmovz   eax, edx
.text:003657D8                 cmp     esi, 8000000h
.text:003657DE                 cmovz   esi, edx
.text:003657E1                 mov     edx, ecx
.text:003657E3                 shr     edx, 11h
.text:003657E6                 xor     edx, ecx
.text:003657E8                 mov     ecx, eax
.text:003657EA                 shr     ecx, 11h
.text:003657ED                 xor     ecx, eax
.text:003657EF                 mov     [ebp-21Ch], edx
.text:003657F5                 mov     eax, esi
.text:003657F7                 mov     [ebp-218h], ecx
.text:003657FD                 shr     eax, 11h
.text:00365800                 xor     eax, esi
.text:00365802                 mov     esi, [ebp-58h]
.text:00365805                 imul    edi, eax, 4F9FFB7h
.text:0036580B                 mov     [ebp-214h], eax
.text:00365811                 imul    eax, edx, 466F45Dh
.text:00365817                 xor     edi, eax
.text:00365819                 imul    eax, ecx, 127409Fh
.text:0036581F                 xor     edi, eax
.text:00365821                 jmp     loc_36578C
.text:00365821
.text:00365826 ; ---------------------------------------------------------------------------
.text:00365826
.text:00365826 loc_365826:                             ; CODE XREF: sub_360480+52BD↑j
.text:00365826                                         ; DATA XREF: .text:jpt_36573D↓o
.text:00365826                 mov     eax, [edi]      ; jumptable 0036573D case 5
.text:00365828                 mov     edi, 1
.text:0036582D                 mov     cl, [esi+5]
.text:00365830                 add     eax, 0Ch
.text:00365833                 shl     edi, cl
.text:00365835                 dec     edi
.text:00365836                 sub     eax, [eax]
.text:00365838                 jmp     short loc_365878
.text:00365838
.text:0036583A ; ---------------------------------------------------------------------------
.text:0036583A
.text:0036583A loc_36583A:                             ; CODE XREF: sub_360480+52BD↑j
.text:0036583A                                         ; DATA XREF: .text:jpt_36573D↓o
.text:0036583A                 mov     cl, [esi+5]     ; jumptable 0036573D case 1
.text:0036583D                 mov     edi, 1
.text:00365842                 mov     eax, [ebp-54h]
.text:00365845                 shl     edi, cl
.text:00365847                 dec     edi
.text:00365848                 and     edi, [eax]
.text:0036584A                 jmp     short loc_36587A
.text:0036584A
.text:0036584C ; ---------------------------------------------------------------------------
.text:0036584C
.text:0036584C def_36573D:                             ; CODE XREF: sub_360480+52B7↑j
.text:0036584C                                         ; sub_360480+52BD↑j
.text:0036584C                                         ; DATA XREF: ...
.text:0036584C                 mov     ecx, [edi]      ; jumptable 0036573D default case, case 2
.text:0036584E                 shr     ecx, 10h
.text:00365851                 xor     ecx, [edi]
.text:00365853                 imul    ecx, 85EBCA6Bh
.text:00365859                 mov     eax, ecx
.text:0036585B                 shr     eax, 0Dh
.text:0036585E                 xor     eax, ecx
.text:00365860                 mov     cl, [esi+5]
.text:00365863                 imul    eax, 0C2B2AE35h
.text:00365869                 mov     edi, eax
.text:0036586B                 shr     edi, 10h
.text:0036586E                 xor     edi, eax
.text:00365870                 mov     eax, 1
.text:00365875                 shl     eax, cl
.text:00365877                 dec     eax
.text:00365877
.text:00365878
.text:00365878 loc_365878:                             ; CODE XREF: sub_360480+53B8↑j
.text:00365878                 and     edi, eax
.text:00365878
.text:0036587A
.text:0036587A loc_36587A:                             ; CODE XREF: sub_360480+53CA↑j
.text:0036587A                 lea     edx, [esi+14h]
.text:0036587D                 shl     edi, 5
.text:00365880                 sub     edi, edx
.text:00365882                 add     edi, [edx]
.text:00365882
.text:00365884
.text:00365884 loc_365884:                             ; CODE XREF: sub_360480+5323↑j
.text:00365884                 cmp     dword ptr [edi+0Ch], 0
.text:00365888                 jnz     short loc_365896
.text:00365888
.text:0036588A                 cmp     edi, offset dword_1EA0808
.text:00365890                 jnz     loc_366312
.text:00365890
.text:00365896
.text:00365896 loc_365896:                             ; CODE XREF: sub_360480+5408↑j
.text:00365896                 mov     ecx, esi
.text:00365898                 call    sub_13B8380
.text:00365898
.text:0036589D                 mov     [ebp-14h], eax
.text:003658A0                 test    eax, eax
.text:003658A2                 jnz     loc_3660EF
.text:003658A2
.text:003658A8                 xorps   xmm0, xmm0
.text:003658AB                 mov     [ebp-0A98h], eax
.text:003658B1                 lea     edx, [ebp-0B00h]
.text:003658B7                 movaps  xmmword ptr [ebp-0B00h], xmm0
.text:003658BE                 mov     ecx, esi
.text:003658C0                 movaps  xmmword ptr [ebp-0AF0h], xmm0
.text:003658C7                 movaps  xmmword ptr [ebp-0AE0h], xmm0
.text:003658CE                 movaps  xmmword ptr [ebp-0AD0h], xmm0
.text:003658D5                 movaps  xmmword ptr [ebp-0AC0h], xmm0
.text:003658DC                 movaps  xmmword ptr [ebp-0AB0h], xmm0
.text:003658E3                 movq    qword ptr [ebp-0AA0h], xmm0
.text:003658EB                 call    sub_13B3F30
.text:003658EB
.text:003658F0                 mov     edi, eax
.text:003658F2                 lea     edx, [ebp-0B00h]
.text:003658F8                 lea     eax, [ebp-80h]
.text:003658FB                 mov     [ebp-80h], edi
.text:003658FE                 push    eax
.text:003658FF                 mov     ecx, esi
.text:00365901                 call    sub_13B3FF0
.text:00365901
.text:00365906                 add     edi, eax
.text:00365908                 add     esp, 4
.text:0036590B                 mov     eax, [ebp-1Ch]
.text:0036590E                 cmp     dword ptr [eax-14h], 4
.text:00365912                 jnz     short loc_365930
.text:00365912
.text:00365914                 mov     eax, [ebp-54h]
.text:00365917                 lea     ecx, [ebp-0B00h]
.text:0036591D                 movsd   xmm1, qword ptr [eax]
.text:00365921                 xorps   xmm1, xmmword_2C87C80
.text:00365928                 call    sub_13B3EE0
.text:00365928
.text:0036592D                 add     [ebp-80h], eax
.text:0036592D
.text:00365930
.text:00365930 loc_365930:                             ; CODE XREF: sub_360480+5492↑j
.text:00365930                 inc     edi
.text:00365931                 lea     edx, [ebp-80h]
.text:00365934                 lea     ecx, [ebp-0B00h]
.text:0036593A                 mov     [ebp-14h], edi
.text:0036593D                 call    sub_13B3E70
.text:0036593D
.text:00365942                 cmp     byte_2AB209C, 0
.text:00365949                 lea     edx, [esi+14h]
.text:0036594C                 mov     [ebp-24h], eax
.text:0036594F                 jz      loc_365ABB
.text:0036594F
.text:00365955                 mov     ecx, [edx]
.text:00365957                 sub     ecx, edx
.text:00365959                 cmp     ecx, offset dword_1EA0808
.text:0036595F                 mov     ecx, [ebp-80h]
.text:00365962                 mov     [ebp-44h], ecx
.text:00365965                 jnz     short loc_365970
.text:00365965
.text:00365967                 mov     byte ptr [ebp-1], 0
.text:0036596B                 cmp     ecx, [esi+8]
.text:0036596E                 jge     short loc_365974
.text:0036596E
.text:00365970
.text:00365970 loc_365970:                             ; CODE XREF: sub_360480+54E5↑j
.text:00365970                 mov     byte ptr [ebp-1], 1
.text:00365970
.text:00365974
.text:00365974 loc_365974:                             ; CODE XREF: sub_360480+54EE↑j
.text:00365974                 mov     edi, [ebp-1Ch]
.text:00365977                 movaps  xmm3, xmmword_2C87C80
.text:0036597E                 cmp     dword ptr [edi-14h], 4
.text:00365982                 jnz     short loc_3659AA
.text:00365982
.text:00365984                 mov     eax, [ebp-54h]
.text:00365987                 movsd   xmm1, qword ptr [eax]
.text:0036598B                 xorps   xmm1, xmm3
.text:0036598E                 cvttsd2si edi, xmm1
.text:00365992                 mov     [ebp-34h], edi
.text:00365995                 movd    xmm0, edi
.text:00365999                 cvtdq2pd xmm0, xmm0
.text:0036599D                 ucomisd xmm0, xmm1
.text:003659A1                 lahf
.text:003659A2                 test    ah, 44h
.text:003659A5                 mov     eax, [ebp-24h]
.text:003659A8                 jnp     short loc_3659B1
.text:003659A8
.text:003659AA
.text:003659AA loc_3659AA:                             ; CODE XREF: sub_360480+5502↑j
.text:003659AA                 mov     dword ptr [ebp-34h], 0FFFFFFFFh
.text:003659AA
.text:003659B1
.text:003659B1 loc_3659B1:                             ; CODE XREF: sub_360480+5528↑j
.text:003659B1                                         ; sub_360480+5636↓j
.text:003659B1                 lea     edi, [ecx+1]
.text:003659B4                 cmp     edi, [ebp-34h]
.text:003659B7                 jz      loc_365AAA
.text:003659B7
.text:003659BD                 cmp     byte ptr [ebp-1], 0
.text:003659C1                 jz      loc_365AC3
.text:003659C1
.text:003659C7                 lea     eax, [edi-1]
.text:003659CA                 cmp     eax, [esi+8]
.text:003659CD                 jnb     short loc_3659E9
.text:003659CD
.text:003659CF                 mov     edx, [esi+18h]
.text:003659D2                 lea     eax, [esi+18h]
.text:003659D5                 mov     ecx, edi
.text:003659D7                 shl     ecx, 4
.text:003659DA                 sub     ecx, eax
.text:003659DC                 add     ecx, 0FFFFFFF0h
.text:003659DF                 add     edx, ecx
.text:003659DF
.text:003659E1
.text:003659E1 loc_3659E1:                             ; CODE XREF: sub_360480+5602↓j
.text:003659E1                 mov     ecx, [ebp-44h]
.text:003659E4                 jmp     loc_365A9E
.text:003659E4
.text:003659E9 ; ---------------------------------------------------------------------------
.text:003659E9
.text:003659E9 loc_3659E9:                             ; CODE XREF: sub_360480+554D↑j
.text:003659E9                 mov     eax, [edx]
.text:003659EB                 mov     [ebp-3Ch], eax
.text:003659EE                 sub     eax, edx
.text:003659F0                 cmp     eax, offset dword_1EA0808
.text:003659F5                 jz      loc_365A99
.text:003659F5
.text:003659FB                 movd    xmm2, edi
.text:003659FF                 cvtdq2pd xmm2, xmm2
.text:00365A03                 movsd   qword ptr [ebp-108h], xmm2
.text:00365A0B                 mov     ecx, [ebp-104h]
.text:00365A11                 and     ecx, 7FFFFFFFh
.text:00365A17                 mov     eax, ecx
.text:00365A19                 shr     eax, 12h
.text:00365A1C                 xor     eax, [ebp-108h]
.text:00365A22                 imul    edx, eax, 5BD1E995h
.text:00365A28                 mov     eax, edx
.text:00365A2A                 shr     eax, 16h
.text:00365A2D                 xor     eax, ecx
.text:00365A2F                 imul    ecx, eax, 5BD1E995h
.text:00365A35                 mov     eax, ecx
.text:00365A37                 shr     eax, 11h
.text:00365A3A                 xor     eax, edx
.text:00365A3C                 imul    eax, 5BD1E995h
.text:00365A42                 shr     eax, 13h
.text:00365A45                 xor     eax, ecx
.text:00365A47                 mov     cl, [esi+5]
.text:00365A4A                 imul    edx, eax, 5BD1E995h
.text:00365A50                 mov     eax, 1
.text:00365A55                 shl     eax, cl
.text:00365A57                 dec     eax
.text:00365A58                 and     edx, eax
.text:00365A5A                 mov     eax, [ebp-3Ch]
.text:00365A5D                 shl     edx, 5
.text:00365A60                 add     eax, 0FFFFFFECh
.text:00365A63                 sub     edx, esi
.text:00365A65                 add     edx, eax
.text:00365A65
.text:00365A67
.text:00365A67 loc_365A67:                             ; CODE XREF: sub_360480+5614↓j
.text:00365A67                 mov     ecx, [edx+1Ch]
.text:00365A6A                 mov     eax, ecx
.text:00365A6C                 and     al, 0Fh
.text:00365A6E                 cmp     al, 4
.text:00365A70                 jnz     short loc_365A88
.text:00365A70
.text:00365A72                 movsd   xmm1, qword ptr [edx+10h]
.text:00365A77                 xorps   xmm1, xmm3
.text:00365A7A                 ucomisd xmm1, xmm2
.text:00365A7E                 lahf
.text:00365A7F                 test    ah, 44h
.text:00365A82                 jnp     loc_3659E1
.text:00365A82
.text:00365A88
.text:00365A88 loc_365A88:                             ; CODE XREF: sub_360480+55F0↑j
.text:00365A88                 sar     ecx, 4
.text:00365A8B                 test    ecx, ecx
.text:00365A8D                 jz      short loc_365A96
.text:00365A8D
.text:00365A8F                 shl     ecx, 5
.text:00365A92                 add     edx, ecx
.text:00365A94                 jmp     short loc_365A67
.text:00365A94
.text:00365A96 ; ---------------------------------------------------------------------------
.text:00365A96
.text:00365A96 loc_365A96:                             ; CODE XREF: sub_360480+560D↑j
.text:00365A96                 mov     ecx, [ebp-44h]
.text:00365A96
.text:00365A99
.text:00365A99 loc_365A99:                             ; CODE XREF: sub_360480+5575↑j
.text:00365A99                 mov     edx, offset luao_nilobject
.text:00365A99
.text:00365A9E
.text:00365A9E loc_365A9E:                             ; CODE XREF: sub_360480+5564↑j
.text:00365A9E                 cmp     dword ptr [edx+0Ch], 0
.text:00365AA2                 lea     edx, [esi+14h]
.text:00365AA5                 jz      short loc_365AC3
.text:00365AA5
.text:00365AA7                 mov     eax, [ebp-24h]
.text:00365AA7
.text:00365AAA
.text:00365AAA loc_365AAA:                             ; CODE XREF: sub_360480+5537↑j
.text:00365AAA                 mov     ecx, edi
.text:00365AAC                 inc     eax
.text:00365AAD                 mov     [ebp-44h], ecx
.text:00365AB0                 mov     [ebp-80h], ecx
.text:00365AB3                 mov     [ebp-24h], eax
.text:00365AB6                 jmp     loc_3659B1
.text:00365AB6
.text:00365ABB ; ---------------------------------------------------------------------------
.text:00365ABB
.text:00365ABB loc_365ABB:                             ; CODE XREF: sub_360480+54CF↑j
.text:00365ABB                 mov     ecx, [ebp-80h]
.text:00365ABE                 mov     [ebp-44h], ecx
.text:00365AC1                 jmp     short loc_365AC6
.text:00365AC1
.text:00365AC3 ; ---------------------------------------------------------------------------
.text:00365AC3
.text:00365AC3 loc_365AC3:                             ; CODE XREF: sub_360480+5541↑j
.text:00365AC3                                         ; sub_360480+5625↑j
.text:00365AC3                 mov     edi, [ebp-14h]
.text:00365AC3
.text:00365AC6
.text:00365AC6 loc_365AC6:                             ; CODE XREF: sub_360480+5641↑j
.text:00365AC6                 sub     edi, [ebp-24h]
.text:00365AC9                 mov     [ebp-14h], edi
.text:00365ACC                 cmp     ecx, (offset dword_3FFF948+6B8h)
.text:00365AD2                 jg      loc_37618E
.text:00365AD2
.text:00365AD8                 cmp     edi, (offset dword_3FFF948+6B8h)
.text:00365ADE                 jg      loc_37618E
.text:00365ADE
.text:00365AE4                 mov     eax, [esi+8]
.text:00365AE7                 mov     [ebp-24h], eax
.text:00365AEA                 movzx   eax, byte ptr [esi+5]
.text:00365AEE                 mov     esi, [edx]
.text:00365AF0                 sub     esi, edx
.text:00365AF2                 mov     [ebp-34h], eax
.text:00365AF5                 mov     [ebp-3Ch], esi
.text:00365AF8                 mov     esi, [ebp-58h]
.text:00365AFB                 cmp     ecx, [ebp-24h]
.text:00365AFE                 jle     loc_365C77
.text:00365AFE
.text:00365B04                 mov     al, [esi+1]
.text:00365B07                 mov     [ebp-1], al
.text:00365B0A                 cmp     ecx, 0FFFFFFFh
.text:00365B10                 ja      loc_376089
.text:00365B10
.text:00365B16                 mov     eax, [esi+18h]
.text:00365B19                 mov     edi, ecx
.text:00365B1B                 mov     edx, [ebp-24h]
.text:00365B1E                 lea     ecx, [esi+18h]
.text:00365B21                 sub     eax, ecx
.text:00365B23                 shl     edi, 4
.text:00365B26                 mov     [ebp-10h], eax
.text:00365B29                 mov     eax, [ebp-64h]
.text:00365B2C                 shl     edx, 4
.text:00365B2F                 mov     [ebp-30h], edx
.text:00365B32                 mov     ecx, [eax]
.text:00365B34                 sub     ecx, eax
.text:00365B36                 lea     eax, [edi-1]
.text:00365B39                 mov     [ebp-8], ecx
.text:00365B3C                 cmp     eax, 200h
.text:00365B41                 jnb     short loc_365B4F
.text:00365B41
.text:00365B43                 movsx   eax, byte_2AB8E08[edi]
.text:00365B4A                 mov     [ebp-0Ch], eax
.text:00365B4D                 jmp     short loc_365B56
.text:00365B4D
.text:00365B4F ; ---------------------------------------------------------------------------
.text:00365B4F
.text:00365B4F loc_365B4F:                             ; CODE XREF: sub_360480+56C1↑j
.text:00365B4F                 mov     dword ptr [ebp-0Ch], 0FFFFFFFFh
.text:00365B4F
.text:00365B56
.text:00365B56 loc_365B56:                             ; CODE XREF: sub_360480+56CD↑j
.text:00365B56                 lea     eax, [edx-1]
.text:00365B59                 cmp     eax, 200h
.text:00365B5E                 jnb     short loc_365B69
.text:00365B5E
.text:00365B60                 movsx   eax, byte_2AB8E08[edx]
.text:00365B67                 jmp     short loc_365B6C
.text:00365B67
.text:00365B69 ; ---------------------------------------------------------------------------
.text:00365B69
.text:00365B69 loc_365B69:                             ; CODE XREF: sub_360480+56DE↑j
.text:00365B69                 or      eax, 0FFFFFFFFh
.text:00365B69
.text:00365B6C
.text:00365B6C loc_365B6C:                             ; CODE XREF: sub_360480+56E7↑j
.text:00365B6C                 cmp     dword ptr [ebp-0Ch], 0
.text:00365B70                 mov     [ebp-38h], eax
.text:00365B73                 jge     short loc_365BB4
.text:00365B73
.text:00365B75                 test    eax, eax
.text:00365B77                 mov     eax, [ecx+0Ch]
.text:00365B7A                 push    edi
.text:00365B7B                 jns     short loc_365BA1
.text:00365B7B
.text:00365B7D                 push    edx
.text:00365B7E                 push    dword ptr [ebp-10h]
.text:00365B81                 push    dword ptr [ecx+10h]
.text:00365B84                 call    eax
.text:00365B84
.text:00365B86                 add     esp, 10h
.text:00365B89                 mov     [ebp-0Ch], eax
.text:00365B8C                 test    eax, eax
.text:00365B8E                 jnz     loc_365C22
.text:00365B8E
.text:00365B94                 test    edi, edi
.text:00365B96                 jnz     loc_3760A9
.text:00365B96
.text:00365B9C                 jmp     loc_365C22
.text:00365B9C
.text:00365BA1 ; ---------------------------------------------------------------------------
.text:00365BA1
.text:00365BA1 loc_365BA1:                             ; CODE XREF: sub_360480+56FB↑j
.text:00365BA1                 push    0
.text:00365BA3                 push    0
.text:00365BA5                 push    dword ptr [ecx+10h]
.text:00365BA8                 call    eax
.text:00365BA8
.text:00365BAA                 mov     edx, eax
.text:00365BAC                 add     esp, 10h
.text:00365BAF                 mov     [ebp-0Ch], edx
.text:00365BB2                 jmp     short loc_365BC4
.text:00365BB2
.text:00365BB4 ; ---------------------------------------------------------------------------
.text:00365BB4
.text:00365BB4 loc_365BB4:                             ; CODE XREF: sub_360480+56F3↑j
.text:00365BB4                 mov     edx, [ebp-0Ch]
.text:00365BB7                 mov     ecx, [ebp-74h]
.text:00365BBA                 call    sub_13C08C0
.text:00365BBA
.text:00365BBF                 mov     edx, eax
.text:00365BC1                 mov     [ebp-0Ch], eax
.text:00365BC1
.text:00365BC4
.text:00365BC4 loc_365BC4:                             ; CODE XREF: sub_360480+5732↑j
.text:00365BC4                 test    edx, edx
.text:00365BC6                 jnz     short loc_365BD0
.text:00365BC6
.text:00365BC8                 test    edi, edi
.text:00365BCA                 jnz     loc_3760A9
.text:00365BCA
.text:00365BD0
.text:00365BD0 loc_365BD0:                             ; CODE XREF: sub_360480+5746↑j
.text:00365BD0                 mov     ecx, [ebp-30h]
.text:00365BD3                 test    ecx, ecx
.text:00365BD5                 jz      short loc_365BF7
.text:00365BD5
.text:00365BD7                 test    edi, edi
.text:00365BD9                 jz      short loc_365BF7
.text:00365BD9
.text:00365BDB                 mov     eax, [ebp-44h]
.text:00365BDE                 cmp     ecx, edi
.text:00365BE0                 cmovb   eax, [ebp-24h]
.text:00365BE4                 shl     eax, 4
.text:00365BE7                 push    eax
.text:00365BE8                 push    dword ptr [ebp-10h]
.text:00365BEB                 push    edx
.text:00365BEC                 call    sub_1B7EE40
.text:00365BEC
.text:00365BF1                 mov     ecx, [ebp-30h]
.text:00365BF4                 add     esp, 0Ch
.text:00365BF4
.text:00365BF7
.text:00365BF7 loc_365BF7:                             ; CODE XREF: sub_360480+5755↑j
.text:00365BF7                                         ; sub_360480+5759↑j
.text:00365BF7                 mov     edx, [ebp-38h]
.text:00365BFA                 test    edx, edx
.text:00365BFC                 js      short loc_365C0E
.text:00365BFC
.text:00365BFE                 push    dword ptr [ebp-10h]
.text:00365C01                 mov     ecx, [ebp-74h]
.text:00365C04                 call    sub_13C0A60
.text:00365C04
.text:00365C09                 add     esp, 4
.text:00365C0C                 jmp     short loc_365C22
.text:00365C0C
.text:00365C0E ; ---------------------------------------------------------------------------
.text:00365C0E
.text:00365C0E loc_365C0E:                             ; CODE XREF: sub_360480+577C↑j
.text:00365C0E                 mov     eax, [ebp-8]
.text:00365C11                 push    0
.text:00365C13                 push    ecx
.text:00365C14                 push    dword ptr [ebp-10h]
.text:00365C17                 push    dword ptr [eax+10h]
.text:00365C1A                 mov     eax, [eax+0Ch]
.text:00365C1D                 call    eax
.text:00365C1D
.text:00365C1F                 add     esp, 10h
.text:00365C1F
.text:00365C22
.text:00365C22 loc_365C22:                             ; CODE XREF: sub_360480+570E↑j
.text:00365C22                                         ; sub_360480+571C↑j ...
.text:00365C22                 mov     ecx, [ebp-8]
.text:00365C25                 lea     edx, [esi+18h]
.text:00365C28                 add     edx, [ebp-0Ch]
.text:00365C2B                 mov     eax, edi
.text:00365C2D                 sub     eax, [ebp-30h]
.text:00365C30                 sub     edi, [ebp-30h]
.text:00365C33                 add     [ecx+38h], eax
.text:00365C36                 movzx   eax, byte ptr [ebp-1]
.text:00365C3A                 add     [ecx+eax*4+144h], edi
.text:00365C41                 mov     ecx, [ebp-44h]
.text:00365C44                 mov     [esi+18h], edx
.text:00365C47                 sub     edx, esi
.text:00365C49                 mov     edi, [esi+8]
.text:00365C4C                 cmp     edi, ecx
.text:00365C4E                 jge     short loc_365C6E
.text:00365C4E
.text:00365C50                 mov     eax, edi
.text:00365C52                 add     edx, 0FFFFFFF4h
.text:00365C55                 shl     eax, 4
.text:00365C58                 add     eax, edx
.text:00365C5A                 mov     edx, ecx
.text:00365C5C                 sub     edx, edi
.text:00365C5E                 xchg    ax, ax
.text:00365C5E
.text:00365C60
.text:00365C60 loc_365C60:                             ; CODE XREF: sub_360480+57EC↓j
.text:00365C60                 mov     dword ptr [eax], 0
.text:00365C66                 lea     eax, [eax+10h]
.text:00365C69                 sub     edx, 1
.text:00365C6C                 jnz     short loc_365C60
.text:00365C6C
.text:00365C6E
.text:00365C6E loc_365C6E:                             ; CODE XREF: sub_360480+57CE↑j
.text:00365C6E                 mov     edi, [ebp-14h]
.text:00365C71                 lea     edx, [esi+14h]
.text:00365C74                 mov     [esi+8], ecx
.text:00365C74
.text:00365C77
.text:00365C77 loc_365C77:                             ; CODE XREF: sub_360480+567E↑j
.text:00365C77                 test    edi, edi
.text:00365C79                 jnz     short loc_365C8A
.text:00365C79
.text:00365C7B                 lea     eax, dword_1EA0808[edx]
.text:00365C81                 xor     ecx, ecx
.text:00365C83                 mov     [edx], eax
.text:00365C85                 jmp     loc_365D72
.text:00365C85
.text:00365C8A ; ---------------------------------------------------------------------------
.text:00365C8A
.text:00365C8A loc_365C8A:                             ; CODE XREF: sub_360480+57F9↑j
.text:00365C8A                 lea     eax, [edi-1]
.text:00365C8D                 or      ecx, 0FFFFFFFFh
.text:00365C90                 cmp     eax, 100h
.text:00365C95                 jb      short loc_365CAD
.text:00365C95
.text:00365C97                 nop     word ptr [eax+eax+00000000h]
.text:00365C97
.text:00365CA0
.text:00365CA0 loc_365CA0:                             ; CODE XREF: sub_360480+582B↓j
.text:00365CA0                 shr     eax, 8
.text:00365CA3                 add     ecx, 8
.text:00365CA6                 cmp     eax, 100h
.text:00365CAB                 jnb     short loc_365CA0
.text:00365CAB
.text:00365CAD
.text:00365CAD loc_365CAD:                             ; CODE XREF: sub_360480+5815↑j
.text:00365CAD                 movzx   eax, ds:byte_278DF30[eax]
.text:00365CB4                 inc     eax
.text:00365CB5                 add     eax, ecx
.text:00365CB7                 mov     [ebp-30h], eax
.text:00365CBA                 cmp     eax, 1Ah
.text:00365CBD                 jg      loc_376176
.text:00365CBD
.text:00365CC3                 mov     ecx, eax
.text:00365CC5                 mov     edi, 1
.text:00365CCA                 mov     al, [esi+1]
.text:00365CCD                 shl     edi, cl
.text:00365CCF                 mov     [ebp-14h], edi
.text:00365CD2                 mov     [ebp-1], al
.text:00365CD5                 cmp     edi, 7FFFFFFh
.text:00365CDB                 ja      loc_376089
.text:00365CDB
.text:00365CE1                 mov     eax, [ebp-64h]
.text:00365CE4                 shl     edi, 5
.text:00365CE7                 mov     ecx, [eax]
.text:00365CE9                 sub     ecx, eax
.text:00365CEB                 lea     eax, [edi-1]
.text:00365CEE                 mov     [ebp-10h], ecx
.text:00365CF1                 cmp     eax, 200h
.text:00365CF6                 jnb     short loc_365D0D
.text:00365CF6
.text:00365CF8                 movsx   edx, byte_2AB8E08[edi]
.text:00365CFF                 test    edx, edx
.text:00365D01                 js      short loc_365D0D
.text:00365D01
.text:00365D03                 mov     ecx, [ebp-74h]
.text:00365D06                 call    sub_13C08C0
.text:00365D06
.text:00365D0B                 jmp     short loc_365D1D
.text:00365D0B
.text:00365D0D ; ---------------------------------------------------------------------------
.text:00365D0D
.text:00365D0D loc_365D0D:                             ; CODE XREF: sub_360480+5876↑j
.text:00365D0D                                         ; sub_360480+5881↑j
.text:00365D0D                 mov     eax, [ecx+0Ch]
.text:00365D10                 push    edi
.text:00365D11                 push    0
.text:00365D13                 push    0
.text:00365D15                 push    dword ptr [ecx+10h]
.text:00365D18                 call    eax
.text:00365D18
.text:00365D1A                 add     esp, 10h
.text:00365D1A
.text:00365D1D
.text:00365D1D loc_365D1D:                             ; CODE XREF: sub_360480+588B↑j
.text:00365D1D                 mov     edx, eax
.text:00365D1F                 test    edx, edx
.text:00365D21                 jnz     short loc_365D2B
.text:00365D21
.text:00365D23                 test    edi, edi
.text:00365D25                 jnz     loc_3760A9
.text:00365D25
.text:00365D2B
.text:00365D2B loc_365D2B:                             ; CODE XREF: sub_360480+58A1↑j
.text:00365D2B                 mov     ecx, [ebp-10h]
.text:00365D2E                 movzx   eax, byte ptr [ebp-1]
.text:00365D32                 add     [ecx+38h], edi
.text:00365D35                 add     [ecx+eax*4+144h], edi
.text:00365D3C                 lea     ecx, [esi+14h]
.text:00365D3F                 mov     edi, [ebp-14h]
.text:00365D42                 lea     eax, [edx+ecx]
.text:00365D45                 mov     [ecx], eax
.text:00365D47                 test    edi, edi
.text:00365D49                 jle     short loc_365D6F
.text:00365D49
.text:00365D4B                 xor     edx, edx
.text:00365D4D                 nop     dword ptr [eax]
.text:00365D4D
.text:00365D50
.text:00365D50 loc_365D50:                             ; CODE XREF: sub_360480+58EA↓j
.text:00365D50                 mov     eax, [ecx]
.text:00365D52                 lea     edx, [edx+20h]
.text:00365D55                 sub     eax, ecx
.text:00365D57                 mov     dword ptr [eax+edx-4], 0
.text:00365D5F                 mov     dword ptr [eax+edx-14h], 0
.text:00365D67                 sub     edi, 1
.text:00365D6A                 jnz     short loc_365D50
.text:00365D6A
.text:00365D6C                 mov     edi, [ebp-14h]
.text:00365D6C
.text:00365D6F
.text:00365D6F loc_365D6F:                             ; CODE XREF: sub_360480+58C9↑j
.text:00365D6F                 mov     ecx, [ebp-30h]
.text:00365D6F
.text:00365D72
.text:00365D72 loc_365D72:                             ; CODE XREF: sub_360480+5805↑j
.text:00365D72                 mov     al, 1
.text:00365D74                 mov     [esi+5], cl
.text:00365D77                 shl     al, cl
.text:00365D79                 dec     al
.text:00365D7B                 mov     [esi+4], al
.text:00365D7E                 mov     eax, [ebp-44h]
.text:00365D81                 mov     [esi+0Ch], edi
.text:00365D84                 cmp     eax, [ebp-24h]
.text:00365D87                 jge     loc_365F20
.text:00365D87
.text:00365D8D                 lea     edx, [esi+18h]
.text:00365D90                 mov     [esi+8], eax
.text:00365D93                 mov     ecx, eax
.text:00365D95                 mov     [ebp-14h], edx
.text:00365D98                 shl     ecx, 4
.text:00365D9B                 mov     edi, ecx
.text:00365D9D                 mov     [ebp-30h], ecx
.text:00365DA0                 mov     esi, edi
.text:00365DA2                 lea     ecx, [eax+1]
.text:00365DA5                 mov     [ebp-8], esi
.text:00365DA8                 mov     esi, [ebp-24h]
.text:00365DAB                 sub     [ebp-8], edx
.text:00365DAE                 sub     esi, eax
.text:00365DB0                 mov     [ebp-0Ch], esi
.text:00365DB3                 mov     esi, [ebp-58h]
.text:00365DB6                 mov     [ebp-10h], ecx
.text:00365DB9                 nop     dword ptr [eax+00000000h]
.text:00365DB9
.text:00365DC0
.text:00365DC0 loc_365DC0:                             ; CODE XREF: sub_360480+59D3↓j
.text:00365DC0                 mov     eax, [edx]
.text:00365DC2                 mov     [ebp-38h], eax
.text:00365DC5                 mov     eax, edi
.text:00365DC7                 mov     ecx, [ebp-38h]
.text:00365DCA                 sub     eax, edx
.text:00365DCC                 cmp     dword ptr [eax+ecx+0Ch], 0
.text:00365DD1                 mov     ecx, [ebp-10h]
.text:00365DD4                 jz      short loc_365E44
.text:00365DD4
.text:00365DD6                 cmp     byte_2AB2004, 0
.text:00365DDD                 jz      short loc_365E23
.text:00365DDD
.text:00365DDF                 movd    xmm0, ecx
.text:00365DE3                 lea     eax, [ebp-420h]
.text:00365DE9                 mov     ecx, [ebp-74h]
.text:00365DEC                 mov     esi, edi
.text:00365DEE                 cvtdq2pd xmm1, xmm0
.text:00365DF2                 sub     esi, edx
.text:00365DF4                 mov     dword ptr [ebp-414h], 4
.text:00365DFE                 push    eax
.text:00365DFF                 xorps   xmm1, xmmword_2C87C80
.text:00365E06                 movsd   qword ptr [ebp-420h], xmm1
.text:00365E0E                 add     esi, [edx]
.text:00365E10                 mov     edx, [ebp-58h]
.text:00365E13                 call    sub_13B83C0
.text:00365E13
.text:00365E18                 movups  xmm0, xmmword ptr [esi]
.text:00365E1B                 mov     esi, [ebp-58h]
.text:00365E1E                 mov     edx, [ebp-14h]
.text:00365E21                 jmp     short loc_365E3B
.text:00365E21
.text:00365E23 ; ---------------------------------------------------------------------------
.text:00365E23
.text:00365E23 loc_365E23:                             ; CODE XREF: sub_360480+595D↑j
.text:00365E23                 push    ecx
.text:00365E24                 mov     ecx, [ebp-74h]
.text:00365E27                 mov     edx, esi
.text:00365E29                 call    sub_13BBE20
.text:00365E29
.text:00365E2E                 mov     edx, [ebp-38h]
.text:00365E31                 mov     ecx, [ebp-8]
.text:00365E34                 movups  xmm0, xmmword ptr [ecx+edx]
.text:00365E38                 lea     edx, [esi+18h]
.text:00365E38
.text:00365E3B
.text:00365E3B loc_365E3B:                             ; CODE XREF: sub_360480+59A1↑j
.text:00365E3B                 mov     ecx, [ebp-10h]
.text:00365E3E                 add     esp, 4
.text:00365E41                 movups  xmmword ptr [eax], xmm0
.text:00365E41
.text:00365E44
.text:00365E44 loc_365E44:                             ; CODE XREF: sub_360480+5954↑j
.text:00365E44                 add     dword ptr [ebp-8], 10h
.text:00365E48                 inc     ecx
.text:00365E49                 add     edi, 10h
.text:00365E4C                 mov     [ebp-10h], ecx
.text:00365E4F                 sub     dword ptr [ebp-0Ch], 1
.text:00365E53                 jnz     loc_365DC0
.text:00365E53
.text:00365E59                 mov     al, [esi+1]
.text:00365E5C                 mov     edi, [ebp-44h]
.text:00365E5F                 mov     [ebp-1], al
.text:00365E62                 cmp     edi, 0FFFFFFFh
.text:00365E68                 ja      loc_376089
.text:00365E68
.text:00365E6E                 mov     eax, [edx]
.text:00365E70                 mov     ecx, [ebp-30h]
.text:00365E73                 sub     eax, edx
.text:00365E75                 mov     [ebp-14h], eax
.text:00365E78                 mov     eax, [ebp-24h]
.text:00365E7B                 shl     eax, 4
.text:00365E7E                 mov     [ebp-44h], eax
.text:00365E81                 mov     eax, [ebp-64h]
.text:00365E84                 mov     edx, [eax]
.text:00365E86                 sub     edx, eax
.text:00365E88                 lea     eax, [ecx-1]
.text:00365E8B                 mov     [ebp-10h], edx
.text:00365E8E                 cmp     eax, 200h
.text:00365E93                 jnb     short loc_365EA1
.text:00365E93
.text:00365E95                 movsx   eax, byte_2AB8E08[ecx]
.text:00365E9C                 mov     [ebp-8], eax
.text:00365E9F                 jmp     short loc_365EA8
.text:00365E9F
.text:00365EA1 ; ---------------------------------------------------------------------------
.text:00365EA1
.text:00365EA1 loc_365EA1:                             ; CODE XREF: sub_360480+5A13↑j
.text:00365EA1                 mov     dword ptr [ebp-8], 0FFFFFFFFh
.text:00365EA1
.text:00365EA8
.text:00365EA8 loc_365EA8:                             ; CODE XREF: sub_360480+5A1F↑j
.text:00365EA8                 mov     eax, [ebp-44h]
.text:00365EAB                 dec     eax
.text:00365EAC                 cmp     eax, 200h
.text:00365EB1                 jnb     short loc_365EBF
.text:00365EB1
.text:00365EB3                 mov     eax, [ebp-44h]
.text:00365EB6                 movsx   eax, byte_2AB8E08[eax]
.text:00365EBD                 jmp     short loc_365EC2
.text:00365EBD
.text:00365EBF ; ---------------------------------------------------------------------------
.text:00365EBF
.text:00365EBF loc_365EBF:                             ; CODE XREF: sub_360480+5A31↑j
.text:00365EBF                 or      eax, 0FFFFFFFFh
.text:00365EBF
.text:00365EC2
.text:00365EC2 loc_365EC2:                             ; CODE XREF: sub_360480+5A3D↑j
.text:00365EC2                 cmp     dword ptr [ebp-8], 0
.text:00365EC6                 mov     [ebp-0Ch], eax
.text:00365EC9                 jge     loc_365FC2
.text:00365EC9
.text:00365ECF                 test    eax, eax
.text:00365ED1                 mov     eax, [edx+0Ch]
.text:00365ED4                 push    ecx
.text:00365ED5                 jns     loc_365FAF
.text:00365ED5
.text:00365EDB                 push    dword ptr [ebp-44h]
.text:00365EDE                 mov     edi, [ebp-14h]
.text:00365EE1                 push    edi
.text:00365EE2                 push    dword ptr [edx+10h]
.text:00365EE5                 call    eax
.text:00365EE5
.text:00365EE7                 mov     ecx, [ebp-30h]
.text:00365EEA                 add     esp, 10h
.text:00365EED                 mov     [ebp-8], eax
.text:00365EF0                 test    eax, eax
.text:00365EF2                 jnz     short loc_365EFC
.text:00365EF2
.text:00365EF4                 test    ecx, ecx
.text:00365EF6                 jnz     loc_3760A9
.text:00365EF6
.text:00365EFC
.text:00365EFC loc_365EFC:                             ; CODE XREF: sub_360480+5A72↑j
.text:00365EFC                                         ; sub_360480+5BA1↓j
.text:00365EFC                 mov     edi, [ebp-10h]
.text:00365EFC
.text:00365EFF
.text:00365EFF loc_365EFF:                             ; CODE XREF: sub_360480+5BBB↓j
.text:00365EFF                 mov     eax, ecx
.text:00365F01                 sub     ecx, [ebp-44h]
.text:00365F04                 sub     eax, [ebp-44h]
.text:00365F07                 add     [edi+38h], eax
.text:00365F0A                 movzx   eax, byte ptr [ebp-1]
.text:00365F0E                 add     [edi+eax*4+144h], ecx
.text:00365F15                 mov     eax, [ebp-8]
.text:00365F18                 add     eax, 18h
.text:00365F1B                 add     eax, esi
.text:00365F1D                 mov     [esi+18h], eax
.text:00365F1D
.text:00365F20
.text:00365F20 loc_365F20:                             ; CODE XREF: sub_360480+5907↑j
.text:00365F20                 mov     ecx, [ebp-34h]
.text:00365F23                 mov     edx, 1
.text:00365F28                 shl     edx, cl
.text:00365F2A                 cmp     byte_2AB2004, 0
.text:00365F31                 mov     [ebp-14h], edx
.text:00365F34                 lea     edi, [edx-1]
.text:00365F37                 jz      loc_366040
.text:00365F37
.text:00365F3D                 test    edi, edi
.text:00365F3F                 js      loc_3660AC
.text:00365F3F
.text:00365F45                 mov     edx, [ebp-3Ch]
.text:00365F48                 mov     eax, edi
.text:00365F4A                 shl     eax, 5
.text:00365F4D                 add     edx, 10h
.text:00365F50                 add     edx, eax
.text:00365F52                 mov     [ebp-24h], edx
.text:00365F52
.text:00365F55
.text:00365F55 loc_365F55:                             ; CODE XREF: sub_360480+5B28↓j
.text:00365F55                 cmp     dword ptr [edx-4], 0
.text:00365F59                 jz      short loc_365F9F
.text:00365F59
.text:00365F5B                 mov     eax, [edx]
.text:00365F5D                 mov     ecx, [edx+4]
.text:00365F60                 mov     [ebp-430h], eax
.text:00365F66                 mov     [ebp-42Ch], ecx
.text:00365F6C                 mov     eax, [edx+8]
.text:00365F6F                 mov     ecx, [ebp-74h]
.text:00365F72                 mov     [ebp-428h], eax
.text:00365F78                 mov     eax, [edx+0Ch]
.text:00365F7B                 mov     edx, esi
.text:00365F7D                 and     eax, 0Fh
.text:00365F80                 mov     [ebp-424h], eax
.text:00365F86                 lea     eax, [ebp-430h]
.text:00365F8C                 push    eax
.text:00365F8D                 call    sub_13B40E0
.text:00365F8D
.text:00365F92                 mov     edx, [ebp-24h]
.text:00365F95                 add     esp, 4
.text:00365F98                 movups  xmm0, xmmword ptr [edx-10h]
.text:00365F9C                 movups  xmmword ptr [eax], xmm0
.text:00365F9C
.text:00365F9F
.text:00365F9F loc_365F9F:                             ; CODE XREF: sub_360480+5AD9↑j
.text:00365F9F                 sub     edx, 20h ; ' '
.text:00365FA2                 sub     edi, 1
.text:00365FA5                 mov     [ebp-24h], edx
.text:00365FA8                 jns     short loc_365F55
.text:00365FA8
.text:00365FAA                 jmp     loc_3660A9
.text:00365FAA
.text:00365FAF ; ---------------------------------------------------------------------------
.text:00365FAF
.text:00365FAF loc_365FAF:                             ; CODE XREF: sub_360480+5A55↑j
.text:00365FAF                 push    0
.text:00365FB1                 push    0
.text:00365FB3                 push    dword ptr [edx+10h]
.text:00365FB6                 call    eax
.text:00365FB6
.text:00365FB8                 mov     edx, eax
.text:00365FBA                 add     esp, 10h
.text:00365FBD                 mov     [ebp-8], edx
.text:00365FC0                 jmp     short loc_365FD2
.text:00365FC0
.text:00365FC2 ; ---------------------------------------------------------------------------
.text:00365FC2
.text:00365FC2 loc_365FC2:                             ; CODE XREF: sub_360480+5A49↑j
.text:00365FC2                 mov     edx, [ebp-8]
.text:00365FC5                 mov     ecx, [ebp-74h]
.text:00365FC8                 call    sub_13C08C0
.text:00365FC8
.text:00365FCD                 mov     edx, eax
.text:00365FCF                 mov     [ebp-8], eax
.text:00365FCF
.text:00365FD2
.text:00365FD2 loc_365FD2:                             ; CODE XREF: sub_360480+5B40↑j
.text:00365FD2                 mov     eax, [ebp-30h]
.text:00365FD5                 test    edx, edx
.text:00365FD7                 jnz     short loc_365FE1
.text:00365FD7
.text:00365FD9                 test    eax, eax
.text:00365FDB                 jnz     loc_3760A9
.text:00365FDB
.text:00365FE1
.text:00365FE1 loc_365FE1:                             ; CODE XREF: sub_360480+5B57↑j
.text:00365FE1                 mov     ecx, [ebp-44h]
.text:00365FE4                 test    ecx, ecx
.text:00365FE6                 jz      short loc_366008
.text:00365FE6
.text:00365FE8                 test    eax, eax
.text:00365FEA                 jz      short loc_366008
.text:00365FEA
.text:00365FEC                 cmp     ecx, eax
.text:00365FEE                 cmovb   edi, [ebp-24h]
.text:00365FF2                 shl     edi, 4
.text:00365FF5                 push    edi
.text:00365FF6                 mov     edi, [ebp-14h]
.text:00365FF9                 push    edi
.text:00365FFA                 push    edx
.text:00365FFB                 call    sub_1B7EE40
.text:00365FFB
.text:00366000                 mov     ecx, [ebp-44h]
.text:00366003                 add     esp, 0Ch
.text:00366006                 jmp     short loc_36600B
.text:00366006
.text:00366008 ; ---------------------------------------------------------------------------
.text:00366008
.text:00366008 loc_366008:                             ; CODE XREF: sub_360480+5B66↑j
.text:00366008                                         ; sub_360480+5B6A↑j
.text:00366008                 mov     edi, [ebp-14h]
.text:00366008
.text:0036600B
.text:0036600B loc_36600B:                             ; CODE XREF: sub_360480+5B86↑j
.text:0036600B                 mov     edx, [ebp-0Ch]
.text:0036600E                 test    edx, edx
.text:00366010                 js      short loc_366026
.text:00366010
.text:00366012                 mov     ecx, [ebp-74h]
.text:00366015                 push    edi
.text:00366016                 call    sub_13C0A60
.text:00366016
.text:0036601B                 mov     ecx, [ebp-30h]
.text:0036601E                 add     esp, 4
.text:00366021                 jmp     loc_365EFC
.text:00366021
.text:00366026 ; ---------------------------------------------------------------------------
.text:00366026
.text:00366026 loc_366026:                             ; CODE XREF: sub_360480+5B90↑j
.text:00366026                 push    0
.text:00366028                 push    ecx
.text:00366029                 push    edi
.text:0036602A                 mov     edi, [ebp-10h]
.text:0036602D                 push    dword ptr [edi+10h]
.text:00366030                 mov     eax, [edi+0Ch]
.text:00366033                 call    eax
.text:00366033
.text:00366035                 mov     ecx, [ebp-30h]
.text:00366038                 add     esp, 10h
.text:0036603B                 jmp     loc_365EFF
.text:0036603B
.text:00366040 ; ---------------------------------------------------------------------------
.text:00366040
.text:00366040 loc_366040:                             ; CODE XREF: sub_360480+5AB7↑j
.text:00366040                 test    edi, edi
.text:00366042                 js      short loc_3660AC
.text:00366042
.text:00366044                 mov     edx, [ebp-3Ch]
.text:00366047                 mov     eax, edi
.text:00366049                 shl     eax, 5
.text:0036604C                 add     edx, 10h
.text:0036604F                 add     edx, eax
.text:00366051                 mov     [ebp-24h], edx
.text:00366051
.text:00366054
.text:00366054 loc_366054:                             ; CODE XREF: sub_360480+5C27↓j
.text:00366054                 cmp     dword ptr [edx-4], 0
.text:00366058                 jz      short loc_36609E
.text:00366058
.text:0036605A                 mov     eax, [edx]
.text:0036605C                 mov     ecx, [edx+4]
.text:0036605F                 mov     [ebp-440h], eax
.text:00366065                 mov     [ebp-43Ch], ecx
.text:0036606B                 mov     eax, [edx+8]
.text:0036606E                 mov     ecx, [ebp-74h]
.text:00366071                 mov     [ebp-438h], eax
.text:00366077                 mov     eax, [edx+0Ch]
.text:0036607A                 mov     edx, esi
.text:0036607C                 and     eax, 0Fh
.text:0036607F                 mov     [ebp-434h], eax
.text:00366085                 lea     eax, [ebp-440h]
.text:0036608B                 push    eax
.text:0036608C                 call    sub_13BA4F0
.text:0036608C
.text:00366091                 mov     edx, [ebp-24h]
.text:00366094                 add     esp, 4
.text:00366097                 movups  xmm0, xmmword ptr [edx-10h]
.text:0036609B                 movups  xmmword ptr [eax], xmm0
.text:0036609B
.text:0036609E
.text:0036609E loc_36609E:                             ; CODE XREF: sub_360480+5BD8↑j
.text:0036609E                 sub     edx, 20h ; ' '
.text:003660A1                 sub     edi, 1
.text:003660A4                 mov     [ebp-24h], edx
.text:003660A7                 jns     short loc_366054
.text:003660A7
.text:003660A9
.text:003660A9 loc_3660A9:                             ; CODE XREF: sub_360480+5B2A↑j
.text:003660A9                 mov     edx, [ebp-14h]
.text:003660A9
.text:003660AC
.text:003660AC loc_3660AC:                             ; CODE XREF: sub_360480+5ABF↑j
.text:003660AC                                         ; sub_360480+5BC2↑j
.text:003660AC                 mov     ecx, [ebp-3Ch]
.text:003660AF                 mov     edi, [ebp-74h]
.text:003660B2                 cmp     ecx, offset dword_1EA0808
.text:003660B8                 jz      short loc_3660CF
.text:003660B8
.text:003660BA                 movzx   eax, byte ptr [esi+1]
.text:003660BE                 shl     edx, 5
.text:003660C1                 push    eax
.text:003660C2                 push    edx
.text:003660C3                 mov     edx, ecx
.text:003660C5                 mov     ecx, edi
.text:003660C7                 call    sub_13C0AF0
.text:003660C7
.text:003660CC                 add     esp, 8
.text:003660CC
.text:003660CF
.text:003660CF loc_3660CF:                             ; CODE XREF: sub_360480+5C38↑j
.text:003660CF                 cmp     byte_2AB2004, 0
.text:003660D6                 mov     edx, esi
.text:003660D8                 push    dword ptr [ebp-54h]
.text:003660DB                 mov     ecx, edi
.text:003660DD                 jnz     loc_365724
.text:003660DD
.text:003660E3                 call    sub_13BA4F0
.text:003660E3
.text:003660E8                 mov     edi, eax
.text:003660EA                 jmp     loc_366354
.text:003660EA
.text:003660EF ; ---------------------------------------------------------------------------
.text:003660EF
.text:003660EF loc_3660EF:                             ; CODE XREF: sub_360480+5422↑j
.text:003660EF                 mov     eax, [edi+14h]
.text:003660F2                 mov     ecx, [edi+10h]
.text:003660F5                 mov     edx, ecx
.text:003660F7                 mov     [ebp-44h], eax
.text:003660FA                 mov     [ebp-44Ch], eax
.text:00366100                 mov     eax, [edi+18h]
.text:00366103                 mov     [ebp-34h], eax
.text:00366106                 mov     [ebp-448h], eax
.text:0036610C                 mov     eax, [edi+1Ch]
.text:0036610F                 and     eax, 0Fh
.text:00366112                 mov     [ebp-24h], ecx
.text:00366115                 dec     eax             ; switch 5 cases
.text:00366116                 mov     [ebp-450h], ecx
.text:0036611C                 cmp     eax, 4
.text:0036611F                 ja      def_366125      ; jumptable 00366125 default case
.text:0036611F
.text:00366125                 jmp     ds:jpt_366125[eax*4] ; switch jump
.text:00366125
.text:0036612C ; ---------------------------------------------------------------------------
.text:0036612C
.text:0036612C loc_36612C:                             ; CODE XREF: sub_360480+5CA5↑j
.text:0036612C                                         ; DATA XREF: .text:jpt_366125↓o
.text:0036612C                 movsd   xmm1, qword ptr [ebp-450h] ; jumptable 00366125 case 4
.text:00366134                 xorps   xmm1, xmmword_2C87C80
.text:0036613B                 movsd   qword ptr [ebp-28h], xmm1
.text:00366140                 mov     ecx, [ebp-24h]
.text:00366143                 and     ecx, 7FFFFFFFh
.text:00366149                 mov     eax, ecx
.text:0036614B                 shr     eax, 12h
.text:0036614E                 xor     eax, [ebp-28h]
.text:00366151                 imul    edx, eax, 5BD1E995h
.text:00366157                 mov     eax, edx
.text:00366159                 shr     eax, 16h
.text:0036615C                 xor     eax, ecx
.text:0036615E                 imul    ecx, eax, 5BD1E995h
.text:00366164                 mov     eax, ecx
.text:00366166                 shr     eax, 11h
.text:00366169                 xor     eax, edx
.text:0036616B                 imul    eax, 5BD1E995h
.text:00366171                 shr     eax, 13h
.text:00366174                 xor     eax, ecx
.text:00366176                 imul    edx, eax, 5BD1E995h
.text:0036617C                 jmp     loc_366239
.text:0036617C
.text:00366181 ; ---------------------------------------------------------------------------
.text:00366181
.text:00366181 loc_366181:                             ; CODE XREF: sub_360480+5CA5↑j
.text:00366181                                         ; DATA XREF: .text:jpt_366125↓o
.text:00366181                 mov     eax, [ebp-44h]  ; jumptable 00366125 case 3
.text:00366184                 mov     edx, eax
.text:00366186                 mov     dword ptr [ebp-44h], 0
.text:0036618D                 mov     dword ptr [ebp-44h], 0
.text:00366194                 cmp     ecx, 8000000h
.text:0036619A                 jnz     short loc_3661A3
.text:0036619A
.text:0036619C                 mov     dword ptr [ebp-24h], 0
.text:0036619C
.text:003661A3
.text:003661A3 loc_3661A3:                             ; CODE XREF: sub_360480+5D1A↑j
.text:003661A3                 xor     ecx, ecx
.text:003661A5                 cmp     edx, 8000000h
.text:003661AB                 cmovnz  ecx, eax
.text:003661AE                 mov     eax, [ebp-34h]
.text:003661B1                 xor     edx, edx
.text:003661B3                 cmp     eax, 8000000h
.text:003661B8                 cmovz   eax, edx
.text:003661BB                 mov     [ebp-34h], eax
.text:003661BE                 mov     eax, ecx
.text:003661C0                 shr     eax, 11h
.text:003661C3                 xor     eax, ecx
.text:003661C5                 imul    edx, eax, 127409Fh
.text:003661CB                 mov     eax, [ebp-34h]
.text:003661CE                 shr     eax, 11h
.text:003661D1                 xor     eax, [ebp-34h]
.text:003661D4                 imul    eax, 4F9FFB7h
.text:003661DA                 xor     edx, eax
.text:003661DC                 mov     eax, [ebp-24h]
.text:003661DF                 shr     eax, 11h
.text:003661E2                 xor     eax, [ebp-24h]
.text:003661E5                 imul    eax, 466F45Dh
.text:003661EB                 jmp     short loc_366237
.text:003661EB
.text:003661ED ; ---------------------------------------------------------------------------
.text:003661ED
.text:003661ED loc_3661ED:                             ; CODE XREF: sub_360480+5CA5↑j
.text:003661ED                                         ; DATA XREF: .text:jpt_366125↓o
.text:003661ED                 lea     eax, [ecx+0Ch]  ; jumptable 00366125 case 5
.text:003661F0                 mov     edx, 1
.text:003661F5                 mov     cl, [esi+5]
.text:003661F8                 shl     edx, cl
.text:003661FA                 dec     edx
.text:003661FB                 sub     eax, [eax]
.text:003661FD                 jmp     short loc_366244
.text:003661FD
.text:003661FF ; ---------------------------------------------------------------------------
.text:003661FF
.text:003661FF loc_3661FF:                             ; CODE XREF: sub_360480+5CA5↑j
.text:003661FF                                         ; DATA XREF: .text:jpt_366125↓o
.text:003661FF                 mov     cl, [esi+5]     ; jumptable 00366125 case 1
.text:00366202                 mov     edx, 1
.text:00366207                 shl     edx, cl
.text:00366209                 dec     edx
.text:0036620A                 and     edx, [ebp-24h]
.text:0036620D                 jmp     short loc_366246
.text:0036620D
.text:0036620F ; ---------------------------------------------------------------------------
.text:0036620F
.text:0036620F loc_36620F:                             ; CODE XREF: sub_360480+5CA5↑j
.text:0036620F                                         ; DATA XREF: .text:jpt_366125↓o
.text:0036620F                 mov     eax, ecx        ; jumptable 00366125 case 2
.text:00366211                 shr     eax, 10h
.text:00366214                 xor     eax, ecx
.text:00366216                 jmp     short loc_36621F
.text:00366216
.text:00366218 ; ---------------------------------------------------------------------------
.text:00366218
.text:00366218 def_366125:                             ; CODE XREF: sub_360480+5C9F↑j
.text:00366218                 mov     eax, edx        ; jumptable 00366125 default case
.text:0036621A                 shr     eax, 10h
.text:0036621D                 xor     eax, edx
.text:0036621D
.text:0036621F
.text:0036621F loc_36621F:                             ; CODE XREF: sub_360480+5D96↑j
.text:0036621F                 imul    ecx, eax, 85EBCA6Bh
.text:00366225                 mov     eax, ecx
.text:00366227                 shr     eax, 0Dh
.text:0036622A                 xor     eax, ecx
.text:0036622C                 imul    eax, 0C2B2AE35h
.text:00366232                 mov     edx, eax
.text:00366234                 shr     edx, 10h
.text:00366234
.text:00366237
.text:00366237 loc_366237:                             ; CODE XREF: sub_360480+5D6B↑j
.text:00366237                 xor     edx, eax
.text:00366237
.text:00366239
.text:00366239 loc_366239:                             ; CODE XREF: sub_360480+5CFC↑j
.text:00366239                 mov     cl, [esi+5]
.text:0036623C                 mov     eax, 1
.text:00366241                 shl     eax, cl
.text:00366243                 dec     eax
.text:00366243
.text:00366244
.text:00366244 loc_366244:                             ; CODE XREF: sub_360480+5D7D↑j
.text:00366244                 and     edx, eax
.text:00366244
.text:00366246
.text:00366246 loc_366246:                             ; CODE XREF: sub_360480+5D8D↑j
.text:00366246                 shl     edx, 5
.text:00366249                 lea     eax, [esi+14h]
.text:0036624C                 sub     edx, eax
.text:0036624E                 add     edx, [eax]
.text:00366250                 cmp     edx, edi
.text:00366252                 jz      short loc_3662C9
.text:00366252
.text:00366254                 mov     eax, [edx+1Ch]
.text:00366257                 sar     eax, 4
.text:0036625A                 shl     eax, 5
.text:0036625D                 add     eax, edx
.text:0036625F                 cmp     eax, edi
.text:00366261                 jz      short loc_366274
.text:00366261
.text:00366263
.text:00366263 loc_366263:                             ; CODE XREF: sub_360480+5DF2↓j
.text:00366263                 mov     edx, eax
.text:00366265                 mov     eax, [edx+1Ch]
.text:00366268                 sar     eax, 4
.text:0036626B                 shl     eax, 5
.text:0036626E                 add     eax, edx
.text:00366270                 cmp     eax, edi
.text:00366272                 jnz     short loc_366263
.text:00366272
.text:00366274
.text:00366274 loc_366274:                             ; CODE XREF: sub_360480+5DE1↑j
.text:00366274                 mov     eax, [ebp-14h]
.text:00366277                 mov     ecx, eax
.text:00366279                 sub     ecx, edx
.text:0036627B                 sub     eax, edx
.text:0036627D                 sar     ecx, 1
.text:0036627F                 xor     ecx, [edx+1Ch]
.text:00366282                 and     ecx, 0Fh
.text:00366285                 sar     eax, 1
.text:00366287                 xor     ecx, eax
.text:00366289                 mov     [edx+1Ch], ecx
.text:0036628C                 movups  xmm0, xmmword ptr [edi]
.text:0036628F                 mov     edx, [ebp-14h]
.text:00366292                 movups  xmmword ptr [edx], xmm0
.text:00366295                 movups  xmm0, xmmword ptr [edi+10h]
.text:00366299                 movups  xmmword ptr [edx+10h], xmm0
.text:0036629D                 test    dword ptr [edi+1Ch], 0FFFFFFF0h
.text:003662A4                 jz      short loc_3662C0
.text:003662A4
.text:003662A6                 mov     eax, edi
.text:003662A8                 xor     ecx, ecx
.text:003662AA                 sub     eax, edx
.text:003662AC                 and     ecx, 0Fh
.text:003662AF                 sar     eax, 1
.text:003662B1                 and     eax, 0FFFFFFF0h
.text:003662B4                 add     eax, [edx+1Ch]
.text:003662B7                 xor     eax, ecx
.text:003662B9                 mov     [edx+1Ch], eax
.text:003662BC                 and     dword ptr [edi+1Ch], 0Fh
.text:003662BC
.text:003662C0
.text:003662C0 loc_3662C0:                             ; CODE XREF: sub_360480+5E24↑j
.text:003662C0                 mov     dword ptr [edi+0Ch], 0
.text:003662C7                 jmp     short loc_366312
.text:003662C7
.text:003662C9 ; ---------------------------------------------------------------------------
.text:003662C9
.text:003662C9 loc_3662C9:                             ; CODE XREF: sub_360480+5DD2↑j
.text:003662C9                 mov     eax, [edi+1Ch]
.text:003662CC                 mov     ecx, eax
.text:003662CE                 mov     edx, [ebp-14h]
.text:003662D1                 sar     ecx, 4
.text:003662D4                 test    ecx, ecx
.text:003662D6                 jz      short loc_3662FA
.text:003662D6
.text:003662D8                 mov     eax, ecx
.text:003662DA                 shl     ecx, 5
.text:003662DD                 shl     eax, 5
.text:003662E0                 sub     ecx, edx
.text:003662E2                 sub     eax, edx
.text:003662E4                 add     ecx, edi
.text:003662E6                 add     eax, edi
.text:003662E8                 sar     ecx, 1
.text:003662EA                 sar     eax, 1
.text:003662EC                 xor     eax, [edx+1Ch]
.text:003662EF                 and     eax, 0Fh
.text:003662F2                 xor     eax, ecx
.text:003662F4                 mov     [edx+1Ch], eax
.text:003662F7                 mov     eax, [edi+1Ch]
.text:003662F7
.text:003662FA
.text:003662FA loc_3662FA:                             ; CODE XREF: sub_360480+5E56↑j
.text:003662FA                 mov     ecx, edx
.text:003662FC                 sub     ecx, edi
.text:003662FE                 sar     ecx, 1
.text:00366300                 xor     ecx, eax
.text:00366302                 mov     eax, edx
.text:00366304                 sub     eax, edi
.text:00366306                 and     ecx, 0Fh
.text:00366309                 sar     eax, 1
.text:0036630B                 xor     ecx, eax
.text:0036630D                 mov     [edi+1Ch], ecx
.text:00366310                 mov     edi, edx
.text:00366310
.text:00366312
.text:00366312 loc_366312:                             ; CODE XREF: sub_360480+5410↑j
.text:00366312                                         ; sub_360480+5E47↑j
.text:00366312                 mov     edx, [ebp-54h]
.text:00366315                 mov     eax, [edx]
.text:00366317                 mov     ecx, [edx+4]
.text:0036631A                 mov     [edi+10h], eax
.text:0036631D                 mov     [edi+14h], ecx
.text:00366320                 mov     ecx, [ebp-1Ch]
.text:00366323                 mov     eax, [ecx-18h]
.text:00366326                 mov     [edi+18h], eax
.text:00366329                 mov     eax, [edi+1Ch]
.text:0036632C                 xor     eax, [ecx-14h]
.text:0036632F                 and     eax, 0Fh
.text:00366332                 xor     [edi+1Ch], eax
.text:00366335                 cmp     dword ptr [ecx-14h], 5
.text:00366339                 jl      short loc_366357
.text:00366339
.text:0036633B                 test    byte ptr [esi+2], 4
.text:0036633F                 jz      short loc_366357
.text:0036633F
.text:00366341                 mov     eax, [edx]
.text:00366343                 test    byte ptr [eax+2], 3
.text:00366347                 jz      short loc_366357
.text:00366347
.text:00366349                 mov     ecx, [ebp-74h]
.text:0036634C                 mov     edx, esi
.text:0036634E                 push    eax
.text:0036634F                 call    sub_1376B10
.text:0036634F
.text:00366354
.text:00366354 loc_366354:                             ; CODE XREF: sub_360480+52AB↑j
.text:00366354                                         ; sub_360480+5C6A↑j
.text:00366354                 add     esp, 4
.text:00366354
.text:00366357
.text:00366357 loc_366357:                             ; CODE XREF: sub_360480+46C4↑j
.text:00366357                                         ; sub_360480+5EB9↑j ...
.text:00366357                 mov     ecx, [ebp-74h]
.text:0036635A                 lea     eax, [esi+14h]
.text:0036635D                 sub     eax, [eax]
.text:0036635F                 add     eax, edi
.text:00366361                 sar     eax, 5
.text:00366364                 mov     [ecx+34h], eax
.text:00366367                 cmp     dword ptr [edi+0Ch], 0
.text:0036636B                 jnz     loc_3664E6
.text:0036636B
.text:00366371                 mov     edx, [esi+10h]
.text:00366374                 lea     ecx, [esi+10h]
.text:00366377                 mov     eax, edx
.text:00366379                 sub     eax, ecx
.text:0036637B                 jz      loc_3664E6
.text:0036637B
.text:00366381                 sub     edx, esi
.text:00366383                 mov     [ebp-14h], edx
.text:00366386                 mov     al, [edx-0Ah]
.text:00366389                 mov     [ebp-1], al
.text:0036638C                 test    al, 4
.text:0036638E                 jnz     loc_3664E6
.text:0036638E
.text:00366394                 mov     ecx, [ebp-64h]
.text:00366397                 mov     esi, 1
.text:0036639C                 add     edx, 4
.text:0036639F                 mov     eax, [ecx]
.text:003663A1                 sub     eax, ecx
.text:003663A3                 mov     ecx, [eax+574h]
.text:003663A9                 add     eax, 574h
.text:003663AE                 sub     ecx, eax
.text:003663B0                 mov     [ebp-24h], ecx
.text:003663B3                 lea     eax, [ecx+0Ch]
.text:003663B6                 mov     ecx, [ebp-14h]
.text:003663B9                 sub     eax, [eax]
.text:003663BB                 mov     cl, [ecx-0Bh]
.text:003663BE                 shl     esi, cl
.text:003663C0                 dec     esi
.text:003663C1                 and     esi, eax
.text:003663C3                 shl     esi, 5
.text:003663C6                 sub     esi, edx
.text:003663C8                 add     esi, [edx]
.text:003663CA                 mov     edx, [ebp-24h]
.text:003663CD                 nop     dword ptr [eax]
.text:003663CD
.text:003663D0
.text:003663D0 loc_3663D0:                             ; CODE XREF: sub_360480+5F6D↓j
.text:003663D0                 mov     ecx, [esi+1Ch]
.text:003663D3                 mov     eax, ecx
.text:003663D5                 and     eax, 0Fh
.text:003663D8                 cmp     al, 5
.text:003663DA                 jnz     short loc_3663E1
.text:003663DA
.text:003663DC                 cmp     [esi+10h], edx
.text:003663DF                 jz      short loc_3663F4
.text:003663DF
.text:003663E1
.text:003663E1 loc_3663E1:                             ; CODE XREF: sub_360480+5F5A↑j
.text:003663E1                 sar     ecx, 4
.text:003663E4                 test    ecx, ecx
.text:003663E6                 jz      short loc_3663EF
.text:003663E6
.text:003663E8                 shl     ecx, 5
.text:003663EB                 add     esi, ecx
.text:003663ED                 jmp     short loc_3663D0
.text:003663ED
.text:003663EF ; ---------------------------------------------------------------------------
.text:003663EF
.text:003663EF loc_3663EF:                             ; CODE XREF: sub_360480+5F66↑j
.text:003663EF                 mov     esi, offset luao_nilobject
.text:003663EF
.text:003663F4
.text:003663F4 loc_3663F4:                             ; CODE XREF: sub_360480+5F5F↑j
.text:003663F4                 cmp     dword ptr [esi+0Ch], 0
.text:003663F8                 jz      loc_3664D7
.text:003663F8
.text:003663FE                 test    esi, esi
.text:00366400                 jz      loc_3664E3
.text:00366400
.text:00366406                 jmp     loc_3664A3
.text:00366406
.text:0036640B ; ---------------------------------------------------------------------------
.text:0036640B
.text:0036640B loc_36640B:                             ; CODE XREF: sub_360480+4636↑j
.text:0036640B                 mov     esi, [ebp-64h]
.text:0036640E                 mov     eax, ecx
.text:00366410                 sub     eax, 6
.text:00366413                 jz      short loc_366431
.text:00366413
.text:00366415                 sub     eax, 1
.text:00366418                 jz      short loc_36642A
.text:00366418
.text:0036641A                 mov     eax, [esi]
.text:0036641C                 lea     ecx, ds:544h[ecx*4]
.text:00366423                 sub     ecx, esi
.text:00366425                 mov     ecx, [ecx+eax]
.text:00366428                 jmp     short loc_36643A
.text:00366428
.text:0036642A ; ---------------------------------------------------------------------------
.text:0036642A
.text:0036642A loc_36642A:                             ; CODE XREF: sub_360480+5F98↑j
.text:0036642A                 mov     eax, [edx]
.text:0036642C                 add     eax, 8
.text:0036642F                 jmp     short loc_366436
.text:0036642F
.text:00366431 ; ---------------------------------------------------------------------------
.text:00366431
.text:00366431 loc_366431:                             ; CODE XREF: sub_360480+5F93↑j
.text:00366431                 mov     eax, [edx]
.text:00366433                 add     eax, 10h
.text:00366433
.text:00366436
.text:00366436 loc_366436:                             ; CODE XREF: sub_360480+5FAF↑j
.text:00366436                 mov     ecx, [eax]
.text:00366438                 sub     ecx, eax
.text:00366438
.text:0036643A
.text:0036643A loc_36643A:                             ; CODE XREF: sub_360480+5FA8↑j
.text:0036643A                 test    ecx, ecx
.text:0036643C                 jz      short loc_366494
.text:0036643C
.text:0036643E                 mov     eax, [esi]
.text:00366440                 lea     edx, [ecx+14h]
.text:00366443                 mov     cl, [ecx+5]
.text:00366446                 sub     eax, esi
.text:00366448                 add     eax, 574h
.text:0036644D                 mov     esi, 1
.text:00366452                 shl     esi, cl
.text:00366454                 dec     esi
.text:00366455                 mov     edi, [eax]
.text:00366457                 sub     edi, eax
.text:00366459                 lea     eax, [edi+0Ch]
.text:0036645C                 sub     eax, [eax]
.text:0036645E                 and     esi, eax
.text:00366460                 shl     esi, 5
.text:00366463                 sub     esi, edx
.text:00366465                 add     esi, [edx]
.text:00366465
.text:00366467
.text:00366467 loc_366467:                             ; CODE XREF: sub_360480+6004↓j
.text:00366467                 mov     ecx, [esi+1Ch]
.text:0036646A                 mov     eax, ecx
.text:0036646C                 and     eax, 0Fh
.text:0036646F                 cmp     al, 5
```
