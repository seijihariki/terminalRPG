
############################################################
##     UNCOMMENT ANY TARGET TO OVERWRITE THE DEFAULT!     ##
############################################################

# Project info
# ===============
PROJECT         := TerminalRPG
VERSION         := 0.0.1
# STD_NAMESPACE   := # Project namespace for C/C++
GIT_REMOTE_PATH := https://github.com/seijihariki/terminalRPG.git
# MAINTAINER_NAME := # Your name
# MAINTAINER_MAIL := # your_name@mail.com
# COPYRIGHT       := # Copyright Holder
# SYNOPSIS        := # One-line description of the program
# DESCRIPTION     := # Longer description of the program

# Libraries
# ===========
# ARLIB           := # Static libraries (file/dir in srcdir)
# SHRLIB          := # Shared libraries (file/dir in srcdir)

# Dependencies
# ==============
# GIT_DEPENDENCY  := # List of git dependencies in the form: 
#                    # DEP_NAME => dep_path build_cmd        
# WEB_DEPENDENCY  := # Same as above, but for URL downloads  
#                    # with 'curl -o' (default) or 'wget -O' 

# Paths
# =======
# ASLIBS          := # Assembly paths
# CLIBS           := # C paths
# CXXLIBS         := # C++ paths
# LDLIBS          := # Linker paths

# Flags
# =======
# CPPFLAGS        := # Precompiler Flags
# ASFLAGS         := # Assembly Flags
# CFLAGS          := # C Flags
CXXFLAGS        := -std=c++14 -Wall -Wextra -Wpedantic -O2
# LDFLAGS         := # Linker flags

# Makeball list
# ===============
# 'include conf/makeball.mk' for pre-configured options
# to use the library 'makeball'
include conf/googletest.mk
