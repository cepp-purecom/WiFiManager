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
const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,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FbGZnzWyWhVaSnJ9lCI9oxwhpSRXRynSU8oRbhMlGaevREnWtHm+D+KaYmzgd+QbPaUcYR5RkhFbQPLElowYJVpkQ88pR7iPWOEaI8koSlOu84lRYowQI7ZjMBDKERYVe+8iT5488Rgm4lpibJeJQjRKZICUI+SKa5NtUfbxPoer0hZiGxgw5QiltSUZf9a+kCdOsImRYZShESIVUY6wTHGNsr2DfmToZRnXD6ME27iGSKWUI6xSW5btXfb7vPq1vflylGD82d6IGUZAOcK6tXfij9Ls3pV/VaPMGA1G6UX5xUb8dkSoCBkx5Qh91hZlk9zVv/l8E+dZouy69z7s/r0ChFspRwBIuJ8jAKSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAJJQjACSUIwAklCMAdDVN8/9flVOmzgx3/QAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
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
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentifizierungsfehler"; // STATION_WRONG_PASSWORD,  no eps32
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
