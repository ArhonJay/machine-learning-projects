### lang = blockdiag
```blockdiag
blockdiag {
  "ESP8266" -> initialize -> "connected" -> "Internet of Things";
  initialize -> "is not connected";
  "is not connected" -> "ESP8266";
  "Internet of Things" -> DHT11;
  "Internet of Things" -> MQ9;
  "Internet of Things" -> "RGB_Led";
  "Internet of Things" -> "Passive Buzzer";
  "Internet of Things" -> "Computer Fan";
  
  DHT11 [color = "blue"]
  MQ9 [color = "violet"]
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
