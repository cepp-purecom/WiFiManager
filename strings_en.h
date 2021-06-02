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
const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,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' /><h1>{v}</h1><h3>WiFiManager</h3>";
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
