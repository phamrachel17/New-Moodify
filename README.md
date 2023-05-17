# Moodify
 
 > Authors: \<[Harchet Singh](https://github.com/hsing067)\> \<[Gency Dela Torre](https://github.com/gen-cy)\> \<[Rachel Pham](https://github.com/phamrachel17)\> \<[Adrian Khor](https://github.com/akhor005)\>
 
## Project Description
 > Our project will be a website that gathers data using API’s from your Spotify history to display data from Spotify wrapped and a mood/aesthetic board of pictures from Pinterest or Google. 
 >   * This project is interesting to us because Spotify wrapped is only released once per year and it would be useful to access it at any time. Furthermore, we want to add a mood/aesthetic board feature to the Spotify wrapped data which will allow us to express our feelings through music and images.
 >   * The languages we plan to use are React JS and HTML/CSS to code the website interface and also C++ for the backend data. The tools we will use are Git/GitHub, Figma, Spotify APIs, Pinterest APIs, and Google APIs.
 >   * This project will produce a summary of your Spotify activity that you can access all year round. The summary will include your top listener, most played songs, most played genres, how long you listened to music in minutes, and a pinterest mood/aesthetic board based on your listening. The input values will be your login credentials and Spotify API’s. 
 
 > ## Phase II


## Class Diagram
 > ![image](https://user-images.githubusercontent.com/97139147/153347192-5a64b9bc-c3e1-4d72-ad86-c8c24ed4cd5b.png)
 > The picture above depicts our UML diagram for the project. We will have separate classes for each panel of the Spotify statistics which all inherit from the original Panel class. Then, the MoodBoard class takes information from the most listened genre and uses that to generate a collage of pictures.

 
 > ## Phase III
![use case diagram p3](https://user-images.githubusercontent.com/56899845/155786095-9b7c6da4-2496-4feb-bbc6-7d394330bcf6.png)
![use case diagram p4](https://user-images.githubusercontent.com/66144804/157721817-76a30d59-5c5e-4ff2-a44d-7573fe9c5c7a.png)
 UPDATED UML DIAGRAM ABOVE

We chose to use a structural design pattern, specifically the composite pattern as most of our implemented classes serve as the foundation for other sibling class attributes. The way the classes interact is mostly through inheritance and composition, so we figured behavioral and creational design patterns would not be appropriate. In our application, songs, artists, and genres are all separate classes that inherit from Panel, but they all contain instances of one another. There are many potential features that can use this, but for this application, displaying a song will return its title, artist and genre. Furthermore, we will use these attributes to generate the appropriate images to display. Although the MoodBoard class does not inherit from the Panel class, its display elements are all subclasses of Panel which makes displaying easier. As shown in our UML diagram, the mood board inherits information from the genre class.
 >     

Another design pattern that we implemented is a use case behavioral UML diagram. We chose to use this diagram to help us understand our workflow to show how different objects interact with each other; for example, the login button leads to the Spotify Authentication page which ultimately gives us the ability to gather the user's information. This UML diagram helped us to differentiate between the objects throughout the various pages. Doing this diagram made working with the API simple and concise since we can see a clear connection between the API we use and the objects. Therefore, it will help us write code that is easier for the a person to understand the workflow. 
 
 > ## Final deliverable
 
 ## Screenshots
![image](https://user-images.githubusercontent.com/66144804/157720511-f5c9c350-c3b6-4994-959a-44e2b77ebfcf.png)
![image](https://user-images.githubusercontent.com/66144804/157720568-07cc7715-bdc9-4629-856b-12e100ef26b0.jpeg)
![image](https://user-images.githubusercontent.com/66144804/157721067-c44438ba-d6f5-4c02-aaf5-4968479f5936.png)
![image](https://user-images.githubusercontent.com/66144804/157721085-045f16d0-dc30-4ece-b689-ed41133f1127.png)
![image](https://user-images.githubusercontent.com/66144804/157721100-e3285b3e-de0a-44d3-b946-502cf7c7a64c.png)


 ## Installation/Usage
 > To run app: <br> 
 > cd authorization_code <br> 
 > node app.js <br> 
 > login with Spotify <br> 
 > run both cpp files <br> 
 > refresh the page <br> 
 > view Moodboard <br> 


 ## Testing
 > The project was validated through google test unit testing. <br> 
 > <img width="700" alt="7B61ADA4-4A46-4E69-8700-6C34C48D4C18" src="https://user-images.githubusercontent.com/66144804/157721267-bc300e91-fd78-4124-b9a7-d5ca3c56ee11.png">
 > <img src="https://user-images.githubusercontent.com/66144804/157714929-fe89e458-bedf-4db6-897f-08fe2bc4a41c.gif" width="700" />
 > 

 
