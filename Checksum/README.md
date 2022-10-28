**Checksum**

In this method a checksum is calculated based on the given binary strings which is sent with the data as redundant bits.

> Data + checksum is received at receiver end

> Checksum is calculated again

> If checksum is 0 it means no error in data received

> Else there exists some error in the received data.


In the sender’s end the segments are added using 1’s complement arithmetic to get the sum.
The sum is complemented to get the checksum.
The checksum segment is sent along with the data segments.
At the receiver’s end, all received segments are added using 1’s complement arithmetic to get the sum.
The sum is complemented.
If the result is zero, the received data is accepted; otherwise discarded.
