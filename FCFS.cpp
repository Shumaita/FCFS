//First Come First Serve
//Implemented by myself
// j rady queue te age aashbe take execute korbe (shobar age)
 #include<iostream>
 using namespace std;

 int main () {

        int n ;
        cout<<"Enter How many process: ";//count the process
        cin>>n; //kotogula process thakbe n er maddhome input

        int burst_time[n];//process shongkhok data hold korbe
        for(int i=0; i <n;i++)
            {
            cout <<"Enter burst time of process - "<<i+1<< " : ";//0 theke shuru howate i+1
            cin>>burst_time[i];//shb variable er burst time nilam
            }

        int waiting_time =0;
        int total_waiting_time=0;
        for(int i=0; i <n;i++)
            {
            cout <<"Waiting time of process - "<<i+1<< " : "<<waiting_time<<endl;//0 theke shuru howate i+1
            waiting_time += burst_time[i];
            total_waiting_time += waiting_time;//protibar pawa waiting time jog

            }
            cout<<"Average waiting time : "<<(total_waiting_time - waiting_time)/float(n);// last er ta baad

        return 0;


 }
