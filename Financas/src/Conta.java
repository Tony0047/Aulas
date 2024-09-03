public class Conta{
    String titulo;
    double valor;
    string vencimento;
    doolean foiPago = false;

    public conta (String titulo, double valor, String vencimento){
        this.titulo = titulo;
        this.valor = valor;
        this.vencimento = vencimento
    }

    public void efetuarPagamento(){
        foiPago = true;
    }

    public String statusPag(){
        if(this.foiPago){
            return "Pagamento efetuado";
        } else {
            return "Pagamento pendente";
        }
    }

    @Override
    public String toString() {
        return "titulo " + titulo
        " valor " + valor
        "data " + vencimento;
    }
}