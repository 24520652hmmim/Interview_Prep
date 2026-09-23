1-What is the difference between TCP and UDP, and when would you choose UDP over TCP?
+ TCP is connection-oriented and provides reliable, ordered, and error-checked delivery. It uses mechanisms such as acknowledgements, retransmission, and flow control. UDP is connectionless and doesn't guarantee delivery or ordering, but it has lower overhead and latency. I would use TCP for HTTP, while UDP can be used for games, real-time communication, and DNS.
2- What happens when you enter google.com in your browser and press Enter?

+ First, the browser checks whether it already has the IP address in its cache. If not, it uses DNS to resolve google.com to an IP address. Then, for HTTPS, the client establishes a connection with the server and performs a TLS handshake. After that, the browser sends an HTTP request to the server. The server processes the request and returns an HTTP response, such as HTML, CSS, JavaScript, and other resources. Finally, the browser uses these resources to render the webpage.

3- “What is the difference between HTTP and HTTPS, and why is HTTPS more secure than HTTP?”
+ HTTP is a protocol used for communication between a client and a server, but the data is transmitted in plain text. HTTPS is HTTP over TLS, so the communication is encrypted. HTTPS provides confidentiality, integrity, and server authentication, which helps protect sensitive data from being intercepted or modified during transmission. 
