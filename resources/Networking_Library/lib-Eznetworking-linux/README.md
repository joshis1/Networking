# What this project is all about?

This project is to build the network utility libraries. This library will provide the simple API's to get the L2 and L3 
attributes provided in linux. Thus, it will bypass the socket open and options to get the L2 and L3 attributes. A simple API will
provide the user with the necessary attribute. 

*What is the structure of the network utility library project?*

There will be a folder with respect what it can do? Remember, it's like a single responsibility class. 
We don't want to do everything in one folder. I have created the sample library - this is called "iface_attrib"
In future, we will add different structure attributes i.e. different folder. 

*How to build?*

* Always build the library - for example iface_attrib.
* Build the Test App to link the iface_attrib.

*How to build on top of it?*

* Best create the git branch from here.
* Add a folder and create more attributes. If you think that the attribute belongs to the same class, then add the attribute in 
the same folder.
* Now build the library. Remember, the added API should be added in the public folder - .h file. 
* Test the library, by modifing the TestApp.

*What is the best practice?*

* Always run valgrind on the executable to ensure that there are no mem leaks.
* Always close the socket.
* Avoid dynamic memory - like malloc
* Use always - strncpy rather than strcpy. Also snprintf rather than sprintf.
* run  cppcheck on the code - to check if there is any failure in the static analysis of the code.



