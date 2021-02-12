#include "../gcode.h"
#include "../../MarlinCore.h"
#include "../../inc/MarlinConfig.h"

/*
M2000 - zmienia maksymalna wartosc PWM/pradu
    S<int> - wybierz wartosc od 0 do 255
M2001 - ustawia tryb ograniczen PWM/pradu w zaleznosci od zadanej temperatury
*/
