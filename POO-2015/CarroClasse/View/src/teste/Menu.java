package teste;

import java.util.Scanner;

public class Menu {
	private Scanner scanner;
	public Menu() {
		scanner = new Scanner(System.in);
	}
	public static void main(String args[]){
		Menu menu = new Menu();
		menu.exibir();
	}

	public void exibir() {		
		while(true)
		{
		produzirCarro();
		if(!querCriarMaisCarro())
			break;
		}
	}
	
	private boolean querCriarMaisCarro()
	{
		System.out.println("Você quer criar mais carro? (S/N)");
		String resposta = scanner.next();
		return resposta.toUpperCase().equals("S");

	}
	
	public void produzirCarro()
	{
		String modelo = solicitaModelo();
		String cor = solicitaCor();
		Carro carro = Fabrica.fabricarCarro(modelo,cor);
		System.out.println("Carro fablicado: "+ carro.mostraFicha());
	}
	private String solicitaModelo(){
		System.out.println("Informe o modelo a ser produzido: ");
		return scanner.next();
	}
	
	private String solicitaCor(){
		System.out.println("Informe a cor: ");
		return scanner.next();
	}
	
}
