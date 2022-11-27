# Readme MicroController

## Microphone

L'utilisation du microphone est basée sur les deux microphones digitaux MEMS intégrées dans la carte STM32. Ces microphones retournent un signal modulé en PDM ([pulse density modulation](https://en.wikipedia.org/wiki/Pulse-density_modulation)). Por faire la conversion PDM->PCM, format qui sera utilisé dans le traitement, on utilise le [dfsdm](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwiJhPiQhc_7AhVpTaQEHeWqCTgQFnoECA4QAQ&url=https%3A%2F%2Fwww.st.com%2Fresource%2Fen%2Fapplication_note%2Fan4990-getting-started-with-sigmadelta-digital-interface-on-applicable-stm32-microcontrollers-stmicroelectronics.pdf&usg=AOvVaw3lbkYye-zzPNhqN-jdY5LY) de la plaque. 

Dans le projet 1, les configurations utilisés et le code sont décrits [ici](https://wiki.st.com/stm32mcu/wiki/STM32StepByStep:Getting_started_with_analog?fbclid=IwAR12BKhhMVTcL6KRTkiRtT7-l0grv_AHkJxkHy_kmnfj2Z0sP0Ee_tZewFY#First_Capturing_sound_and_recording_it)

Dans le projet 2, les configurations utilisés et le code sont décrits [ici](https://www.youtube.com/watch?v=MdDqVeIGhec)

L'exemple 4 de [ce document](an5027-interfacing-pdm-digital-microphones-using-stm32-mcus-and-mpus-stmicroelectronics) contient aussi des informations pertinentes.


## Carte SD 

La lecture de la carte SD utilise periferique SDMMC de la carte. Les configurations du projet et le code sont descrits [ici](https://community.st.com/s/article/how-to-create-a-file-system-on-a-sd-card-using-stm32bubeide)

## RTC 

Les configurations et le code de la lecture et configuration de la carte pour le RTC sont décrits [ici](https://controllerstech.com/internal-rtc-in-stm32/)


