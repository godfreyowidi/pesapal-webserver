# Simple HTTP Web Server

## Description

  This web server application which can listen on a configurable TCP port and serve both static HTML and dynamically generated HTML. It also support GET requests and Content-Type and Content-Length.

## Design
```
  +----------------------------------------------+
  |                                              |
  |  +-----------+   wait   +-----------------+  |  copy   +---------+
  |  |           +---------->                 +------------>         |
  |  | IO Device |    1     | Kernel's buffer |  |   2     | Process |
  |  |           <----------+                 <------------+         |
  |  +-----------+          +-----------------+  |         +---------+
  |                                              |
  +----------------------------------------------+
```

## Technologies Used

  - C++
  - MingW
  - Code::Blocks
  - Git/GitHub
  - Visual Studio

## Installation

  * Use the browser to navigate to GitHub page repository.
  * Click the Green Code button on the right and select Download Zip.

  * Alternatively clone from Github via the terminal using ``git clone`` command.
  * In your terminal, navigate to the directory where you would like to clone the project to.

  * Clone this repo to your chosen directory using this link https://github.com/godfreyowidi/pesapal-webserver in terminal.

# Usage

### Compile and run
  * Launch the application using visual studio 2022
  * Build by clicking on the build option on the top of visual studio 2022
  * You will get the following message on your terminal on the bottom if the build is
  ```
  ========== Rebuild All: 1 succeeded, 0 failed, 0 skipped ==========
  ```
  * Click on the green button on the top main menu to run the application with the option __Local Windows Debugger__ selected.
  * When a console to _pesapal-webserver_ pops up, navigate to the browser and enter the url http://localhost:8080/index.html to render the resources
  * You can also make concurrent request by rendereng both the html files
  * The application also renders _a not found page code 404_ incese the url is incorrect.

#### HTTP
   * Direct your favorite browser to for instance http://localhost:8080/

#### TODO
  - HTTPS (SSL/TLS) support using OpenSSL.
  - Resumed download, URL rewrite, file blacklist, IP-based ACL
  - Timer

## Known Bugs
  * Work-in-progress

## Contact
  * Email Contact