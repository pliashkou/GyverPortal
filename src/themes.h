#pragma once
// стили для конструктора страниц GyverPortal

const char GP_DEFAULT[] PROGMEM =
"<style type=\"text/css\">\n"
"body {font-family: sans-serif;}\n"
"hr {width:90%;margin-bottom:10px;}\n"
"h2 {margin:5px 0;}\n"
"label {font-size:20px;margin:0 5px;}\n"
".block {border-radius:10px;background-color:#f2f2f2;padding:20px;margin:10px 0;width: 90%;}\n"
"input[type=\"text\"],input[type=\"password\"],input[type=\"date\"],input[type=\"time\"],input[type=\"range\"],input[type=\"color\"],input[type=\"checkbox\"],select\n"
"{vertical-align:middle;position:relative;margin:2px 0 7px 0;font-size:20px;height:30px;cursor:pointer;}\n"
"input[type=\"range\"] {width:50%;height:20px;}\n"
"input[type=\"color\"] {width:100px;height:40px;}\n"
"input[type=\"checkbox\"] {width:30px;height:30px;margin-bottom:10px;}\n"
"input[type=\"text\"],input[type=\"password\"] {max-width:60%;}\n"
"input[type=\"submit\"] {height:60px;font-size:25px;width:80%;margin:5px 0;}\n"
"select {width:50%;}\n"
".switch{position:relative;display:inline-block;width:60px;height:34px}\n"
".switch input{opacity:0;width:0;height:0}\n"
".slider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.1s;transition:.1s}\n"
".slider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:#fff;-webkit-transition:.1s;transition:.1s}\n"
"input:checked+.slider{background-color:#2196f3}\n"
"input:focus+.slider{box-shadow:0 0 1px #2196f3}\n"
"input:checked+.slider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}\n"
".slider.round{border-radius:34px}\n"
".slider.round:before{border-radius:50%}\n"
"</style>\n";

const char GP_LIGHT[] PROGMEM =
"<style type=\"text/css\">\n"
"body {font-family: sans-serif;}\n"
"hr {width:90%;margin-bottom:10px;}\n"
"h2 {margin:5px 0;}\n"
"label {font-size:20px;margin:0 5px;}\n"
".block {border-radius:10px;background-color:#f2f2f2;padding:20px;margin:10px 0;width: 90%;}\n"
"input[type=\"text\"],input[type=\"password\"],input[type=\"date\"],input[type=\"time\"],input[type=\"range\"],input[type=\"color\"],input[type=\"checkbox\"],select\n"
"{vertical-align:middle;position:relative;margin:2px 0 7px 0;font-size:20px;height:35px;cursor:pointer;}\n"
"input[type=\"range\"] {width:50%;height:20px;}\n"
"input[type=\"color\"] {width:100px;height:40px;}\n"
"input[type=\"checkbox\"] {width:30px;height:30px;margin-bottom:10px;}\n"
"input[type=\"text\"],input[type=\"password\"],select {max-width:60%;padding-left:8px;display:inline-block;border:1px solid #ccc;border-radius:6px;box-sizing:border-box;cursor:auto;}\n"
"input[type=\"submit\"] {height:60px;font-size:25px;width:80%;margin:5px 0;background-color:#4CAF50;border:none;border-radius:6px;color:white;cursor:pointer;}\n"
"input[type=submit]:hover {background-color:#45a049;}\n"
"select {width:50%;}\n"
".switch{position:relative;display:inline-block;width:60px;height:34px}\n"
".switch input{opacity:0;width:0;height:0}\n"
".slider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.1s;transition:.1s}\n"
".slider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:#fff;-webkit-transition:.1s;transition:.1s}\n"
"input:checked+.slider{background-color:#2196f3}\n"
"input:focus+.slider{box-shadow:0 0 1px #2196f3}\n"
"input:checked+.slider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}\n"
".slider.round{border-radius:34px}\n"
".slider.round:before{border-radius:50%}\n"
"</style>\n";

const char GP_DARK[] PROGMEM =
"<style type=\"text/css\">\n"
"body {font-family: sans-serif;background:#161A1E;color:#bbb;}\n"
"hr {width:90%;margin-bottom:10px;border:none;border-top:2px solid #394048;}\n"
"h2 {margin:5px 0;}\n"
"label {font-size:20px;margin:0 5px;}\n"
".block {border-radius:10px;background-color:#2a3036;padding:20px;margin:10px 0;width: 90%;}\n"
"input[type=\"text\"],input[type=\"password\"],input[type=\"date\"],input[type=\"time\"],input[type=\"range\"],input[type=\"color\"],input[type=\"checkbox\"],select\n"
"{color:#bbb;border:none;background-color:#2A2D35;vertical-align:middle;position:relative;margin:2px 0 7px 0;font-size:20px;height:35px;cursor:pointer;}\n"
"input[type=\"range\"] {width:50%;height:20px;}\n"
"input[type=\"color\"] {width:100px;height:40px;}\n"
"input[type=\"checkbox\"] {width:30px;height:30px;margin-bottom:10px;}\n"
"input[type=\"text\"],input[type=\"password\"],select {max-width:60%;padding-left:8px;display:inline-block;border-radius:6px;box-sizing:border-box;cursor:auto;}\n"
"input[type=\"submit\"] {height:60px;font-size:25px;width:80%;margin:5px 0;background-color:#4CAF50;border:none;border-radius:6px;color:white;cursor:pointer;}\n"
"input[type=submit]:hover {background-color:#45a049;}\n"
"input:focus{outline:none;}"
"select {width:50%;}\n"
".switch{position:relative;display:inline-block;width:60px;height:34px}\n"
".switch input{opacity:0;width:0;height:0}\n"
".slider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#555;-webkit-transition:.1s;transition:.1s}\n"
".slider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:#fff;-webkit-transition:.1s;transition:.1s}\n"
"input:checked+.slider{background-color:#2196f3}\n"
"input:focus+.slider{box-shadow:0 0 1px #2196f3}\n"
"input:checked+.slider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}\n"
".slider.round{border-radius:34px}\n"
".slider.round:before{border-radius:50%}\n"
"</style>\n";