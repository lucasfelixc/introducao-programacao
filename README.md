# Compilação e Execução

### Cygwin (Para compilar no windows)

Baixe a versão que corresponde à arquitetura do seu computador: [64 bits](http://www.cygwin.com/setup-x86_64.exe) ou [32 bits](http://www.cygwin.com/setup-x86.exe).

Depois de instalar o Cygwin, precisamos adicioná-lo á variável de ambiente PATH do Windows:
- Clique no botão iniciar e digite variáveis de ambiente .
- Na janela Propriedades do Sistema clique na aba Avançado e depois em Variáveis de Ambiente .
- Vá até a seção Variáveis do Sistema e procure pela variável Path . Clique duas vezes sobre ela para abrir a lista.
- Use o botão Novo e na linha digitável que é habilitada, insira o caminho da pasta cygwin/bin . Esse caminho é referente ao local em que você escolheu para instalar o compilador no seu computador. No exemplo dado aqui, o caminho foi C:\gygwin64\bin . Clique em OK para salvar.
- Para conferir se a instalação está correta, abra uma janela de terminal (janela de comandos — cmd) e digite gcc --version . Se estiver tudo ok, você verá a versão do compilador instalado.

### Manualmente

Rode o comando `clang -lm [nome do arquivo].c -o [nome do arquivo].exe` ou `gcc -lm [nome do arquivo].c -o [nome do arquivo].exe`, dependendo de qual estiver instalado.

Obs: Você precisa instalar um compilador caso não tenha em sua máquina, como o [Clang](https://github.com/llvm/llvm-project/releases) ou o [GCC](https://sourceforge.net/projects/mingw). Lembre-se de adicioná-los à PATH. (GCC já incluso em distros do Linux)

# Execução

Após compilar, rode `[nome do arquivo].exe` caso esteja usando o cmd ou `./[nome do arquivo].exe` caso esteja usando o Powershell/Linux.
