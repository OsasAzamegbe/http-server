<div id="top"></div>


<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
<!-- [![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]
 -->


<!-- PROJECT LOGO -->
<br />
<div align="center">
<!--   <a href="https://github.com/othneildrew/Best-README-Template">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a> -->

  <h1 align="center">HTTP SERVER</h1>

  <p align="center">
    A basic implementation of an HTTP server done in c++! Linux and Windows friendly too 🙂.
    <br />
    <a href="https://github.com/OsasAzamegbe/http-server#readme"><strong>Explore the docs »</strong></a>
    <br />
    <br />
<!--     <a href="https://github.com/othneildrew/Best-README-Template">View Demo</a> -->
<!--     · -->
    <a href="https://github.com/OsasAzamegbe/http-server/issues">Report Bug</a>
    ·
    <a href="https://github.com/OsasAzamegbe/http-server/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#building-and-running">Building and Running</a></li>
        <li><a href="#windows-version">Windows Version</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
<!--     <li><a href="#license">License</a></li> -->
    <li><a href="#contact">Contact</a></li>
<!--     <li><a href="#acknowledgments">Acknowledgments</a></li> -->
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

This is basically a mini project showing one of the major ways in which HTTP servers are implemented. In summary, it uses a TCP socket to listen for incoming requests and sends back a basic HTTP response based on standards set by the [RFC documents](https://www.ietf.org/standards/rfcs/).

As previously mentioned, this implementation of an HTTP web server basically creates a TCP socket which:
* listens for incoming requests on a particular [socket address](https://www.ibm.com/docs/en/aix/7.1?topic=addresses-socket-in-tcpip) (which is mostly a combination of an IP address and a network port)
* synchronously processes network connections from a queue of threads built up from the listening
* reads the message sent by a client over the network connection and sends some dummy HTTP response.

Of course, there are many many many ways in which this code can be improved and/or extended, so this is an **FYI** saying that this is mainly for educational purposes. Do not go off trying to build your own server from scratch for use within production-level projects. Asides from the obvious "try not to re-invent the wheel rhethoric", chances are (with almost a certainty) you will end up with very serious security-related problems.

Jump to *<a href="#roadmap">Roadmap</a>* to see more details about the project structure and its implementation overview.

<p align="right">(<a href="#top">back to top</a>)</p>



### Built With


* [C++](http://www.cplusplus.org/)
* [Docker](https://www.docker.com/)
* [Cmake](https://cmake.org/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

This is a pretty simple project with just one requirement: 
* Docker (unless you want to build it manually, then you'd be needing C/C++ compiler).

### Prerequisites

You will need to have docker setup on your computer, which can be done fairly easily by following the steps on their [official documentation](https://docs.docker.com/get-docker/). The version run with docker is the linux version of the HTTP server implementation.


### Building and Running

With docker fully setup on your system:

1. navigate to your desired project directory
2. Clone the repo
   ```sh
   git clone https://github.com/OsasAzamegbe/http-server.git
   ```
   (if you do not have git installed, take a brief detour and follow these [instructions](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)).
3. navigate to the project folder *__http-server/__* and build the docker image
   ```sh
   docker-compose build
   ```
4. start the server
   ```sh
   docker-compose up
   ```

When you're done with the server and need it shut down:

1. open up a second terminal window and navigate to the project folder
2. bring down the docker container
   ```sh
   docker-compose down
   ```  
 **NOTE:** if you make any changes to the code, you will have to re-compile as well by simply running **step 3** again.
 </br></br>
   
### Windows Version

*__instructions coming soon__*


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

Once your server is up and running with `docker-compose up`, you can pop into any web browser and navigate to `localhost:8080/` to see the default HTTP response sent from the server. There will be an article coming soon where I'll talk more indept about the development of this HTTP server.

_For more details, please refer to the **<a href="#roadmap">Roadmap</a>** or the article (link coming soon)_

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

*__instructions coming soon__*

<!-- 
- [x] Add Changelog
- [x] Add back to top links
- [] Add Additional Templates w/ Examples
- [] Add "components" document to easily copy & paste sections of the readme
- [] Multi-language Support
    - [] Chinese
    - [] Spanish

See the [open issues](https://github.com/othneildrew/Best-README-Template/issues) for a full list of proposed features (and known issues). -->

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
<!-- ## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

 -->
<!-- CONTACT -->
## Contact

**Osamudiamen Azamegbe**
</br>[Medium](https://medium.com/@osas.azamegbe) 
</br>[osas.azamegbe@gmail.com](mailto:osas.azamegbe@gmail.com)

Project Link: [https://github.com/OsasAzamegbe/http-server](https://github.com/OsasAzamegbe/http-server)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
<!-- ## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

<p align="right">(<a href="#top">back to top</a>)</p> -->



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/osamudiamen-azamegbe/
[product-screenshot]: images/screenshot.png
