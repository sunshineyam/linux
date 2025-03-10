#include "TcpClient.hpp"
using namespace std;
void Usage(string proc)
{
    cout << "Usage: " << proc << "server_ip server_port" << endl;
}
//.seerver ip port
int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        Usage(argv[0]);
        exit(1);
    }
    int port = atoi(argv[2]);
    std::string ip = argv[1];
    TcpClient *cli = new TcpClient(ip, port);
    cli->InitClient();
    cli->Start();
    return 0;
}

