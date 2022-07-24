==> berkeley-db@4
berkeley-db@4 is keg-only, which means it was not symlinked into /opt/homebrew,
because this is an alternate version of another formula.

If you need to have berkeley-db@4 first in your PATH, run:
  echo 'export PATH="/opt/homebrew/opt/berkeley-db@4/bin:$PATH"' >> ~/.zshrc

For compilers to find berkeley-db@4 you may need to set:
  export LDFLAGS="-L/opt/homebrew/opt/berkeley-db@4/lib"
  export CPPFLAGS="-I/opt/homebrew/opt/berkeley-db@4/include"

==> python@3.10
Python has been installed as
  /opt/homebrew/opt/python@3.10/bin/python3

Unversioned symlinks `python`, `python-config`, `pip` etc. pointing to
`python3`, `python3-config`, `pip3` etc., respectively, have been installed into
  /opt/homebrew/opt/python@3.10/libexec/bin

You can install Python packages with
  /opt/homebrew/opt/python@3.10/bin/pip3 install <package>
They will install into the site-package directory
  /opt/homebrew/lib/python3.10/site-packages

tkinter is no longer included with this formula, but it is available separately:
  brew install python-tk@3.10

See: https://docs.brew.sh/Homebrew-and-Python

python@3.10 is keg-only, which means it was not symlinked into /opt/homebrew,
because this is an alternate version of another formula.

If you need to have python@3.10 first in your PATH, run:
  echo 'export PATH="/opt/homebrew/opt/python@3.10/bin:$PATH"' >> ~/.zshrc

For compilers to find python@3.10 you may need to set:
  export LDFLAGS="-L/opt/homebrew/opt/python@3.10/lib"

For pkg-config to find python@3.10 you may need to set:
  export PKG_CONFIG_PATH="/opt/homebrew/opt/python@3.10/lib/pkgconfig"

==> llvm
To use the bundled libc++ please add the following LDFLAGS:
  LDFLAGS="-L/opt/homebrew/opt/llvm/lib -Wl,-rpath,/opt/homebrew/opt/llvm/lib"

llvm is keg-only, which means it was not symlinked into /opt/homebrew,
because macOS already provides this software and installing another version in
parallel can cause all kinds of trouble.

If you need to have llvm first in your PATH, run:
  echo 'export PATH="/opt/homebrew/opt/llvm/bin:$PATH"' >> ~/.zshrc

For compilers to find llvm you may need to set:
  export LDFLAGS="-L/opt/homebrew/opt/llvm/lib"
  export CPPFLAGS="-I/opt/homebrew/opt/llvm/include"
