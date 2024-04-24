#include <stdio.h>
int main (int argc, char *argv[]) {

    //se desea desarrollar un programa que me permita facturar las ventas de un local comercial, el local comercial tiene un inventario de 5 productos y 
    //las ventas pueden incluir 1,2,3,4 o 5 productos, cada producto tiene su precio unitario y un precio unitario al por mayor.
    // Se considera venta al por mayor cuando la compra es mas de 6 unidades del producto. Se debe imprimir la factura, el iva, el subtotal y el total//

    float P1=5, P2=15, P3=10, P4=25, P5=9, iva, subtotal, total;
    float p1xM=4, p2xM=13, p3xM=8, p4xM=23, p5xM=7;
    float cant1=0, cant2=0, cant3=0, cant4=0, cant5=0;
    float total1=0, total2=0, total3=0, total4=0, total5=0, SumaTotal;


    printf("Ingrese la cantidad que va a comprar del producto 1: ");
    scanf("%f",&cant1);
    if (cant1>5)
    {
        total1=p1xM*cant1;
    }else{
        total1=cant1*P1;
    }
    

    printf("Ingrese la cantidad que va a comprar del producto 2: ");
    scanf("%f",&cant2);
        if (cant2>5)
    {
        total2=p2xM*cant2;
    }else{
        total2=cant2*P2;
    }

    printf("Ingrese la cantidad que va a comprar del producto 3: ");
    scanf("%f",&cant3);
        if (cant3>5)
    {
        total3=p3xM*cant3;
    }else{
        total3=cant3*P3;
    }

    printf("Ingrese la cantidad que va a comprar del producto 4: ");
    scanf("%f",&cant4);
        if (cant4>5)
    {
        total4=p4xM*cant4;
    }else{
        total4=cant4*P4;
    }

    printf("Ingrese la cantidad que va a comprar del producto 5: ");
    scanf("%f",&cant5);
        if (cant5>5)
    {
        total5=p5xM*cant5;
    }else{
        total5=cant5*P5;
    }
    subtotal= total1 + total2 + total3 + total4 + total5;
    iva= (subtotal*0.15);
    total= subtotal+iva;

    printf("\nEl subtotal de la compra es %f",&subtotal);
    printf("\nEl iva de la compra es %f",&iva);
    printf("\nEl total de la compra es %f",&total);      
    
    
    return 0; 
   
}