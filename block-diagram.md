### lang = blockdiag
```blockdiag
blockdiag {
  "ESP8266" -> initialize -> "connected" -> internet of things;
  initialize -> "is not connected";
  "is not connected" -> "ESP8266" [label = "error"];

  "ESP8266" [color = "orange"];
  "connected" [color = "greenyellow"];
  "is not connected" [color = "red"];
}
```

## Sequence Diagram (SeqDiag)
### lang = none
```
seqdiag {
  browser  -> webserver [label = "GET /index.html"];
  browser <-- webserver;
  browser  -> webserver [label = "POST /blog/comment"];
  webserver  -> database [label = "INSERT comment"];
  webserver <-- database;
  browser <-- webserver;
}
```
