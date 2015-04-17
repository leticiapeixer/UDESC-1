package teste;

public class Fabrica {

	public static Carro fabricarCarro(String modelo, String cor) {
		Carro carro = new Carro();
		carro.setCor(cor);
		carro.setModelo(modelo);
		return carro;
	}
}
