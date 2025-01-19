# Tarefa2UC4: Controle de Pinos GPIO com BitDogLab

Este repositório contém a solução para a **Atividade 2**: controle de pinos GPIO utilizando a ferramenta educacional **BitDogLab** com comunicação via porta serial UART. Cada membro ativo do Subgrupo 3 do Grupo 5 da capacitação Embarca Tech adicionou seu código na sua branch espécifica:

- Leonardo Bonifácio: https://github.com/Embarcatech-SUB3/Tarefa2UC4/tree/Leonardo-Bonif%C3%A1cio
- Maria Eduarda Campos: https://github.com/Embarcatech-SUB3/Tarefa2UC4/tree/Maria-Eduarda-Campos

### Vídeo de demonstração:

https://youtu.be/H1ZHiJr-nzc?si=sBUt22oJvmtD1QEj

### Objetivo

Controlar os seguintes periféricos da **BitDogLab**:
1. **LEDs RGB** 
2. **Buzzer** 

A interação entre o usuário e o sistema embarcado ocorre através de comandos enviados pela interface UART, utilizando o software de emulação de terminal **PuTTY**.

### Comandos Implementados

Os comandos para controle dos periféricos são enviados pela interface serial UART e permitem as seguintes ações:

1. **Ligar LED verde (GPIO 11)** e desligar os demais LEDs.
2. **Ligar LED azul (GPIO 12)** e desligar os demais LEDs.
3. **Ligar LED vermelho (GPIO 13)** e desligar os demais LEDs.
4. **Ligar os três LEDs simultaneamente** (cor branca).
5. **Desligar todos os LEDs**.
6. **Acionar o buzzer**.
7. **Habilitar o modo de gravação (reboot)** - opcional.

### Requisitos

- **Hardware necessário**:
  1. Ferramenta educacional BitDogLab.
  2. Cabo micro-USB para USB-A.
  3. Computador pessoal.

- **Software utilizado**:
  1. PuTTY (emulador de terminal).
  2. Ambiente de desenvolvimento VS Code com suporte ao Pico SDK.
