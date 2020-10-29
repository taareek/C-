
 int main(){
     cout<<"                                     ----------------------------------------                "<<endl;
     cout<<"                                    |  Number System Conversion Calculator   |               "<<endl;
     cout<<"                                     ----------------------------------------                "<<endl;

     static int ch=1;

     while(ch>=1 && ch<=5){

        cout<<" 1. Binary to others: "<<endl;
        cout<<" 2. Decimal to others: "<<endl;
        cout<<" 3. Octal to others: "<<endl;
        cout<<" 4. Hexadecimal to others: "<<endl;
        cout<<" 5. Exist. "<<endl;
        cout<<" Enter your choice(1-5): "<<endl;
        cin>>ch;
        switch(ch){
            case 1:
            {
                int t=1;
                while(1<=t<=4){
                    cout<<" 1. Binary to Decimal: "<<endl;
                    cout<<" 2. Binary to Octal: "<<endl;
                    cout<<" 3. Binary to Hexadecimal: "<<endl;
                    cout<<" 4. Exist. "<<endl;

                    cout<<"Enter your choice: "<<endl;
                    cin>>t;
                    switch(t){
                        case 1:
                        {
                            btd();
                            break;
                        }
                        case 2:
                        {
                            bto();
                            break;
                        }
                        case 3:
                        {
                            bth();
                            break;
                        }
                        case 4:
                            {
                                break;
                            }

                    }
                }
                break;
            }
            case 2:
            {
                int m=1;
                while(1<=m<=4){

                    cout<<" 1. Decimal to Binary: "<<endl;
                    cout<<" 2. Decimal to Octal: "<<endl;
                    cout<<" 3. Decimal to Hexadecimal: "<<endl;
                    cout<<" 4. Exist. "<<endl;

                    cout<<"Enter your choice: "<<endl;
                    cin>>m;
                    switch(m){
                        case 1:
                        {
                            dtb();
                            break;
                        }
                        case 2:
                        {
                            dto();
                            break;
                        }
                        case 3:
                        {
                            dth();
                            break;
                        }
                        case 4:
                            {
                                break;
                            }
                    }
                }
                break;
            }
            case 3:
            {
                int r=1;
                while(1<=r<=4){
                    cout<<" 1. Octal to Binary: "<<endl;
                    cout<<" 2. Octal to Decimal: "<<endl;
                    cout<<" 3. Octal to Hexadecimal: "<<endl;
                    cout<<" 4. Exist. "<<endl;

                    cout<<"Enter your choice: "<<endl;
                    cin>>r;
                    switch(r){
                        case 1:
                        {
                            otb();
                            break;
                        }
                        case 2:
                        {
                            otd();
                            break;
                        }
                        case 3:
                        {
                            oth();
                            break;
                        }
                        case 4:
                            {
                                break;
                            }
                    }
                }
                break;
            }
            case 4:
            {
                int t=1;
                while(1<=t<=4){
                    cout<<" 1. Hexadecimal to Binary: "<<endl;
                    cout<<" 2. Hexadecimal to Decimal: "<<endl;
                    cout<<" 3. Hexadecimal to Octal: "<<endl;
                    cout<<" 4. Exist: "<<endl;

                    cout<<"Enter your choice: "<<endl;
                    cin>>t;
                    switch(t){
                        case 1:
                        {
                            htb();
                            break;
                        }
                        case 2:
                        {
                            htd();
                            break;
                        }
                        case 3:
                        {
                            hto();
                            break;
                        }
                        case 4:
                            {
                                break;
                            }
                    }
                }
                break;
            }
            case 5:
            {
                break;
            }
        }

     }
 }
