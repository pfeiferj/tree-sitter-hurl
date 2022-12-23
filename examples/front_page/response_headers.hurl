# Using implicit response asserts 
GET https://example.org/index.html

HTTP/1.0 200
Set-Cookie: theme=light
Set-Cookie: sessionToken=abc123; Expires=Wed, 09 Jun 2021 10:18:14 GMT

# Or explicit response asserts
GET https://example.org

HTTP/1.1 302
[Asserts]
header "Location" contains "www.example.net"
