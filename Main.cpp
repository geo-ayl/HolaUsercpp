#include <iostream>

using namespace std;

int main(){
    string nombre;
    int edad:
    
    cout<<"Ingrese su nombre "<<endl;
    cin>>nombre;
    cout<<"¿CUAL ES TU EDAD?"<<endl;
    cin>>edad:

    if (edad >0 and edad < 5) then {
        cout<<"USTED ES UN BEBE"<<endl;
    }else if (edad > 5 and edad < 10) then {
         cout<<"USTED ES UN NIÑO PEQUEÑO"<<endl;
    }else if ( edad > 10 and edad < 15)then{
        cout<<"USTED ES UN PUBERTO PRE-ADOLECENTE"<<endl;
    }else if (edad > 15 and edad < 25 ) then{
        cout<<"USTED ES UN ADULTO JOVEN"<<endl;
    }else if (edad > 25 and edad < 60)then{
        cout<<"USTED ES UN ADULTO"<<endl;
    }else if (edad > 60) then{
        cout<<"USTED ES UN ADULTO MAYOR"<<endl;
    }

        cout<<"-BIENVENIDO "<<nombre<<endl;
        cout<<"-APROXIMADAMENTE, SU EDAD ES DE "<<edad<<" AÑOS"<<endl;
        
}

        

}
