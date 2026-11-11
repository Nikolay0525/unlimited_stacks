# Unlimited Item Stacks (Kyubu port)

> This is a **port to Kyubu** of the original mod [`coremaze/Cube-World-Unlimited-Item-Stacks-Mod`](https://github.com/coremaze/Cube-World-Unlimited-Item-Stacks-Mod).
> Original author: **coremaze**. This port is not an official release by the author.

**What it does:** Removes the limit on the size of item stacks.

**Original:** <https://github.com/coremaze/Cube-World-Unlimited-Item-Stacks-Mod>

**Release of the original this was ported from:** <https://github.com/coremaze/Cube-World-Unlimited-Item-Stacks-Mod/releases/tag/v1.0>

**Side:** client (`sides` in `mod.toml`).

## Installation

Requirements: **Cube World Alpha** (the 2013-07-20 `Cube.exe`, SHA-256 `84a7a132...30bf`, unpatched) and **Kyubu** (the mod loader, <https://github.com/kyubumods/kyubu>; this mod needs `kyubu = "^1.1"`, see `mod.toml`).

1. Install Kyubu with its own installer (`install\install.cmd`). The loader is not part of this mod.
2. Put **`unlimited_stacks.zip`** (do not unpack it) into the **`Mods\`** folder next to `Cube.exe`. If `unlimited_stacks.zip` is already there, replace it.
3. Start the game. `kyubu\logs\latest.log` should have a line saying `unlimited_stacks` loaded.
4. To turn the mod off or remove it, take `unlimited_stacks.zip` out of `Mods\` (or switch it off in the mod manager: **Mods** on the title screen).

The old Cube World Mod Launcher is **not needed** for this port and is not compatible with it: do not put the original mod's DLL next to it.


Mod id: `unlimited_stacks`. Source: `Mods\unlimited_stacks\src\main.cpp`.
