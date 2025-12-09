# gm_template

Template for a native Garry’s Mod module.
Currently used to verify and validate the development environment.

## Compiling

On Windows, this project is intended to be built with **Visual Studio 2017** in **Release** mode.
Because of the unified runtime, it may also work with **Visual Studio 2015**, **Visual Studio 2019** or **Visual Studio 2022**.

On Linux, everything should work as-is in **Release** mode.

These restrictions are not random; they exist because of ABI compatibility reasons.

If things start failing to compile or behave incorrectly at runtime, make sure the files use the correct line endings (`\n`, etc.) for the target OS.

## Requirements

This project requires [garrysmod_common][1], a framework that facilitates the creation of build files.
Set the environment variable `GARRYSMOD_COMMON` or use the Premake option `--gmcommon=path` to point to your local copy of [garrysmod_common][1].

  [1]: https://github.com/oxqdu/garrysmod_common
