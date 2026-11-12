import java.util.ArrayList;

public class QuickSort {

    public static ArrayList<Integer> quick_sort(ArrayList<Integer> lista) {

        if (lista.size() <= 1) {
            return lista;
        }

        int pivo = lista.get(0);

        ArrayList<Integer> lista_sem_pivo = new ArrayList<>(lista.subList(1, lista.size()));

        ArrayList<Integer> menores = new ArrayList<>();
        ArrayList<Integer> maiores = new ArrayList<>();

        for (int x : lista_sem_pivo) {
            if (x < pivo) {
                menores.add(x);
            } else {
                maiores.add(x);
            }
        }

        ArrayList<Integer> resultado = quick_sort(menores);
        resultado.add(pivo);
        resultado.addAll(quick_sort(maiores));

        return resultado;
    }
}
