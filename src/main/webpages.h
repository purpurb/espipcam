static const char PROGMEM LOGIN_HTML[] = R"rawliteral(
<html>
    <head>
        <meta charset=utf-8>
        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Montserrat:ital,wght@0,600;1,600&display=swap" rel="stylesheet">
        <title>login page</title>
        <style>
            .montserrat-<uniquifier> {
              font-family: "Montserrat", serif;
              font-optical-sizing: auto;
              font-weight: 600;
              font-style: normal;
            }
            body { font-family: Montserrat; text-align: left; color: white;margin:0px auto; padding-left: 30px;background-color: #2d2430;}
            h2 {
                text-shadow: 0px 5px 10px #19191a;
            }
            small {
                color: grey;
                text-shadow: 0px 5px 10px #19191a;
            }
            a {
                color: #a644c9; 
                text-decoration: none;
            }
            label {
                color: #a77fb5;
            }
            input[type=submit] {
                background-color: #912db5;
                background-image: linear-gradient(to bottom, #b440de, #912db5);
                border-color: #673a78;
                color: white;
                padding: 4px 20px;
                font-family: Montserrat;
                font-size: 18px;
                text-align: center;
                text-decoration: none;
                border-radius: 8px;
                margin: 10px 2px;
                cursor: pointer;
                box-shadow: 0px 5px 10px #19191a;
            }
            input[type=submit]:active {
                background-image: linear-gradient(to top,#68357a ,#b440de);
            }
            input{
                box-shadow: 0px 5px 10px #19191a;
                background-color: white;
                border-color: #912db5;
                border-radius: 8px;
                border-width: 3px;
                font-family: Montserrat;
            }
        </style>
    </head>
    <body>
        <script>
            function sendLoginCredentials(login,pass){
                var xhr = XMLHttpRequest();
                xhr.open("GET","/action?go="+login+"&"+pass, true);
                xhr.send();
            }
        </script>
        <h1>type your login and password</h1>
            <form action="/login?go">
            <label for="login">login</label><br>
            <input type="text" id="login" name="login"><br>
            <label for="pass">password</label><br>
            <input type="password" id="pass" name="pass"><br>
            <input type="submit" value="submit" style="margin: 10px 0px">
        </form>
        <br><small>made by <a href="github.com/purpurb">purpurb</a></small>
    </body>
</html>
)rawliteral";

static const char PROGMEM OLDLOGIN_HTML[] = R"rawliteral(
<!DOCTYPE html>
<html>
    <head>
        <meta charset=utf-8>
        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Montserrat:ital,wght@0,600;1,600&display=swap" rel="stylesheet">
        <title>login page</title>
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <style>
            .montserrat-<uniquifier> {
              font-family: "Montserrat", serif;
              font-optical-sizing: auto;
              font-weight: 600;
              font-style: normal;
            }
            body { font-family: Montserrat; text-align: left; color: white;margin:0px auto; padding-left: 30px;background-color: #2d2430;}
            h2 {
                text-shadow: 0px 5px 10px #19191a;
            }
            button {
                background-color: #912db5;
                background-image: linear-gradient(to bottom, #b440de, #912db5);
                border-color: #673a78;
                color: white;
                padding: 4px 20px;
                font-family: Montserrat;
                font-size: 18px;
                text-align: center;
                text-decoration: none;
                border-radius: 8px;
                margin: 10px 2px;
                cursor: pointer;
                box-shadow: 0px 5px 10px #19191a;
            }
            button:active {
                background-image: linear-gradient(to top,#68357a ,#b440de);
            }
            input{
                box-shadow: 0px 5px 10px #19191a;
                background-color: white;
                border-color: #912db5;
                border-radius: 8px;
                border-width: 3px;
                font-family: Montserrat;
            }
        </style>
        <script>
            function postdata(){
                var username = document.getElementById('username').value
                var password = document.getElementById('pwd').value
                window.post = function(url, data) {
                  return fetch(url, {method: "POST", headers: {'Content-Type': 'application/json'}, body: JSON.stringify(data)});
                }
                post("/login",username+"&"+password);
            }
        </script>
    </head>
    <h2>type your login and password</h2>
    <form>
      <label for="username">login:</label><br>
      <input type="text" id="username" name="username"><br>
      <label for="pwd">password:</label><br>
      <input type="password" id="pwd" name="pwd">
    </form> 
    <button class="button" onmousedown="postdata();" ontouchstart="postdata();">submit</button>
</html>
)rawliteral";

static const char PROGMEM MAIN_HTML[] = R"rawliteral(

<html>
  <head>
  <meta charset=utf-8>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Montserrat:ital,wght@0,600;1,600&display=swap" rel="stylesheet">
      
    <title>camera test</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style>
    .montserrat-<uniquifier> {
      font-family: "Montserrat", serif;
      font-optical-sizing: auto;
      font-weight: 600;
      font-style: normal;
    }
      body { font-family: Montserrat; text-align: center; color: white;margin:0px auto; padding-top: 30px;background-color: #2d2430;}
      table { margin-left: auto; margin-right: auto; }
      td { padding: 8 px; }
      .button {
        background-color: #912db5;
        background-image: linear-gradient(to bottom, #b440de, #912db5);
        border-color: #673a78;
        color: white;
        padding: 10px 30px;
        font-size: 18px;
        text-align: center;
        text-decoration: none;
        display: inline-block;
        border-radius: 8px;
        margin: 2px 2px;
        cursor: pointer;
        box-shadow: 0px 5px 10px #19191a;
        -webkit-touch-callout: none;
        -webkit-user-select: none;
        -khtml-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
        -webkit-tap-highlight-color: rgba(0,0,0,0);
      }
      .button:active {
            background-image: linear-gradient(to top,#68357a ,#b440de);
        }
      img {  width: auto ;
        max-width: 40% ;
        height: auto ; 
        border-radius: 8px;
      }
      h1 {
          text-shadow: 0px 5px 10px #19191a;
      }
      small {
          color: grey;
          text-shadow: 0px 5px 10px #19191a;
      }
      a {
          color: #a644c9; 
          text-decoration: none;
      }
    </style>
  </head>
  <body>
    <h1>camera control panel</h1>
    <img src="" id="photo" >
    <table>
      <tr><td colspan="3" align="center"><button class="button" onmousedown="toggleCheckbox('up');" ontouchstart="toggleCheckbox('up');">🡹</button></td></tr>
      <tr><td align="center"><button class="button" onmousedown="toggleCheckbox('left');" onmouseup="toggleCheckbox('end');" ontouchstart="toggleCheckbox('left');" ontouchend="toggleCheckbox('end');"
      >🡸</button></td><td align="center"></td><td align="center"><button class="button" onmousedown="toggleCheckbox('right');" onmouseup="toggleCheckbox('end');" ontouchstart="toggleCheckbox('right');" ontouchend="toggleCheckbox('end');">🡺</button></td></tr>
      <tr><td colspan="3" align="center"><button class="button" onmousedown="toggleCheckbox('down');" ontouchstart="toggleCheckbox('down');">🡻</button></td></tr>                   
    </table>
   <script>
   function toggleCheckbox(x) {
     var xhr = new XMLHttpRequest();
     xhr.open("GET", "/action?go=" + x, true);
     xhr.send();
   }
   var ip = location.host;
   window.onload = document.getElementById("photo").src = "http://" + ip + ":81/stream";
  </script>
  
    <br> <small> originally made by Rui Santos on <a href="https://randomnerdtutorials.com/esp32-cam-pan-and-tilt-2-axis/">randomnerdtutorials.com</a>
</small><br>
    <small> modified by <a href="https://github.com/purpurb/esp32IPcam">purpurb</a></small>
  
  </body>
</html>

)rawliteral";
