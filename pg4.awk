BEGIN {
bytes_recvd=0;
throughput=0;
}
{
pkt_size=$6;
if($2>1 && $2<5)
{
if($1=="r" && $5=="cbr")
{
bytes_recvd = bytes_recvd + pkt_size;
}
}
}
END {
throughput = bytes_recvd / (4* 60);
printf("Throughput is %fkbps",throughput/1024);
}


