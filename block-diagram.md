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
  
  DHT11 [color = "aquamarine"]
  MQ9 [color = "violet"]
  "ESP8266" [color = "orange"];
  "connected" [color = "greenyellow"];
  "is not connected" [color = "crimson"];
}
```

## Sequence Diagram (SeqDiag)
### lang = none
```
seqdiag {
  ESP8266  -> browser [label = "localhost:3000"];
  browser -> webserver [label = "GET /index.html"];
  browser <-- webserver [label = "index.html"]
}
```
