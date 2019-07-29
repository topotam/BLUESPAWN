#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <logging\Output.h>

static std::vector<std::string> banners = {
	R"(

    _/_/_/    _/        _/    _/  _/_/_/_/    _/_/_/  _/_/_/      _/_/    _/          _/  _/      _/   
   _/    _/  _/        _/    _/  _/        _/        _/    _/  _/    _/  _/          _/  _/_/    _/    
  _/_/_/    _/        _/    _/  _/_/_/      _/_/    _/_/_/    _/_/_/_/  _/    _/    _/  _/  _/  _/     
 _/    _/  _/        _/    _/  _/              _/  _/        _/    _/    _/  _/  _/    _/    _/_/      
_/_/_/    _/_/_/_/    _/_/    _/_/_/_/  _/_/_/    _/        _/    _/      _/  _/      _/      _/       


)",
		R"(

 ____  ____  ____  ____  ____  ____  ____  ____  ____ 
||B ||||L ||||U ||||E ||||S ||||P ||||A ||||W ||||N ||
||__||||__||||__||||__||||__||||__||||__||||__||||__||
|/__\||/__\||/__\||/__\||/__\||/__\||/__\||/__\||/__\|



)",
		R"(

________ ______ _____  ____________________________ _______ ___       _______   __
___  __ )___  / __  / / /___  ____/__  ___/___  __ \___    |__ |     / /___  | / /
__  __  |__  /  _  / / / __  __/   _____ \ __  /_/ /__  /| |__ | /| / / __   |/ / 
_  /_/ / _  /___/ /_/ /  _  /___   ____/ / _  ____/ _  ___ |__ |/ |/ /  _  /|  /  
/_____/  /_____/\____/   /_____/   /____/  /_/      /_/  |_|____/|__/   /_/ |_/   


)",
		R"(
 /$$$$$$$  /$$       /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$      /$$ /$$   /$$
| $$__  $$| $$      | $$  | $$| $$_____/ /$$__  $$| $$__  $$ /$$__  $$| $$  /$ | $$| $$$ | $$
| $$  \ $$| $$      | $$  | $$| $$      | $$  \__/| $$  \ $$| $$  \ $$| $$ /$$$| $$| $$$$| $$
| $$$$$$$ | $$      | $$  | $$| $$$$$   |  $$$$$$ | $$$$$$$/| $$$$$$$$| $$/$$ $$ $$| $$ $$ $$
| $$__  $$| $$      | $$  | $$| $$__/    \____  $$| $$____/ | $$__  $$| $$$$_  $$$$| $$  $$$$
| $$  \ $$| $$      | $$  | $$| $$       /$$  \ $$| $$      | $$  | $$| $$$/ \  $$$| $$\  $$$
| $$$$$$$/| $$$$$$$$|  $$$$$$/| $$$$$$$$|  $$$$$$/| $$      | $$  | $$| $$/   \  $$| $$ \  $$
|_______/ |________/ \______/ |________/ \______/ |__/      |__/  |__/|__/     \__/|__/  \__/
)",

		R"(

FFFFFFD FFD     FFD   FFDFFFFFFFDFFFFFFFDFFFFFFD  FFFFFD FFD    FFDFFFD   FFD
FFAEEFFDFFG     FFG   FFGFFAEEEECFFAEEEECFFAEEFFDFFAEEFFDFFG    FFGFFFFD  FFG
FFFFFFACFFG     FFG   FFGFFFFFD  FFFFFFFDFFFFFFACFFFFFFFGFFG FD FFGFFAFFD FFG
FFAEEFFDFFG     FFG   FFGFFAEEC  BEEEEFFGFFAEEEC FFAEEFFGFFGFFFDFFGFFGBFFDFFG
FFFFFFACFFFFFFFDBFFFFFFACFFFFFFFDFFFFFFFGFFG     FFG  FFGBFFFAFFFACFFG BFFFFG
BEEEEEC BEEEEEEC BEEEEEC BEEEEEECBEEEEEECBEC     BEC  BEC BEECBEEC BEC  BEEEC

)" };

void print_banner();