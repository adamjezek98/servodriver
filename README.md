Ukázka používání I2C servoshieldu

Servoshield nastavuje servům hodnotu od 0 do 4096 - NEFUNGUJE PRO VŠECHNY SERVA - naše ve škole sou od 150 do 545

servodriver.h obsahuje ukázkový skript a funkci setservo(), bere jako parametr index serva (0-15) a pozici ve stupňích (0-180)
