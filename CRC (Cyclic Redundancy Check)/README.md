**CRC (Cyclic Redundancy Check)
 Algorithm:**

Transmitter Side:- (Generation of Encoded Data from sender side )
1.The binary data is first augmented by adding k-1 zeros in the end of the data                           
2.Use modulo-2 binary division to divide binary data by the key and store remainder of division.  
3.Append the remainder at the end of the data to form the encoded data and send the same

Receiver Side :- 
1.Perform modulo-2 division again and if remainder is 0, then there are no errors .

CRC employs the Generator Polynomial, which is present on both the transmitter and recipient sides.
An example generator polynomial is in the form of
> x5+x3 + x + 1
This generator polynomial represents key
> 101011
Another example is
> x2 +x+ 1
that represents key
> 111.

On the Sender side, the binary division is done to get CRC.
Reciever's side Checks for any errors that may have been introduced while transmission.
After performing modulo-2 division repeatedly if the remainder is 0, then no errors are there. 
