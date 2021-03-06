#include "cloudBackupSer.hpp"
#include "compressTool.hpp"

void thr_start() {
    cutl.CompressLowHeatFiles();
}

int main()
{
    std::thread thread(thr_start);
    thread.detach();
    cloudBackupSer cbps("./cert.pem", "./key.pem");
    cbps.Run();
    return 0;
}
