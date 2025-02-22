/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA0MDguNjMgMTEzLjgyIj48ZGVmcz48c3R5bGU+LmNscy0xe2ZpbGw6I2ZmZjt9PC9zdHlsZT48L2RlZnM+PGcgaWQ9IkViZW5lXzIiIGRhdGEtbmFtZT0iRWJlbmUgMiI+PGcgaWQ9IldhcnN0d2FfMSIgZGF0YS1uYW1lPSJXYXJzdHdhIDEiPjxyZWN0IHdpZHRoPSI0MDguNjMiIGhlaWdodD0iMTEzLjgyIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMzcuOTMsNTYuODJjLjkzLjI5LDIuMzQuNzMsMy44LDFoMGEyOC40NiwyOC40NiwwLDAsMCw0LjM4LjQ4LDE3LjM2LDE3LjM2LDAsMCwwLDIsMGwuMzQsMGExOC45MywxOC45MywwLDAsMCwyLjM4LS4yYzEtLjA5LDItLjI1LDMtLjQxaC4wNmwxLjctLjI2YzEuNjYtLjI3LDMuMDctLjQ4LDQuNDYtLjU5LDEtLjEzLDItLjE2LDMtLjJoLjExbDEuMTQsMGMxLjU1LDAsMi44MiwwLDQuMTkuMTJsMS4yNi4wNmguMDhjLjg0LDAsMS42NC4wNywyLjM5LjE2czEuMzEuMTIsMS44OC4xNmwxLjMxLjFjLjY1LjA5LDEuMjMuMTQsMS43NS4xOWEyOS44MiwyOS44MiwwLDAsMC00LjU0LTIuMTJBMjkuMjgsMjkuMjgsMCwwLDAsNjksNTRoMGEyNy4wOSwyNy4wOSwwLDAsMC0zLjY2LS43OGwtLjc2LS4xMmEzMC4zMSwzMC4zMSwwLDAsMC00LjY3LS4yMSwzMy4xNCwzMy4xNCwwLDAsMC00Ljg1LjQ2SDU1bC00LjYuODRjLTEuMzkuMjUtMi44OC41MS00LjMxLjY1LTEuMTUuMTUtMi4yOC4xOS0zLjM3LjI0bC0uNjcsMC0zLjczLDBDMzcuMDYsNTUsMzYsNTUsMzUuMDUsNTQuOTJsLTEuNzUtLjE0YTE0LjYxLDE0LjYxLDAsMCwwLDEuNTQuNzlDMzUuODMsNTYsMzYuODEsNTYuNDIsMzcuOTMsNTYuODJaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNNzMuNzQsNjYuNTRjLS44Ny0uMy0xLjk0LS42OC0zLTFsLTEuMjctLjI4LS4yMSwwYTIyLDIyLDAsMCwwLTMuNDQtLjY0Yy0xLjA4LS4xMy0yLS4yMi0yLjgtLjI5bC0yLjg5LS4wN2ExNy41LDE3LjUsMCwwLDAtMS45MSwwaC0uMDZsLTEsMGMtLjg4LDAtMS44My4xMS0zLC4yNi0xLjUyLjE1LTMsLjM4LTQuNDYuNmwtNy41MiwxLjE3LTIuODguMzZjLS41NC4wOC0xLjA5LjEyLTEuNjIuMTZzLS43OS4wNi0xLjE5LjExYy0xLjE1LjE0LTIuMy4xNy0zLjMxLjItLjY3LDAtMS4zNywwLTIsLjA5bC00Ljg4LDBjLTEuNTEtLjEyLTIuODktLjE3LTQuMS0uMjJoMGMtLjY3LDAtMS4yOS0uMDktMS44My0uMTVoMGMuNTIuMjIsMS4xLjQ1LDEuNzMuNjUsMS4yNS40LDIuNi44Myw0LjA3LDEuMjJzMywuNjUsNC45MywxbDEuNTMuMTUuMjEsMGEyOS45MiwyOS45MiwwLDAsMCwzLjgyLjIzLDU1LjUyLDU1LjUyLDAsMCwwLDYuMDYtLjIxYzEuODktLjIsMy45NC0uNDYsNi4wOC0uODFsNS45NC0xYzIuMTEtLjM2LDQuMTUtLjYsNS42OS0uNzdMNjMsNjcuMTIsNjYuODQsNjdsMy41OC4wOGMuNzYsMCwxLjQ2LjEsMi4xMy4xNWguMTVjLjY0LjA2LDEuMjQuMTEsMS44Mi4xNHMxLjMuMSwxLjg4LjE4YTEzLjE3LDEzLjE3LDAsMCwwLTEuNjMtLjY1WiIvPjxwYXRoIGNsYXNzPSJjbHMtMSIgZD0iTTY1LjY4LDg5LjM2Yy03LjgzLS43Mi0xNS40Ni01LTIxLjU1LTEyYTI1LjU2LDI1LjU2LDAsMCwwLDQ3LjgxLDBjLTYuMDksNy4wNi0xMy43MiwxMS4zMy0yMS41NiwxMkEyMC41MiwyMC41MiwwLDAsMSw2NS42OCw4OS4zNloiLz48cGF0aCBjbGFzcz0iY2xzLTEiIGQ9Ik05My4zMyw2NS43NWMwLTE5LTIyLjQ0LTQyLjgxLTI0LjUtNDQuNzZsLS4xMi0uMTJMNjcuODUsMjBsLTEuMDgsMS4xN2MtMS4xNywxLjExLTEwLjgzLDEzLjcxLTE3LjIsMjQuNGw0LjI5LS42N2MzLjg1LTYuNTMsOS44Ni0xNS41NSwxMi41NS0xNy44NWwxLjQ2LTEuMzNoMGwuMi4xOGgwbC4xMi4wOSwxLjMyLDEuMTZjNS45Myw1LjE4LDIwLjEsMjQuNzYsMjAuMSwzOC42YTIxLjEyLDIxLjEyLDAsMCwxLTEsNi40NCw0Ni44LDQ2LjgsMCwwLDAsNC42LTRDOTMuMjksNjcuMzUsOTMuMzMsNjYuNTQsOTMuMzMsNjUuNzVaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMTM5LjQ4LDU5LjUySDEyMC41NVY3NS44NWgtMy41VjQwLjkzaDMuNVY1Ni42MmgxOC45M1Y0MC45M0gxNDNWNzUuODVoLTMuNVoiLz48cGF0aCBjbGFzcz0iY2xzLTEiIGQ9Ik0xNjIuNDIsNDguMThjNS41LDAsOS4yNCwyLjk0LDEwLjc5LDYuMzl2LTZoMy41Vjc1Ljg1aC0zLjV2LTZjLTEuNiwzLjQ5LTUuMzksNi40NC0xMC44NCw2LjQ0LTcuNDQsMC0xMy01LjU0LTEzLTE0LjA5UzE1NC45Myw0OC4xOCwxNjIuNDIsNDguMThabS42NSwzYy01Ljc0LDAtMTAuMTQsNC0xMC4xNCwxMC45NHM0LjQsMTEsMTAuMTQsMTEsMTAuMTQtNC4xOSwxMC4xNC0xMVMxNjguNjcsNTEuMjIsMTYzLjA3LDUxLjIyWiIvPjxwYXRoIGNsYXNzPSJjbHMtMSIgZD0iTTE5OSw0OC4xOGM3LjQ0LDAsMTMsNS40NCwxMywxNHMtNS41NSwxNC4wOS0xMywxNC4wOWExMS42NiwxMS42NiwwLDAsMS0xMC44NC02LjM5Vjg4Ljc0aC0zLjQ1VjQ4LjU4aDMuNDV2NkMxODkuNzYsNTEuMTIsMTkzLjU1LDQ4LjE4LDE5OSw0OC4xOFptLS43LDNjLTUuNTUsMC0xMC4xNCw0LjItMTAuMTQsMTFzNC41OSwxMSwxMC4xNCwxMWM1Ljc0LDAsMTAuMTQtNC4xNCwxMC4xNC0xMVMyMDQsNTEuMjIsMTk4LjMsNTEuMjJaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMjMyLjczLDQ4LjE4YzcuNDQsMCwxMyw1LjQ0LDEzLDE0cy01LjU1LDE0LjA5LTEzLDE0LjA5YTExLjY2LDExLjY2LDAsMCwxLTEwLjg0LTYuMzlWODguNzRoLTMuNDVWNDguNThoMy40NXY2QzIyMy40OSw1MS4xMiwyMjcuMjgsNDguMTgsMjMyLjczLDQ4LjE4Wm0tLjcsM2MtNS41NSwwLTEwLjE0LDQuMi0xMC4xNCwxMXM0LjU5LDExLDEwLjE0LDExYzUuNzQsMCwxMC4xNC00LjE0LDEwLjE0LTExUzIzNy43Nyw1MS4yMiwyMzIsNTEuMjJaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMjcxLjA1LDQ4LjU4aDMuNkwyNTguNDYsODguNjloLTMuNjRsNS4yOS0xM0wyNDguOTIsNDguNThoMy44NWw5LjI5LDIzLjI3WiIvPjxwYXRoIGNsYXNzPSJjbHMtMSIgZD0iTTI3OS40LDQwLjkzaDE4Ljg5djIuOUgyODIuOXYxM2gxM3YyLjloLTEzVjc1Ljg1aC0zLjVaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMzAzLjI0LDQwLjgzYTIuNTUsMi41NSwwLDEsMSw1LjEsMCwyLjU1LDIuNTUsMCwxLDEtNS4xLDBabS44LDcuNzVoMy41Vjc1Ljg1SDMwNFoiLz48cGF0aCBjbGFzcz0iY2xzLTEiIGQ9Ik0zMTUuNDgsMzguODhIMzE5djM3aC0zLjVaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMzI3LjkyLDUxLjUyaC0zLjc5VjQ4LjU4aDMuNzlWNDEuNzNoMy41NXY2Ljg1SDMzOXYyLjk0aC03LjQ5VjY4LjQ2YzAsMy4zNCwxLjE1LDQuMzksNC4zLDQuMzlIMzM5djNoLTMuNzRjLTQuNzUsMC03LjMtMS45NS03LjMtNy4zOVoiLz48cGF0aCBjbGFzcz0iY2xzLTEiIGQ9Ik0zNTYuNTEsNzYuMjVjLTcuNzUsMC0xMy4zOS01LjQtMTMuMzktMTRzNS41NC0xNCwxMy4zOS0xNCwxMi44OCw1LjY5LDEyLjg4LDEyLjYzYTIzLjkzLDIzLjkzLDAsMCwxLS4xLDIuNzVIMzQ2LjY2Yy4zLDYuNCw0Ljc1LDkuNzQsOS44NSw5Ljc0LDQuNjQsMCw3Ljc5LTIuNDUsOC43OS02LjA5SDM2OUMzNjcuNzQsNzIuMzUsMzYzLjM1LDc2LjI1LDM1Ni41MSw3Ni4yNVptLTkuODUtMTUuNTNoMTkuMTljLjE1LTYuMzUtNC40NS05LjU1LTkuNS05LjU1UzM0Ny4wNiw1NC4zNywzNDYuNjYsNjAuNzJaIi8+PHBhdGggY2xhc3M9ImNscy0xIiBkPSJNMzc5LjI5LDc1Ljg1SDM3NS44VjQ4LjU4aDMuNDl2NC44NGMxLjUtMy4zNSw0LjY1LTUuMzQsOS4zNC01LjM0djMuNjRoLS45NWMtNC41NCwwLTguMzksMi4wNS04LjM5LDguODlaIi8+PC9nPjwvZz48L3N2Zz4=' /><h1>{v}</h1><h3>WiFiManager</h3>";
//const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";
const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Konfiguriere WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Informationen</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Beenden</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Update</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>Netzwerkname</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Passwort</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Sichern</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Aktualisieren</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Zugangsdaten gesichert<br/>HappyFilter wird mit deinem Wlan verbunden..<br /></div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Verbunden</strong> mit {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Nicht Verbunden</strong> mit {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Falsches Passwort"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>Wlan nicht gefunden";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Verbindung fehlgeschlagen"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Kein Wlan eingerichtet</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%},input[type=radio]{width: auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload New Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, Open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update Failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update Successful.  </strong> <br/> Device Rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM = 
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";    
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";


const char S_brand[]              PROGMEM = "HappyFilter einrichten";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Ja";
const char S_n[]                  PROGMEM = "Nein";
const char S_enable[]             PROGMEM = "aktivieren";
const char S_disable[]            PROGMEM = "deaktivieren";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "unbekannt";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Zugangsdaten gesichert";
const char S_titlewifisettings[]  PROGMEM = "Einstellungen gesichert";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Informationen";
const char S_titleparam[]         PROGMEM = "Einrichten";
const char S_titleparamsaved[]    PROGMEM = "Einrichtung gesichtert";
const char S_titleexit[]          PROGMEM = "Beenden";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "schließen";
const char S_options[]            PROGMEM = "Optionen";
const char S_nonetworks[]         PROGMEM = "Kein Netzwerk gefunden. Aktualisieren um neuen scan zu starten.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Aufwiedersehen!";
const char S_resetting[]          PROGMEM = "Anlage startet in wenigen Sekunden neu.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "Ein Fehler ist aufgetreten";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 10;
const char * const _menutokens[10] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "update",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";
const char R_update[]             PROGMEM = "/update";
const char R_updatedone[]         PROGMEM = "/u";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_3[]                  PROGMEM = "{3}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif


/*
* ESP32 WiFi Events

0  SYSTEM_EVENT_WIFI_READY               < ESP32 WiFi ready
1  SYSTEM_EVENT_SCAN_DONE                < ESP32 finish scanning AP
2  SYSTEM_EVENT_STA_START                < ESP32 station start
3  SYSTEM_EVENT_STA_STOP                 < ESP32 station stop
4  SYSTEM_EVENT_STA_CONNECTED            < ESP32 station connected to AP
5  SYSTEM_EVENT_STA_DISCONNECTED         < ESP32 station disconnected from AP
6  SYSTEM_EVENT_STA_AUTHMODE_CHANGE      < the auth mode of AP connected by ESP32 station changed
7  SYSTEM_EVENT_STA_GOT_IP               < ESP32 station got IP from connected AP
8  SYSTEM_EVENT_STA_LOST_IP              < ESP32 station lost IP and the IP is reset to 0
9  SYSTEM_EVENT_STA_WPS_ER_SUCCESS       < ESP32 station wps succeeds in enrollee mode
10 SYSTEM_EVENT_STA_WPS_ER_FAILED        < ESP32 station wps fails in enrollee mode
11 SYSTEM_EVENT_STA_WPS_ER_TIMEOUT       < ESP32 station wps timeout in enrollee mode
12 SYSTEM_EVENT_STA_WPS_ER_PIN           < ESP32 station wps pin code in enrollee mode
13 SYSTEM_EVENT_AP_START                 < ESP32 soft-AP start
14 SYSTEM_EVENT_AP_STOP                  < ESP32 soft-AP stop
15 SYSTEM_EVENT_AP_STACONNECTED          < a station connected to ESP32 soft-AP
16 SYSTEM_EVENT_AP_STADISCONNECTED       < a station disconnected from ESP32 soft-AP
17 SYSTEM_EVENT_AP_STAIPASSIGNED         < ESP32 soft-AP assign an IP to a connected station
18 SYSTEM_EVENT_AP_PROBEREQRECVED        < Receive probe request packet in soft-AP interface
19 SYSTEM_EVENT_GOT_IP6                  < ESP32 station or ap or ethernet interface v6IP addr is preferred
20 SYSTEM_EVENT_ETH_START                < ESP32 ethernet start
21 SYSTEM_EVENT_ETH_STOP                 < ESP32 ethernet stop
22 SYSTEM_EVENT_ETH_CONNECTED            < ESP32 ethernet phy link up
23 SYSTEM_EVENT_ETH_DISCONNECTED         < ESP32 ethernet phy link down
24 SYSTEM_EVENT_ETH_GOT_IP               < ESP32 ethernet got IP from connected AP
25 SYSTEM_EVENT_MAX
*/

#endif
