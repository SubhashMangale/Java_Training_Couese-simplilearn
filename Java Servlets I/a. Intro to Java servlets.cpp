Introduction to Java Servlets...

1) Why we use servlets?
ans : 
  a.We know that according to web client requests, a web server generates either static or dynamic responses. The static response is in form of HTML.
    But to generate dynamic responses we need an programming language that needed to perform dynamic operations.
  b.Servlet is a Java program that generated dynamic operations and that are send to web server.The web server then sends response to client.
  
2)Explain static and dynamic response example?
  a. Static response  : when we type google.com on google then every time we see the same HTML page every time. this is called as static response.
  b. Dynamic response : when we log in to fb or insta suppose, according to diff user diff pages will generated. this is called as dynamic response and servlets is used.
  
3)Architecture of Java Servlets:

]
      
      |---------------------------------> HTTP Request---------------------------------> Web server----------------------------
      |                                                                              |  (web container |           |
      |                                                                              |  (Servlets)                 |           |-------------->DB
User Workstation                                                                     |      |                      |
  (Browser)                                                                          |      |                      |
      |                                                                              |     HTML Pages              |
      |--------------------------------- HTTP Response <-----------------------------|-----------------------------| 
      
    Note : Web server is a program that sends HTTP Response and Servlets is java program that contains classes and objects.Then how response generated in HTTP format?
    ans: This is done using web container.The lifecycle of servlet is controlled by a web container in which the servlet has been deployed.
    
    

4) Web container:
  ans: A web container is built on top of Java EE platform. It implements servlets API and services required to process HTTP requests.
  Java Servlets are components in web container and A web container must have servlets. Whenever a HTTP request is taken by web container it activates the servlets
  which matches that request URL by calling service method on an instance(object) of servlet class. Activation of service method in servlet class is handled in seprate
  thread in web container protocol.
 
  Client server model using web container : img: https://drive.google.com/file/d/1UiIJEDg14CfOOVgkszxu87o6jeqRQfdK/view?usp=sharing
 
 
  
  
