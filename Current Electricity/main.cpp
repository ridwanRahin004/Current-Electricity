#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\tCurrent Electricity\t\t"<<endl;

	cout<<"1.G"<<endl;
	cout<<"2.Resistance/R"<<endl;
	cout<<"3.Specific Resistance/r"<<endl;
	cout<<"4.Velocity/V"<<endl;
	cout<<"5.Electric Current/I"<<endl;
	cout<<"6.Power/P"<<endl;
	cout<<"7.Electrical Energy/W"<<endl;
	cout<<"8.Huiston Bridge"<<endl;
	cout<<" Enter: ";
	int ch;
	cin>>ch;
	if(ch==1){
			cout<<"\n";
		cout<<"Enter R: ";
		float R;
		cin>>R;
		float G;
		G=1/R;
		cout<<"G = "<<G<<" S"<<endl;
			//exit command
			cout<<"\n";
			cout<<"[1] try again"<<endl;
			cout<<"[any kew] exit"<<endl;
			cout<<" Enter: ";
			int exit_ch;
			cin>>exit_ch;
			if(exit_ch==1){
				main();
			}
			else{
				return 0;
			}
	}
	else if(ch==2){
			cout<<"\n";
		cout<<"1.Resistance"<<endl;
		cout<<"2.Series Resistance/Rs"<<endl;
		cout<<"3.Parallel Resistance/Rp"<<endl;
		cout<<" Enter: ";
		int r_ch;
		cin>>r_ch;
		if(r_ch==1){
				cout<<"\n";
				cout<<"1. V,I"<<endl;
				cout<<"2. I,E,r"<<endl;
				cout<<"3. I,W,t"<<endl;
				cout<<"4. H,V,t"<<endl;
				cout<<"5. P/row,l,A"<<endl;
				cout<<"6. I,n,E,r"<<endl;
				cout<<" Enter: ";
				int r_ch_2;
				cin>>r_ch_2;
				if(r_ch_2==1){
						cout<<"\n";
					cout<<"Enter V: ";
					float r_v;
					cin>>r_v;
					cout<<"Enter I: ";
					float r_i;
					cin>>r_i;
					double r_vi;
					r_vi=r_v/r_i;
					cout<<"R= "<<r_vi<<" Ohm"<<endl;
						//exit command
						cout<<"\n";
						cout<<"[1] try again"<<endl;
						cout<<"[any kew] exit"<<endl;
						cout<<" Enter: ";
						int exit_ch;
						cin>>exit_ch;
						if(exit_ch==1){
							main();
						}
						else{
							return 0;
						}
				}
				else if(r_ch_2==2){
						cout<<"\n";
					cout<<"Enter I: ";
					float r_i;
					cin>>r_i;
					cout<<"Enter E: ";
					float r_e;
					cin>>r_e;
					cout<<"Enter r: ";
					float r_r;
					cin>>r_r;
					double r_eir;
					r_eir=(r_e-(r_i*r_r))/r_i;
					cout<<"R= "<<r_eir<<" Ohm"<<endl;
						//exit command
							cout<<"\n";
							cout<<"[1] try again"<<endl;
							cout<<"[any kew] exit"<<endl;
							cout<<" Enter: ";
							int exit_ch;
							cin>>exit_ch;
							if(exit_ch==1){
								main();
							}
							else{
								return 0;
							}
				}
				else if(r_ch_2==3){
						cout<<"\n";
					cout<<"Enter I: ";
					float r_i;
					cin>>r_i;
					cout<<"Enter W: ";
					float r_w;
					cin>>r_w;
					cout<<"Enter t: ";
					float r_t;
					cin>>r_t;
					double r_iwt;
					r_iwt=r_w/((r_i*r_i)*r_t);
					cout<<"R= "<<r_iwt<<" Ohm"<<endl;
						//exit command
							cout<<"\n";
							cout<<"[1] try again"<<endl;
							cout<<"[any kew] exit"<<endl;
							cout<<" Enter: ";
							int exit_ch;
							cin>>exit_ch;
							if(exit_ch==1){
								main();
							}
							else{
								return 0;
							}
				}
				else if(r_ch_2==4){
						cout<<"\n";
					cout<<"Enter H: ";
					float r_h;
					cin>>r_h;
					cout<<"Enter V: ";
					float r_v;
					cin>>r_v;
					cout<<"Enter t: ";
					float r_t;
					cin>>r_t;
					double r_hvt;
					r_hvt=(0.24*(r_v*r_v)*r_t)/r_h;
					cout<<"R= "<<r_hvt<<" Ohm"<<endl;
						//exit command
							cout<<"\n";
							cout<<"[1] try again"<<endl;
							cout<<"[any kew] exit"<<endl;
							cout<<" Enter: ";
							int exit_ch;
							cin>>exit_ch;
							if(exit_ch==1){
								main();
							}
							else{
								return 0;
							}
				}
				else if(r_ch_2==5){
							cout<<"\n";
						cout<<"Enter P/row: ";
						float r_p_row;
						cin>>r_p_row;
						cout<<"Enter A: ";
						float r_a;
						cin>>r_a;
						cout<<"Enter l: ";
						float r_l;
						cin>>r_l;
						double r_prowal;
						r_prowal=(r_p_row*r_l)/r_a;
						cout<<"R= "<<r_prowal<<" Ohm"<<endl;
							//exit command
								cout<<"\n";
								cout<<"[1] try again"<<endl;
								cout<<"[any kew] exit"<<endl;
								cout<<" Enter: ";
								int exit_ch;
								cin>>exit_ch;
								if(exit_ch==1){
									main();
								}
								else{
									return 0;
								}
				}
				else if(r_ch_2==6){
								cout<<"\n";
							cout<<"Enter I: ";
							float r_i;
							cin>>r_i;
							cout<<"Enter n: ";
							float r_n;
							cin>>r_n;
							cout<<"Enter E: ";
							float r_e;
							cin>>r_e;
							cout<<"Enter r: ";
							float r_r;
							cin>>r_r;
							double r_iner;
							r_iner=((r_n*r_e)-(r_i*r_n*r_r))/r_i;
							cout<<"R= "<<r_iner<<" Ohm"<<endl;
									//exit command
									cout<<"\n";
									cout<<"[1] try again"<<endl;
									cout<<"[any kew] exit"<<endl;
									cout<<" Enter: ";
									int exit_ch;
									cin>>exit_ch;
									if(exit_ch==1){
										main();
									}
									else{
										return 0;
									}
				}
		}
		else if(r_ch==2){
				cout<<"\n";
			cout<<"Enter n: ";
			cout<<"\n";
			int rs_n;
			cin>>rs_n;
			int i_r_s;
			double r_ss;
			for(i_r_s=0;i_r_s<rs_n;i_r_s++){
				cout<<"Enter R: ";
				float rs;
				cin>>rs;
				r_ss=r_ss+rs;
				cout<<"Rn ="<<r_ss<<" Ohm"<<endl;
				}
				cout<<"\n";
			cout<<"Rs = "<<r_ss<<endl;
				//exit command
					cout<<"\n";
					cout<<"[1] try again"<<endl;
					cout<<"[any kew] exit"<<endl;
					cout<<" Enter: ";
					int exit_ch;
					cin>>exit_ch;
					if(exit_ch==1){
						main();
					}
					else{
						return 0;
					}
			}
		else if(r_ch==3){
				cout<<"\n";
			cout<<"Enter n: ";
			cout<<"\n";
			int r_n;
			cin>>r_n;
			int i;
			double r_pp=0;
			double r_ppp=0;
			for(i=0;i<r_n;i++){
				cout<<"Enter R: ";
				float rp;
				cin>>rp;
				r_pp=r_pp+(1/rp);
				r_ppp=1/r_pp;
				cout<<"Rn ="<<r_pp<<endl;
				}
				cout<<"\n";
				cout<<"Rs = "<<r_ppp<<" Ohm"<<endl;
					//exit command
						cout<<"\n";
						cout<<"[1] try again"<<endl;
						cout<<"[any kew] exit"<<endl;
						cout<<" Enter: ";
						int exit_ch;
						cin>>exit_ch;
						if(exit_ch==1){
							main();
						}
						else{
							return 0;
						}
				}
			}
	else if(ch==3){

	}
    return 0;
}
