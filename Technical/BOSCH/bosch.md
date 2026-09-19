I - PROJECT 1
SE330 UIT Chat– Real-Time Communication Platform
Java 17, Spring Boot, Spring Security, WebSocket/STOMP, JWT, Firebase, React, Vite
2026
• Led backend development of a Discord-inspired platform with 20+ REST APIs and 5+ core features including
messaging, forums, file sharing, rooms, and notifications.
• Implemented JWT authentication and RBAC with Spring Security across REST and WebSocket layers, securing
20+ endpoints.
• Built WebSocket/STOMP messaging for concurrent communication across multiple chat rooms, eliminating client
side polling.
• Integrated Firebase Authentication, Cloud Storage, and Cloud Messaging for authentication, 25 MB file
uploads, and push notifications.


1- Websocket - Why ?
+ WebSocket provides a persistent, bidirectional connection between the client and server. Unlike traditional HTTP, the server can send data to the client without waiting for a new request. We used WebSocket for real-time chat messaging and notifications.

follow up : why not REST ?
+ REST is mainly request-response, so the client needs to send requests to get new data. With WebSocket, the server can push new messages immediately, which is more suitable for real-time communication.

follow up : if connection lost?
+ When the network connection is lost, the WebSocket connection is disconnected and the client cannot receive messages during that period. Usually, the client should detect the disconnection and try to reconnect when the network is available again.

follow up: What about messages sent while the client was offline?
+ The client may miss real-time messages while it is disconnected. To recover them, the application needs a persistence mechanism. For example, messages can be stored in the database, and after reconnecting, the client can request messages that it missed.

follow up: Why not use raw WebSocket?
+ Raw WebSocket only provides the communication channel. STOMP gives us a standard messaging model with commands such as SEND and SUBSCRIBE, and destinations for routing messages. This makes the application easier to structure.

2- JWT ?
+ A JWT consists of three parts: the header, payload, and signature. The header contains information about the algorithm, the payload contains claims such as user information and expiration time, and the signature is used to verify that the token has not been modified.
+ The backend validates the JWT by verifying its signature and checking claims such as expiration time. If the token is valid, the backend can identify the user and apply authorization rules such as roles.

follow up: How does authenticate by the side of client?
+ The client can decode the JWT for UI purposes, but the client should not be trusted for authentication or authorization. The backend must validate the token.

3- What did you use Firebase for?
+ We used Firebase for authentication, file storage, and push notifications. Firebase Authentication handled user authentication, Cloud Storage was used for uploaded files, and Firebase Cloud Messaging was used to send push notifications.

4- RESTful API ?
+ A RESTful API is an API designed around resources and uses standard HTTP methods such as GET, POST, PUT, PATCH, and DELETE. It is generally stateless, meaning each request contains the information needed to process it.

follow up: compared with the same type API?
+ REST and GraphQL are both approaches for building APIs. REST exposes multiple resource-based endpoints, while GraphQL usually provides a single endpoint where the client specifies exactly what data it needs. REST may return a fixed response structure, while GraphQL can help avoid over-fetching or under-fetching data. 

5- Push notification vs Fetch/Polling?
+ With polling, the client periodically sends requests to check whether new data is available. With push notifications, the server or messaging service can notify the client when new data is available. Push is more suitable for notifications because the client doesn't need to keep polling. 

II - Project 2
