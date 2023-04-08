fprintf(arquivo, "escreve no arquivo formatado (como seria printado na tela) %d", variavel); //escreve formatado no arquivo retorna a quantidade de caracteres escritos ou -1
fputc(caractere(%c), arquivo); //escreve um caractere no arquivo retorna o valor do caractere em ascii ou EOF
fputs(string(%s), arquivo); //escreve uma string no arquivo retorna a quantidade de caracteres escritos ou valor EOF
fwrite(&string, sizeof(char), 1001, arquivo); //escreve bloco no arquivo
fread(&string, sizeof(char), strlen(string), arquivo);
fscanf(arquivo, "%d", &variavel); //le uma string do arquivo
rewind(arquivo); //volta o indice para o inicio do arquivo
fseek(arquivo, indice, tipo); //muda o indice do arquivo
                                //0 = inicio
                                //1 = corrent
                                //2 = fim
