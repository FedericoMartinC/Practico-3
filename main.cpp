#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "./datastructures/minheap.cpp"
using namespace std;

class datoDoble{
    private:
        int num;
        int pos;
    public:
        int getNum(){
            return this->num;
        }
        int getPos(){
            return this->pos;
        }
        void setNum(int num){
            this->num=num;
        }
        void setPos(int pos){
            this->pos=pos;
        }

};

int comparar(datoDoble* a,datoDoble* b){
    return  b->getNum() - a->getNum();
}

int main()
{
    int k;
    cin >> k;
    MinHeap<datoDoble*> * prin = new MinHeap<datoDoble*>(k,comparar);
    int** aux= new int*[k];
    int* posAc= new int[k]();
    for (int i=0;i<k;i++){
        posAc[i]=0;
    }
    int* maxPos= new int[k]();
    for (int i=0;i<k;i++){
        int p;
        cin >> p;
        int* arr= new int[p]();
        for(int j=0;j<p;j++){
            int num;
            cin >> num;
            if(j==0){
                datoDoble* nuevo=new datoDoble;
                nuevo->setPos(i);
                nuevo->setNum(num);
                prin->insertar(nuevo);
            }
            arr[j]=num;
        }
        aux[i]=arr;
        maxPos[i]=p-1;
    }
    while (!prin->estaVacio())
    {
        datoDoble* dato =prin->tope();
        cout << dato->getNum() << endl;
        prin->eliminar();
        if(maxPos[dato->getPos()]> posAc[dato->getPos()]){
            posAc[dato->getPos()]++;
            datoDoble* nuevo =new datoDoble;
            nuevo->setNum(aux[dato->getPos()][posAc[dato->getPos()]]);
            nuevo->setPos(dato->getPos());
            prin->insertar(nuevo);
        }
    }
    
    return 0;
}