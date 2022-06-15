#include "listaEnlazada.h"
nodoListaPelicula * inicLista()
{
    return NULL;
}

nodoListaPelicula * crearNodo(stPelicula p)
{
    nodoListaPelicula * aux = (nodoListaPelicula*)malloc(sizeof(nodoListaPelicula));
    aux->p=p;
    aux->sig= NULL;
    return aux;
}


nodoListaPelicula * agregarPpio(nodoListaPelicula * lista, nodoListaPelicula * nuevoNodo)
{
    if(lista == NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        nuevoNodo->sig = lista;
        lista = nuevoNodo;
    }
    return lista;
}

nodoListaPelicula * buscarUltimo(nodoListaPelicula * lista)
{
    nodoListaPelicula * seg = lista;
    while(seg->sig != NULL)
    {
        seg = seg->sig;
    }
    return seg;
}

nodoListaPelicula * buscarNodo(int idPeli, nodoListaPelicula * lista)
{
    nodoListaPelicula * seg=lista;
    while ((seg != NULL) && ( idPeli!=seg->p.idPelicula ))
    {
        seg=seg->sig;
    }
    return seg;
}

int contarNodosLista(nodoListaPelicula *lista)
{
    nodoListaPelicula *aux=inicLista();
    aux=lista;
    int cantidad=0;
    while (aux)
    {
        cantidad++;
        aux=aux->sig;
    }
    return cantidad;
}

nodoListaPelicula * agregarFinal(nodoListaPelicula * lista, nodoListaPelicula * nuevoNodo)
{
    if(lista == NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        nodoListaPelicula * ultimo = buscarUltimo(lista);
        ultimo->sig = nuevoNodo;
    }
    return lista;
}

nodoListaPelicula * borrarNodo(int idPeli, nodoListaPelicula * lista)
{
    nodoListaPelicula * seg;
    nodoListaPelicula * ante;
    if((lista != NULL) && (idPeli==lista->p.idPelicula ))
    {
        nodoListaPelicula * aux = lista;
        lista = lista->sig;
        free(aux);
    }
    else
    {
        seg = lista;
        while((seg != NULL) && (idPeli!=lista->p.idPelicula ))
        {
            ante = seg;
            seg = seg->sig;
        }
        if( seg!= NULL)
        {
            ante->sig = seg->sig;
            free(seg);
        }
    }
    return lista;
}

nodoListaPelicula * agregarEnOrden(nodoListaPelicula * lista, nodoListaPelicula * nuevoNodo)
{
    if(lista == NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        if(nuevoNodo->p.idPelicula<lista->p.idPelicula)
            lista = agregarPpio(lista, nuevoNodo);
        else
        {
            nodoListaPelicula * ante = lista;
            nodoListaPelicula * seg = lista->sig;
            while( (seg != NULL)&&(nuevoNodo->p.idPelicula>=lista->p.idPelicula) )
            {
                ante = seg;
                seg = seg->sig;
            }
            nuevoNodo->sig = seg;
            ante->sig = nuevoNodo;
        }
    }
    return lista;

}

nodoListaPelicula * borrarTodaLaLista(nodoListaPelicula * lista)
{
    nodoListaPelicula * proximo;
    nodoListaPelicula * seg;
    seg = lista;
    while(seg != NULL)
    {
        proximo = seg->sig;
        free(seg);
        seg = proximo;
    }
    return seg;
}
void mostrarNodo(nodoListaPelicula * aux)
{
        printf("ID Pelicula: %s \n", aux->p.idPelicula);
        printf("Titulo: %s \n", aux->p.nombrePelicula);
        printf("Genero: %s\n",aux->p.genero);
        printf("Anio: %d \n", aux->p.anio);
        printf("Director: %s \n", aux->p.director);
        printf("Pais: %s\n",aux->p.pais);
        printf("PM: %d\n",aux->p.pm);
        printf("Valoracion: %d\n",aux->p.valoracion);
}

void recorrerYmostrar(nodoListaPelicula * lista)
{
    if (lista)
    {
        puts("\n---------------------------------------");
        printf("ID Pelicula: %d \n", lista->p.idPelicula);
        printf("Titulo: %s \n", lista->p.nombrePelicula);
        printf("Genero: %s\n",lista->p.genero);
        printf("Anio: %d \n", lista->p.anio);
        printf("Director: %s \n", lista->p.director);
        printf("Pais: %s\n",lista->p.pais);
        printf("PM: %d\n",lista->p.pm);
        printf("Valoracion: %d\n",lista->p.valoracion);
        puts("\n---------------------------------------");
        recorrerYmostrar(lista->sig);

    }

}

nodoListaPelicula * eliminaUltimoNodo(nodoListaPelicula * lista)
{
    nodoListaPelicula * aux=lista;
    nodoListaPelicula * ante;
    while(aux->sig!=NULL)
    {
        ante=aux;
        aux=aux->sig;
    }
    free(aux);
    ante->sig=NULL;
    return lista;
}

nodoListaPelicula * eliminaPrimerNodo(nodoListaPelicula * lista)
{
    nodoListaPelicula * aux=lista;
    lista=lista->sig;
    free(aux);
    return lista;
}

nodoListaPelicula * pasaArchivoALista(nodoListaPelicula *lista,char patch[])
{
    nodoListaPelicula *nuevo=inicLista();
    int validos=contar(patch);
    int i=0;
    stPelicula arreglo[validos];
    cargarPeliculasaEstructura(patch,arreglo);
    while (i<validos)
    {
        nuevo=crearNodo(arreglo[i]);
        lista=agregarEnOrden(lista,nuevo);
        i++;
    }
    return lista;

}

